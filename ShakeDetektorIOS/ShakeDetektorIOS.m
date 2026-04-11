#import "ShakeDetektorIOS.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>

static ShakeCallback _onShakeDetekted = nil;
static void (*_originalMotionEnded)(id, SEL, UIEventSubtype, UIEvent *) = NULL;

static void ShakeDetektorWindowMotionEnded(UIWindow *self, SEL _cmd, UIEventSubtype motion, UIEvent *event) {
    if (_originalMotionEnded) {
        _originalMotionEnded(self, _cmd, motion, event);
    }
    if (motion == UIEventSubtypeMotionShake && _onShakeDetekted != nil) {
        _onShakeDetekted();
    }
}

@implementation ShakeDetektorIOS

- (void)enableShakeDetektorWithCallback:(ShakeCallback _Nonnull)callback {
    _onShakeDetekted = callback;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = [UIWindow class];
        SEL sel = @selector(motionEnded:withEvent:);
        Method original = class_getInstanceMethod(cls, sel);

        // Save the original IMP (may be UIResponder's if UIWindow doesn't override it)
        _originalMotionEnded = (void (*)(id, SEL, UIEventSubtype, UIEvent *))method_getImplementation(original);

        // Add the method directly to UIWindow — avoids touching UIResponder's method table
        BOOL added = class_addMethod(cls, sel, (IMP)ShakeDetektorWindowMotionEnded, method_getTypeEncoding(original));
        if (!added) {
            // UIWindow already owns the method, replace its IMP in-place
            method_setImplementation(original, (IMP)ShakeDetektorWindowMotionEnded);
        }
    });
}

@end
