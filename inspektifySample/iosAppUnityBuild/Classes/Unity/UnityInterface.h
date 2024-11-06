#pragma once

#include <stdint.h>
#include <stdarg.h>

#include "UnityForwardDecls.h"
#include "UnityRendering.h"

#ifdef __OBJC__
#import "Foundation/Foundation.h"
#endif

// unity plugin functions

// audio plugin api
typedef int     (*UnityPluginGetAudioEffectDefinitionsFunc)(struct UnityAudioEffectDefinition*** descptr);

// OLD rendering plugin api (will become obsolete soon)
typedef void    (*UnityPluginSetGraphicsDeviceFunc)(void* device, int deviceType, int eventType);
typedef void    (*UnityPluginRenderMarkerFunc)(int marker);

// new rendering plugin api
typedef void    (*UnityPluginLoadFunc)(struct IUnityInterfaces* unityInterfaces);
typedef void    (*UnityPluginUnloadFunc)(void);


// log handler function
#ifdef __cplusplus
typedef bool (*LogEntryHandler)(LogType logType, const char* log, va_list list);
#endif

//
// these are functions referenced in trampoline and implemented in unity player lib
//

#ifdef __cplusplus
extern "C" {
#endif

// life cycle management

void    UnityInitRuntime(int argc, char* argv[]);
void    UnityInitApplicationNoGraphics(const char* appPathName);
void    UnityUnloadApplication(void);
void    UnityQuitApplication(int exitCode);
void    UnityInitApplicationGraphics(void);
void    UnityCleanup(void);
void    UnityLoadApplication(void);
void    UnityLoadApplicationFromSceneLessState(void);
void    UnityPlayerLoop(void);              // normal player loop
void    UnityBatchPlayerLoop(void);         // batch mode like player loop, without rendering (usable for background processing)
void    UnitySetPlayerFocus(int focused);   // send OnApplicationFocus() message to scripts
void    UnityLowMemory(void);
void    UnityPause(int pause);
void    UnitySuppressPauseMessage(void);
int     UnityIsPaused(void);                // 0 if player is running, 1 if paused
void    UnityWillPause(void);               // send the message that app will pause
void    UnityWillResume(void);              // send the message that app will resume
void    UnityDeliverUIEvents(void);         // unity processing impacting UI will be called in there
void    UnityWaitForFrame();

void    UnityInputProcess(void);            // no longer used, will be removed soon


// rendering

int     UnityGetRenderingAPI(void);
void    UnityFinishRendering(void);
void    UnityDisplayLinkCallback(double /*machAbsoluteTimeSeconds*/); // argument is not used anymore

// controling player internals

// TODO: needs some cleanup
void    UnitySetAudioSessionActive(int active);
void    UnityGLInvalidateState(void);
void    UnityReloadResources(void);
int     UnityIsCaptureScreenshotRequested(void);
void    UnityCaptureScreenshot(void);
void    UnitySendMessage(const char* obj, const char* method, const char* msg);
void    UnityUpdateMuteState(int mute);
void    UnityUpdateAudioOutputState(void);
int     UnityShouldMuteOtherAudioSources(void);
int     UnityShouldPrepareForIOSRecording(void);
int     UnityIsAudioManagerAvailableAndEnabled(void);

#ifdef __cplusplus
void    UnitySetLogEntryHandler(LogEntryHandler newHandler);
#endif


// plugins support

// WARNING: old UnityRegisterRenderingPlugin will become obsolete soon
void    UnityRegisterRenderingPlugin(UnityPluginSetGraphicsDeviceFunc setDevice, UnityPluginRenderMarkerFunc renderMarker);

void    UnityRegisterRenderingPluginV5(UnityPluginLoadFunc loadPlugin, UnityPluginUnloadFunc unloadPlugin) __attribute__((deprecated("Renamed to UnityRegisterPlugin", "UnityRegisterPlugin")));
void    UnityRegisterPlugin(UnityPluginLoadFunc loadPlugin, UnityPluginUnloadFunc unloadPlugin);
void    UnityRegisterAudioPlugin(UnityPluginGetAudioEffectDefinitionsFunc getAudioEffectDefinitions);


// resolution/orientation handling

void    UnityGetRenderingResolution(unsigned* w, unsigned* h);
void    UnityGetSystemResolution(unsigned* w, unsigned* h);

void    UnityRequestRenderingResolution(unsigned w, unsigned h);

int     UnityIsOrientationEnabled(unsigned /*ScreenOrientation*/ orientation);

int     UnityHasOrientationRequest(void);
int     UnityShouldAutorotate(void);
int     UnityAutorotationStatusChanged(void);
int     UnityShouldChangeAllowedOrientations(void);
int     UnityRequestedScreenOrientation(void); // returns ScreenOrientation
void    UnityOrientationRequestWasCommitted(void);

int     UnityReportResizeView(unsigned w, unsigned h, unsigned /*ScreenOrientation*/ contentOrientation);   // returns ScreenOrientation
void    UnityReportSafeAreaChange(float x, float y, float w, float h);
void    UnityReportBackbufferChange(UnityRenderBufferHandle colorBB, UnityRenderBufferHandle depthBB);
#if !PLATFORM_VISIONOS
float   UnityCalculateScalingFactorFromTargetDPI(UIScreen* screen);
#endif
void    UnityReportDisplayCutouts(const float* x, const float* y, const float* width, const float* height, int count);

// player settings

int     UnityDisableDepthAndStencilBuffers(void);
int     UnityUseAnimatedAutorotation(void);
int     UnityGetDesiredMSAASampleCount(int defaultSampleCount);
int     UnityGetSRGBRequested(void);
int     UnityGetWideColorRequested(void);
void    UnitySetEDRValues(float maxEDRValue, float currentEDRValue);
void    UnitySetHDRMode(int hdrMode);
int     UnityGetHDRModeRequested(void);
int     UnityGetShowActivityIndicatorOnLoading(void);
int     UnityGetAccelerometerFrequency(void);
int     UnityGetTargetFPS(void);
int     UnityGetUseCustomAppBackgroundBehavior(void);
int     UnityGetDeferSystemGesturesTopEdge(void);
int     UnityGetDeferSystemGesturesBottomEdge(void);
int     UnityGetDeferSystemGesturesLeftEdge(void);
int     UnityGetDeferSystemGesturesRightEdge(void);
int     UnityGetHideHomeButton(void);
int     UnityMetalFramebufferOnly(void);
int     UnityMetalMemorylessDepth(void);
int     UnityPreserveFramebufferAlpha(void);
void    UnitySetTargetFPS(int targetFPS);
void    UnitySetAbsoluteURL(const char* url);

// native events

void    UnityInvalidateDisplayDataCache(void* screen);
void    UnityUpdateDisplayListCache(void** screens, int screenCount);

// profiler

void*   UnityCreateProfilerCounter(const char*);
void    UnityDestroyProfilerCounter(void*);
void    UnityStartProfilerCounter(void*);
void    UnityEndProfilerCounter(void*);


// sensors

void    UnitySensorsSetGyroRotationRate(int idx, float x, float y, float z);
void    UnitySensorsSetGyroRotationRateUnbiased(int idx, float x, float y, float z);
void    UnitySensorsSetGravity(int idx, float x, float y, float z);
void    UnitySensorsSetUserAcceleration(int idx, float x, float y, float z);
void    UnitySensorsSetAttitude(int idx, float x, float y, float z, float w);
void    UnityDidAccelerate(float x, float y, float z, double timestamp);
void    UnitySetJoystickPosition(int joyNum, int axis, float pos);
int     UnityStringToKey(const char *name);
void    UnitySetKeyState(int key, int /*bool*/ state);
void    UnitySetKeyboardKeyState(int key, int /*bool*/ state);
void    UnitySendKeyboardCommand(UIKeyCommand* command, int code);

// UnityWebRequest handling

void    UnityReportWebRequestStatus(void* udata, int status);
void    UnityReportWebRequestNetworkError(void* udata, int status);
void    UnityReportWebRequestResponseHeader(void* udata, const char* headerName, const char* headerValue);
void    UnityReportWebRequestReceivedResponse(void* udata, unsigned expectedDataLength);
void    UnityReportWebRequestReceivedData(void* udata, const void* buffer, unsigned totalRead, unsigned expectedTotal);
void    UnityReportWebRequestFinishedLoadingData(void* udata);
void    UnityWebRequestRelease(void* udata);
void    UnityReportWebRequestSentData(void* udata, unsigned totalWritten, unsigned expectedTotal);
int     UnityReportWebRequestValidateCertificate(void* udata, const void* certificateData, unsigned certificateSize);
unsigned long long UnityWebRequestResetUpload(void* udata);
const void*   UnityWebRequestGetUploadData(void* udata, unsigned* bufferSize);
void    UnityWebRequestConsumeUploadData(void* udata, unsigned consumedSize);

// AVCapture

void    UnityReportAVCapturePermission(void* userData);
void    UnityDidCaptureVideoFrame(intptr_t tex, void* udata);

// logging override

#ifdef __cplusplus
} // extern "C"
#endif


