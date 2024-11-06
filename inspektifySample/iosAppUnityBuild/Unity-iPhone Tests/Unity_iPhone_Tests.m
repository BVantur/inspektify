#import "Preprocessor.h"
#import <XCTest/XCTest.h>
#import <UnityFramework/UnityFramework.h>

@interface UnityAppController (RenderingForTest)
- (void)repaintDisplayLink;
@end

@interface UnityTest : XCTestCase

@end

@implementation UnityTest

- (void)testRunUnity
{
    XCTestExpectation *expectation = [self expectationWithDescription: @"testRunUnity"];

    __block bool running = true;

    id<UIApplicationDelegate> delegate = [(UIApplication*)[UIApplication sharedApplication] delegate];
    [delegate performSelector: @selector(setQuitHandler:) withObject:^{
        [expectation fulfill];
        running = false;
    }];

    // When Apple TV device doesn't have attached monitor or TV it doesn't run display link. So we force
    // player loop here.
#if PLATFORM_TVOS
    UnityAppController* unityApp = [(UIApplication*)[UIApplication sharedApplication] delegate];
    while (running)
    {
        // we need to call repaintDisplayLink instead of simple repaint to trigger UnityDisplayLinkCallback which will advance frame time internally
        [unityApp repaintDisplayLink];
        [[NSRunLoop mainRunLoop] runUntilDate: [NSDate dateWithTimeIntervalSinceNow: 0.001f]];
    }
#endif

    [self waitForExpectationsWithTimeout: 1000000 handler: nil];
}

@end
