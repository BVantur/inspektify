#import <Foundation/Foundation.h>

typedef void (^ShakeCallback)(void);

@interface ShakeDetektorIOS : NSObject
- (void)enableShakeDetektorWithCallback:(ShakeCallback _Nonnull)callback;
@end
