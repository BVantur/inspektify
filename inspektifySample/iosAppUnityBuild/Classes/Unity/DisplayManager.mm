#include "DisplayManager.h"

#include "UnityAppController.h"
#include "UI/UnityView.h"
#include "UI/UnityAppController+ViewHandling.h"

#import <CoreGraphics/CoreGraphics.h>
#import <Metal/Metal.h>
#import <QuartzCore/QuartzCore.h>

#if !(defined(__IPHONE_16_0) || defined(__TVOS_16_0))
@interface CAMetalLayer (UnityForSdk16)
{
}
@property BOOL wantsExtendedDynamicRangeContent API_AVAILABLE(macos(10.11), ios(16.0), macCatalyst(16.0)) API_UNAVAILABLE(tvos, watchos);
@end
@interface UIScreen (UnityForSdk16)
{
}
@property CGFloat potentialEDRHeadroom API_AVAILABLE(macos(10.11), ios(16.0), tvos(16.0), macCatalyst(16.0)) API_UNAVAILABLE(watchos);
@property CGFloat currentEDRHeadroom API_AVAILABLE(macos(10.11), ios(16.0), tvos(16.0), macCatalyst(16.0)) API_UNAVAILABLE(watchos);
@end
#endif

static DisplayManager* _DisplayManager = nil;

@interface DisplayConnection ()
@property (readonly, nonatomic) UnityDisplaySurfaceMTL*     surfaceMTL;
@end

@implementation DisplayConnection
{
    BOOL                        _needRecreateSurface;
    CGSize                      _requestedRenderingSize;

#if !PLATFORM_VISIONOS
    UIScreen*                   _screen;
#endif
    UIWindow*                   _window;
    UIView*                     _view;

    CGSize                      _screenSize;

    UnityDisplaySurfaceBase*    _surface;
}

#if !PLATFORM_VISIONOS
@synthesize screen      = _screen;
#endif
@synthesize window      = _window;
@synthesize view        = _view;
@synthesize screenSize  = _screenSize;
@synthesize surface     = _surface;

@synthesize surfaceMTL;
- (UnityDisplaySurfaceMTL*)surfaceMTL
{
    assert(_surface->api == apiMetal);
    return (UnityDisplaySurfaceMTL*)_surface;
}

#if !PLATFORM_VISIONOS
- (id)init:(UIScreen*)targetScreen
{
    if ((self = [super init]))
    {
        self->_screen = targetScreen;

#if !PLATFORM_TVOS
        targetScreen.currentMode = targetScreen.preferredMode;
#endif

        // UIScreenOverscanCompensationNone == UIScreenOverscanCompensationInsetApplicationFrame so it will work with pre-ios9 just fine
        targetScreen.overscanCompensation = UIScreenOverscanCompensationNone;

        self->_screenSize = targetScreen.currentMode.size;

        self->_needRecreateSurface = NO;
        self->_requestedRenderingSize = CGSizeMake(-1, -1);
    }
    return self;
}
#else
- (id)init
{
    if ((self = [super init]))
    {
        self->_screenSize = CGSizeMake(1920, 1080);
        self->_needRecreateSurface = NO;
        self->_requestedRenderingSize = CGSizeMake(-1, -1);
    }
    return self;
}
#endif

- (void)createWithWindow:(UIWindow*)window andView:(UIView*)view
{
    _window = window;
    _view   = view;

    CGSize layerSize = _view.layer.bounds.size;
    _screenSize = CGSizeMake(roundf(layerSize.width) * _view.contentScaleFactor, roundf(layerSize.height) * _view.contentScaleFactor);
}

- (void)createView:(BOOL)useForRendering
{
    [self createView: useForRendering showRightAway: YES];
}

