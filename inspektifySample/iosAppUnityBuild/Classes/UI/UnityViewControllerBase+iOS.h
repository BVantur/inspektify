#pragma once

@interface UnityViewControllerBase (iOS)
- (BOOL)shouldAutorotate;

- (BOOL)prefersStatusBarHidden;
- (UIStatusBarStyle)preferredStatusBarStyle;
@end

// we have several ViewController implementations, to better handle all the possible scenarios of setting orientation
// long long ago we had just once controller, handling everything
// then we have found that iOS does not "like" this, or rather it might behave in a way we don't want
//   thus we split into one "default" view controller (handling orientation)
//   and then per-orientation "fixed orientation" view controllers
// when we were changing orientation forcibly (or autorotation constraints) we were changing view controller to another one
// it turned out later that sometimes (on some devices) iOS 17 does not like this as in it could error/hang
//   probably because it ended up having two orientation "processes": one from old controller and another from new one
//   for example sometimes it was printing the error message: "A new orientation transaction token is being requested while a valid one already exists"
// thus we are returning back to using just one view controller (on iOS 16+)
// this makes sense especially since in iOS 16 special api to poke iOS about changing autorotation constraint was added
// so we can use it directly (and hope for the best) instead of doing this dance of recreating view controllers
// to support both old and new way without introducing too much copy-paste code, we will tweak
//   UnityDefaultViewController to include "forced orientation" field that can be used in determining supported orientations
// should we handle fixed orientation in UnityDefaultViewController is defined by the app (as in, AppController will decide when creating root view controller)
//   as we don't want to push the decision that low-level

// view controllers constrained to one orientation

@interface UnityFixedOrientationViewController : UnityViewControllerBase

- (instancetype)initWithOrientation:(UIInterfaceOrientation)interfaceOrientation;

@end

@interface UnityPortraitOnlyViewController : UnityFixedOrientationViewController
@end
@interface UnityPortraitUpsideDownOnlyViewController : UnityFixedOrientationViewController
@end
@interface UnityLandscapeLeftOnlyViewController : UnityFixedOrientationViewController
@end
@interface UnityLandscapeRightOnlyViewController : UnityFixedOrientationViewController
@end

// this is default view controller implementation (autorotation enabled)
// it also has the ability to support fixed orientation; this will be enabled by AppController when creating view controller on iOS 16+

@interface UnityDefaultViewController : UnityViewControllerBase

- (instancetype)initShouldHandleFixedOrientation:(BOOL)shouldHandleFixedOrientation;

// we have well defined points where we should update supported orientations:
// on init and inside [UnityAppController checkOrientationRequest]
//   note that pre iOS 16 the latter will recreate default view controller if supported orientations conflict with the current orientation
//   on iOS 16+ we are keeping one view controller and let it handle supported orientations by itself
// this is done as opposed to [UnityDefaultViewController supportedInterfaceOrientations] poking unity for that
//   as this might happen in "random" places, out-of-sync with our handling of "orientation constraints were changed at unity side"
- (void)updateSupportedOrientations;

@property (nonatomic,readonly) BOOL willHandleFixedOrientation;
@end

NSUInteger EnabledAutorotationInterfaceOrientations();
