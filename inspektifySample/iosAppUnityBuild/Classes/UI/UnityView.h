#pragma once

@interface UnityRenderingView : UIView
{
}
+ (void)InitializeForAPI:(UnityRenderingAPI)api;
@end

@interface UnityView : UnityRenderingView
{
    @private ScreenOrientation _curOrientation;
    @private BOOL _shouldRecreateView;
    @private BOOL _viewIsRotating;
}

// we take scale factor into account because gl backbuffer size depends on it
- (id)initWithFrame:(CGRect)frame scaleFactor:(CGFloat)scale;
- (id)initWithFrame:(CGRect)frame;
- (id)initFromMainScreen;
- (void)resumeRendering;

// in here we will go through subviews and call onUnityUpdateViewLayout selector (if present)
// that allows to handle simple overlay child view layout without doing view controller magic
- (void)layoutSubviews;

- (void)recreateRenderingSurfaceIfNeeded;
- (void)recreateRenderingSurface;

// will match script-side Screen.orientation
@property (nonatomic, readonly) ScreenOrientation contentOrientation;
@property BOOL skipRendering;

@end

@interface UnityView (Deprecated)
- (void)recreateGLESSurfaceIfNeeded __deprecated_msg("use recreateRenderingSurfaceIfNeeded instead.");
- (void)recreateGLESSurface __deprecated_msg("use recreateRenderingSurface instead.");
@end

@interface UnityView (Keyboard)
- (void)processKeyboard;
@end

@interface UnityView (UnityAppController)
// if we know that unity view bounds have changed but need to update unity-side size/orientation immediately
// otherwise the update will be delayed to next layoutSubviews
- (void)boundsUpdated;
@end

#if PLATFORM_IOS || PLATFORM_VISIONOS
    #include "UnityView+iOS.h"
#elif PLATFORM_TVOS
    #include "UnityView+tvOS.h"
#endif

void ReportSafeAreaChangeForView(UIView* view);

// Computes safe area for a view in Unity coordinate system (origin of the view
// is bottom-left, as compared to standard top-left)
CGRect ComputeSafeArea(UIView* view);
CGSize GetCutoutToScreenRatio();
