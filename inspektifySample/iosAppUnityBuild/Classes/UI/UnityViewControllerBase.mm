#import "UnityViewControllerBase.h"
#import "UnityAppController.h"
#import "UnityAppController+ViewHandling.h"

#include "OrientationSupport.h"


@implementation UnityViewControllerBase

@synthesize notificationDelegate = _notificationDelegate;

- (id)init
{
    if ((self = [super init]))
        self.modalPresentationStyle = UIModalPresentationFullScreen;
    return self;
}

- (void)viewWillLayoutSubviews
{
    [super viewWillLayoutSubviews];
    [_notificationDelegate onViewWillLayoutSubviews];
}

- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    [_notificationDelegate onViewDidLayoutSubviews];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear: animated];
    [_notificationDelegate onViewDidDisappear: animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear: animated];
    [_notificationDelegate onViewWillDisappear: animated];
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear: animated];
    [_notificationDelegate onViewDidAppear: animated];
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear: animated];
    [_notificationDelegate onViewWillAppear: animated];
}

@end

UnityViewControllerBase* AllocUnityDefaultViewController()
{
    return [UnityDefaultViewController alloc];
}

#if UNITY_SUPPORT_ROTATION
UnityViewControllerBase* AllocUnitySingleOrientationViewController(UIInterfaceOrientation orient)
{
    switch (orient)
    {
        case UIInterfaceOrientationPortrait:            return [UnityPortraitOnlyViewController alloc];
        case UIInterfaceOrientationPortraitUpsideDown:  return [UnityPortraitUpsideDownOnlyViewController alloc];
        case UIInterfaceOrientationLandscapeLeft:       return [UnityLandscapeLeftOnlyViewController alloc];
        case UIInterfaceOrientationLandscapeRight:      return [UnityLandscapeRightOnlyViewController alloc];

        default:                                        assert(false && "bad UIInterfaceOrientation provided");
    }
    return nil;
}

#endif

UnityViewControllerBase* AllocUnityViewController()
{
#if UNITY_SUPPORT_ROTATION
    if (UnityShouldAutorotate())
        return AllocUnityDefaultViewController();

    UIInterfaceOrientation orient = ConvertToIosScreenOrientation((ScreenOrientation)UnityRequestedScreenOrientation());
    return AllocUnitySingleOrientationViewController(orient);
#else
    return AllocUnityDefaultViewController();
#endif
}
