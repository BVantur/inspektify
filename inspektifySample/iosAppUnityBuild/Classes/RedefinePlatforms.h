// DO NOT PUT #pragma once or include guard check here
// This header is designed to be able to be included multiple times

// This header is used to redefine iOS/tvOS platforms after they were temporary undefined by UndefinePlatforms.h
// Please make sure to always use this paired with the UndefinePlatforms.h header.
// Note: PLATFORM_IOS and PLATFORM_TVOS are redefined in 
// /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include/mach-o/loader.h
//
// ex.
//
// #include "UndefinePlatforms.h"
// #include "Some3rdParty.h"
// #include "RedefinePlatforms.h"

#ifndef DETAIL__PLATFORMS_HAD_BEEN_UNDEFINED_BY_UNDEFINEPLATFORMS_H
    #error "RedefinePlatforms.h can only be used after UndefinePlatforms.h got included before."
#endif

#undef DETAIL__PLATFORMS_HAD_BEEN_UNDEFINED_BY_UNDEFINEPLATFORMS_H

#undef PLATFORM_IOS
#if defined(DETAIL__TEMP_PLATFORM_IOS_WAS_1)
    #undef DETAIL__TEMP_PLATFORM_IOS_WAS_1
    #define PLATFORM_IOS 1
#else
    #define PLATFORM_IOS 0
#endif

#undef PLATFORM_TVOS
#if defined(DETAIL__TEMP_PLATFORM_TVOS_WAS_1)
    #undef DETAIL__TEMP_PLATFORM_TVOS_WAS_1
    #define PLATFORM_TVOS 1
#else
    #define PLATFORM_TVOS 0
#endif

#undef PLATFORM_VISIONOS
#if defined(DETAIL__TEMP_PLATFORM_VISIONOS_WAS_1)
#undef DETAIL__TEMP_PLATFORM_VISIONOS_WAS_1
#define PLATFORM_VISIONOS 1
#else
#define PLATFORM_VISIONOS 0
#endif
