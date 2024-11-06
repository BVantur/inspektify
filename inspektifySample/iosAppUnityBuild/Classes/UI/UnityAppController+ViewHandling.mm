#include "UnityAppController+ViewHandling.h"
#include "UnityAppController+Rendering.h"

#include "UI/OrientationSupport.h"
#include "UI/UnityView.h"
#include "UI/UnityViewControllerBase.h"
#include "Unity/DisplayManager.h"


// TEMP: ?
#include "UI/ActivityIndicator.h"
#include "UI/Keyboard.h"
#include <utility>

extern bool _skipPresent;

static BOOL _shouldUseDefaultViewControllerForFixedOrientations = NO;

@implementation UnityAppController (ViewHandling)

#if UNITY_SUPPORT_ROTATION
// special case for when we DO know the app orientation, but dont get it through normal mechanism (UIViewController orientation handling)
// how can this happen:
// 1. On startup: ios is not sending "change orientation" notifications on startup (but rather we "start" in correct one already)
// 2. When using presentation controller it can override orientation constraints, so on dismissing we need to tweak app orientation;
//      pretty much like startup situation UIViewController would have correct orientation, and app will be out-of-sync
- (void)updateAppOrientation:(UIInterfaceOrientation)orientation
{
    // update our (AppContoller) view of orientation
    _curOrientation = orientation;

    // do unity view "orientation magic"
    [_unityView willRotateToOrientation: orientation fromOrientation: (UIInterfaceOrientation)UIInterfaceOrientationUnknown];
    [_unityView didRotate];

    // after we have updated unity view, this will poke unity itself about the changes in orient/extents
    [_unityView boundsUpdated];
}

#endif

- (UnityView*)createUnityView
{
    return [[UnityView alloc] initFromMainScreen];
}

- (UIViewController*)createUnityViewControllerDefault
{
#if PLATFORM_IOS
    UnityViewControllerBase* ret = [[UnityDefaultViewController alloc] initShouldHandleFixedOrientation: _shouldUseDefaultViewControllerForFixedOrientations];
#else
    UnityViewControllerBase* ret = [[UnityDefaultViewController alloc] init];
#endif

    ret.notificationDelegate = [[UnityViewControllerNotificationsDefaultSender alloc] init];

#if PLATFORM_TVOS
    ret.controllerUserInteractionEnabled = YES;
#endif

    return ret;
}

#if UNITY_SUPPORT_ROTATION
- (UIViewController*)createUnityViewControllerForOrientation:(UIInterfaceOrientation)orient
{
    UnityViewControllerBase* ret = [AllocUnitySingleOrientationViewController(orient) init];
    ret.notificationDelegate = [[UnityViewControllerNotificationsDefaultSender alloc] init];
    return ret;
}

#endif

- (UIViewController*)createRootViewController
{
    UIViewController* ret = nil;
    if (!UNITY_SUPPORT_ROTATION || UnityShouldAutorotate() || _shouldUseDefaultViewControllerForFixedOrientations)
        ret = [self createUnityViewControllerDefault];

#if UNITY_SUPPORT_ROTATION
    if (ret == nil)
        ret = [self createRootViewControllerForOrientation: ConvertToIosScreenOrientation((ScreenOrientation)UnityRequestedScreenOrientation())];
#endif

    return ret;
}

- (UIViewController*)topMostController
{
    UIViewController *topController = self.window.rootViewController;
    while (topController.presentedViewController)
        topController = topController.presentedViewController;
    return topController;
}

- (void)willStartWithViewController:(UIViewController*)controller
{
#if !PLATFORM_VISIONOS
    _unityView.contentScaleFactor   = UnityScreenScaleFactor([UIScreen mainScreen]);
#else
    _unityView.contentScaleFactor   = 1.0f;
#endif
    _unityView.autoresizingMask     = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;

    _rootController.view = _rootView = _unityView;
}

