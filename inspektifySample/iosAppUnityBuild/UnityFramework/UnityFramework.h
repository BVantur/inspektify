#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import <UnityFramework/UnityAppController.h>

// this is coming from mach-o/ldsyms.h
// we were including this header header here directly

// alas we were including <mach-o/ldsyms.h> directly in UnityFramework.h (for mach_header definition)
//   instead of doing forward declaration and using, say, void pointers in unity c-interface
// and this resulted in code in the wild that uses _mh_execute_header directly without this include
// now, with C++/ObjC++ modules support we end up in a funny situation,
// where we need to include UndefinePlatforms/RedefinePlatforms quoted which gives a warning
// thankfully, we can easily provide the definition of _mh_execute_header ourselves

typedef struct mach_header_64 MachHeader;
extern const struct mach_header_64 _mh_execute_header;

//! Project version number for UnityFramework.
FOUNDATION_EXPORT double UnityFrameworkVersionNumber;

//! Project version string for UnityFramework.
FOUNDATION_EXPORT const unsigned char UnityFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <UnityFramework/PublicHeader.h>

#pragma once

// important app life-cycle events
__attribute__ ((visibility("default")))
@protocol UnityFrameworkListener<NSObject>
@optional
- (void)unityDidUnload:(NSNotification*)notification;
- (void)unityDidQuit:(NSNotification*)notification;
@end

__attribute__ ((visibility("default")))
@interface UnityFramework : NSObject
{
}

- (UnityAppController*)appController;

- (UITextField*)keyboardTextField;

+ (UnityFramework*)getInstance;

- (void)setDataBundleId:(const char*)bundleId;

- (void)runUIApplicationMainWithArgc:(int)argc argv:(char*[])argv;
- (void)runEmbeddedWithArgc:(int)argc argv:(char*[])argv appLaunchOpts:(NSDictionary*)appLaunchOpts;

- (void)unloadApplication;
- (void)quitApplication:(int)exitCode;

- (void)registerFrameworkListener:(id<UnityFrameworkListener>)obj;
- (void)unregisterFrameworkListener:(id<UnityFrameworkListener>)obj;

- (void)showUnityWindow;
- (void)pause:(bool)pause;

- (void)setAbsoluteURL:(const char *)url;

- (void)setExecuteHeader:(const MachHeader*)header;
- (void)sendMessageToGOWithName:(const char*)goName functionName:(const char*)name message:(const char*)msg;

@end
