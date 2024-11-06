#pragma once

#import <Foundation/NSNotification.h>

// view changes on the main view controller

@protocol UnityViewControllerListener<NSObject>
@optional
- (void)viewWillLayoutSubviews:(NSNotification*)notification;
- (void)viewDidLayoutSubviews:(NSNotification*)notification;
- (void)viewWillDisappear:(NSNotification*)notification;
- (void)viewDidDisappear:(NSNotification*)notification;
- (void)viewWillAppear:(NSNotification*)notification;
- (void)viewDidAppear:(NSNotification*)notification;

- (void)interfaceWillChangeOrientation:(NSNotification*)notification;
- (void)interfaceDidChangeOrientation:(NSNotification*)notification;
@end

@protocol UnityViewControllerNotifications<NSObject>
@optional
- (void)onViewWillLayoutSubviews;
- (void)onViewDidLayoutSubviews;
- (void)onViewDidDisappear:(BOOL)animated;
- (void)onViewWillDisappear:(BOOL)animated;
- (void)onViewDidAppear:(BOOL)animated;
- (void)onViewWillAppear:(BOOL)animated;
@end

// this default delegate will send notifications for UnityViewControllerListener
@interface UnityViewControllerNotificationsDefaultSender : NSObject<UnityViewControllerNotifications>
- (void)onViewWillLayoutSubviews;
- (void)onViewDidLayoutSubviews;
- (void)onViewDidDisappear:(BOOL)animated;
- (void)onViewWillDisappear:(BOOL)animated;
- (void)onViewDidAppear:(BOOL)animated;
- (void)onViewWillAppear:(BOOL)animated;
@end


void UnityRegisterViewControllerListener(id<UnityViewControllerListener> obj);
void UnityUnregisterViewControllerListener(id<UnityViewControllerListener> obj);

extern "C" __attribute__((visibility("default"))) NSString* const kUnityViewWillLayoutSubviews;
extern "C" __attribute__((visibility("default"))) NSString* const kUnityViewDidLayoutSubviews;
extern "C" __attribute__((visibility("default"))) NSString* const kUnityViewWillDisappear;
extern "C" __attribute__((visibility("default"))) NSString* const kUnityViewDidDisappear;
extern "C" __attribute__((visibility("default"))) NSString* const kUnityViewWillAppear;
extern "C" __attribute__((visibility("default"))) NSString* const kUnityViewDidAppear;
extern "C" __attribute__((visibility("default"))) NSString* const kUnityInterfaceWillChangeOrientation;
extern "C" __attribute__((visibility("default"))) NSString* const kUnityInterfaceDidChangeOrientation;
