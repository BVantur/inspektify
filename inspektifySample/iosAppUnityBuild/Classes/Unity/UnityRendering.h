#pragma once

#include <stdint.h>

#ifdef __OBJC__
@class CAMetalLayer;
@protocol CAMetalDrawable;
@protocol MTLDrawable;
@protocol MTLDevice;
@protocol MTLTexture;
@protocol MTLCommandBuffer;
@protocol MTLCommandQueue;
@protocol MTLCommandEncoder;

typedef id<CAMetalDrawable>     CAMetalDrawableRef;
typedef id<MTLDevice>           MTLDeviceRef;
typedef id<MTLTexture>          MTLTextureRef;
typedef id<MTLCommandBuffer>    MTLCommandBufferRef;
typedef id<MTLCommandQueue>     MTLCommandQueueRef;
typedef id<MTLCommandEncoder>   MTLCommandEncoderRef;
#else
typedef struct objc_object      CAMetalLayer;
typedef struct objc_object*     CAMetalDrawableRef;
typedef struct objc_object*     MTLDeviceRef;
typedef struct objc_object*     MTLTextureRef;
typedef struct objc_object*     MTLCommandBufferRef;
typedef struct objc_object*     MTLCommandQueueRef;
typedef struct objc_object*     MTLCommandEncoderRef;
#endif

// unity internal native render buffer struct (the one you acquire in C# with RenderBuffer.GetNativeRenderBufferPtr())
struct RenderSurfaceBase;
typedef struct RenderSurfaceBase* UnityRenderBufferHandle;

// be aware that this struct is shared with unity implementation so you should absolutely not change it
typedef struct UnityRenderBufferDesc
{
    unsigned    width, height, depth;
    unsigned    samples;

    int         backbuffer;
} UnityRenderBufferDesc;

// trick to make structure inheritance work transparently between c/cpp
// for c we use "anonymous struct"
#ifdef __cplusplus
    #define START_STRUCT(T, Base)   struct T : Base {
    #define END_STRUCT(T)           };
#else
    #define START_STRUCT(T, Base)   typedef struct T { struct Base;
    #define END_STRUCT(T)           } T;
#endif

// we will keep objc objects in struct, so we need to explicitely mark references as strong to not confuse ARC
// please note that actual object lifetime is managed in objc++ code, so __unsafe_unretained is good enough for objc code
// DO NOT assign objects to UnityDisplaySurface* members in objc code.
// DO NOT store objects from UnityDisplaySurface* members in objc code, as this wont be caught by ARC
#ifdef __OBJC__
    #ifdef __cplusplus
        #define OBJC_OBJECT_PTR __strong
    #else
        #define OBJC_OBJECT_PTR __unsafe_unretained
    #endif
#else
    #define OBJC_OBJECT_PTR
#endif

// unity common rendering (display) surface
typedef struct UnityDisplaySurfaceBase
{
    UnityRenderBufferHandle unityColorBuffer;
    UnityRenderBufferHandle unityDepthBuffer;

    UnityRenderBufferHandle systemColorBuffer;
    UnityRenderBufferHandle systemDepthBuffer;

    void*               cvTextureCache;         // CVMetalTextureCacheRef
    void*               cvTextureCacheTexture;  // CVMetalTextureRef
    void*               cvPixelBuffer;          // CVPixelBufferRef

    unsigned            targetW, targetH;
    unsigned            systemW, systemH;

    int                 msaaSamples;
    int                 useCVTextureCache;      // [bool]
    int                 srgb;                   // [bool]
    int                 wideColor;              // [bool]
    int                 hdr;                    // [bool]
    int                 disableDepthAndStencil; // [bool]
    int                 allowScreenshot;        // [bool] currently we allow screenshots (from script) only on main display
    int                 memorylessDepth;        // [bool]

    int                 api;                    // [UnityRenderingAPI]
} UnityDisplaySurfaceBase;


// START_STRUCT confuse clang c compiler (though it is idiomatic c code that works)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-declarations"

// on iOS/tvOS: we render to the drawable directly
//              and we need proxy only to delay acquiring drawable until we actually want to render to the "backbuffer"
//              thus just one proxy and it will be marked as "empty" (we only need it to query texture params, like extents)
// on macOS:    we render to the offscreen RT and blit to the drawable, thus we need several proxy RT
//              and all of them will be full blown textures (with GPU backing)
#if PLATFORM_OSX
    #define kUnityNumOffscreenSurfaces 2
#else
    #define kUnityNumOffscreenSurfaces 1
#endif

// Metal display surface
START_STRUCT(UnityDisplaySurfaceMTL, UnityDisplaySurfaceBase)
OBJC_OBJECT_PTR CAMetalLayer *       layer;
OBJC_OBJECT_PTR MTLDeviceRef         device;

OBJC_OBJECT_PTR CAMetalDrawableRef  drawable;
OBJC_OBJECT_PTR MTLTextureRef       drawableProxyRT[kUnityNumOffscreenSurfaces];
UnityRenderBufferHandle             drawableProxyRS[kUnityNumOffscreenSurfaces];
int                                 drawableProxyNeedsClear[kUnityNumOffscreenSurfaces];    // [bool] Tracks whether the drawableProxy requires a clear after initial creation

