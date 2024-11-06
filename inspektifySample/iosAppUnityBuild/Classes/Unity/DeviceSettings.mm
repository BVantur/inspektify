#include <sys/types.h>
#include <sys/sysctl.h>

#include "UnityAppController.h"
#include "UnityView.h"
#include "DisplayManager.h"

// ad/vendor ids
#if UNITY_USES_IAD
#include <AdSupport/ASIdentifierManager.h>
static id QueryASIdentifierManager()
{
    NSBundle* bundle = [NSBundle bundleWithPath: @"/System/Library/Frameworks/AdSupport.framework"];
    if (bundle)
    {
        [bundle load];
        return [NSClassFromString(@"ASIdentifierManager") performSelector: @selector(sharedManager)];
    }

    return nil;
}

#endif

extern "C" const char* UnityAdIdentifier()
{
    static const char* _ADID = NULL;

#if UNITY_USES_IAD
    static const NSString* _ADIDNSString = nil;

    // ad id can be reset during app lifetime
    id manager = QueryASIdentifierManager();
    if (manager)
    {
        NSString* adid = [[manager performSelector: @selector(advertisingIdentifier)] UUIDString];
        // Do stuff to avoid UTF8String leaks. We still leak if ADID changes, but that shouldn't happen too often.
        if (![_ADIDNSString isEqualToString: adid])
        {
            _ADIDNSString = adid;
            free((void*)_ADID);
            _ADID = AllocCString(adid);
        }
    }
#endif

    return _ADID;
}

extern "C" int UnityGetLowPowerModeEnabled()
{
    return [NSProcessInfo processInfo].lowPowerModeEnabled ? 1 : 0;
}

extern "C" int UnityGetWantsSoftwareDimming()
{
#if !PLATFORM_TVOS && !PLATFORM_VISIONOS
    UIScreen* mainScreen = [UIScreen mainScreen];
    return mainScreen.wantsSoftwareDimming ? 1 : 0;
#else
    return 0;
#endif
}

extern "C" void UnitySetWantsSoftwareDimming(int enabled)
{
#if !PLATFORM_TVOS && !PLATFORM_VISIONOS
    UIScreen* mainScreen = [UIScreen mainScreen];
    mainScreen.wantsSoftwareDimming = enabled;
#endif
}

extern "C" int UnityGetIosAppOnMac()
{
    if (@available(iOS 14, tvOS 14, *))
        return [NSProcessInfo processInfo].iOSAppOnMac ? 1 : 0;
    return 0;
}

extern "C" int UnityAdTrackingEnabled()
{
    bool _AdTrackingEnabled = false;

#if UNITY_USES_IAD
    // ad tracking can be changed during app lifetime
    id manager = QueryASIdentifierManager();
    if (manager)
        _AdTrackingEnabled = [manager performSelector: @selector(isAdvertisingTrackingEnabled)];
#endif

    return _AdTrackingEnabled ? 1 : 0;
}

extern "C" const char* UnityVendorIdentifier()
{
    static const char*  _VendorID           = NULL;

    if (_VendorID == NULL)
        _VendorID = AllocCString([[UIDevice currentDevice].identifierForVendor UUIDString]);

    return _VendorID;
}

// UIDevice properties

#define QUERY_UIDEVICE_PROPERTY(FUNC, PROP)                                         \
    extern "C" const char* FUNC()                                                   \
    {                                                                               \
        static const char* value = NULL;                                            \
        if (value == NULL && [UIDevice instancesRespondToSelector:@selector(PROP)]) \
            value = AllocCString([UIDevice currentDevice].PROP);                    \
        return value;                                                               \
    }

QUERY_UIDEVICE_PROPERTY(UnityDeviceName, name)
QUERY_UIDEVICE_PROPERTY(UnitySystemName, systemName)
QUERY_UIDEVICE_PROPERTY(UnitySystemVersion, systemVersion)

#undef QUERY_UIDEVICE_PROPERTY

// hw info

