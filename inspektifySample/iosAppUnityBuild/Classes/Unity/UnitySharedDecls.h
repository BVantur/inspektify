#pragma once

// The contents of this file are used when building both Unity library and the trampoline. Do not change it.

// Classes/Unity/UnityForwardDecls
typedef enum ScreenOrientation
{
    orientationUnknown,

    portrait,
    portraitUpsideDown,
    landscapeLeft,
    landscapeRight,

    orientationCount,
}
ScreenOrientation;

// be aware that this enum is shared with unity implementation so you should absolutely not change it
typedef enum DeviceGeneration
{
    deviceUnknown            = 0,
    deviceiPhone3GS          = 3,
    deviceiPhone4            = 8,
    deviceiPodTouch4Gen      = 9,
    deviceiPad2Gen           = 10,
    deviceiPhone4S           = 11,
    deviceiPad3Gen           = 12,
    deviceiPhone5            = 13,
    deviceiPodTouch5Gen      = 14,
    deviceiPadMini1Gen       = 15,
    deviceiPad4Gen           = 16,
    deviceiPhone5C           = 17,
    deviceiPhone5S           = 18,
    deviceiPadAir1           = 19,
    deviceiPadMini2Gen       = 20,
    deviceiPhone6            = 21,
    deviceiPhone6Plus        = 22,
    deviceiPadMini3Gen       = 23,
    deviceiPadAir2           = 24,
    deviceiPhone6S           = 25,
    deviceiPhone6SPlus       = 26,
    deviceiPadPro1Gen        = 27,
    deviceiPadMini4Gen       = 28,
    deviceiPhoneSE1Gen       = 29,
    deviceiPadPro10Inch1Gen  = 30,
    deviceiPhone7            = 31,
    deviceiPhone7Plus        = 32,
    deviceiPodTouch6Gen      = 33,
    deviceiPad5Gen           = 34,
    deviceiPadPro2Gen        = 35,
    deviceiPadPro10Inch2Gen  = 36,
    deviceiPhone8            = 37,
    deviceiPhone8Plus        = 38,
    deviceiPhoneX            = 39,
    deviceiPhoneXS           = 40,
    deviceiPhoneXSMax        = 41,
    deviceiPhoneXR           = 42,
    deviceiPadPro11Inch      = 43,
    deviceiPadPro3Gen        = 44,
    deviceiPad6Gen           = 45,
    deviceiPadAir3Gen        = 46,
    deviceiPadMini5Gen       = 47,
    deviceiPhone11           = 48,
    deviceiPhone11Pro        = 49,
    deviceiPhone11ProMax     = 50,
    deviceiPodTouch7Gen      = 51,
    deviceiPad7Gen           = 52,
    deviceiPhoneSE2Gen       = 53,
    deviceiPadPro11Inch2Gen  = 54,
    deviceiPadPro4Gen        = 55,
    deviceiPhone12Mini       = 56,
    deviceiPhone12           = 57,
    deviceiPhone12Pro        = 58,
    deviceiPhone12ProMax     = 59,
    deviceiPad8Gen           = 60,
    deviceiPadAir4Gen        = 61,
    deviceiPad9Gen           = 62,
    deviceiPadMini6Gen       = 63,
    deviceiPhone13           = 64,
    deviceiPhone13Mini       = 65,
    deviceiPhone13Pro        = 66,
    deviceiPhone13ProMax     = 67,
    deviceiPadPro5Gen        = 68,
    deviceiPadPro11Inch3Gen  = 69,
    deviceiPhoneSE3Gen       = 70,
    deviceiPadAir5Gen        = 71,
    deviceiPhone14           = 72,
    deviceiPhone14Plus       = 73,
    deviceiPhone14Pro        = 74,
    deviceiPhone14ProMax     = 75,
    deviceiPadPro6Gen        = 76,
    deviceiPadPro11Inch4Gen  = 77,
    deviceiPad10Gen          = 78,
    deviceiPhone15           = 79,
    deviceiPhone15Plus       = 80,
    deviceiPhone15Pro        = 81,
    deviceiPhone15ProMax     = 82,
    deviceiPhone16           = 83,
    deviceiPhone16Plus       = 84,
    deviceiPhone16Pro        = 85,
    deviceiPhone16ProMax     = 86,

    deviceiPhoneUnknown     = 10001,
    deviceiPadUnknown       = 10002,
    deviceiPodTouchUnknown  = 10003,

    deviceAppleTV1Gen       = 1001,
    deviceAppleTVHD         = 1001,
    deviceAppleTV2Gen       = 1002,
    deviceAppleTV4K         = 1002,
    deviceAppleTV4K2Gen     = 1003,
    deviceAppleTV4K3Gen     = 1004,
}
DeviceGeneration;

// Classes/UI/SplashScreen.mm
#ifdef __cplusplus
struct OrientationMask
{
    bool portrait;
    bool portraitUpsideDown;
    bool landscapeLeft;
    bool landscapeRight;
};
#endif