- (void)createView:(BOOL)useForRendering showRightAway:(BOOL)showRightAway;
{
#if !PLATFORM_VISIONOS
    NSAssert(_screen != [UIScreen mainScreen], @"DisplayConnection for mainScreen should be created with createWithWindow:andView:");
#endif
    if (_view == nil)
    {
#if !PLATFORM_VISIONOS
        UIWindow* window = [[UIWindow alloc] initWithFrame: _screen.bounds];

    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wdeprecated-declarations"
        // [UIWindow setScreen:] is deprecated in favor of [UIWindow setWindowScene:], but we are not yet scenes based
        // this API works perfectly fine for now, so we use it until we rewrite/modernize trampoline to be Scene-based
        window.screen = _screen;
    #pragma clang diagnostic pop

        UIView* view = [(useForRendering ? [UnityRenderingView alloc] : [UIView alloc]) initWithFrame: _screen.bounds];
        view.contentScaleFactor = UnityScreenScaleFactor(_screen);
#else
        UIWindow* window = [[UIWindow alloc] init];
        UIView* view = [(useForRendering ? [UnityRenderingView alloc] : [UIView alloc]) init];
#endif

        [self createWithWindow: window andView: view];

        if (showRightAway)
        {
            [window addSubview: view];
            window.hidden = NO;
        }
    }
}

- (void)shouldShowWindow:(BOOL)show
{
    _window.hidden = show ? NO : YES;

#if !PLATFORM_VISIONOS
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    // [UIWindow setScreen:] is deprecated in favor of [UIWindow setWindowScene:], but we are not yet scenes based
    // this API works perfectly fine for now, so we use it until we rewrite/modernize trampoline to be Scene-based
    _window.screen = show ? _screen : nil;
#pragma clang diagnostic pop
#endif
}

- (UnityDisplaySurfaceBase*)initRendering
{
    if (_surface)
        return _surface;

    UnityDisplaySurfaceBase* ret = NULL;
    const int api = UnitySelectedRenderingAPI();
    if (api == apiMetal)
    {
        UnityDisplaySurfaceMTL* surf = new UnityDisplaySurfaceMTL();
        surf->layer         = (CAMetalLayer*)_view.layer;
        surf->device        = UnityGetMetalDevice();
        ret = surf;
    }
    else
        ret = new UnityDisplaySurfaceBase();

    ret->api = api;
    return ret;
}