extern "C" const char* UnityDeviceModel()
{
    static const char* _DeviceModel = NULL;

    if (_DeviceModel == NULL)
    {
        size_t size;
        ::sysctlbyname("hw.machine", NULL, &size, NULL, 0);

        char* model = (char*)::malloc(size + 1);
        ::sysctlbyname("hw.machine", model, &size, NULL, 0);
        model[size] = 0;

#if TARGET_OS_SIMULATOR
        if (!strncmp(model, "arm64", 5) || !strncmp(model, "x86_64", 6))
        {
            NSString* simModel = [[NSProcessInfo processInfo] environment][@"SIMULATOR_MODEL_IDENTIFIER"];
            if ([simModel length] > 0)
            {
                _DeviceModel = AllocCString(simModel);
                ::free(model);
                return _DeviceModel;
            }
        }
#endif

        _DeviceModel = AllocCString([NSString stringWithUTF8String: model]);
        ::free(model);
    }

    return _DeviceModel;
}

extern "C" int UnityDeviceCPUCount()
{
    static int _DeviceCPUCount = -1;

    if (_DeviceCPUCount <= 0)
    {
        // maybe would be better to use HW_AVAILCPU
        int     ctlName[]   = {CTL_HW, HW_NCPU};
        size_t  dataLen     = sizeof(_DeviceCPUCount);

        ::sysctl(ctlName, 2, &_DeviceCPUCount, &dataLen, NULL, 0);
    }
    return _DeviceCPUCount;
}

extern "C" int UnityGetPhysicalMemory()
{
    return (int)(NSProcessInfo.processInfo.physicalMemory / (1024ULL * 1024ULL));
}

// misc
extern "C" const char* UnitySystemLanguage()
{
    static const char* _SystemLanguage = NULL;

    if (_SystemLanguage == NULL)
    {
        NSArray* lang = [NSLocale preferredLanguages];
        if (lang.count > 0)
            _SystemLanguage = AllocCString(lang[0]);
    }

    return _SystemLanguage;
}

enum DeviceType : uint8_t
{
    deviceTypeUnknown = 0,
    iPhone = 1,
    iPad = 2,
    iPod = 3,
    AppleTV = 4
};

struct DeviceTableEntry
{
    DeviceType deviceType;
    uint8_t majorGen;
    uint8_t minorGenMin;
    uint8_t minorGenMax;
    DeviceGeneration device;
};

