#include "CVTextureCache.h"

#include "DisplayManager.h"
#include <CoreVideo/CVMetalTextureCache.h>

void* CreateCVTextureCache()
{
    void* ret = 0;

    CVReturn err = 0;
    if (UnitySelectedRenderingAPI() == apiMetal)
        err = CVMetalTextureCacheCreate(kCFAllocatorDefault, 0, UnityGetMetalDevice(), 0, (CVMetalTextureCacheRef*)&ret);

    if (err)
    {
        ::printf("Error at CVMetalTextureCacheCreate: %d", err);
        ret = 0;
    }
    return ret;
}

void FlushCVTextureCache(void* cache)
{
    if (UnitySelectedRenderingAPI() == apiMetal)
        CVMetalTextureCacheFlush((CVMetalTextureCacheRef)cache, 0);
}

void* CreateTextureFromCVTextureCache2(void* cache, void* image, size_t w, size_t h, uint64_t metalFormat)
{
    void* texture = 0;

    CVReturn err = 0;
    if (UnitySelectedRenderingAPI() == apiMetal)
    {
        err = CVMetalTextureCacheCreateTextureFromImage(
            kCFAllocatorDefault, (CVMetalTextureCacheRef)cache, (CVImageBufferRef)image, 0,
            (MTLPixelFormat)metalFormat, w, h, 0, (CVMetalTextureRef*)&texture
        );
    }

    if (err)
    {
        ::printf("Error at CVMetalTextureCacheCreateTextureFromImage: %d\n", err);
        texture = 0;
    }

    return texture;
}

id<MTLTexture> GetMetalTextureFromCVTextureCache(void* texture)
{
    assert(UnitySelectedRenderingAPI() == apiMetal);
    return CVMetalTextureGetTexture((CVMetalTextureRef)texture);
}

uintptr_t GetTextureFromCVTextureCache(void* texture)
{
    if (UnitySelectedRenderingAPI() == apiMetal)
        return (uintptr_t)(__bridge void*)GetMetalTextureFromCVTextureCache(texture);
    return 0;
}

void* CreatePixelBufferForCVTextureCache2(size_t w, size_t h, uint32_t cvFormat)
{
    CVPixelBufferRef pb = 0;
    NSDictionary* options = @{  (__bridge NSString*)kCVPixelBufferPixelFormatTypeKey: @(cvFormat),
                                (__bridge NSString*)kCVPixelBufferWidthKey: @(w),
                                (__bridge NSString*)kCVPixelBufferHeightKey: @(h),
                                (__bridge NSString*)kCVPixelBufferMetalCompatibilityKey: @(YES),
                                (__bridge NSString*)kCVPixelBufferIOSurfacePropertiesKey: @{}};

    CVPixelBufferCreate(kCFAllocatorDefault, w, h, cvFormat, (__bridge CFDictionaryRef)options, &pb);
    return pb;
}

void* CreateReadableRTFromCVTextureCache2(void* cache, size_t w, size_t h, uint32_t cvFormat, uint64_t metalFormat, void** pb)
{
    *pb = CreatePixelBufferForCVTextureCache2(w, h, cvFormat);
    return CreateTextureFromCVTextureCache2(cache, *pb, w, h, metalFormat);
}

int IsCVTextureFlipped(void* texture)
{
    if (UnitySelectedRenderingAPI() == apiMetal)
        return CVMetalTextureIsFlipped((CVMetalTextureRef)texture);
    return 0;
}

//
// deprecated
//

void* CreatePixelBufferForCVTextureCache(size_t w, size_t h)
{
    return CreatePixelBufferForCVTextureCache2(w, h, kCVPixelFormatType_32BGRA);
}

void* CreateReadableRTFromCVTextureCache(void* cache, size_t w, size_t h, void** pb)
{
    *pb = CreatePixelBufferForCVTextureCache2(w, h, kCVPixelFormatType_32BGRA);
    return CreateBGRA32TextureFromCVTextureCache(cache, *pb, w, h);
}

void* CreateBGRA32TextureFromCVTextureCache(void* cache, void* image, size_t w, size_t h)
{
    void* texture = 0;

    CVReturn err = 0;
    if (UnitySelectedRenderingAPI() == apiMetal)
    {
        err = CVMetalTextureCacheCreateTextureFromImage(
            kCFAllocatorDefault, (CVMetalTextureCacheRef)cache, (CVImageBufferRef)image, 0,
            (MTLPixelFormat)((UnityDisplaySurfaceMTL*)GetMainDisplaySurface())->colorFormat, w, h, 0, (CVMetalTextureRef*)&texture
        );
    }

    if (err)
    {
        ::printf("Error at CVMetalTextureCacheCreateTextureFromImage: %d\n", err);
        texture = 0;
    }
    return texture;
}

void* CreateHalfFloatTextureFromCVTextureCache(void* cache, void* image, size_t w, size_t h)
{
    void* texture = 0;

    CVReturn err = 0;
    if (UnitySelectedRenderingAPI() == apiMetal)
    {
        err = CVMetalTextureCacheCreateTextureFromImage(
            kCFAllocatorDefault, (CVMetalTextureCacheRef)cache, (CVImageBufferRef)image, 0,
            MTLPixelFormatR16Float, w, h, 0, (CVMetalTextureRef*)&texture
        );
    }

    if (err)
    {
        ::printf("Error at CVMetalTextureCacheCreateTextureFromImage: %d\n", err);
        texture = 0;
    }
    return texture;
}
