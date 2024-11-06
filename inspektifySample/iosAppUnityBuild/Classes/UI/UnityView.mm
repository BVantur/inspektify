#include "UnityView.h"
#include "UnityAppController.h"
#include "UnityAppController+Rendering.h"
#include "OrientationSupport.h"
#include "Unity/DisplayManager.h"
#include "Unity/ObjCRuntime.h"

extern bool _skipPresent;

@implementation UnityView
{
    CGSize _surfaceSize;
}

@synthesize contentOrientation  = _curOrientation;

- (void)onUpdateSurfaceSize:(CGSize)size
{
    _surfaceSize = size;

    CGSize systemRenderSize = CGSizeMake(size.width * self.contentScaleFactor, size.height * self.contentScaleFactor);
    _curOrientation = (ScreenOrientation)UnityReportResizeView((unsigned)systemRenderSize.width, (unsigned)systemRenderSize.height, _curOrientation);
    ReportSafeAreaChangeForView(self);
}

- (void)boundsUpdated
{
    [self onUpdateSurfaceSize: self.bounds.size];
}

- (void)initImpl:(CGRect)frame scaleFactor:(CGFloat)scale
{
#if !PLATFORM_TVOS
    self.multipleTouchEnabled   = YES;
    self.exclusiveTouch         = YES;
#endif
    self.contentScaleFactor     = scale;
    self.skipRendering = NO;

#if PLATFORM_TVOS
    _curOrientation = UNITY_TVOS_ORIENTATION;
#elif UNITY_VISIONOS
    _curOrientation = UNITY_VISIONOS_ORIENTATION;
#endif

    [self onUpdateSurfaceSize: frame.size];
}

- (id)initWithFrame:(CGRect)frame scaleFactor:(CGFloat)scale;
{
    if ((self = [super initWithFrame: frame]))
        [self initImpl: frame scaleFactor: scale];
    return self;
}
- (id)initWithFrame:(CGRect)frame
{
    if ((self = [super initWithFrame: frame]))
        [self initImpl: frame scaleFactor: 1.0f];
    return self;
}

- (id)initFromMainScreen
{
#if !PLATFORM_VISIONOS
    CGRect  frame   = [UIScreen mainScreen].bounds;
    CGFloat scale   = UnityScreenScaleFactor([UIScreen mainScreen]);
#else
    CGRect  frame   = CGRectMake(0.0f, 0.0f, 1920.0f, 1080.0f);
    CGFloat scale   = 1.0f;
#endif
    if ((self = [super initWithFrame: frame]))
        [self initImpl: frame scaleFactor: scale];
    return self;
}

- (void)resumeRendering
{
    self.skipRendering = NO;
}

- (void)layoutSubviews
{
    if (_surfaceSize.width != self.bounds.size.width || _surfaceSize.height != self.bounds.size.height)
        _shouldRecreateView = YES;
    [self onUpdateSurfaceSize: self.bounds.size];

    for (UIView* subView in self.subviews)
    {
        if ([subView respondsToSelector: @selector(onUnityUpdateViewLayout)])
            [subView performSelector: @selector(onUnityUpdateViewLayout)];
    }

    [super layoutSubviews];
}

- (void)safeAreaInsetsDidChange
{
    ReportSafeAreaChangeForView(self);
}

- (void)recreateRenderingSurfaceIfNeeded
{
#if !PLATFORM_VISIONOS
    float requestedContentScaleFactor = UnityScreenScaleFactor([UIScreen mainScreen]);
#else
    float requestedContentScaleFactor = 1.0f;
#endif

    if (abs(requestedContentScaleFactor - self.contentScaleFactor) > FLT_EPSILON)
    {
        self.contentScaleFactor = requestedContentScaleFactor;
        [self onUpdateSurfaceSize: self.bounds.size];
    }

    unsigned requestedW, requestedH;    UnityGetRenderingResolution(&requestedW, &requestedH);
    int requestedMSAA = UnityGetDesiredMSAASampleCount(1);
    int requestedSRGB = UnityGetSRGBRequested();
    int requestedWideColor = UnityGetWideColorRequested();
    int requestedHDR = UnityGetHDRModeRequested();
    int requestedMemorylessDepth = UnityMetalMemorylessDepth();

    UnityDisplaySurfaceBase* surf = GetMainDisplaySurface();

    if (_shouldRecreateView == YES
        ||  surf->targetW != requestedW || surf->targetH != requestedH
        ||  surf->disableDepthAndStencil != UnityDisableDepthAndStencilBuffers()
        ||  surf->msaaSamples != requestedMSAA
        ||  surf->srgb != requestedSRGB
        ||  surf->wideColor != requestedWideColor
        ||  surf->hdr != requestedHDR
        ||  surf->memorylessDepth != requestedMemorylessDepth
    )
    {
        [self recreateRenderingSurface];
    }
}

