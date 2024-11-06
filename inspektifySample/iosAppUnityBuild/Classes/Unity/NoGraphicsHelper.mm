#include "UnityRendering.h"


extern "C" void CreateUnityRenderBuffersNULL(UnityDisplaySurfaceBase* surface)
{
    UnityRenderBufferDesc sys_desc = { surface->systemW, surface->systemH, 1, 1, 1 };
    UnityRenderBufferDesc tgt_desc = { surface->targetW, surface->targetH, 1, (unsigned int)surface->msaaSamples, 1 };

    surface->unityColorBuffer   = UnityCreateDummySurface(surface->unityColorBuffer, true, &tgt_desc);
    surface->unityDepthBuffer   = UnityCreateDummySurface(surface->unityDepthBuffer, false, &tgt_desc);

    surface->systemColorBuffer = UnityCreateDummySurface(surface->systemColorBuffer, true, &sys_desc);
    surface->systemDepthBuffer = UnityCreateDummySurface(surface->systemDepthBuffer, false, &sys_desc);
}

extern "C" void DestroyUnityRenderBuffersNULL(UnityDisplaySurfaceBase* surface)
{
    UnityDestroyExternalSurface(surface->unityColorBuffer);
    UnityDestroyExternalSurface(surface->systemColorBuffer);
    surface->unityColorBuffer = surface->systemColorBuffer = 0;

    UnityDestroyExternalSurface(surface->unityDepthBuffer);
    UnityDestroyExternalSurface(surface->systemDepthBuffer);
    surface->unityDepthBuffer = surface->systemDepthBuffer = 0;
}

extern "C" void InitRenderingNULL() {}
extern "C" void CreateSystemRenderingSurfaceNULL(UnityDisplaySurfaceBase* surface)  {}
extern "C" void CreateRenderingSurfaceNULL(UnityDisplaySurfaceBase* surface)        {}
extern "C" void DestroyRenderingSurfaceNULL(UnityDisplaySurfaceBase* surface)       {}
extern "C" void CreateSharedDepthbufferNULL(UnityDisplaySurfaceBase* surface)       {}
extern "C" void DestroySharedDepthbufferNULL(UnityDisplaySurfaceBase* surface)      {}
extern "C" void DestroySystemRenderingSurfaceNULL(UnityDisplaySurfaceBase* surface) {}
extern "C" void StartFrameRenderingNULL(UnityDisplaySurfaceBase* surface)           {}
extern "C" void EndFrameRenderingNULL(UnityDisplaySurfaceBase* surface)             {}
extern "C" void PreparePresentNULL(UnityDisplaySurfaceBase* surface)                {}
extern "C" void PresentNULL(UnityDisplaySurfaceBase* surface)                       {}