// This is used on a Mac with drawableProxyRT when off-screen rendering is used
int                                 proxySwaps;         // Counts times proxy RTs have swapped since surface recreated
int                                 proxyReady;         // [bool] Proxy RT has swapped since last present; frame ended
int                                 calledPresentDrawable; // Tracks presenting for editor.
int                                 vsync;              // Is vsync enabled or not

OBJC_OBJECT_PTR MTLTextureRef       drawableTex;
OBJC_OBJECT_PTR MTLTextureRef       systemColorRB;
OBJC_OBJECT_PTR MTLTextureRef       targetColorRT;
OBJC_OBJECT_PTR MTLTextureRef       targetAAColorRT;

OBJC_OBJECT_PTR MTLTextureRef       depthRB;
OBJC_OBJECT_PTR MTLTextureRef       stencilRB;

unsigned                            colorFormat;        // [MTLPixelFormat]
unsigned                            depthFormat;        // [MTLPixelFormat]
int                                 framebufferOnly;
END_STRUCT(UnityDisplaySurfaceMTL)

// START_STRUCT confuse clang c compiler (though it is idiomatic c code that works)
#pragma clang diagnostic pop

// be aware that this enum is shared with unity implementation so you should absolutely not change it
typedef enum UnityRenderingAPI
{
    apiMetal        = 4,

    // command line argument: -nographics
    // does not initialize real graphics device and bypass all the rendering
    // currently supported only on simulators
    apiNoGraphics   = -1,
} UnityRenderingAPI;

typedef struct RenderingSurfaceParams
{
    // rendering setup
    int msaaSampleCount;
    int renderW;
    int renderH;
    int srgb;
    int wideColor;
    int hdr;
    int metalFramebufferOnly;
    int metalMemorylessDepth;

    // unity setup
    int disableDepthAndStencil;
    int useCVTextureCache;
} RenderingSurfaceParams;

#ifdef __cplusplus
extern "C" {
#endif
int UnitySelectedRenderingAPI(void);
#ifdef __cplusplus
} // extern "C"
#endif

// metal
#ifdef __cplusplus
extern "C" {
#endif

void InitRenderingMTL(void);

void CreateSystemRenderingSurfaceMTL(UnityDisplaySurfaceMTL* surface);
void DestroySystemRenderingSurfaceMTL(UnityDisplaySurfaceMTL* surface);
void CreateRenderingSurfaceMTL(UnityDisplaySurfaceMTL* surface);
void DestroyRenderingSurfaceMTL(UnityDisplaySurfaceMTL* surface);
void CreateSharedDepthbufferMTL(UnityDisplaySurfaceMTL* surface);
void DestroySharedDepthbufferMTL(UnityDisplaySurfaceMTL* surface);
void CreateUnityRenderBuffersMTL(UnityDisplaySurfaceMTL* surface);
void DestroyUnityRenderBuffersMTL(UnityDisplaySurfaceMTL* surface);
void StartFrameRenderingMTL(UnityDisplaySurfaceMTL* surface);
void EndFrameRenderingMTL(UnityDisplaySurfaceMTL* surface);
void PreparePresentMTL(UnityDisplaySurfaceMTL* surface);
void PresentMTL(UnityDisplaySurfaceMTL* surface);

// Acquires CAMetalDrawable resource for the surface and returns the drawable texture
MTLTextureRef AcquireDrawableMTL(UnityDisplaySurfaceMTL* surface);

unsigned UnityHDRSurfaceDepth(void);

// starting with ios11 apple insists on having just one presentDrawable per command buffer
// hence we keep normal processing for main screen, but when airplay is used we will create extra command buffers
void PreparePresentNonMainScreenMTL(UnityDisplaySurfaceMTL* surface);

void SetDrawableSizeMTL(UnityDisplaySurfaceMTL* surface, int width, int height);

#ifdef __cplusplus
} // extern "C"
#endif

// no graphics
#ifdef __cplusplus
extern "C" {
#endif

void InitRenderingNULL(void);
void CreateSystemRenderingSurfaceNULL(UnityDisplaySurfaceBase* surface);
void CreateRenderingSurfaceNULL(UnityDisplaySurfaceBase* surface);
void DestroyRenderingSurfaceNULL(UnityDisplaySurfaceBase* surface);
void CreateSharedDepthbufferNULL(UnityDisplaySurfaceBase* surface);
void DestroySharedDepthbufferNULL(UnityDisplaySurfaceBase* surface);
void CreateUnityRenderBuffersNULL(UnityDisplaySurfaceBase* surface);
void DestroySystemRenderingSurfaceNULL(UnityDisplaySurfaceBase* surface);
void DestroyUnityRenderBuffersNULL(UnityDisplaySurfaceBase* surface);
void StartFrameRenderingNULL(UnityDisplaySurfaceBase* surface);
void EndFrameRenderingNULL(UnityDisplaySurfaceBase* surface);
void PreparePresentNULL(UnityDisplaySurfaceBase* surface);
void PresentNULL(UnityDisplaySurfaceBase* surface);

#ifdef __cplusplus
} // extern "C"
#endif