- (void)recreateRenderingSurface
{
    auto controller = GetAppController();
    if (controller.engineLoadState >= kUnityEngineLoadStateRenderingInitialized)
    {
        unsigned requestedW, requestedH;
        UnityGetRenderingResolution(&requestedW, &requestedH);

        RenderingSurfaceParams params =
        {
            .msaaSampleCount        = UnityGetDesiredMSAASampleCount(1),
            .renderW                = (int)requestedW,
            .renderH                = (int)requestedH,
            .srgb                   = UnityGetSRGBRequested(),
            .wideColor              = UnityGetWideColorRequested(),
            .hdr                    = UnityGetHDRModeRequested(),
            .metalFramebufferOnly   = UnityMetalFramebufferOnly(),
            .metalMemorylessDepth   = UnityMetalMemorylessDepth(),
            .disableDepthAndStencil = UnityDisableDepthAndStencilBuffers(),
            .useCVTextureCache      = 0,
        };

        APP_CONTROLLER_RENDER_PLUGIN_METHOD_ARG(onBeforeMainDisplaySurfaceRecreate, &params);
        [GetMainDisplay() recreateSurface: params];

        // actually poke unity about updated back buffer and notify that extents were changed
        UnityReportBackbufferChange(GetMainDisplaySurface()->unityColorBuffer, GetMainDisplaySurface()->unityDepthBuffer);
        APP_CONTROLLER_RENDER_PLUGIN_METHOD(onAfterMainDisplaySurfaceRecreate);

        if (controller.engineLoadState >= kUnityEngineLoadStateAppReady)
        {
            // seems like ios sometimes got confused about abrupt swap chain destroy
            // draw 2 times to fill "both" buffers (we assume double buffering)
            // present only once to make sure correct image goes to CA
            // if we are calling this from inside repaint, second draw and present will be done automatically
            _skipPresent = true;

            // we may be asked to recreate surface while paused (in the background)
            //   like changing device orientation while showing some system dialog
            // in this case we still want to redraw contents to avoid view stretching
            const bool wasPaused = UnityIsPaused();

            // please note that we still need to pretend we did come from displaylink to make sure vsync magic works
            // NOTE: unity does handle "draw frame with exact same timestamp" just fine
            UnityDisplayLinkCallback(controller.unityDisplayLink.timestamp);
            UnityRepaint();

            // if we are inside actual repaint: we are done (second draw and present will be done automatically)
            // otherwise we need the second repaint, actualy doing present this time
            _skipPresent = false;

            if (_viewIsRotating || wasPaused)
            {
                UnityDisplayLinkCallback(GetAppController().unityDisplayLink.timestamp);
                UnityRepaint();
            }
        }
    }

    _shouldRecreateView = NO;
}

@end

@implementation UnityView (Deprecated)
- (void)recreateGLESSurfaceIfNeeded { [self recreateRenderingSurfaceIfNeeded]; }
- (void)recreateGLESSurface         { [self recreateRenderingSurface]; }
@end

static Class UnityRenderingView_LayerClassMTL(id self_, SEL _cmd)
{
    return NSClassFromString(@"CAMetalLayer");
}

static Class UnityRenderingView_LayerClassNULL(id self_, SEL _cmd)
{
    return NSClassFromString(@"CALayer");
}

@implementation UnityRenderingView
+ (Class)layerClass
{
    return nil;
}

+ (void)InitializeForAPI:(UnityRenderingAPI)api
{
    IMP layerClassImpl = api == apiMetal ? (IMP)UnityRenderingView_LayerClassMTL : (IMP)UnityRenderingView_LayerClassNULL;
    class_replaceMethod(object_getClass([UnityRenderingView class]), @selector(layerClass), layerClassImpl, UIView_LayerClass_Enc);
}

@end

void ReportSafeAreaChangeForView(UIView* view)
{
    CGRect safeArea = ComputeSafeArea(view);
    UnityReportSafeAreaChange(safeArea.origin.x, safeArea.origin.y,
        safeArea.size.width, safeArea.size.height);

#if !PLATFORM_VISIONOS
    if (UnityDeviceHasCutout())
    {
        CGSize cutoutSizeRatio = GetCutoutToScreenRatio();

        if (!CGSizeEqualToSize(CGSizeZero, cutoutSizeRatio))
        {
            const float w = ([UIScreen mainScreen].nativeBounds.size.width * cutoutSizeRatio.width);
            const float h = ([UIScreen mainScreen].nativeBounds.size.height * cutoutSizeRatio.height);

            // Apple's cutouts are currently centred on the horizontal, and stuck to the top of the vertical, hence this positioning.
            const float x = (([UIScreen mainScreen].nativeBounds.size.width - w) / 2);
            const float y = ([UIScreen mainScreen].nativeBounds.size.height - h);
            UnityReportDisplayCutouts(&x, &y, &w, &h, 1);
            return;
        }
    }
#endif

    UnityReportDisplayCutouts(nullptr, nullptr, nullptr, nullptr, 0);
}