- (void)willTransitionToViewController:(UIViewController*)toController fromViewController:(UIViewController*)fromController
{
}

- (void)didTransitionToViewController:(UIViewController*)toController fromViewController:(UIViewController*)fromController
{
#if UNITY_SUPPORT_ROTATION && !PLATFORM_VISIONOS
    // when transitioning between view controllers ios will not send reorient events (because they are bound to controllers, not view)
    // so we imitate them here so unity view can update its size/orientation
    UIInterfaceOrientation newOrientation = UIViewControllerInterfaceOrientation(toController);
    [_unityView willRotateToOrientation: newOrientation  fromOrientation: ConvertToIosScreenOrientation(_unityView.contentOrientation)];
    [_unityView didRotate];

    // NB: this is both important and insane at the same time (that we have several places to keep current orentation and we need to sync them)
    _curOrientation = newOrientation;
#endif
}

- (UIView*)createSnapshotView
{
    // Note that on iPads with iOS 9 or later (up to iOS 10.2 at least) there's a bug in the iOS compositor: any use of -[UIView snapshotViewAfterScreenUpdates]
    // causes black screen being shown temporarily when 4 finger gesture to swipe to another app in the task switcher is being performed slowly
    return [_rootView snapshotViewAfterScreenUpdates: YES];
}

- (void)createUI
{
    NSAssert(_unityView != nil, @"_unityView should be inited at this point");
    NSAssert(_window != nil, @"_window should be inited at this point");

#if PLATFORM_IOS
    if (@available(iOS 16.0, *))    _shouldUseDefaultViewControllerForFixedOrientations = YES;
    else                            _shouldUseDefaultViewControllerForFixedOrientations = NO;
#endif

    _rootController = [self createRootViewController];

    [self willStartWithViewController: _rootController];

    NSAssert(_rootView != nil, @"_rootView  should be inited at this point");
    NSAssert(_rootController != nil, @"_rootController should be inited at this point");

    // CODE ARCHEOLOGY: We used to add _rootView (unityView) to the subviews of _window so that unityView would get its
    // initial actual device values (e.g. safeAreaInsets) before initializing graphics. This is not needed anymore after
    // we made a change where iOS is handling splash screen. Now unityView will be configured at
    // [_window makeKeyAndVisible] call. makeKeyAndVisible will configure _window.rootViewController.view, which is
    // _rootController.view, which is unityView (_rootView)

    // We should have rootViewController set always, otherwise UIKit might trow exception when doing anything with UI
    _window.rootViewController = _rootController;

    [UIView setAnimationsEnabled: NO];

    // make window visible only after we have set up initial controller we want to show
    [_window makeKeyAndVisible];

#if UNITY_SUPPORT_ROTATION
    // to be able to query orientation from view controller we should actually show it.
    // at this point we can only show splash screen, so update app orientation after we started showing it
    // NB: _window.rootViewController = splash view controller (not _rootController)
    [self updateAppOrientation: ConvertToIosScreenOrientation(UIViewControllerOrientation(_window.rootViewController))];
#endif

    NSNumber* style = [[[NSBundle mainBundle] infoDictionary] objectForKey: @"Unity_LoadingActivityIndicatorStyle"];
    ShowActivityIndicator(_rootView, style ? [style intValue] : -1);

    NSNumber* vcControlled = [[[NSBundle mainBundle] infoDictionary] objectForKey: @"UIViewControllerBasedStatusBarAppearance"];
    if (vcControlled && ![vcControlled boolValue])
        printf_console("\nSetting UIViewControllerBasedStatusBarAppearance to NO is no longer supported.\n"
            "Apple actively discourages that, and all application-wide methods of changing status bar appearance are deprecated\n\n"
        );
}

