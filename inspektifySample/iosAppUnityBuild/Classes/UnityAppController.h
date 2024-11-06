#pragma once

#import <QuartzCore/CADisplayLink.h>

#import <UnityFramework/RenderPluginDelegate.h>

@class UnityView;
@class UnityViewControllerBase;
@class DisplayConnection;

typedef enum
{
    kUnityEngineLoadStateNotStarted = 0,
    // Minimal initialization done, allowing limited API use, such as reporting URL app was launched with
    kUnityEngineLoadStateMinimal = 1,
    // Core of Unity engine is loaded, but no graphics or first scene yet
    kUnityEngineLoadStateCoreInitialized = 2,
    // Rendering was initialized, nothing related to rendering should be touched before this state
    kUnityEngineLoadStateRenderingInitialized = 3,
    // Unity is fully initialized, it's not safe to call Unity APIs before this state
    kUnityEngineLoadStateAppReady = 4,
} UnityEngineLoadState;

__attribute__ ((visibility("default")))
@interface UnityAppController : NSObject<UIApplicationDelegate>
{
    UnityView*          _unityView;
    CADisplayLink*      _displayLink;

    UIWindow*           _window;
    UIView*             _rootView;
    UIViewController*   _rootController;
    UIViewController*   _snapshotViewController;

    DisplayConnection*  _mainDisplay;

    // CODE ARCHEOLOGY: we were caching view controllers, both autorotation one and per-fixed-orientation ones
    // CODE ARCHEOLOGY: we stopped doing this as the performance impact is negligible,
    // CODE ARCHEOLOGY: yet it introduces corner cases and in general lots of code

#if UNITY_SUPPORT_ROTATION
    UIInterfaceOrientation  _curOrientation;
#endif

    id<RenderPluginDelegate>    _renderDelegate;
}

// override it to add your render plugin delegate
- (void)shouldAttachRenderDelegate;

// this one is called at the very end of didFinishLaunchingWithOptions:
// after views have been created but before initing engine itself
// override it to register plugins, tweak UI etc
- (void)preStartUnity;

// this one is called at at the very end of didFinishLaunchingWithOptions:
// it will start showing unity view and rendering unity content
- (void)startUnity:(UIApplication*)application;

- (BOOL)advanceEngineLoadState:(UnityEngineLoadState)newState;

// this is a part of UIApplicationDelegate protocol starting with ios5
// setter will be generated empty
@property (retain, nonatomic) UIWindow* window;

@property (readonly, copy, nonatomic) UnityView*            unityView;
@property (readonly, copy, nonatomic) CADisplayLink*        unityDisplayLink;

@property (readonly, copy, nonatomic) UIView*               rootView;
@property (readonly, copy, nonatomic) UIViewController*     rootViewController;
@property (readonly, copy, nonatomic) DisplayConnection*    mainDisplay;

#if UNITY_SUPPORT_ROTATION
@property (readonly, nonatomic) UIInterfaceOrientation      interfaceOrientation;
#endif

@property (readonly) UnityEngineLoadState                   engineLoadState;
@property (nonatomic, retain) id                            renderDelegate;
@property (nonatomic, copy)                                 void (^quitHandler)(void);

@end

// accessing app controller
#ifdef __cplusplus
extern "C" {
#endif

extern UnityAppController* _UnityAppController;
extern UnityAppController* GetAppController(void);

#ifdef __cplusplus
} // extern "C"
#endif

// Put this into mm file with your subclass implementation
// pass subclass name to define

#define IMPL_APP_CONTROLLER_SUBCLASS(ClassName) \
@interface ClassName(OverrideAppDelegate)       \
{                                               \
}                                               \
+(void)load;                                    \
@end                                            \
@implementation ClassName(OverrideAppDelegate)  \
+(void)load                                     \
{                                               \
    extern const char* AppControllerClassName;  \
    AppControllerClassName = #ClassName;        \
}                                               \
@end                                            \


// plugins

#define APP_CONTROLLER_RENDER_PLUGIN_METHOD(method)                         \
do {                                                                        \
    id<RenderPluginDelegate> delegate = GetAppController().renderDelegate;  \
    if([delegate respondsToSelector:@selector(method)])                     \
        [delegate method];                                                  \
} while(0)

#define APP_CONTROLLER_RENDER_PLUGIN_METHOD_ARG(method, arg)                \
do {                                                                        \
    id<RenderPluginDelegate> delegate = GetAppController().renderDelegate;  \
    if([delegate respondsToSelector:@selector(method:)])                    \
        [delegate method:arg];                                              \
} while(0)


// these are simple wrappers about ios api, added for convenience
void AppController_SendNotification(NSString* name);
void AppController_SendNotificationWithArg(NSString* name, id arg);

void AppController_SendUnityViewControllerNotification(NSString* name);

// in the case when apple adds new api that has easy fallback path for old ios
// we will add new api methods at runtime on older ios, so we can switch to new api universally
// in that case we still need actual declaration: we will do it here as it is the most convenient place

// history:
// [CADisplayLink preferredFramesPerSecond], [UIScreen maximumFramesPerSecond], [UIView safeAreaInsets]
//   were removed after we started to enforce xcode9 (sdk 11)