CGRect ComputeSafeArea(UIView* view)
{
    CGSize screenSize = view.bounds.size;
    CGRect screenRect = CGRectMake(0, 0, screenSize.width, screenSize.height);

    UIEdgeInsets insets = [view safeAreaInsets];
    float insetLeft = insets.left, insetBottom = insets.bottom, insetTop = insets.top;
    float insetHeight = insetBottom + insetTop;
    float insetWidth = insetLeft + insets.right;

#if PLATFORM_IOS && !PLATFORM_VISIONOS
    // pre-iOS 15 there is a bug with safeAreaInsets when coupled with the way unity handles forced orientation
    // when we create/show new ViewController with fixed orientation, safeAreaInsets include status bar always
    // alas, we did not find a good way to work around that (this can be seen even in View Debugging: Safe Area would have status bar accounted for)
    // we know for sure that status bar height is 20 (at least on ios16 or older), so we can check if the safe area
    //   includes inset of this size while status bar should be hidden in that case we reset top inset and keep 
    //   bottom one (might include home button swipe line,etc.).
    if (@available(iOS 15, *))
    {
        // everything works as expected
    }
    else if (view.window.windowScene.statusBarManager.statusBarHidden && fabsf(insetTop - 20) < 1e-6f)
    {
        insetHeight -= insetTop;
    }
#endif

    // Unity uses bottom left as the origin
    screenRect = CGRectOffset(screenRect, insetLeft, insetBottom);
    screenRect.size.width -= insetWidth;
    screenRect.size.height -= insetHeight;

    const float scale = view.contentScaleFactor;

    // Truncate safe area size because in some cases (for example when Display zoom is turned on)
    // it might become larger than Screen.width/height which are returned as ints.
    screenRect.origin.x = (unsigned)(screenRect.origin.x * scale);
    screenRect.origin.y = (unsigned)(screenRect.origin.y * scale);
    screenRect.size.width = (unsigned)(screenRect.size.width * scale);
    screenRect.size.height = (unsigned)(screenRect.size.height * scale);

    return screenRect;
}

// Apple does not provide the cutout width and height in points/pixels. They *do* however list the
// size of the cutout and screen in mm for accessory makers. We can use this information to calculate the percentage of the screen is cutout.
// This information can be found here - https://developer.apple.com/accessories/Accessory-Design-Guidelines.pdf
CGSize GetCutoutToScreenRatio()
{
    switch (UnityDeviceGeneration())
    {
        case deviceiPhone14:
            return CGSizeMake(0.415, 0.04);
        case deviceiPhone14Plus:
            return CGSizeMake(0.377, 0.036);
        case deviceiPhone14Pro:
        case deviceiPhone15:
        case deviceiPhone15Pro:
        case deviceiPhone16:
        case deviceiPhone16Pro:
            return CGSizeMake(0.318, 0.057);
        case deviceiPhone14ProMax:
        case deviceiPhone15ProMax:
        case deviceiPhone15Plus:
        case deviceiPhone16Plus:
        case deviceiPhone16ProMax:
            return CGSizeMake(0.292, 0.052);
        case deviceiPhone13ProMax:
            return CGSizeMake(0.373, 0.036);
        case deviceiPhone13Pro:
        case deviceiPhone13:
            return CGSizeMake(0.4148, 0.0399);
        case deviceiPhone13Mini:
            return CGSizeMake(0.4644, 0.0462);
        case deviceiPhone12ProMax:
            return CGSizeMake(0.4897, 0.0346);
        case deviceiPhone12Pro:
        case deviceiPhone12:
            return CGSizeMake(0.5393, 0.0379);
        case deviceiPhone12Mini:
            return CGSizeMake(0.604, 0.0424);
        case deviceiPhone11ProMax:
            return CGSizeMake(0.5057, 0.0335);
        case deviceiPhone11Pro:
            return CGSizeMake(0.5583, 0.037);
        case deviceiPhone11:
        case deviceiPhoneXR:
            return CGSizeMake(0.5568, 0.0398);
        case deviceiPhoneXSMax:
            return CGSizeMake(0.4884, 0.0333);
        case deviceiPhoneX:
        case deviceiPhoneXS:
            return CGSizeMake(0.5391, 0.0368);
        default:
            NSCAssert(!UnityDeviceHasCutout(), @"Device has a cutout, but no ratio has been added for it.");
            return CGSizeZero;
    }
}
