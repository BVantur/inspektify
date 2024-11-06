#pragma once
#include <stdint.h>

// returns CVMetalTextureCacheRef
void*       CreateCVTextureCache();
// cache = CVMetalTextureCacheRef
void        FlushCVTextureCache(void* cache);

// returns CVMetalTextureRef
// cache = CVMetalTextureCacheRef
// image = CVImageBufferRef/CVPixelBufferRef
void*       CreateTextureFromCVTextureCache2(void* cache, void* image, size_t w, size_t h, uint64_t metalFormat);

// texture = CVMetalTextureRef
MTLTextureRef   GetMetalTextureFromCVTextureCache(void* texture);

// texture = CVMetalTextureRef
uintptr_t       GetTextureFromCVTextureCache(void* texture);

// returns CVPixelBufferRef
void*       CreatePixelBufferForCVTextureCache2(size_t w, size_t h, uint32_t cvFormat);
// returns CVMetalTextureRef
// cache = CVMetalTextureCacheRef
// pb = CVPixelBufferRef (out)
void*       CreateReadableRTFromCVTextureCache2(void* cache, size_t w, size_t h, uint32_t cvFormat, uint64_t metalFormat, void** pb);

// texture = CVMetalTextureRef
int         IsCVTextureFlipped(void* texture);

//
// deprecated
//

// returns CVPixelBufferRef
// enforces kCVPixelFormatType_32BGRA
void*       CreatePixelBufferForCVTextureCache(size_t w, size_t h);
// returns CVMetalTextureRef
// cache = CVMetalTextureCacheRef
// pb = CVPixelBufferRef (out)
// enforces rgba texture with bgra backing
void*       CreateReadableRTFromCVTextureCache(void* cache, size_t w, size_t h, void** pb);

// returns CVMetalTextureRef
// cache = CVMetalTextureCacheRef
// image = CVImageBufferRef/CVPixelBufferRef
void*       CreateBGRA32TextureFromCVTextureCache(void* cache, void* image, size_t w, size_t h);
void*       CreateHalfFloatTextureFromCVTextureCache(void* cache, void* image, size_t w, size_t h);