// touches processing

#ifdef __cplusplus
extern "C" {
#endif

void    UnitySetViewTouchProcessing(UIView* view, int /*ViewTouchProcessing*/ processingPolicy);
void    UnityDropViewTouchProcessing(UIView* view);

void    UnitySendTouchesBegin(NSSet* touches, UIEvent* event);
void    UnitySendTouchesEnded(NSSet* touches, UIEvent* event);
void    UnitySendTouchesCancelled(NSSet* touches, UIEvent* event);
void    UnitySendTouchesMoved(NSSet* touches, UIEvent* event);
void    UnitySendTouchesUnfiltered(NSSet* touches, NSSet* allTouches);

void    UnityCancelTouches(void);

#ifdef __cplusplus
} // extern "C"
#endif


//
// these are functions referenced and implemented in trampoline
//

#ifdef __cplusplus
extern "C" {
#endif

// UnityAppController.mm
UIViewController*       UnityGetGLViewController(void);
UIView*                 UnityGetGLView(void);
UnityView*              UnityGetUnityView(void);
UIWindow*               UnityGetMainWindow(void);
enum ScreenOrientation  UnityCurrentOrientation(void);

// Unity/DisplayManager.mm
#if !PLATFORM_VISIONOS
float                   UnityScreenScaleFactor(UIScreen* screen);
#endif

// Unity/DeviceSettings.mm
int                     UnityDeviceHasCutout(void);

#ifdef __cplusplus
} // extern "C"
#endif


