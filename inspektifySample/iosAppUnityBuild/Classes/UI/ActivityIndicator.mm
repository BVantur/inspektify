#include "ActivityIndicator.h"

static UIActivityIndicatorView* _activityIndicator = nil;

void ShowActivityIndicator(UIView* parent, int style)
{
    if (_activityIndicator != nil)
        return;

    if (style >= 0)
    {
        _activityIndicator = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle: (UIActivityIndicatorViewStyle)style];
#if !PLATFORM_VISIONOS
        _activityIndicator.contentScaleFactor = [UIScreen mainScreen].scale;
#endif
    }

    if (_activityIndicator != nil)
    {
        [parent addSubview: _activityIndicator];
        _activityIndicator.center = CGPointMake(parent.bounds.size.width / 2, parent.bounds.size.height / 2);
        [_activityIndicator startAnimating];
    }
}

void ShowActivityIndicator(UIView* parent)
{
    ShowActivityIndicator(parent, UnityGetShowActivityIndicatorOnLoading());
}

void HideActivityIndicator()
{
    if (_activityIndicator)
    {
        [_activityIndicator stopAnimating];
        [_activityIndicator removeFromSuperview];
        _activityIndicator = nil;
    }
}

extern "C" void UnityStartActivityIndicator()
{
    ShowActivityIndicator(UnityGetGLView());
}

extern "C" void UnityStopActivityIndicator()
{
    HideActivityIndicator();
}
