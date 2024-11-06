#include "AVCapture.h"

#if !UNITY_TRAMPOLINE_IN_USE
// in trampoline this is declared in UnityInterface.h
extern "C" void UnityReportAVCapturePermission(void* userData);
#endif

#include <AVFoundation/AVFoundation.h>


static NSString* MediaTypeFromEnum(int captureType)
{
    if (captureType == avAudioCapture)
        return AVMediaTypeAudio;
    else if (captureType == avVideoCapture)
        return AVMediaTypeVideo;
    return nil;
}

extern "C" int UnityGetAVCapturePermission(int captureType)
{
    NSString* mediaType = MediaTypeFromEnum(captureType);
    if (mediaType == nil)
        return avCapturePermissionDenied;

#if PLATFORM_OSX || ((PLATFORM_IOS || PLATFORM_VISIONOS) && (UNITY_USES_WEBCAM || UNITY_USES_MICROPHONE))
    NSInteger status = AVAuthorizationStatusAuthorized;
    status = [AVCaptureDevice authorizationStatusForMediaType: mediaType];

    if (status == AVAuthorizationStatusNotDetermined)
        return avCapturePermissionUnknown;
    else if (status == AVAuthorizationStatusAuthorized)
        return avCapturePermissionGranted;
#endif

    return avCapturePermissionDenied;
}

extern "C" void UnityRequestAVCapturePermission(int captureType, void* userData)
{
#if PLATFORM_OSX || ((PLATFORM_IOS || PLATFORM_VISIONOS) && (UNITY_USES_WEBCAM || UNITY_USES_MICROPHONE))
    NSString* mediaType = MediaTypeFromEnum(captureType);
    if (mediaType == nil)
        return;

    [AVCaptureDevice requestAccessForMediaType: mediaType completionHandler:^(BOOL granted) {
        UnityReportAVCapturePermission(userData);
    }];
#endif
}