//
// these are functions referenced in unity player lib and implemented in trampoline
//

#ifdef __cplusplus
extern "C" {
#endif

// iPhone_Sensors.mm
void            UnityInitJoysticks(void);
void            UnityCoreMotionStart(void);
void            UnityCoreMotionStop(void);
void            UnityUpdateAccelerometerData(void);
int             UnityIsGyroEnabled(int idx);
int             UnityIsGyroAvailable(void);
void            UnityUpdateGyroData(void);
void            UnitySetGyroUpdateInterval(int idx, float interval);
float           UnityGetGyroUpdateInterval(int idx);
void            UnityUpdateJoystickData(void);
NSArray*        UnityGetJoystickNames(void);
void            UnityGetJoystickAxisName(int idx, int axis, char* buffer, int maxLen);
void            UnityGetNiceKeyname(int key, char* buffer, int maxLen);

// UnityAppController+Rendering.mm
void            UnityGfxInitedCallback(void);
void            UnityPresentContextCallback(struct UnityFrameStats const* frameStats);
void            UnityFramerateChangeCallback(int targetFPS);
void            UnitySelectRenderingAPI(void);
int             UnitySelectedRenderingAPI(void);
int             UnityIsBatchmode(void);

NSBundle*           UnityGetMetalBundle(void);
MTLDeviceRef        UnityGetMetalDevice(void);
MTLCommandQueueRef  UnityGetMetalCommandQueue(void);
int UnityCommandQueueMaxCommandBufferCountMTL(void);

// deprecated, soon to be removed
MTLCommandQueueRef  UnityGetMetalDrawableCommandQueue(void);

UnityRenderBufferHandle UnityBackbufferColor(void);
UnityRenderBufferHandle UnityBackbufferDepth(void);

int             UnityIsWideColorSupported(void);

// UI/ActivityIndicator.mm
void            UnityStartActivityIndicator(void);
void            UnityStopActivityIndicator(void);

// UI/Keyboard.mm
void            UnityKeyboard_Create(unsigned keyboardType, int autocorrection, int multiline, int secure, int alert, const char* text, const char* placeholder, int characterLimit);
void            UnityKeyboard_Show(void);
void            UnityKeyboard_Hide(void);
void            UnityKeyboard_GetRect(float* x, float* y, float* w, float* h);
void            UnityKeyboard_SetText(const char* text);
NSString*       UnityKeyboard_GetText(void);
int             UnityKeyboard_IsActive(void);
int             UnityKeyboard_Status(void);
void            UnityKeyboard_SetInputHidden(int hidden);
int             UnityKeyboard_IsInputHidden(void);
void            UnityKeyboard_SetCharacterLimit(unsigned characterLimit);

int             UnityKeyboard_CanGetSelection(void);
void            UnityKeyboard_GetSelection(int* location, int* range);
int             UnityKeyboard_CanSetSelection(void);
void            UnityKeyboard_SetSelection(int location, int range);

// UI/UnityViewControllerBase.mm
void            UnityNotifyHideHomeButtonChange(void);
void            UnityNotifyDeferSystemGesturesChange(void);


// Unity/AVCapture.mm
int             UnityGetAVCapturePermission(int captureTypes);
void            UnityRequestAVCapturePermission(int captureTypes, void* userData);

// Unity/CameraCapture.mm
void            UnityEnumVideoCaptureDevices(void* udata, void(*callback)(void* udata, const char* name, int frontFacing, int autoFocusPointSupported, int kind, const int* resolutions, int resCount));
void*           UnityInitCameraCapture(int device, int w, int h, int fps, int isDepth, void* udata);
void            UnityStartCameraCapture(void* capture);
void            UnityPauseCameraCapture(void* capture);
void            UnityStopCameraCapture(void* capture);
void            UnityCameraCaptureExtents(void* capture, int* w, int* h);
void            UnityCameraCaptureReadToMemory(void* capture, void* dst, int w, int h);
int             UnityCameraCaptureVideoRotationDeg(void* capture);
int             UnityCameraCaptureVerticallyMirrored(void* capture);
int             UnityCameraCaptureSetAutoFocusPoint(void* capture, float x, float y);


// Unity/DeviceSettings.mm
const char*     UnityDeviceUniqueIdentifier(void);
const char*     UnityVendorIdentifier(void);
const char*     UnityAdIdentifier(void);
int             UnityAdTrackingEnabled(void);
int             UnityGetLowPowerModeEnabled(void);
int             UnityGetWantsSoftwareDimming(void);
void            UnitySetWantsSoftwareDimming(int enabled);
int             UnityGetIosAppOnMac(void);
const char*     UnityDeviceName(void);
const char*     UnitySystemName(void);
const char*     UnitySystemVersion(void);
const char*     UnityDeviceModel(void);
int             UnityDeviceCPUCount(void);
int             UnityGetPhysicalMemory(void);
int             UnityDeviceGeneration(void);
float           UnityDeviceDPI(void);
const char*     UnitySystemLanguage(void);
int             UnityDeviceSupportsUpsideDown(void);

// Unity/DisplayManager.mm
void            UnityActivateScreenForRendering(void* nativeDisplay);
void            UnityStartFrameRendering(void);
void            UnityDestroyUnityRenderSurfaces(void);
int             UnityMainScreenRefreshRate(void);
void            UnitySetBrightness(float brightness);
float           UnityGetBrightness(void);

// Unity/Filesystem.mm
const char*     UnityDataBundleDir(void);
void            UnitySetDataBundleDirWithBundleId(const char * bundleId);
const char*     UnityDocumentsDir(void);
const char*     UnityLibraryDir(void);
const char*     UnityCachesDir(void);
int             UnityUpdateNoBackupFlag(const char* path, int setFlag); // Returns 1 if successful, otherwise 0

// Unity/WWWConnection.mm
void*           UnityStartWWWConnectionGet(void* udata, const void* headerDict, const char* url);
void*           UnityStartWWWConnectionPost(void* udata, const void* headerDict, const char* url, const void* data, unsigned length);
void            UnityDestroyWWWConnection(void* connection);
void            UnityShouldCancelWWW(const void* connection);

// Unity/FullScreenVideoPlayer.mm
int             UnityIsFullScreenPlaying(void);
void            TryResumeFullScreenVideo(void);

//Apple TV Remote
int         UnityGetAppleTVRemoteAllowExitToMenu(void);
void        UnitySetAppleTVRemoteAllowExitToMenu(int val);
int         UnityGetAppleTVRemoteAllowRotation(void);
void        UnitySetAppleTVRemoteAllowRotation(int val);
int         UnityGetAppleTVRemoteReportAbsoluteDpadValues(void);
void        UnitySetAppleTVRemoteReportAbsoluteDpadValues(int val);
int         UnityGetAppleTVRemoteTouchesEnabled(void);
void        UnitySetAppleTVRemoteTouchesEnabled(int val);

// Unity/UnityReplayKit.mm
void         UnityShouldCreateReplayKitOverlay(void);

// Runtime analytics
void UnitySendEmbeddedLaunchEvent(int launchType); // Tracks events when application is launched from native host app (Unity as a Library)

#ifdef __cplusplus
} // extern "C"
#endif


#ifdef __OBJC__
// This is basically a wrapper for [NSString UTF8String] with additional strdup.
//
// Apparently multiple calls on UTF8String will leak memory (NSData objects) that are collected
// only when @autoreleasepool is exited. This function serves as documentation for this and as a
// handy wrapper.
inline char* AllocCString(NSString* value)
{
    if (value == nil)
        return 0;

    const char* str = [value UTF8String];
    return str ? strdup(str) : 0;
}

#endif
