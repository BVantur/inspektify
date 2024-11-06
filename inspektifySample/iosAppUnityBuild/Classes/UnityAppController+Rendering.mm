#include "UnityAppController+Rendering.h"
#include "UnityAppController+ViewHandling.h"

#include "Unity/InternalProfiler.h"
#include "Unity/DisplayManager.h"

#include "UI/UnityView.h"

#include <dlfcn.h>

#import <Metal/Metal.h>

extern bool _skipPresent;
extern bool _didResignActive;

static int _renderingAPI = 0;
static void SelectRenderingAPIImpl();

@implementation UnityAppController (Rendering)

- (void)createDisplayLink
{
    _displayLink = [CADisplayLink displayLinkWithTarget: self selector: @selector(repaintDisplayLink)];
    [self callbackFramerateChange: -1];
    [_displayLink addToRunLoop: [NSRunLoop currentRunLoop] forMode: NSRunLoopCommonModes];
}

- (void)destroyDisplayLink
{
    [_displayLink invalidate];
    _displayLink = nil;
}

- (void)repaintDisplayLink
{
    if (!_didResignActive)
    {
        UnityDisplayLinkCallback(_displayLink.timestamp);
        [self repaint];
    }
}

- (void)repaint
{
    if (_unityView.skipRendering)
        return;

#if UNITY_SUPPORT_ROTATION
    [self checkOrientationRequest];
#endif
    [_unityView recreateRenderingSurfaceIfNeeded];
    [_unityView processKeyboard];
    UnityDeliverUIEvents();

    if (!UnityIsPaused())
        UnityRepaint();
}

- (void)callbackGfxInited
{
    assert(self.engineLoadState < kUnityEngineLoadStateRenderingInitialized && "Graphics should not have been initialized at this point");
    InitRendering();
    [self advanceEngineLoadState: kUnityEngineLoadStateRenderingInitialized];

    [self shouldAttachRenderDelegate];
    [_unityView recreateRenderingSurface];
    [_renderDelegate mainDisplayInited: _mainDisplay.surface];

    _mainDisplay.surface->allowScreenshot = 1;
}

- (void)callbackPresent:(const UnityFrameStats*)frameStats
{
    if (_skipPresent)
        return;

    // metal needs special processing, because in case of airplay we need extra command buffers to present non-main screen drawables
    if (UnitySelectedRenderingAPI() == apiMetal)
    {
        [[DisplayManager Instance].mainDisplay present];
#if !PLATFORM_VISIONOS
        [[DisplayManager Instance] enumerateNonMainDisplaysWithBlock:^(DisplayConnection* conn) {
            PreparePresentNonMainScreenMTL((UnityDisplaySurfaceMTL*)conn.surface);
        }];
#endif
    }
    else
    {
        [[DisplayManager Instance] present];
    }

    Profiler_FramePresent(frameStats);
}

- (void)callbackFramerateChange:(int)targetFPS
{
    if (targetFPS <= 0)
        targetFPS = UnityGetTargetFPS();

    // on tvos it is possible to start application without a screen attached
    // alas, mainScreen is set in this case, but the values provided are bogus
    //   and in the case of maxFPS = 0 we will end up in endless recursion
#if !PLATFORM_VISIONOS
    const int maxFPS = (int)[UIScreen mainScreen].maximumFramesPerSecond;
#else
    // no UIScreen on VisionOS
    const int maxFPS = 90;
#endif
    if (maxFPS > 0 && targetFPS > maxFPS)
    {
        targetFPS = maxFPS;
        // note that this changes FPS, resulting in UnityFramerateChangeCallback call, calling this method recursively recursively
        UnitySetTargetFPS(targetFPS);
        return;
    }

    if (@available(iOS 15.0, tvOS 15.0, *))
        _displayLink.preferredFrameRateRange = CAFrameRateRangeMake(targetFPS, targetFPS, targetFPS);
    else
        _displayLink.preferredFramesPerSecond = targetFPS;
}

- (void)selectRenderingAPI
{
    NSAssert(_renderingAPI == 0, @"[UnityAppController selectRenderingApi] called twice");
    SelectRenderingAPIImpl();
}

- (UnityRenderingAPI)renderingAPI
{
    NSAssert(_renderingAPI != 0, @"[UnityAppController renderingAPI] called before [UnityAppController selectRenderingApi]");
    return (UnityRenderingAPI)_renderingAPI;
}

@end


extern "C" void UnityGfxInitedCallback()
{
    [GetAppController() callbackGfxInited];
}

extern "C" void UnityPresentContextCallback(struct UnityFrameStats const* unityFrameStats)
{
    [GetAppController() callbackPresent: unityFrameStats];
}

extern "C" void UnityFramerateChangeCallback(int targetFPS)
{
    [GetAppController() callbackFramerateChange: targetFPS];
}

static NSBundle*            _MetalBundle        = nil;
static id<MTLDevice>        _MetalDevice        = nil;
static id<MTLCommandQueue>  _MetalCommandQueue  = nil;

static void SelectRenderingAPIImpl()
{
    assert(_renderingAPI == 0 && "Rendering API selection was done twice");

    _renderingAPI = UnityGetRenderingAPI();
    if (_renderingAPI == apiMetal)
    {
        _MetalBundle        = [NSBundle bundleWithPath: @"/System/Library/Frameworks/Metal.framework"];
        _MetalDevice        = MTLCreateSystemDefaultDevice();
        _MetalCommandQueue  = [_MetalDevice newCommandQueueWithMaxCommandBufferCount: UnityCommandQueueMaxCommandBufferCountMTL()];

        assert(_MetalDevice != nil && _MetalCommandQueue != nil && "Could not initialize Metal.");
    }
}

extern "C" NSBundle*            UnityGetMetalBundle()       { return _MetalBundle; }
extern "C" MTLDeviceRef         UnityGetMetalDevice()       { return _MetalDevice; }
extern "C" MTLCommandQueueRef   UnityGetMetalCommandQueue() { return _MetalCommandQueue; }
extern "C" int                  UnitySelectedRenderingAPI() { return _renderingAPI; }
extern "C" void                 UnitySelectRenderingAPI()   { SelectRenderingAPIImpl(); }

// deprecated and no longer used by unity itself (will soon be removed)
extern "C" MTLCommandQueueRef   UnityGetMetalDrawableCommandQueue() { return UnityGetMetalCommandQueue(); }


extern "C" UnityRenderBufferHandle  UnityBackbufferColor()      { return GetMainDisplaySurface()->unityColorBuffer; }
extern "C" UnityRenderBufferHandle  UnityBackbufferDepth()      { return GetMainDisplaySurface()->unityDepthBuffer; }

extern "C" void                 DisplayManagerEndFrameRendering() { [[DisplayManager Instance] endFrameRendering]; }

extern "C" void                 UnityPrepareScreenshot()    { UnitySetRenderTarget(GetMainDisplaySurface()->unityColorBuffer, GetMainDisplaySurface()->unityDepthBuffer); }

extern "C" void UnityRepaint()
{
    @autoreleasepool
    {
        Profiler_FrameStart();
        if (UnityIsBatchmode())
            UnityBatchPlayerLoop();
        else
            UnityPlayerLoop();
        Profiler_FrameEnd();
    }
}