- (void)showGameUI
{
    HideActivityIndicator();

    // make sure that we start up with correctly created/inited rendering surface
    // NB: recreateRenderingSurface won't go into rendering because AppReady state is not set
#if UNITY_SUPPORT_ROTATION
    [self checkOrientationRequest];
#endif
    [_unityView recreateRenderingSurface];

    // UI hierarchy
    _window.rootViewController = _rootController;
    [_window bringSubviewToFront: _rootView];

#if UNITY_SUPPORT_ROTATION
    // to be able to query orientation from view controller we should actually show it.
    // at this point we finally started to show game view controller. Just in case update orientation again
    [self updateAppOrientation: ConvertToIosScreenOrientation(UIViewControllerOrientation(_rootController))];
#endif

    // why we set level ready only now:
    // surface recreate will try to repaint if this var is set (poking unity to do it)
    // but this frame now is actually the first one we want to process/draw
    // so all the recreateSurface before now (triggered by reorientation) should simply change extents

    [self advanceEngineLoadState: kUnityEngineLoadStateAppReady];

    // why we skip present:
    // this will be the first frame to draw, so Start methods will be called
    // and we want to properly handle resolution request in Start (which might trigger surface recreate)
    // NB: we want to draw right after showing window, to avoid black frame creeping in

    _skipPresent = true;

    if (!UnityIsPaused())
        UnityRepaint();

    _skipPresent = false;
    [self repaint];

    [UIView setAnimationsEnabled: YES];
}

#if UNITY_SUPPORT_ROTATION
- (void)transitionToViewController:(UIViewController*)vc
{
    [self willTransitionToViewController: vc fromViewController: _rootController];

    // first: remove from view hierarchy.
    // if we simply hide the window before assigning the new view controller, it will cause black frame flickering
    // on the other hand, hiding the window is important by itself to better signal the intent to iOS
    //   e.g. unless we hide the window view, safeArea might stop working (due to bug in iOS if we're to speculate)
    // due to that we do this hide/unhide sequence: we want to to make it hidden, but still unhide it before changing window view controller.
    _window.hidden = YES;
    _window.hidden = NO;

    _rootController.view = nil;
    _window.rootViewController = nil;

    // second: assign new root controller (and view hierarchy with that), restore bounds
    //   this is very important to first set _rootController, and only then window root controller
    //   as the latter will poke [UIApplicationDelegate application:supportedInterfaceOrientationsForWindow:]
    //   and unity implementation expects _rootController to be already set
    _window.rootViewController = _rootController = vc;
    _rootController.view = _rootView;

    // CODE ARCHEOLOGY: in here we were tweaking window bounds to agree with screen bounds (and did some iOS8 specific workaround)
    // This is no longer needed it seems, and is actually harmful for the "split view" supporting apps
    // If you have fullscreen window, it will be automatically resized to take the whole screen
    // and otherwise we must not touch it, as it will be controlled by multitasking

    // third: restore window as key and layout subviews to finalize size changes
    [_window makeKeyAndVisible];
    [_window layoutSubviews];

    // In iOS16+ after we setup a new contoller and when we have multiple windows visible, iOS not fully prepares
    // view controller according it's orientation requirements. And then inside didTransitionToViewController:
    // from UIViewControllerInterfaceOrientation we get bad orientation as it uses scree.coordinationSpace which is not
    // yet changed. So we want to delay didTransitionToViewController call. And in this case we get a call to view
    // controllers -viewWillTransitionToSize: method and at this time the orientation change is already happened and
    // then we send didTransitionToViewController. If view controller changes are setup correctly from iOS, then iOS do
    // not call -viewWillTransitionToSize:.
    UIInterfaceOrientation newOrientation = UIViewControllerInterfaceOrientation(vc);
    BOOL orientationChangedToSupported = vc.supportedInterfaceOrientations & (1 << newOrientation);
    if (!UnityiOS160orNewer() || orientationChangedToSupported)
    {
        [self didTransitionToViewController: vc fromViewController: _rootController];
    }
}

