#include "CMVideoSampling.h"

#include "CVTextureCache.h"
#include <AVFoundation/AVFoundation.h>

#include "DisplayManager.h" // for GetMainDisplaySurface() to have proper linear/srgb handling

void CMVideoSampling_Initialize(CMVideoSampling* sampling)
{
    ::memset(sampling, 0x00, sizeof(CMVideoSampling));
    sampling->cvTextureCache = CreateCVTextureCache();
}

void CMVideoSampling_Uninitialize(CMVideoSampling* sampling)
{
    if (sampling->cvImageBuffer)
    {
        CFRelease(sampling->cvImageBuffer);
        sampling->cvImageBuffer = 0;
    }
    if (sampling->cvTextureCacheTexture)
    {
        CFRelease(sampling->cvTextureCacheTexture);
        sampling->cvTextureCacheTexture = 0;
    }
    if (sampling->cvTextureCache)
    {
        CFRelease(sampling->cvTextureCache);
        sampling->cvTextureCache = 0;
    }
}

intptr_t CMVideoSampling_ImageBuffer(CMVideoSampling* sampling, CVImageBufferRef buffer, size_t* w, size_t* h)
{
    intptr_t retTex = 0;

    if (sampling->cvImageBuffer)
        CFRelease(sampling->cvImageBuffer);
    sampling->cvImageBuffer = buffer;
    CFRetain(sampling->cvImageBuffer);

    *w = CVPixelBufferGetWidth((CVImageBufferRef)sampling->cvImageBuffer);
    *h = CVPixelBufferGetHeight((CVImageBufferRef)sampling->cvImageBuffer);
    if (sampling->cvTextureCacheTexture)
    {
        CFRelease(sampling->cvTextureCacheTexture);
        FlushCVTextureCache(sampling->cvTextureCache);
        sampling->cvTextureCacheTexture = nil;
    }

    OSType pixelFormat = CVPixelBufferGetPixelFormatType(buffer);
    if (pixelFormat == kCVPixelFormatType_32BGRA || pixelFormat == kCVPixelFormatType_DepthFloat16)
    {
        MTLPixelFormat metalFormat32BGRA = GetMainDisplaySurface()->srgb ? MTLPixelFormatBGRA8Unorm_sRGB : MTLPixelFormatBGRA8Unorm;
        MTLPixelFormat metalFormat = pixelFormat == kCVPixelFormatType_32BGRA ? metalFormat32BGRA : MTLPixelFormatR16Float;

        sampling->cvTextureCacheTexture = CreateTextureFromCVTextureCache2(sampling->cvTextureCache, sampling->cvImageBuffer, *w, *h, metalFormat);
    }
    else
    {
        #define FourCC2Str(fourcc) (const char[]){*(((char*)&fourcc)+3), *(((char*)&fourcc)+2), *(((char*)&fourcc)+1), *(((char*)&fourcc)+0),0}
        ::printf("CMVideoSampling_SampleBuffer: unexpected pixel format \'%s\'\n", FourCC2Str(pixelFormat));
    }

    if (sampling->cvTextureCacheTexture)
        retTex = GetTextureFromCVTextureCache(sampling->cvTextureCacheTexture);

    return retTex;
}

intptr_t CMVideoSampling_SampleBuffer(CMVideoSampling* sampling, void* buffer, size_t* w, size_t* h)
{
    return CMVideoSampling_ImageBuffer(sampling, CMSampleBufferGetImageBuffer((CMSampleBufferRef)buffer), w, h);
}

intptr_t CMVideoSampling_LastSampledTexture(CMVideoSampling* sampling)
{
    return GetTextureFromCVTextureCache(sampling->cvTextureCacheTexture);
}