#ifdef __cplusplus
extern "C" {
#endif

// for Create* functions if surf is null we will actuially create new one, otherwise we update the one provided
// metal: resolveTex should be non-nil only if tex have AA
UnityRenderBufferHandle UnityCreateExternalSurfaceMTL(UnityRenderBufferHandle surf, int isColor, MTLTextureRef tex, const UnityRenderBufferDesc* desc);
// Passing non-nil displaySurface will mark render surface as proxy and will do a delayed drawable acquisition when setting up framebuffer
UnityRenderBufferHandle UnityCreateExternalColorSurfaceMTL(UnityRenderBufferHandle surf, MTLTextureRef tex, MTLTextureRef resolveTex, const UnityRenderBufferDesc* desc, UnityDisplaySurfaceMTL* displaySurface);
UnityRenderBufferHandle UnityCreateExternalDepthSurfaceMTL(UnityRenderBufferHandle surf, MTLTextureRef tex, MTLTextureRef stencilTex, const UnityRenderBufferDesc* desc);
// creates "dummy" surface - will indicate "missing" buffer (e.g. depth-only RT will have color as dummy)
UnityRenderBufferHandle UnityCreateDummySurface(UnityRenderBufferHandle surf, int isColor, const UnityRenderBufferDesc* desc);
// external render surfaces and textures are "out of scope" for memory profiler, hence we add means to register them separately
// the separate mechanism is needed because unity cannot know what manages the lifetime of textures in this case
//   specifically since we allow external render surfaces and textures to share metal textures
void UnityRegisterExternalRenderSurfaceTextureForMemoryProfiler(MTLTextureRef tex);
void UnityRegisterExternalTextureForMemoryProfiler(MTLTextureRef tex);
void UnityUnregisterMetalTextureForMemoryProfiler(MTLTextureRef tex);

// disable rendering to render buffers (all Cameras that were rendering to one of buffers would be reset to use backbuffer)
void    UnityDisableRenderBuffers(UnityRenderBufferHandle color, UnityRenderBufferHandle depth);
// destroys render buffer
void    UnityDestroyExternalSurface(UnityRenderBufferHandle surf);
// sets current render target
void    UnitySetRenderTarget(UnityRenderBufferHandle color, UnityRenderBufferHandle depth);
// final blit to backbuffer
void    UnityBlitToBackbuffer(UnityRenderBufferHandle srcColor, UnityRenderBufferHandle dstColor, UnityRenderBufferHandle dstDepth);
// get native renderbuffer from handle

// sets vSync on OSX 10.13 and up
#if PLATFORM_OSX
void MetalUpdateDisplaySync(void);
#endif

UnityRenderBufferHandle UnityNativeRenderBufferFromHandle(void *rb);

MTLCommandBufferRef UnityCurrentMTLCommandBuffer(void);

void UnityUpdateDrawableSize(UnityDisplaySurfaceMTL* surface);

#ifdef __cplusplus
} // extern "C"
#endif

// metal/gles unification

#define GLES_METAL_COMMON_IMPL_SURF(f)                                                                  \
inline void f(UnityDisplaySurfaceBase* surface)                                                         \
{                                                                                                       \
    switch(surface->api) {                                                                              \
        case apiMetal:                          f ## MTL((UnityDisplaySurfaceMTL*)surface);     break;  \
        case apiNoGraphics:                     f ## NULL(surface);                             break;  \
    }                                                                                                   \
}                                                                                                       \

#define GLES_METAL_COMMON_IMPL(f)                                       \
inline void f()                                                         \
{                                                                       \
    switch(UnitySelectedRenderingAPI()) {                               \
        case apiMetal:                          f ## MTL();     break;  \
        case apiNoGraphics:                     f ## NULL();    break;  \
    }                                                                   \
}                                                                       \


GLES_METAL_COMMON_IMPL(InitRendering);

GLES_METAL_COMMON_IMPL_SURF(CreateSystemRenderingSurface);
GLES_METAL_COMMON_IMPL_SURF(DestroySystemRenderingSurface);
GLES_METAL_COMMON_IMPL_SURF(CreateRenderingSurface);
GLES_METAL_COMMON_IMPL_SURF(DestroyRenderingSurface);
GLES_METAL_COMMON_IMPL_SURF(CreateSharedDepthbuffer);
GLES_METAL_COMMON_IMPL_SURF(DestroySharedDepthbuffer);
GLES_METAL_COMMON_IMPL_SURF(CreateUnityRenderBuffers);
GLES_METAL_COMMON_IMPL_SURF(DestroyUnityRenderBuffers);
GLES_METAL_COMMON_IMPL_SURF(StartFrameRendering);
GLES_METAL_COMMON_IMPL_SURF(EndFrameRendering);
GLES_METAL_COMMON_IMPL_SURF(PreparePresent);
GLES_METAL_COMMON_IMPL_SURF(Present);

#undef GLES_METAL_COMMON_IMPL_SURF
#undef GLES_METAL_COMMON_IMPL