- (void)interfaceWillChangeOrientationTo:(UIInterfaceOrientation)toInterfaceOrientation
{
    UIInterfaceOrientation fromInterfaceOrientation = _curOrientation;

    _curOrientation = toInterfaceOrientation;
    [_unityView willRotateToOrientation: toInterfaceOrientation fromOrientation: fromInterfaceOrientation];
}

- (void)interfaceDidChangeOrientationFrom:(UIInterfaceOrientation)fromInterfaceOrientation
{
    [_unityView didRotate];
}

#endif

- (void)notifyHideHomeButtonChange
{
#if PLATFORM_IOS || PLATFORM_VISIONOS
    // setNeedsUpdateOfHomeIndicatorAutoHidden is not implemented on iOS 11.0.
    // The bug has been fixed in iOS 11.0.1. See http://www.openradar.me/35127134
    if ([_rootController respondsToSelector: @selector(setNeedsUpdateOfHomeIndicatorAutoHidden)])
        [_rootController setNeedsUpdateOfHomeIndicatorAutoHidden];
#endif
}

- (void)notifyDeferSystemGesturesChange
{
#if PLATFORM_IOS || PLATFORM_VISIONOS
    [_rootController setNeedsUpdateOfScreenEdgesDeferringSystemGestures];
#endif
}

@end


#if UNITY_SUPPORT_ROTATION

@implementation UnityAppController (OrientationSupport)
- (UIViewController*)createRootViewControllerForOrientation:(UIInterfaceOrientation)orientation
{
    return [self createUnityViewControllerForOrientation: orientation];
}

- (void)checkOrientationRequest
{
    // if no orientation/allowed-orientation change - do nothing
    if (!UnityHasOrientationRequest() && !UnityShouldChangeAllowedOrientations())
        return;

    // if there is a presentation controller, it takes over orientation control
    //   in this case we should completely ignore all orientation changes
    // mind you, we just *delay* them, and they will be satisfied once presentation controller is dismissed
    // extra care like this is needed, because below we might recreate ViewController completely breaking
    //   presentation controller dismissal
    if (_rootController.presentedViewController)
        return;

    // to reiterate: we have different processing on newish iOS where we stick to just one view controller
    // in this case we leave all the processing to iOS
    if(_shouldUseDefaultViewControllerForFixedOrientations)
    {
        NSAssert([self.rootViewController isKindOfClass: [UnityDefaultViewController class]],
            @"UnityDefaultViewController should be root controller");

        [(UnityDefaultViewController*)self.rootViewController updateSupportedOrientations];
        [UIViewController attemptRotationToDeviceOrientation];

        // note that we could have a big if-else block and call it once at the end of the method
        // but it was deemed too ugly
        UnityOrientationRequestWasCommitted();
        return;
    }

    // normally we want to call attemptRotationToDeviceOrientation to tell iOS that we changed orientation constraints
    // but if the current orientation is disabled we need special processing, as iOS will simply ignore us
    //   the only good/robust way is to simply recreate "autorotating" view controller and transition to it if needed

    // please note that we want to trigger "orientation request" code path if we recreate autorotating view controller
    bool changeOrient = UnityHasOrientationRequest();

    // if we should recreate autorotating view controller - see below
    bool shouldTransferToNewAutorotVC = false;

    // first we check if we need to update orientations enabled for autorotation
    // this needs to be done *only* if we are to continue autorotating
    //   otherwise we will transition from this view controller
    //   and iOS will reread enabled orientations on next ViewController activation
    const bool autorot = UnityShouldAutorotate(), autorotChanged = UnityAutorotationStatusChanged();
    if (UnityShouldChangeAllowedOrientations() && autorot)
    {
        NSUInteger rootOrient = 1 << UIViewControllerInterfaceOrientation(self.rootViewController);
        if (!autorotChanged && (rootOrient & EnabledAutorotationInterfaceOrientations()))
        {
            // instead of querying unity for supported orientations, we keep them in the default (autorotating) controller
            // this is THE place where we should update those (otherwise, filled on creation)
            if ([self.rootViewController isKindOfClass: [UnityDefaultViewController class]])
                [(UnityDefaultViewController*)self.rootViewController updateSupportedOrientations];

            // if we are currently autorotating AND changed allowed orientations while keeping current interface orientation allowed:
            // we can simply trigger attemptRotationToDeviceOrientation and we are done
            // please note that this can happen when current *device* orientation is disabled (and we want to enable it)
            [UIViewController attemptRotationToDeviceOrientation];
        }
        else
        {
            // otherwise we recreate default autorotating view controller
            // to spell it out, we recreate if:
            // - we continue doing autorotation, but the current orientation is disabled
            // - we were not autorotating but start now
            shouldTransferToNewAutorotVC = true;
            changeOrient = true;
        }
    }

    if (changeOrient)
    {
        // on some devices like iPhone XS layoutSubview is not called when transitioning from different orientations with the same resolution
        // therefore forcing layoutSubview on all orientation changes
        [_unityView setNeedsLayout];

        if (autorot)
        {
            // just started autorotating or decided to recreate autorot controller above
            if (autorotChanged || shouldTransferToNewAutorotVC)
                [self transitionToViewController: [self createUnityViewControllerDefault]];
            [UIViewController attemptRotationToDeviceOrientation];
        }
        else
        {
            UIInterfaceOrientation requestedOrient = ConvertToIosScreenOrientation((ScreenOrientation)UnityRequestedScreenOrientation());
            // on one hand orientInterface: should be perfectly fine "reorienting" to current orientation
            // in reality, ios might be confused by transitionToViewController: shenanigans coupled with "nothing have changed actually"
            // as an example: prior to ios12 that might result in status bar going "bad" (becoming transparent)
            // NOTE: if we have switched from autorotation to fixed orientation, we must do the switch to pick new VC
            if (_curOrientation != requestedOrient || autorotChanged)
                [self orientInterface: requestedOrient];
        }
    }

    UnityOrientationRequestWasCommitted();
}