DeviceTableEntry DeviceTable[] =
{
    { iPhone, 2, 1, 1, deviceiPhone3GS },
    { iPhone, 3, 1, 3, deviceiPhone4 },
    { iPhone, 4, 1, 1, deviceiPhone4S },
    { iPhone, 5, 3, 4, deviceiPhone5C },
    { iPhone, 5, 1, 2, deviceiPhone5 },
    { iPhone, 6, 1, 2, deviceiPhone5S },
    { iPhone, 7, 2, 2, deviceiPhone6 },
    { iPhone, 7, 1, 1, deviceiPhone6Plus },
    { iPhone, 8, 1, 1, deviceiPhone6S },
    { iPhone, 8, 2, 2, deviceiPhone6SPlus },
    { iPhone, 8, 4, 4, deviceiPhoneSE1Gen },
    { iPhone, 9, 1, 1, deviceiPhone7 },
    { iPhone, 9, 3, 3, deviceiPhone7 },
    { iPhone, 9, 2, 2, deviceiPhone7Plus },
    { iPhone, 9, 4, 4, deviceiPhone7Plus },
    { iPhone, 10, 1, 1, deviceiPhone8 },
    { iPhone, 10, 4, 4, deviceiPhone8 },
    { iPhone, 10, 2, 2, deviceiPhone8Plus },
    { iPhone, 10, 5, 5, deviceiPhone8Plus },
    { iPhone, 10, 3, 3, deviceiPhoneX },
    { iPhone, 10, 6, 6, deviceiPhoneX },
    { iPhone, 11, 8, 8, deviceiPhoneXR },
    { iPhone, 11, 2, 2, deviceiPhoneXS },
    { iPhone, 11, 4, 4, deviceiPhoneXSMax },
    { iPhone, 11, 6, 6, deviceiPhoneXSMax },
    { iPhone, 12, 1, 1, deviceiPhone11 },
    { iPhone, 12, 3, 3, deviceiPhone11Pro },
    { iPhone, 12, 5, 5, deviceiPhone11ProMax },
    { iPhone, 12, 8, 8, deviceiPhoneSE2Gen },
    { iPhone, 13, 1, 1, deviceiPhone12Mini },
    { iPhone, 13, 2, 2, deviceiPhone12 },
    { iPhone, 13, 3, 3, deviceiPhone12Pro },
    { iPhone, 13, 4, 4, deviceiPhone12ProMax },
    { iPhone, 14, 4, 4, deviceiPhone13Mini },
    { iPhone, 14, 5, 5, deviceiPhone13 },
    { iPhone, 14, 2, 2, deviceiPhone13Pro },
    { iPhone, 14, 3, 3, deviceiPhone13ProMax },
    { iPhone, 14, 6, 6, deviceiPhoneSE3Gen },
    { iPhone, 14, 7, 7, deviceiPhone14 },
    { iPhone, 14, 8, 8, deviceiPhone14Plus },
    { iPhone, 15, 2, 2, deviceiPhone14Pro },
    { iPhone, 15, 3, 3, deviceiPhone14ProMax },
    { iPhone, 15, 4, 4, deviceiPhone15 },
    { iPhone, 15, 5, 5, deviceiPhone15Plus },
    { iPhone, 16, 1, 1, deviceiPhone15Pro },
    { iPhone, 16, 2, 2, deviceiPhone15ProMax },
    { iPhone, 17, 3, 3, deviceiPhone16 },
    { iPhone, 17, 4, 4, deviceiPhone16Plus },
    { iPhone, 17, 1, 1, deviceiPhone16Pro },
    { iPhone, 17, 2, 2, deviceiPhone16ProMax },

    { iPod, 4, 1, 1, deviceiPodTouch4Gen },
    { iPod, 5, 1, 1, deviceiPodTouch5Gen },
    { iPod, 7, 1, 1, deviceiPodTouch6Gen },
    { iPod, 9, 1, 1, deviceiPodTouch7Gen },

    { iPad, 2, 5, 7, deviceiPadMini1Gen },
    { iPad, 4, 4, 6, deviceiPadMini2Gen },
    { iPad, 4, 7, 9, deviceiPadMini3Gen },
    { iPad, 5, 1, 2, deviceiPadMini4Gen },
    { iPad, 11, 1, 2, deviceiPadMini5Gen },
    { iPad, 14, 1, 2, deviceiPadMini6Gen },
    { iPad, 2, 1, 4, deviceiPad2Gen },
    { iPad, 3, 1, 3, deviceiPad3Gen },
    { iPad, 3, 4, 6, deviceiPad4Gen },
    { iPad, 6, 11, 12, deviceiPad5Gen },
    { iPad, 7, 5, 6, deviceiPad6Gen },
    { iPad, 7, 11, 12, deviceiPad7Gen },
    { iPad, 12, 1, 2, deviceiPad9Gen },
    { iPad, 4, 1, 3, deviceiPadAir1 },
    { iPad, 5, 3, 4, deviceiPadAir2 },
    { iPad, 11, 3, 4, deviceiPadAir3Gen },
    { iPad, 6, 7, 8, deviceiPadPro1Gen },
    { iPad, 7, 1, 2, deviceiPadPro2Gen },
    { iPad, 6, 3, 4, deviceiPadPro10Inch1Gen },
    { iPad, 7, 3, 4, deviceiPadPro10Inch2Gen },
    { iPad, 8, 1, 4, deviceiPadPro11Inch },
    { iPad, 8, 9, 10, deviceiPadPro11Inch2Gen },
    { iPad, 13, 6, 7, deviceiPadPro11Inch3Gen },
    { iPad, 8, 5, 8, deviceiPadPro3Gen },
    { iPad, 8, 11, 12, deviceiPadPro4Gen },
    { iPad, 13, 10, 11, deviceiPadPro5Gen },
    { iPad, 11, 6, 7, deviceiPad8Gen },
    { iPad, 13, 1, 2, deviceiPadAir4Gen },
    { iPad, 13, 16, 17, deviceiPadAir5Gen },
    { iPad, 14, 5, 6, deviceiPadPro6Gen },
    { iPad, 14, 3, 4, deviceiPadPro11Inch4Gen },
    { iPad, 13, 18, 19, deviceiPad10Gen },


    { AppleTV, 5, 3, 3, deviceAppleTVHD },
    { AppleTV, 6, 2, 2, deviceAppleTV4K },
    { AppleTV, 11, 1, 1, deviceAppleTV4K2Gen },
    { AppleTV, 14, 1, 1, deviceAppleTV4K3Gen },
};

