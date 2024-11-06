#pragma once

// use this macro to encode unity version into an integer
// numbers generated this way can be compared numerically to check which version is newer/older
#define MAKE_UNITY_VERSION(ver, maj, min) ((ver)*10000 + (maj)*100 + (min))

#if !defined(UNITY_VERSION_VER) || !defined(UNITY_VERSION_MAJ) || !defined(UNITY_VERSION_MIN)
    #error "UNITY_VERSION_VER, UNITY_VERSION_MAJ, UNITY_VERSION_MIN must be set in xcode project, something went wrong"
#endif

#define UNITY_VERSION MAKE_UNITY_VERSION(UNITY_VERSION_VER, UNITY_VERSION_MAJ, UNITY_VERSION_MIN)


//  * Before, we were having UNITY_X_Y_Z defines (we keep old ones present to not break old projects)
//  * Alas it had several issues:
//  *   we were using one digit for major/minor version, meaning that
//  *     UNITY_2019_3_13 = 2019313 was larger than UNITY_2020_2_0 = 202020
//  *   we were never forward porting minor version changes, so UNITY_2019_3_13 was not present in 2020
//  *     what is worse: UNITY_2019_3_13 would be absent in 2019.3.14
//  *
//  * We keep old defines around for backwards compatibility but we are forced to break direct numerical comparison

#define UNITY_4_2_0     MAKE_UNITY_VERSION(4,2,0)
#define UNITY_4_2_1     MAKE_UNITY_VERSION(4,2,1)
#define UNITY_4_2_2     MAKE_UNITY_VERSION(4,2,2)
#define UNITY_4_3_0     MAKE_UNITY_VERSION(4,3,0)
#define UNITY_4_3_1     MAKE_UNITY_VERSION(4,3,1)
#define UNITY_4_3_2     MAKE_UNITY_VERSION(4,3,2)
#define UNITY_4_3_3     MAKE_UNITY_VERSION(4,3,3)
#define UNITY_4_3_4     MAKE_UNITY_VERSION(4,3,4)
#define UNITY_4_5_0     MAKE_UNITY_VERSION(4,5,0)
#define UNITY_4_5_1     MAKE_UNITY_VERSION(4,5,1)
#define UNITY_4_5_2     MAKE_UNITY_VERSION(4,5,2)
#define UNITY_4_5_3     MAKE_UNITY_VERSION(4,5,3)
#define UNITY_4_6_0     MAKE_UNITY_VERSION(4,6,0)
#define UNITY_5_0_0     MAKE_UNITY_VERSION(5,0,0)
#define UNITY_5_1_0     MAKE_UNITY_VERSION(5,1,0)
#define UNITY_5_2_0     MAKE_UNITY_VERSION(5,2,0)
#define UNITY_5_3_0     MAKE_UNITY_VERSION(5,3,0)
#define UNITY_5_4_0     MAKE_UNITY_VERSION(5,4,0)
#define UNITY_5_5_0     MAKE_UNITY_VERSION(5,5,0)
#define UNITY_5_6_0     MAKE_UNITY_VERSION(5,6,0)
#define UNITY_2017_1_0  MAKE_UNITY_VERSION(2017,1,0)
#define UNITY_2017_2_0  MAKE_UNITY_VERSION(2017,2,0)
#define UNITY_2017_3_0  MAKE_UNITY_VERSION(2017,3,0)
#define UNITY_2018_1_0  MAKE_UNITY_VERSION(2018,1,0)
#define UNITY_2018_2_0  MAKE_UNITY_VERSION(2018,2,0)
#define UNITY_2018_3_0  MAKE_UNITY_VERSION(2018,3,0)
#define UNITY_2019_1_0  MAKE_UNITY_VERSION(2019,1,0)
#define UNITY_2019_2_0  MAKE_UNITY_VERSION(2019,2,0)
#define UNITY_2019_3_0  MAKE_UNITY_VERSION(2019,3,0)
#define UNITY_2020_1_0  MAKE_UNITY_VERSION(2020,1,0)
#define UNITY_2020_2_0  MAKE_UNITY_VERSION(2020,2,0)