- (void)recreateSurface:(RenderingSurfaceParams)params
{
    UnityDisplaySurfaceBase* surface = [self initRendering];

    // On metal we depend on hardware screen compositor to handle upscaling this way avoiding additional blit
    CGSize layerSize = _view.layer.bounds.size;
    float scale = _view.contentScaleFactor;
    CGSize screenSize = CGSizeMake(layerSize.width * scale, layerSize.height * scale);
    // if we did request custom resolution we apply it here.
    // for metal we use hardware scaler which will be triggered exactly because our window is not of "native" size
    // but we also want to enforce native resolution as maximum, otherwise we might run out of memory vert fast
    // TODO: how about supersampling screenshots? maybe there are reasonable usecases
    if (UnitySelectedRenderingAPI() == apiMetal && params.renderW > 0 && params.renderH > 0)
        _screenSize = CGSizeMake(fminf(screenSize.width, params.renderW), fminf(screenSize.height, params.renderH));
    else
        _screenSize = screenSize;

    bool hdrChanged         = surface->hdr != params.hdr;
    bool systemSizeChanged  = surface->systemW != _screenSize.width || surface->systemH != _screenSize.height;
    bool msaaChanged        = surface->msaaSamples != params.msaaSampleCount;
    bool depthFmtChanged    = surface->disableDepthAndStencil != params.disableDepthAndStencil;
    bool cvCacheChanged     = surface->useCVTextureCache != params.useCVTextureCache;
    bool memorylessChanged  = surface->memorylessDepth != params.metalMemorylessDepth;

    bool renderSizeChanged  = false;
    if ((params.renderW > 0 && surface->targetW != params.renderW)         // changed resolution
        ||  (params.renderH > 0 && surface->targetH != params.renderH)     // changed resolution
        ||  (params.renderW <= 0 && surface->targetW != surface->systemW) // no longer need intermediate fb
        ||  (params.renderH <= 0 && surface->targetH != surface->systemH) // no longer need intermediate fb
    )
    {
        renderSizeChanged = true;
    }

    bool recreateSystemSurface      = systemSizeChanged || hdrChanged;
    bool recreateRenderingSurface   = systemSizeChanged || renderSizeChanged || msaaChanged || cvCacheChanged || hdrChanged;
    bool recreateDepthbuffer        = systemSizeChanged || renderSizeChanged || msaaChanged || depthFmtChanged || memorylessChanged;

    surface->disableDepthAndStencil = params.disableDepthAndStencil;

    surface->systemW = (unsigned)_screenSize.width;
    surface->systemH = (unsigned)_screenSize.height;

    surface->targetW = params.renderW > 0 ? params.renderW : surface->systemW;
    surface->targetH = params.renderH > 0 ? params.renderH : surface->systemH;

    surface->msaaSamples = params.msaaSampleCount;
    surface->srgb = params.srgb;
    surface->wideColor = params.wideColor;
    surface->hdr = params.hdr;
    surface->useCVTextureCache = params.useCVTextureCache;
    surface->memorylessDepth = params.metalMemorylessDepth;

    const int api = UnitySelectedRenderingAPI();
    if (api == apiMetal)
    {
        UnityDisplaySurfaceMTL* mtlSurf = (UnityDisplaySurfaceMTL*)surface;
        recreateSystemSurface = recreateSystemSurface || mtlSurf->systemColorRB == 0;
        mtlSurf->framebufferOnly = params.metalFramebufferOnly;
    }

    if (recreateSystemSurface)
        CreateSystemRenderingSurface(surface);
    if (recreateRenderingSurface)
        CreateRenderingSurface(surface);
    if (recreateDepthbuffer)
        CreateSharedDepthbuffer(surface);
    if (recreateSystemSurface || recreateRenderingSurface || recreateDepthbuffer)
        CreateUnityRenderBuffers(surface);

    if (recreateSystemSurface || recreateRenderingSurface)
    {
        UnityDisplaySurfaceMTL* mtlSurf = (UnityDisplaySurfaceMTL*)surface;
#if !PLATFORM_TVOS
        if (@available(iOS 16.0, *))
        {
            mtlSurf->layer.wantsExtendedDynamicRangeContent = surface->hdr != 0;
        }
#endif
        UnitySetHDRMode(surface->hdr);
    }
    _surface = surface;
#if !PLATFORM_VISIONOS
    UnityInvalidateDisplayDataCache((__bridge void*)_screen);
#endif
}

- (void)destroySurface
{
    if (_surface)
    {
        DestroySystemRenderingSurface(_surface);
        DestroyRenderingSurface(_surface);
        DestroySharedDepthbuffer(_surface);
        DestroyUnityRenderBuffers(_surface);

        const int api = UnitySelectedRenderingAPI();
        if (api == apiMetal)
        {
            self.surfaceMTL->device = nil;
            self.surfaceMTL->layer  = nil;
        }
    }

    delete _surface;
    _surface = 0;
}

- (void)dealloc
{
    NSAssert(_surface == 0, @"At this point surface should be already destroyed!");

    _view   = nil;
    _window = nil;
}

- (void)present
{
#if !PLATFORM_VISIONOS
    CGFloat maxEDR = 1.f;
    CGFloat currentEDR = 1.f;
    if (_screen.captured)
    {
        maxEDR = 1.f;
        currentEDR = 1.f;
    }
    else
    {
        if (@available(iOS 16.0, tvOS 16.0, *))
        {
            maxEDR = _screen.potentialEDRHeadroom;
            currentEDR = _screen.currentEDRHeadroom;
        }
    }
    UnitySetEDRValues(maxEDR, currentEDR);
#endif

    PreparePresent(self.surface);
    Present(self.surface);

    if (_needRecreateSurface)
    {
        RenderingSurfaceParams params =
        {
            .msaaSampleCount        = _surface->msaaSamples,
            .renderW                = (int)_requestedRenderingSize.width,
            .renderH                = (int)_requestedRenderingSize.height,
            .srgb                   = _surface->srgb,
            .wideColor              = _surface->wideColor,
            .hdr                    = _surface->hdr,
            .metalFramebufferOnly   = 0,
            .metalMemorylessDepth   = 0,
            .disableDepthAndStencil = _surface->disableDepthAndStencil,
            .useCVTextureCache      = self.surface->cvTextureCache != 0,
        };
        [self recreateSurface: params];

        _needRecreateSurface = NO;
        _requestedRenderingSize = CGSizeMake(_surface->targetW, _surface->targetH);
    }
}

