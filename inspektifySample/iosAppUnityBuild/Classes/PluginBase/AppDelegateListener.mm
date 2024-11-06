#include "AppDelegateListener.h"

#define DEFINE_NOTIFICATION(name) extern "C" __attribute__((visibility ("default"))) NSString* const name = @#name;

DEFINE_NOTIFICATION(kUnityDidRegisterForRemoteNotificationsWithDeviceToken);
DEFINE_NOTIFICATION(kUnityDidFailToRegisterForRemoteNotificationsWithError);
DEFINE_NOTIFICATION(kUnityDidReceiveRemoteNotification);
DEFINE_NOTIFICATION(kUnityOnOpenURL);
DEFINE_NOTIFICATION(kUnityWillFinishLaunchingWithOptions);
DEFINE_NOTIFICATION(kUnityHandleEventsForBackgroundURLSession);

#undef DEFINE_NOTIFICATION

void UnityRegisterAppDelegateListener(id<AppDelegateListener> obj)
{
    #define REGISTER_SELECTOR(sel, notif_name)                  \
    if([obj respondsToSelector:sel])                            \
        [[NSNotificationCenter defaultCenter]   addObserver:obj \
                                                selector:sel    \
                                                name:notif_name \
                                                object:nil      \
        ];                                                      \

    UnityRegisterLifeCycleListener(obj);

    REGISTER_SELECTOR(@selector(onOpenURL:), kUnityOnOpenURL);

    REGISTER_SELECTOR(@selector(applicationDidReceiveMemoryWarning:), UIApplicationDidReceiveMemoryWarningNotification);
    REGISTER_SELECTOR(@selector(applicationSignificantTimeChange:), UIApplicationSignificantTimeChangeNotification);

#if !PLATFORM_TVOS && !PLATFORM_VISIONOS
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    // these notifications are deprecated, but we keep registration for backward compatibility
    REGISTER_SELECTOR(@selector(applicationWillChangeStatusBarFrame:), UIApplicationWillChangeStatusBarFrameNotification);
    REGISTER_SELECTOR(@selector(applicationWillChangeStatusBarOrientation:), UIApplicationWillChangeStatusBarOrientationNotification);
#pragma pop
#endif

    REGISTER_SELECTOR(@selector(applicationWillFinishLaunchingWithOptions:), kUnityWillFinishLaunchingWithOptions);
    REGISTER_SELECTOR(@selector(onHandleEventsForBackgroundURLSession:), kUnityHandleEventsForBackgroundURLSession);

    #undef REGISTER_SELECTOR
}

void UnityUnregisterAppDelegateListener(id<AppDelegateListener> obj)
{
    UnityUnregisterLifeCycleListener(obj);

    [[NSNotificationCenter defaultCenter] removeObserver: obj name: kUnityOnOpenURL object: nil];

    [[NSNotificationCenter defaultCenter] removeObserver: obj name: UIApplicationDidReceiveMemoryWarningNotification object: nil];
    [[NSNotificationCenter defaultCenter] removeObserver: obj name: UIApplicationSignificantTimeChangeNotification object: nil];

#if !PLATFORM_TVOS && !PLATFORM_VISIONOS
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    // these notifications are deprecated, but we keep registration for backward compatibility
    [[NSNotificationCenter defaultCenter] removeObserver: obj name: UIApplicationWillChangeStatusBarFrameNotification object: nil];
    [[NSNotificationCenter defaultCenter] removeObserver: obj name: UIApplicationWillChangeStatusBarOrientationNotification object: nil];
#pragma pop
#endif
}
