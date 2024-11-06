#if PLATFORM_IOS

#import "UnityViewControllerBase.h"
#import "UnityAppController.h"

#include "OrientationSupport.h"
#include "Keyboard.h"
#include "UnityView.h"
#include "PluginBase/UnityViewControllerListener.h"
#include "UnityAppController.h"
#include "UnityAppController+ViewHandling.h"
#include "Unity/ObjCRuntime.h"

// when orientation changes with animation, pause rendering for this long so resolution change happens during animation with less visual distortion
const NSTimeInterval REORIENTATION_RENDERING_PAUSE = 0.15;

// when returning from presenting UIViewController we might need to update app orientation to "correct" one, as we wont get rotation notification
@interface UnityAppController ()
- (void)updateAppOrientation:(UIInterfaceOrientation)orientation;
@end

#ifndef __IPHONE_16_0
@interface UIViewController ()
- (void)setNeedsUpdateOfSupportedInterfaceOrientations;
@end
#endif


@implementation UnityViewControllerBase (iOS)

- (BOOL)shouldAutorotate
{
    return YES;
}

- (BOOL)prefersStatusBarHidden
{
    static bool _PrefersStatusBarHidden = true;

    static bool _PrefersStatusBarHiddenInited = false;
    if (!_PrefersStatusBarHiddenInited)
    {
        NSNumber* hidden = [[[NSBundle mainBundle] infoDictionary] objectForKey: @"UIStatusBarHidden"];
        _PrefersStatusBarHidden = hidden ? [hidden boolValue] : YES;

        _PrefersStatusBarHiddenInited = true;
    }
    return _PrefersStatusBarHidden;
}

- (UIStatusBarStyle)preferredStatusBarStyle
{
    static UIStatusBarStyle _PreferredStatusBarStyle = UIStatusBarStyleDefault;

    static bool _PreferredStatusBarStyleInited = false;
    if (!_PreferredStatusBarStyleInited)
    {
        NSString* style = [[[NSBundle mainBundle] infoDictionary] objectForKey: @"UIStatusBarStyle"];
        if (style && [style isEqualToString: @"UIStatusBarStyleLightContent"])
            _PreferredStatusBarStyle = UIStatusBarStyleLightContent;
        if (style && [style isEqualToString: @"UIStatusBarStyleDarkContent"])
            _PreferredStatusBarStyle = UIStatusBarStyleDarkContent;

        _PreferredStatusBarStyleInited = true;
    }

    return _PreferredStatusBarStyle;
}

- (UIRectEdge)preferredScreenEdgesDeferringSystemGestures
{
    UIRectEdge res = UIRectEdgeNone;
    if (UnityGetDeferSystemGesturesTopEdge())
        res |= UIRectEdgeTop;
    if (UnityGetDeferSystemGesturesBottomEdge())
        res |= UIRectEdgeBottom;
    if (UnityGetDeferSystemGesturesLeftEdge())
        res |= UIRectEdgeLeft;
    if (UnityGetDeferSystemGesturesRightEdge())
        res |= UIRectEdgeRight;
    return res;
}

- (BOOL)prefersHomeIndicatorAutoHidden
{
    return UnityGetHideHomeButton();
}

@end

@implementation UnityDefaultViewController
{
    // these will be updated in one place where we "sync" UI side orientation handling to unity side
    NSUInteger _supportedOrientations;

    // this will be updated in one place where we "sync" UI side orientation handling to unity side
    UIInterfaceOrientation _fixedOrientation;

    // this indicates if we are asked to handle fixed orientation too - app should decide
    BOOL _willHandleFixedOrientation;
}

- (BOOL)willHandleFixedOrientation
{
    return _willHandleFixedOrientation;
}

- (void)readOrientationFromUnity
{
    if(UnityShouldAutorotate())
    {
        _fixedOrientation = UIInterfaceOrientationUnknown;
        _supportedOrientations = EnabledAutorotationInterfaceOrientations();
    }
    else
    {
        _fixedOrientation = ConvertToIosScreenOrientation((ScreenOrientation)UnityRequestedScreenOrientation());
        _supportedOrientations = (1 << _fixedOrientation);
    }
}

- (instancetype)initShouldHandleFixedOrientation:(BOOL)shouldHandleFixedOrientation
{
    if ((self = [super init]))
    {
        _willHandleFixedOrientation = shouldHandleFixedOrientation;
        NSAssert(UnityShouldAutorotate() || _willHandleFixedOrientation,
            @"UnityDefaultViewController should be used either if unity is set to autorotate, or if asked explicitly to handle fixed orientation");

        [self readOrientationFromUnity];
    }
    return self;
}

- (void)updateSupportedOrientations
{
    [self readOrientationFromUnity];

    if (@available(iOS 16.0, *))
        [self setNeedsUpdateOfSupportedInterfaceOrientations];
}

- (NSUInteger)supportedInterfaceOrientations
{
    return _supportedOrientations;
}

- (void)viewWillAppear:(BOOL)animated
{
    ScreenOrientation currentOrientation = UIViewControllerOrientation(self);
    [GetAppController() updateAppOrientation: ConvertToIosScreenOrientation(currentOrientation)];
    [super viewWillAppear: animated];
}

- (void)viewDidAppear:(BOOL)animated
{
    ScreenOrientation currentOrientation = UIViewControllerOrientation(self);
    [GetAppController() updateAppOrientation: ConvertToIosScreenOrientation(currentOrientation)];
    [super viewDidAppear: animated];
}

- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    // CODE ARCHEOLOGY: we were using UIViewControllerOrientation, but on showing view with "Requires full screen"
    // CODE ARCHEOLOGY:   we will get the size/orientation *already* set, and the rotation logic would break
    const ScreenOrientation curOrient = GetAppController().unityView.contentOrientation;
    const ScreenOrientation newOrient = OrientationAfterTransform(curOrient, [coordinator targetTransform]);

    // delay resolution change, ideally we want it to happen in the middle of rotation animation
    // we force rendering back upon completion, just in case transition happens sooner
    GetAppController().unityView.skipRendering = YES;
    [GetAppController().unityView performSelector: @selector(resumeRendering) withObject: nil afterDelay: REORIENTATION_RENDERING_PAUSE];

    // in case of presentation controller it will take control over orientations
    // so to avoid crazy corner cases, make default view controller to ignore "wrong" orientations
    // as they will come only in case of presentation view controller and will be reverted anyway
    // NB: we still want to pass message to super, we just want to skip unity-specific magic
    NSUInteger targetMask = 1 << ConvertToIosScreenOrientation(newOrient);
    if (([self supportedInterfaceOrientations] & targetMask) != 0)
    {
        [UIView setAnimationsEnabled: UnityUseAnimatedAutorotation() ? YES : NO];
        [KeyboardDelegate StartReorientation];

        [GetAppController() interfaceWillChangeOrientationTo: ConvertToIosScreenOrientation(newOrient)];

        [coordinator animateAlongsideTransition: nil completion:^(id<UIViewControllerTransitionCoordinatorContext> context) {
            [self.view setNeedsLayout];
            [GetAppController() interfaceDidChangeOrientationFrom: ConvertToIosScreenOrientation(curOrient)];

            [KeyboardDelegate FinishReorientation];
            [UIView setAnimationsEnabled: YES];
            GetAppController().unityView.skipRendering = NO;
        }];
    }
    [super viewWillTransitionToSize: size withTransitionCoordinator: coordinator];
}

@end

@interface UnityFixedOrientationViewController()
{
    UIInterfaceOrientation _fixedOrientation;
}

@end

@implementation UnityFixedOrientationViewController

- (instancetype)initWithOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    self = [super init];
    if (self)
    {
        _fixedOrientation = interfaceOrientation;
    }
    return self;
}

- (NSUInteger)supportedInterfaceOrientations
{
    return 1 << _fixedOrientation;
}

- (UIInterfaceOrientation)preferredInterfaceOrientationForPresentation
{
    return _fixedOrientation;
}

- (void)viewWillAppear:(BOOL)animated
{
    [GetAppController() updateAppOrientation: _fixedOrientation];
    [super viewWillAppear: animated];
}

- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    // Adding a call to notify about changed orientation. In iOS16 there was a runtime change where view controller
    // is not fully set up as soon as we make the view controller change in AppController at -transitionToViewController:.
    // And instead iOS calls this method, in other cases this method is not called. So we want to call
    // didTransitionToViewController here as this is the place where we get updated orientation.
    //
    // NB: Look for additional explanation at UnityAppController+ViewHandling.mm method -transitionToViewController: before
    // call to same method.
    [GetAppController() didTransitionToViewController: self fromViewController: self];

    [super viewWillTransitionToSize: size withTransitionCoordinator: coordinator];
}

@end

@implementation UnityPortraitOnlyViewController

- (instancetype)init
{
    self = [super initWithOrientation: UIInterfaceOrientationPortrait];
    return self;
}

@end

@implementation UnityPortraitUpsideDownOnlyViewController

- (instancetype)init
{
    self = [super initWithOrientation: UIInterfaceOrientationPortraitUpsideDown];
    return self;
}

@end

@implementation UnityLandscapeLeftOnlyViewController

- (instancetype)init
{
    self = [super initWithOrientation: UIInterfaceOrientationLandscapeLeft];
    return self;
}

@end

@implementation UnityLandscapeRightOnlyViewController

- (instancetype)init
{
    self = [super initWithOrientation: UIInterfaceOrientationLandscapeRight];
    return self;
}

@end

NSUInteger EnabledAutorotationInterfaceOrientations()
{
    NSUInteger ret = 0;

    if (UnityIsOrientationEnabled(portrait))
        ret |= (1 << UIInterfaceOrientationPortrait);
    if (UnityDeviceSupportsUpsideDown() && UnityIsOrientationEnabled(portraitUpsideDown))
        ret |= (1 << UIInterfaceOrientationPortraitUpsideDown);
    if (UnityIsOrientationEnabled(landscapeLeft))
        ret |= (1 << UIInterfaceOrientationLandscapeRight);
    if (UnityIsOrientationEnabled(landscapeRight))
        ret |= (1 << UIInterfaceOrientationLandscapeLeft);

    // Handling unexpected case where autorotation is on and all the orientations are off by defaulting to current orientation.
    // Previously we returned 0 and iOS were handling it by keeping orientation as is. From iOS16 behaviour changed and the bug was raised.
    // Either way iOS requires us to provide non 0 value to supportedInterfaceOrientations.
    if (ret == 0)
    {
        NSLog(@"[Error] All orientations are off for autorotation. Preventing crash by using current orientation.");
        ret = (1 << [GetAppController() interfaceOrientation]);
    }

    return ret;
}

#endif // PLATFORM_IOS