- (void)requestRenderingResolution:(CGSize)res
{
    _requestedRenderingSize = res;
    _needRecreateSurface    = YES;
}

@end


#if !PLATFORM_VISIONOS
@implementation DisplayManager
{
    NSMapTable*         _displayConnection;
    DisplayConnection*  _mainDisplay;
}

@synthesize mainDisplay     = _mainDisplay;
@synthesize displayCount;
- (NSUInteger)displayCount { return _displayConnection.count; }


- (void)registerScreen:(UIScreen*)screen
{
    [_displayConnection setObject: [[DisplayConnection alloc] init: screen] forKey: screen];
}

- (id)init
{
    if ((self = [super init]))
    {
        [[NSNotificationCenter defaultCenter] addObserver: self
         selector: @selector(screenDidConnect:)
         name: UIScreenDidConnectNotification
         object: nil
        ];

        [[NSNotificationCenter defaultCenter] addObserver: self
         selector: @selector(screenDidDisconnect:)
         name: UIScreenDidDisconnectNotification
         object: nil
        ];

        _displayConnection = [NSMapTable
                              mapTableWithKeyOptions: NSPointerFunctionsStrongMemory | NSPointerFunctionsObjectPointerPersonality
                              valueOptions: NSPointerFunctionsStrongMemory | NSPointerFunctionsObjectPointerPersonality
            ];

        for (UIScreen* screen in [UIScreen screens])
            [self registerScreen: screen];

        _mainDisplay = self[[UIScreen mainScreen]];
    }
    return self;
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver: self];
}

- (BOOL)displayAvailable:(UIScreen*)targetScreen;
{
    return self[targetScreen] != nil;
}

- (DisplayConnection*)display:(UIScreen*)targetScreen
{
    return self[targetScreen];
}

- (id)objectForKeyedSubscript:(id)key
{
    NSAssert([key isKindOfClass: [UIScreen class]], @"DisplayManager allows only UIScreen as subscript");
    return [_displayConnection objectForKey: (UIScreen*)key];
}

- (void)updateDisplayListCacheInUnity
{
    // [UIScreen screens] might be out of sync to what is indicated to the
    // application via UIScreenDidConnectNotification and UIScreenDidDisconnectNotification
    // notifications. For example, on disconnection [UIScreen screens] might still
    // have the screen that the display manager no longer knows about.

    const unsigned MAX_DISPLAYS_SUPPORTED = 8; // sync this to the value on Unity side
    void* screens[MAX_DISPLAYS_SUPPORTED];
    unsigned screenCount = 0;

    UIScreen* mainScreen = [UIScreen mainScreen];
    screens[screenCount++] = (__bridge void*)mainScreen;

    for (UIScreen* screen in _displayConnection)
    {
        if (screen == mainScreen)
            continue;
        screens[screenCount++] = (__bridge void*)screen;
    }

    UnityUpdateDisplayListCache(screens, screenCount);
}

- (void)enumerateDisplaysWithBlock:(void (^)(DisplayConnection* conn))block
{
    for (UIScreen* screen in _displayConnection)
    {
        // if we want simple mirroring unity wont create rendering backing for display
        // in that case we dont want to touch Display
        DisplayConnection* conn = [_displayConnection objectForKey: screen];
        if (conn.surface != nil)
            block(conn);
    }
}

- (void)enumerateNonMainDisplaysWithBlock:(void (^)(DisplayConnection* conn))block
{
    for (UIScreen* screen in _displayConnection)
    {
        DisplayConnection* conn = [_displayConnection objectForKey: screen];
        if (conn != _mainDisplay && conn.surface != nil)
            block(conn);
    }
}