extern "C" int ParseDeviceGeneration(const char* model)
{
    DeviceType deviceType = deviceTypeUnknown;

    if (!strncmp(model, "iPhone", 6))
    {
        deviceType = iPhone;
        model += 6;
    }
    else if (!strncmp(model, "iPad", 4))
    {
        deviceType = iPad;
        model += 4;
    }
    else if (!strncmp(model, "iPod", 4))
    {
        deviceType = iPod;
        model += 4;
    }
    else if (!strncmp(model, "AppleTV", 7))
    {
        deviceType = AppleTV;
        model += 7;
    }

    char* endPtr;
    int majorGen = (int)strtol(model, &endPtr, 10);
    int minorGen = (int)strtol(endPtr + 1, &endPtr, 10);

    if (strlen(endPtr) == 0)
    {
        for (int i = 0; i < sizeof(DeviceTable) / sizeof(DeviceTable[0]); ++i)
        {
            if (deviceType != DeviceTable[i].deviceType)
                continue;
            if (majorGen != DeviceTable[i].majorGen)
                continue;
            if (minorGen < DeviceTable[i].minorGenMin || minorGen > DeviceTable[i].minorGenMax)
                continue;
            return DeviceTable[i].device;
        }
    }

    if (deviceType == iPhone)
        return deviceiPhoneUnknown;
    else if (deviceType == iPad)
        return deviceiPadUnknown;
    else if (deviceType == iPod)
        return deviceiPodTouchUnknown;

    return deviceUnknown;
}

extern "C" int UnityDeviceGeneration()
{
    static int _DeviceGeneration = deviceUnknown;

    if (_DeviceGeneration == deviceUnknown)
    {
        const char* model = UnityDeviceModel();
        _DeviceGeneration = ParseDeviceGeneration(model);
    }
    return _DeviceGeneration;
}

// Currently a manual process to add devices that have a cutout (notch). If you add one here you need to also update UnityView GetCutoutToScreenRatio()
extern "C" int UnityDeviceHasCutout()
{
    switch (UnityDeviceGeneration())
    {
        case deviceiPhoneX: case deviceiPhoneXS: case deviceiPhoneXSMax: case deviceiPhoneXR:
        case deviceiPhone11: case deviceiPhone11Pro: case deviceiPhone11ProMax:
        case deviceiPhone12: case deviceiPhone12Mini: case deviceiPhone12Pro: case deviceiPhone12ProMax:
        case deviceiPhone13: case deviceiPhone13Mini: case deviceiPhone13Pro: case deviceiPhone13ProMax:
        case deviceiPhone14: case deviceiPhone14Plus: case deviceiPhone14Pro: case deviceiPhone14ProMax:
        case deviceiPhone15: case deviceiPhone15Plus: case deviceiPhone15Pro: case deviceiPhone15ProMax:
        case deviceiPhone16: case deviceiPhone16Plus: case deviceiPhone16Pro: case deviceiPhone16ProMax:
            return 1;
        default:
            return 0;
    }
}

// Devices with a cutout do not support Portrait UpsideDown orientation.
extern "C" int UnityDeviceSupportsUpsideDown()
{
    return UnityDeviceHasCutout() ? 0 : 1;
}

extern "C" int UnityDeviceSupportedOrientations()
{
    int orientations = (1 << portrait) | (1 << landscapeLeft) | (1 << landscapeRight);
    if (UnityDeviceSupportsUpsideDown())
        orientations |= (1 << portraitUpsideDown);

    return orientations;
}

extern "C" int UnityDeviceIsForceTouchSupported()
{
    return UnityGetUnityView().traitCollection.forceTouchCapability == UIForceTouchCapabilityAvailable;
}

extern "C" int UnityDeviceIsStylusTouchSupported()
{
    const int deviceGen = UnityDeviceGeneration();
    return (deviceGen == deviceiPadPro1Gen ||
        deviceGen == deviceiPadPro10Inch1Gen ||
        deviceGen == deviceiPadPro2Gen ||
        deviceGen == deviceiPadPro10Inch2Gen ||
        deviceGen == deviceiPadPro11Inch ||
        deviceGen == deviceiPadPro3Gen ||
        deviceGen == deviceiPad6Gen) ? 1 : 0;
}

extern "C" int UnityDeviceCanShowWideColor()
{
#if PLATFORM_VISIONOS
    return 1;
#else
    return UnityGetUnityView().traitCollection.displayGamut == UIDisplayGamutP3;
#endif
}

