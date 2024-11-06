// DO NOT PUT #pragma once or include guard check here
// This header is designed to be able to be included multiple times

// This header is used to temporary undefine iOS/tvOS platform definitions in case there is a naming conflict with
// 3rd party code. Please make sure to always use this paired with the RedefinePlatforms.h header.
// Note: PLATFORM_IOS and PLATFORM_TVOS are redefined in 
// /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include/mach-o/loader.h
//
//
// ex.
//
// #include "UndefinePlatforms.h"
// #include "Some3rdParty.h"
// #include "RedefinePlatforms.h"

#ifdef DETAIL__PLATFORMS_HAD_BEEN_UNDEFINED_BY_UNDEFINEPLATFORMS_H
#error "UndefinePlatforms.h has been included more than once or RedefinePlatforms.h is missing."
#endif

#if PLATFORM_IOS
    #define DETAIL__TEMP_PLATFORM_IOS_WAS_1
#endif
#undef PLATFORM_IOS

#if PLATFORM_TVOS
    #define DETAIL__TEMP_PLATFORM_TVOS_WAS_1
#endif
#undef PLATFORM_TVOS

#if PLATFORM_VISIONOS
#define DETAIL__TEMP_PLATFORM_VISIONOS_WAS_1
#endif
#undef PLATFORM_VISIONOS

#define DETAIL__PLATFORMS_HAD_BEEN_UNDEFINED_BY_UNDEFINEPLATFORMS_H