- (void)startFrameRendering
{
    [self enumerateDisplaysWithBlock:^(DisplayConnection* conn) {
        StartFrameRendering(conn.surface);
    }];
}

- (void)endFrameRendering
{
    [self enumerateDisplaysWithBlock:^(DisplayConnection* conn) {
        EndFrameRendering(conn.surface);
    }];
}

- (void)present
{
    [self enumerateDisplaysWithBlock:^(DisplayConnection* conn) {
        [conn present];
    }];
}

- (void)screenDidConnect:(NSNotification*)notification
{
    [self registerScreen: (UIScreen*)[notification object]];
    [self updateDisplayListCacheInUnity];
}

- (void)screenDidDisconnect:(NSNotification*)notification
{
    UIScreen*           screen  = (UIScreen*)[notification object];
    DisplayConnection*  conn    = (DisplayConnection*)self[screen];

    if (conn != nil && conn.surface != nil)
        UnityDisableRenderBuffers(conn.surface->unityColorBuffer, conn.surface->unityDepthBuffer);

    [conn destroySurface];
    conn = nil;

    [_displayConnection removeObjectForKey: screen];
    [self updateDisplayListCacheInUnity];
}

+ (void)Initialize
{
    NSAssert(_DisplayManager == nil, @"[DisplayManager Initialize] called after creating handler");
    if (!_DisplayManager)
        _DisplayManager = [[DisplayManager alloc] init];
}

+ (DisplayManager*)Instance
{
    if (!_DisplayManager)
        _DisplayManager = [[DisplayManager alloc] init];

    return _DisplayManager;
}

+ (void)Destroy
{
    _DisplayManager = nil;
}

@end
#else
// xros DisplayManager
@implementation DisplayManager
{
    DisplayConnection*  _mainDisplay;
}

@synthesize mainDisplay     = _mainDisplay;
@synthesize displayCount;
- (NSUInteger)displayCount { return 1; }

- (id)init
{
    if ((self = [super init]))
    {
        _mainDisplay = [[DisplayConnection alloc] init];

        // Unity needs a non-zero screen in order for renderloop to run
        const int screenCount = 1;
        void* screens[screenCount] = {(void*)0x1};
        UnityUpdateDisplayListCache(screens, screenCount);
    }
    return self;
}

- (void)dealloc
{
}

- (void)startFrameRendering
{
    StartFrameRendering(_mainDisplay.surface);
}

- (void)endFrameRendering
{
    EndFrameRendering(_mainDisplay.surface);
}

- (void)present
{
    [_mainDisplay present];
}

+ (void)Initialize
{
    NSAssert(_DisplayManager == nil, @"[DisplayManager Initialize] called after creating handler");
    if (!_DisplayManager)
        _DisplayManager = [[DisplayManager alloc] init];
}

+ (DisplayManager*)Instance
{
    if (!_DisplayManager)
        _DisplayManager = [[DisplayManager alloc] init];

    return _DisplayManager;
}
@end
#endif

//==============================================================================
//
//  Unity Interface:

static void EnsureDisplayIsInited(DisplayConnection* conn)
{
    // main screen view will be created in AppController,
    // so we can assume that we need to init secondary display from script
    // meaning: gles + show right away

    if (conn.view == nil)
        [conn createView: YES];

    int api = UnitySelectedRenderingAPI();

    bool needRecreate = false;
    if (conn.surface == 0)
        needRecreate = true;
    else if (api == apiMetal)
        needRecreate = conn.surfaceMTL->layer == nil;

    if (needRecreate)
    {
        RenderingSurfaceParams params =
        {
            .msaaSampleCount        = UnityGetDesiredMSAASampleCount(1),
            .renderW                = -1,   // native resolution at first (can be changed later)
            .renderH                = -1,   // native resolution at first (can be changed later)
            .srgb                   = UnityGetSRGBRequested(),
            .wideColor              = 0,    // i am not sure how to handle wide color here (and if it is even supported for airplay)
            .hdr                    = 0,
            .metalFramebufferOnly   = UnityMetalFramebufferOnly(),
            .metalMemorylessDepth   = UnityMetalMemorylessDepth(),
            .disableDepthAndStencil = UnityDisableDepthAndStencilBuffers(),
            .useCVTextureCache      = 0,
        };

        [conn recreateSurface: params];
        {
            DisplayConnection* main = [DisplayManager Instance].mainDisplay;
            StartFrameRendering(main.surface);
        }
    }
}