extern "C" float UnityDeviceDPI()
{
    static float _DeviceDPI = -1.0f;

    if (_DeviceDPI < 0.0f)
    {
        switch (UnityDeviceGeneration())
        {
            // iPhone
            case deviceiPhone3GS:
                _DeviceDPI = 163.0f; break;
            case deviceiPhone4:
            case deviceiPhone4S:
            case deviceiPhone5:
            case deviceiPhone5C:
            case deviceiPhone5S:
            case deviceiPhone6:
            case deviceiPhone6S:
            case deviceiPhoneSE1Gen:
            case deviceiPhone7:
            case deviceiPhone8:
            case deviceiPhoneXR:
            case deviceiPhone11:
            case deviceiPhoneSE2Gen:
            case deviceiPhoneSE3Gen:
                _DeviceDPI = 326.0f; break;
            case deviceiPhone6Plus:
            case deviceiPhone6SPlus:
            case deviceiPhone7Plus:
            case deviceiPhone8Plus:
                _DeviceDPI = 401.0f; break;
            case deviceiPhoneX:
            case deviceiPhoneXS:
            case deviceiPhoneXSMax:
            case deviceiPhone11Pro:
            case deviceiPhone11ProMax:
            case deviceiPhone12ProMax:
            case deviceiPhone13ProMax:
            case deviceiPhone14Plus:
                _DeviceDPI = 458.0f; break;
            case deviceiPhone12:
            case deviceiPhone12Pro:
            case deviceiPhone13:
            case deviceiPhone13Pro:
            case deviceiPhone14:
            case deviceiPhone14Pro:
            case deviceiPhone14ProMax:
            case deviceiPhone15:
            case deviceiPhone15Plus:
            case deviceiPhone15Pro:
            case deviceiPhone15ProMax:
            case deviceiPhone16:
            case deviceiPhone16Plus:
            case deviceiPhone16Pro:
            case deviceiPhone16ProMax:
                _DeviceDPI = 460.0f; break;
            case deviceiPhone12Mini:
            case deviceiPhone13Mini:
                _DeviceDPI = 476.0f; break;

            // iPad
            case deviceiPad2Gen:
                _DeviceDPI = 132.0f; break;
            case deviceiPad3Gen:
            case deviceiPad4Gen:        // iPad retina
            case deviceiPadAir1:
            case deviceiPadAir2:
            case deviceiPadAir3Gen:
            case deviceiPadPro1Gen:
            case deviceiPadPro10Inch1Gen:
            case deviceiPadPro2Gen:
            case deviceiPadPro10Inch2Gen:
            case deviceiPad5Gen:
            case deviceiPad6Gen:
            case deviceiPadPro11Inch:
            case deviceiPadPro3Gen:
            case deviceiPadPro11Inch2Gen:
            case deviceiPadPro11Inch3Gen:
            case deviceiPadPro4Gen:
            case deviceiPadPro5Gen:
            case deviceiPad8Gen:
            case deviceiPadAir4Gen:
            case deviceiPad9Gen:
            case deviceiPadAir5Gen:
                _DeviceDPI = 264.0f; break;
            case deviceiPad7Gen:
                _DeviceDPI = 326.0f; break;

            // iPad mini
            case deviceiPadMini1Gen:
                _DeviceDPI = 163.0f; break;
            case deviceiPadMini2Gen:
            case deviceiPadMini3Gen:
            case deviceiPadMini4Gen:
            case deviceiPadMini5Gen:
            case deviceiPadMini6Gen:
                _DeviceDPI = 326.0f; break;

            // iPod
            case deviceiPodTouch4Gen:
            case deviceiPodTouch5Gen:
            case deviceiPodTouch6Gen:
            case deviceiPodTouch7Gen:
                _DeviceDPI = 326.0f; break;

            // unknown (new) devices
            case deviceiPhoneUnknown:
                _DeviceDPI = 326.0f; break;
            case deviceiPadUnknown:
            case deviceiPadPro6Gen:
            case deviceiPadPro11Inch4Gen:
            case deviceiPad10Gen:
                _DeviceDPI = 264.0f; break;
            case deviceiPodTouchUnknown:
                _DeviceDPI = 326.0f; break;
        }

        // If we didn't find DPI, set it to "unknown" value.
        if (_DeviceDPI < 0.0f)
            _DeviceDPI = 0.0f;
    }

    return _DeviceDPI;
}

// device id with fallback for pre-ios7

extern "C" const char* UnityDeviceUniqueIdentifier()
{
    static const char* _DeviceID = NULL;

    if (_DeviceID == NULL)
        _DeviceID = UnityVendorIdentifier();

    return _DeviceID;
}