- (void)orientInterface:(UIInterfaceOrientation)orient
{
    if (self.engineLoadState >= kUnityEngineLoadStateAppReady)
        UnityFinishRendering();

    [KeyboardDelegate StartReorientation];

    [CATransaction begin];
    {
        UIInterfaceOrientation oldOrient = _curOrientation;
        UIInterfaceOrientation newOrient = orient;

        [self interfaceWillChangeOrientationTo: newOrient];
        // TODO: we should handle _shouldUseDefaultViewControllerForFixedOrientations = YES
        // TODO: though i am not sure how this should be done
        // TODO: currently in normal orientation processing this will not be called when _shouldUseDefaultViewControllerForFixedOrientations is true
        // TODO: but native plugins can still call it directly
        [self transitionToViewController: [self createRootViewControllerForOrientation: newOrient]];
        [self interfaceDidChangeOrientationFrom: oldOrient];

#if !PLATFORM_VISIONOS
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wdeprecated-declarations"
        // this was deprecated in favor of [UIWindowScene setInterfaceOrientation:]
        // this API works perfectly fine for now, so we use it until we rewrite/modernize trampoline to be Scene-based
        [UIApplication sharedApplication].statusBarOrientation = orient;
    #pragma clang diagnostic pop
#endif
    }
    [CATransaction commit];

    [KeyboardDelegate FinishReorientation];
}

- (void)orientUnity:(UIInterfaceOrientation)orient
{
    [self orientInterface: orient];
}

@end

#endif

extern "C" void UnityNotifyHideHomeButtonChange()
{
    [GetAppController() notifyHideHomeButtonChange];
}

extern "C" void UnityNotifyDeferSystemGesturesChange()
{
    [GetAppController() notifyDeferSystemGesturesChange];
}