#if !PLATFORM_TVOS
extern "C" int UnityDisplayManager_DisplayCount()
{
    return (int)[DisplayManager Instance].displayCount;
}

extern "C" bool UnityDisplayManager_DisplayAvailable(void* nativeDisplay)
{
#if !PLATFORM_VISIONOS
    if (nativeDisplay == NULL)
        return false;

    return [[DisplayManager Instance] displayAvailable: (__bridge UIScreen*)nativeDisplay];
#else
    return false;
#endif
}

extern "C" bool UnityDisplayManager_DisplayActive(void* nativeDisplay)
{
#if !PLATFORM_VISIONOS
    return UnityDisplayManager_DisplayAvailable(nativeDisplay);
#else
    return true;
#endif
}

extern "C" void UnityDisplayManager_DisplaySystemResolution(void* nativeDisplay, int* w, int* h)
{
#if !PLATFORM_VISIONOS
    if (nativeDisplay == NULL)
        return;

    DisplayConnection* conn = [DisplayManager Instance][(__bridge UIScreen*)nativeDisplay];
    EnsureDisplayIsInited(conn);

    // CODE ARCHEOLOGY: We were creating full-screen buffer for "system" RT, and (possibly) resized for "target" RT,
    // CODE ARCHEOLOGY:   and if the resolution was changed we were blitting target to system to rescale the image.
    // CODE ARCHEOLOGY: Since then we have switched to using OS scaling mechanism, i.e. we are creating window
    // CODE ARCHEOLOGY:   with rendering extents and let iOS do the upscale
    // CODE ARCHEOLOGY: We should revisit the rendering code to possibly get rid of the code needed for this setup
    // CODE ARCHEOLOGY:   but for now we do the minimal change to unbreak native resolution query

    // note that we mimic size calculation that we use in other places, i.e. using screen bounds + content scale factor
    // we should also note that we tweak CAMetalLayer.drawableSize (well, that's the way to trigger native upscale)
    //   so we have CAMetalLayer.drawableSize = rendering size
    //   and        CAMetalLayer.size         = system (native) size
    const CGSize layerSize = conn.view.layer.bounds.size; const float scale = conn.view.contentScaleFactor;
    *w = (int)(layerSize.width * scale);
    *h = (int)(layerSize.height * scale);
#endif
}

extern "C" void UnityDisplayManager_DisplayRenderingResolution(void* nativeDisplay, int* w, int* h)
{
#if !PLATFORM_VISIONOS
    if (nativeDisplay == NULL)
        return;

    DisplayConnection* conn = [DisplayManager Instance][(__bridge UIScreen*)nativeDisplay];
    EnsureDisplayIsInited(conn);

    *w = (int)conn.surface->targetW;
    *h = (int)conn.surface->targetH;
#endif
}

extern "C" void UnityDisplayManager_DisplayRenderingBuffers(void* nativeDisplay, void** colorBuffer, void** depthBuffer)
{
    if (nativeDisplay == NULL)
        return;

#if !PLATFORM_VISIONOS
    DisplayConnection* conn = [DisplayManager Instance][(__bridge UIScreen*)nativeDisplay];
#else
    DisplayConnection* conn = [DisplayManager Instance].mainDisplay;
#endif
    EnsureDisplayIsInited(conn);

    if (colorBuffer)
        *colorBuffer = conn.surface->unityColorBuffer;
    if (depthBuffer)
        *depthBuffer = conn.surface->unityDepthBuffer;
}

extern "C" void UnityDisplayManager_SetRenderingResolution(void* nativeDisplay, int w, int h)
{
#if !PLATFORM_VISIONOS
    if (nativeDisplay == NULL)
        return;

    UIScreen*           screen  = (__bridge UIScreen*)nativeDisplay;
    DisplayConnection*  conn    = [DisplayManager Instance][screen];
    EnsureDisplayIsInited(conn);

    if (screen == [UIScreen mainScreen])
        UnityRequestRenderingResolution(w, h);
    else
        [conn requestRenderingResolution: CGSizeMake(w, h)];
#endif
}

extern "C" int UnityDisplayManager_PrimaryDisplayIndex()
{
    return 0;
}

#endif

extern "C" void UnityActivateScreenForRendering(void* nativeDisplay)
{
    if (nativeDisplay == NULL)
        return;

#if !PLATFORM_VISIONOS
    DisplayConnection* conn = [DisplayManager Instance][(__bridge UIScreen*)nativeDisplay];
#else
    DisplayConnection* conn = [DisplayManager Instance].mainDisplay;
#endif

    EnsureDisplayIsInited(conn);
    [conn shouldShowWindow: YES];
}

#if !PLATFORM_VISIONOS
extern "C" float UnityScreenScaleFactor(UIScreen* screen)
{
    // NOTE: All views handled by Unity have their contentScaleFactor initialized
    // to value returned by this function.

    // we should query nativeScale if available to get the true device resolution
    // this way we avoid unnecessarily large frame buffers and downscaling.
    //   e.g. iPhone 6+ pretends to be a x3 device, while its physical screen is x2.6 something.
    // it is available on iOS 8.0+, tvOS 9.0+
    // for older ios versions we add this selector ourselves (AddNewAPIImplIfNeeded in UnityAppController.mm)

    // On AppleTV screen.nativeScale returns NaN when device is in sleep mode and starting from tvOS 10 (?) it returns 0.
    if (isnan(screen.nativeScale) || (screen.nativeScale == 0))
        return 1.0f;
    else
    {
        float scalingFactor = UnityCalculateScalingFactorFromTargetDPI(screen);
        if (scalingFactor > 0.0f)
            return scalingFactor;
        else
            return screen.nativeScale;
    }

    return screen.scale;
}

extern "C" int UnityMainScreenRefreshRate()
{
    return (int)[UIScreen mainScreen].maximumFramesPerSecond;
}

extern "C" void UnityStartFrameRendering()
{
    [[DisplayManager Instance] startFrameRendering];
}

extern "C" void UnityDestroyUnityRenderSurfaces()
{
    [[DisplayManager Instance] enumerateDisplaysWithBlock:^(DisplayConnection* conn) {
        [conn destroySurface];
    }];
}

extern "C" void UnitySetBrightness(float brightness)
{
#if !PLATFORM_TVOS
    brightness = (brightness > 1.0 ? 1.0 : brightness) < 0 ? 0.0 : brightness;
    UIScreen* screen  = [UIScreen mainScreen];
    screen.brightness = brightness;
#endif
}

extern "C" float UnityGetBrightness()
{
#if !PLATFORM_TVOS
    UIScreen* screen  = [UIScreen mainScreen];
    return screen.brightness;
#else
    return 1.0f;
#endif
}

extern "C" bool UnityIsFullscreen()
{
    CGSize screenSize = [[[[DisplayManager Instance] mainDisplay] screen] bounds].size;
    CGSize viewSize = [[[[DisplayManager Instance] mainDisplay] view] bounds].size;

    return screenSize.width == viewSize.width && screenSize.height == viewSize.height;
}
#else
extern "C" int UnityMainScreenRefreshRate()
{
    return 90;
}

extern "C" void UnityStartFrameRendering()
{
    [[DisplayManager Instance] startFrameRendering];
}

extern "C" void UnityDestroyUnityRenderSurfaces()
{
    [[DisplayManager Instance].mainDisplay destroySurface];
}

extern "C" void UnitySetBrightness(float brightness)
{
}

extern "C" float UnityGetBrightness()
{
    return 1.0f;
}

extern "C" bool UnityIsFullscreen()
{
    return false;
}
#endif 
