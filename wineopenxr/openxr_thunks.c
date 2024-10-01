/* Automatically generated from Vulkan xr.xml; DO NOT EDIT!
 *
 * This file is generated from Vulkan xr.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright (c) 2017-2024, The Khronos Group Inc.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * ------------------------------------------------------------------------
 *
 * This file, xr.xml, is the OpenXR API Registry. It is a critically important
 * and normative part of the OpenXR Specification, including a canonical
 * machine-readable definition of the API, parameter and member validation
 * language incorporated into the Specification and reference pages, and other
 * material which is registered by Khronos, such as tags used by extension and
 * layer authors. The only authoritative version of xr.xml is the one
 * maintained in the default branch of the Khronos OpenXR GitHub project.
 *
 */

#if 0
#pragma makedep unix
#endif

#include "config.h"

#include <stdlib.h>

#include "openxr_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(openxr);

static uint64_t wine_xr_unwrap_handle(uint32_t type, uint64_t handle)
{
    switch(type)
    {
    case XR_OBJECT_TYPE_INSTANCE:
        return (uint64_t) (uintptr_t) wine_instance_from_handle(((XrInstance) (uintptr_t) handle))->host_instance;
    case XR_OBJECT_TYPE_SESSION:
        return (uint64_t) (uintptr_t) wine_session_from_handle(((XrSession) (uintptr_t) handle))->host_session;
    case XR_OBJECT_TYPE_SWAPCHAIN:
        return (uint64_t) (uintptr_t) wine_swapchain_from_handle(((XrSwapchain) (uintptr_t) handle))->host_swapchain;
    default:
       return handle;
    }
}

#ifdef _WIN64
static inline void convert_XrInstanceCreateInfo_win64_to_host(struct conversion_context *ctx, const XrInstanceCreateInfo *in, XrInstanceCreateInfo *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure *out_header = (void *)out;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->createFlags = in->createFlags;
    out->applicationInfo = in->applicationInfo;
    out->enabledApiLayerCount = in->enabledApiLayerCount;
    out->enabledApiLayerNames = in->enabledApiLayerNames;
    out->enabledExtensionCount = in->enabledExtensionCount;
    out->enabledExtensionNames = in->enabledExtensionNames;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        default:
            if ((in_header->type >> 16) == 0x7ead)
            {
                XrBaseOutStructure *out_ext = conversion_context_alloc(ctx, 32);
                memcpy(out_ext, in_header, 32);
                out_ext->next = NULL;
                out_header->next = (void *)out_ext;
                out_header = (void *)out_ext;
            }
            else
            {
                FIXME("Unhandled type %u.\n", in_header->type);
            }
            break;
        }
    }
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAcquireEnvironmentDepthImageMETA(void *args)
{
    struct xrAcquireEnvironmentDepthImageMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->environmentDepthProvider, params->acquireInfo, params->environmentDepthImage);

    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireEnvironmentDepthImageMETA(params->environmentDepthProvider, params->acquireInfo, params->environmentDepthImage);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAcquireSwapchainImage(void *args)
{
    struct xrAcquireSwapchainImage_params *params = args;

    TRACE("%p, %p, %p\n", params->swapchain, params->acquireInfo, params->index);

    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->acquireInfo, params->index);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrApplyForceFeedbackCurlMNDX(void *args)
{
    struct xrApplyForceFeedbackCurlMNDX_params *params = args;

    TRACE("%p, %p\n", params->handTracker, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrApplyForceFeedbackCurlMNDX(params->handTracker, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrApplyHapticFeedback(void *args)
{
    struct xrApplyHapticFeedback_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->hapticActionInfo, params->hapticFeedback);

    params->result = g_xr_host_instance_dispatch_table.p_xrApplyHapticFeedback(wine_session_from_handle(params->session)->host_session, params->hapticActionInfo, params->hapticFeedback);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAttachSessionActionSets(void *args)
{
    struct xrAttachSessionActionSets_params *params = args;

    TRACE("%p, %p\n", params->session, params->attachInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrAttachSessionActionSets(wine_session_from_handle(params->session)->host_session, params->attachInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrBeginFrame(void *args)
{
    struct xrBeginFrame_params *params = args;

    TRACE("%p, %p\n", params->session, params->frameBeginInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrBeginFrame(wine_session_from_handle(params->session)->host_session, params->frameBeginInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrBeginPlaneDetectionEXT(void *args)
{
    struct xrBeginPlaneDetectionEXT_params *params = args;

    TRACE("%p, %p\n", params->planeDetector, params->beginInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrBeginPlaneDetectionEXT(params->planeDetector, params->beginInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrBeginSession(void *args)
{
    struct xrBeginSession_params *params = args;

    TRACE("%p, %p\n", params->session, params->beginInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrBeginSession(wine_session_from_handle(params->session)->host_session, params->beginInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCancelFutureEXT(void *args)
{
    struct xrCancelFutureEXT_params *params = args;

    TRACE("%p, %p\n", params->instance, params->cancelInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrCancelFutureEXT(wine_instance_from_handle(params->instance)->host_instance, params->cancelInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrChangeVirtualKeyboardTextContextMETA(void *args)
{
    struct xrChangeVirtualKeyboardTextContextMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->changeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrChangeVirtualKeyboardTextContextMETA(params->keyboard, params->changeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrClearSpatialAnchorStoreMSFT(void *args)
{
    struct xrClearSpatialAnchorStoreMSFT_params *params = args;

    TRACE("%p\n", params->spatialAnchorStore);

    params->result = g_xr_host_instance_dispatch_table.p_xrClearSpatialAnchorStoreMSFT(params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrComputeNewSceneMSFT(void *args)
{
    struct xrComputeNewSceneMSFT_params *params = args;

    TRACE("%p, %p\n", params->sceneObserver, params->computeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrComputeNewSceneMSFT(params->sceneObserver, params->computeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateAction(void *args)
{
    struct xrCreateAction_params *params = args;

    TRACE("%p, %p, %p\n", params->actionSet, params->createInfo, params->action);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAction(params->actionSet, params->createInfo, params->action);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateActionSet(void *args)
{
    struct xrCreateActionSet_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->createInfo, params->actionSet);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSet(wine_instance_from_handle(params->instance)->host_instance, params->createInfo, params->actionSet);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateActionSpace(void *args)
{
    struct xrCreateActionSpace_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSpace(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateBodyTrackerFB(void *args)
{
    struct xrCreateBodyTrackerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateEnvironmentDepthProviderMETA(void *args)
{
    struct xrCreateEnvironmentDepthProviderMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthProviderMETA(wine_session_from_handle(params->session)->host_session, params->createInfo, params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateEnvironmentDepthSwapchainMETA(void *args)
{
    struct xrCreateEnvironmentDepthSwapchainMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->environmentDepthProvider, params->createInfo, params->swapchain);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthSwapchainMETA(params->environmentDepthProvider, params->createInfo, params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateExportedLocalizationMapML(void *args)
{
    struct xrCreateExportedLocalizationMapML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->mapUuid, params->map);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateExportedLocalizationMapML(wine_session_from_handle(params->session)->host_session, params->mapUuid, params->map);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateEyeTrackerFB(void *args)
{
    struct xrCreateEyeTrackerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->eyeTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEyeTrackerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->eyeTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFaceTracker2FB(void *args)
{
    struct xrCreateFaceTracker2FB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTracker2FB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFaceTrackerFB(void *args)
{
    struct xrCreateFaceTrackerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTrackerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFacialTrackerHTC(void *args)
{
    struct xrCreateFacialTrackerHTC_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->facialTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFacialTrackerHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->facialTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFoveationProfileFB(void *args)
{
    struct xrCreateFoveationProfileFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->profile);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFoveationProfileFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->profile);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateGeometryInstanceFB(void *args)
{
    struct xrCreateGeometryInstanceFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->outGeometryInstance);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateGeometryInstanceFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outGeometryInstance);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateHandMeshSpaceMSFT(void *args)
{
    struct xrCreateHandMeshSpaceMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->handTracker, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateHandMeshSpaceMSFT(params->handTracker, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateHandTrackerEXT(void *args)
{
    struct xrCreateHandTrackerEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->handTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateHandTrackerEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->handTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateInstance(void *args)
{
    struct xrCreateInstance_params *params = args;
    XrInstanceCreateInfo createInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%p, %p\n", params->createInfo, params->instance);

    init_conversion_context(ctx);
    convert_XrInstanceCreateInfo_win64_to_host(ctx, params->createInfo, &createInfo_host);
    params->result = wine_xrCreateInstance(&createInfo_host, params->instance);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateKeyboardSpaceFB(void *args)
{
    struct xrCreateKeyboardSpaceFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->keyboardSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateKeyboardSpaceFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->keyboardSpace);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateMarkerDetectorML(void *args)
{
    struct xrCreateMarkerDetectorML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->markerDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerDetectorML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->markerDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateMarkerSpaceML(void *args)
{
    struct xrCreateMarkerSpaceML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateMarkerSpaceVARJO(void *args)
{
    struct xrCreateMarkerSpaceVARJO_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceVARJO(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughColorLutMETA(void *args)
{
    struct xrCreatePassthroughColorLutMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->passthrough, params->createInfo, params->colorLut);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughColorLutMETA(params->passthrough, params->createInfo, params->colorLut);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughFB(void *args)
{
    struct xrCreatePassthroughFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->outPassthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outPassthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughHTC(void *args)
{
    struct xrCreatePassthroughHTC_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughLayerFB(void *args)
{
    struct xrCreatePassthroughLayerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->outLayer);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughLayerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outLayer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePlaneDetectorEXT(void *args)
{
    struct xrCreatePlaneDetectorEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->planeDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePlaneDetectorEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->planeDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateReferenceSpace(void *args)
{
    struct xrCreateReferenceSpace_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateReferenceSpace(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSceneMSFT(void *args)
{
    struct xrCreateSceneMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->sceneObserver, params->createInfo, params->scene);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneMSFT(params->sceneObserver, params->createInfo, params->scene);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSceneObserverMSFT(void *args)
{
    struct xrCreateSceneObserverMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->sceneObserver);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneObserverMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->sceneObserver);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSession(void *args)
{
    struct xrCreateSession_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->createInfo, params->session);

    params->result = wine_xrCreateSession(params->instance, params->createInfo, params->session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpaceUserFB(void *args)
{
    struct xrCreateSpaceUserFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->user);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpaceUserFB(wine_session_from_handle(params->session)->host_session, params->info, params->user);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorFB(void *args)
{
    struct xrCreateSpatialAnchorFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorFromPersistedNameMSFT(void *args)
{
    struct xrCreateSpatialAnchorFromPersistedNameMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->spatialAnchorCreateInfo, params->spatialAnchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFromPersistedNameMSFT(wine_session_from_handle(params->session)->host_session, params->spatialAnchorCreateInfo, params->spatialAnchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorHTC(void *args)
{
    struct xrCreateSpatialAnchorHTC_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorMSFT(void *args)
{
    struct xrCreateSpatialAnchorMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorSpaceMSFT(void *args)
{
    struct xrCreateSpatialAnchorSpaceMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorSpaceMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorStoreConnectionMSFT(void *args)
{
    struct xrCreateSpatialAnchorStoreConnectionMSFT_params *params = args;

    TRACE("%p, %p\n", params->session, params->spatialAnchorStore);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorStoreConnectionMSFT(wine_session_from_handle(params->session)->host_session, params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialGraphNodeSpaceMSFT(void *args)
{
    struct xrCreateSpatialGraphNodeSpaceMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialGraphNodeSpaceMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSwapchain(void *args)
{
    struct xrCreateSwapchain_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->swapchain);

    params->result = wine_xrCreateSwapchain(params->session, params->createInfo, params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateTriangleMeshFB(void *args)
{
    struct xrCreateTriangleMeshFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->outTriangleMesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateTriangleMeshFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outTriangleMesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateVirtualKeyboardMETA(void *args)
{
    struct xrCreateVirtualKeyboardMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->keyboard);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardMETA(wine_session_from_handle(params->session)->host_session, params->createInfo, params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateVirtualKeyboardSpaceMETA(void *args)
{
    struct xrCreateVirtualKeyboardSpaceMETA_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->session, params->keyboard, params->createInfo, params->keyboardSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardSpaceMETA(wine_session_from_handle(params->session)->host_session, params->keyboard, params->createInfo, params->keyboardSpace);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDeserializeSceneMSFT(void *args)
{
    struct xrDeserializeSceneMSFT_params *params = args;

    TRACE("%p, %p\n", params->sceneObserver, params->deserializeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrDeserializeSceneMSFT(params->sceneObserver, params->deserializeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyAction(void *args)
{
    struct xrDestroyAction_params *params = args;

    TRACE("%p\n", params->action);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyAction(params->action);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyActionSet(void *args)
{
    struct xrDestroyActionSet_params *params = args;

    TRACE("%p\n", params->actionSet);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyActionSet(params->actionSet);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyBodyTrackerFB(void *args)
{
    struct xrDestroyBodyTrackerFB_params *params = args;

    TRACE("%p\n", params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerFB(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyEnvironmentDepthProviderMETA(void *args)
{
    struct xrDestroyEnvironmentDepthProviderMETA_params *params = args;

    TRACE("%p\n", params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyEnvironmentDepthSwapchainMETA(void *args)
{
    struct xrDestroyEnvironmentDepthSwapchainMETA_params *params = args;

    TRACE("%p\n", params->swapchain);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthSwapchainMETA(params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyExportedLocalizationMapML(void *args)
{
    struct xrDestroyExportedLocalizationMapML_params *params = args;

    TRACE("%p\n", params->map);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyExportedLocalizationMapML(params->map);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyEyeTrackerFB(void *args)
{
    struct xrDestroyEyeTrackerFB_params *params = args;

    TRACE("%p\n", params->eyeTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEyeTrackerFB(params->eyeTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFaceTracker2FB(void *args)
{
    struct xrDestroyFaceTracker2FB_params *params = args;

    TRACE("%p\n", params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTracker2FB(params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFaceTrackerFB(void *args)
{
    struct xrDestroyFaceTrackerFB_params *params = args;

    TRACE("%p\n", params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTrackerFB(params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFacialTrackerHTC(void *args)
{
    struct xrDestroyFacialTrackerHTC_params *params = args;

    TRACE("%p\n", params->facialTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFacialTrackerHTC(params->facialTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFoveationProfileFB(void *args)
{
    struct xrDestroyFoveationProfileFB_params *params = args;

    TRACE("%p\n", params->profile);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFoveationProfileFB(params->profile);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyGeometryInstanceFB(void *args)
{
    struct xrDestroyGeometryInstanceFB_params *params = args;

    TRACE("%p\n", params->instance);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyGeometryInstanceFB(params->instance);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyHandTrackerEXT(void *args)
{
    struct xrDestroyHandTrackerEXT_params *params = args;

    TRACE("%p\n", params->handTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyHandTrackerEXT(params->handTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyInstance(void *args)
{
    struct xrDestroyInstance_params *params = args;

    TRACE("%p\n", params->instance);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyInstance(wine_instance_from_handle(params->instance)->host_instance);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyMarkerDetectorML(void *args)
{
    struct xrDestroyMarkerDetectorML_params *params = args;

    TRACE("%p\n", params->markerDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyMarkerDetectorML(params->markerDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughColorLutMETA(void *args)
{
    struct xrDestroyPassthroughColorLutMETA_params *params = args;

    TRACE("%p\n", params->colorLut);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughColorLutMETA(params->colorLut);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughFB(void *args)
{
    struct xrDestroyPassthroughFB_params *params = args;

    TRACE("%p\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughHTC(void *args)
{
    struct xrDestroyPassthroughHTC_params *params = args;

    TRACE("%p\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughHTC(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughLayerFB(void *args)
{
    struct xrDestroyPassthroughLayerFB_params *params = args;

    TRACE("%p\n", params->layer);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughLayerFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPlaneDetectorEXT(void *args)
{
    struct xrDestroyPlaneDetectorEXT_params *params = args;

    TRACE("%p\n", params->planeDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPlaneDetectorEXT(params->planeDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySceneMSFT(void *args)
{
    struct xrDestroySceneMSFT_params *params = args;

    TRACE("%p\n", params->scene);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneMSFT(params->scene);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySceneObserverMSFT(void *args)
{
    struct xrDestroySceneObserverMSFT_params *params = args;

    TRACE("%p\n", params->sceneObserver);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneObserverMSFT(params->sceneObserver);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySession(void *args)
{
    struct xrDestroySession_params *params = args;

    TRACE("%p\n", params->session);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpace(void *args)
{
    struct xrDestroySpace_params *params = args;

    TRACE("%p\n", params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpace(params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpaceUserFB(void *args)
{
    struct xrDestroySpaceUserFB_params *params = args;

    TRACE("%p\n", params->user);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpaceUserFB(params->user);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialAnchorMSFT(void *args)
{
    struct xrDestroySpatialAnchorMSFT_params *params = args;

    TRACE("%p\n", params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorMSFT(params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialAnchorStoreConnectionMSFT(void *args)
{
    struct xrDestroySpatialAnchorStoreConnectionMSFT_params *params = args;

    TRACE("%p\n", params->spatialAnchorStore);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorStoreConnectionMSFT(params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialGraphNodeBindingMSFT(void *args)
{
    struct xrDestroySpatialGraphNodeBindingMSFT_params *params = args;

    TRACE("%p\n", params->nodeBinding);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialGraphNodeBindingMSFT(params->nodeBinding);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySwapchain(void *args)
{
    struct xrDestroySwapchain_params *params = args;

    TRACE("%p\n", params->swapchain);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySwapchain(wine_swapchain_from_handle(params->swapchain)->host_swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyTriangleMeshFB(void *args)
{
    struct xrDestroyTriangleMeshFB_params *params = args;

    TRACE("%p\n", params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyTriangleMeshFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyVirtualKeyboardMETA(void *args)
{
    struct xrDestroyVirtualKeyboardMETA_params *params = args;

    TRACE("%p\n", params->keyboard);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyVirtualKeyboardMETA(params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnableLocalizationEventsML(void *args)
{
    struct xrEnableLocalizationEventsML_params *params = args;

    TRACE("%p, %p\n", params->session, params->info);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnableLocalizationEventsML(wine_session_from_handle(params->session)->host_session, params->info);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnableUserCalibrationEventsML(void *args)
{
    struct xrEnableUserCalibrationEventsML_params *params = args;

    TRACE("%p, %p\n", params->instance, params->enableInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnableUserCalibrationEventsML(wine_instance_from_handle(params->instance)->host_instance, params->enableInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEndFrame(void *args)
{
    struct xrEndFrame_params *params = args;

    TRACE("%p, %p\n", params->session, params->frameEndInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrEndFrame(wine_session_from_handle(params->session)->host_session, params->frameEndInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEndSession(void *args)
{
    struct xrEndSession_params *params = args;

    TRACE("%p\n", params->session);

    params->result = g_xr_host_instance_dispatch_table.p_xrEndSession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateApiLayerProperties(void *args)
{
    struct xrEnumerateApiLayerProperties_params *params = args;

    TRACE("%u, %p, %p\n", params->propertyCapacityInput, params->propertyCountOutput, params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateApiLayerProperties(params->propertyCapacityInput, params->propertyCountOutput, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateBoundSourcesForAction(void *args)
{
    struct xrEnumerateBoundSourcesForAction_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->session, params->enumerateInfo, params->sourceCapacityInput, params->sourceCountOutput, params->sources);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateBoundSourcesForAction(wine_session_from_handle(params->session)->host_session, params->enumerateInfo, params->sourceCapacityInput, params->sourceCountOutput, params->sources);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateColorSpacesFB(void *args)
{
    struct xrEnumerateColorSpacesFB_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->colorSpaceCapacityInput, params->colorSpaceCountOutput, params->colorSpaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateColorSpacesFB(wine_session_from_handle(params->session)->host_session, params->colorSpaceCapacityInput, params->colorSpaceCountOutput, params->colorSpaces);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateDisplayRefreshRatesFB(void *args)
{
    struct xrEnumerateDisplayRefreshRatesFB_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->displayRefreshRateCapacityInput, params->displayRefreshRateCountOutput, params->displayRefreshRates);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateDisplayRefreshRatesFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRateCapacityInput, params->displayRefreshRateCountOutput, params->displayRefreshRates);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateEnvironmentBlendModes(void *args)
{
    struct xrEnumerateEnvironmentBlendModes_params *params = args;

    TRACE("%p, 0x%s, %#x, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->environmentBlendModeCapacityInput, params->environmentBlendModeCountOutput, params->environmentBlendModes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentBlendModes(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->environmentBlendModeCapacityInput, params->environmentBlendModeCountOutput, params->environmentBlendModes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateEnvironmentDepthSwapchainImagesMETA(void *args)
{
    struct xrEnumerateEnvironmentDepthSwapchainImagesMETA_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentDepthSwapchainImagesMETA(params->swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateExternalCamerasOCULUS(void *args)
{
    struct xrEnumerateExternalCamerasOCULUS_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->cameraCapacityInput, params->cameraCountOutput, params->cameras);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateExternalCamerasOCULUS(wine_session_from_handle(params->session)->host_session, params->cameraCapacityInput, params->cameraCountOutput, params->cameras);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateInstanceExtensionProperties(void *args)
{
    struct xrEnumerateInstanceExtensionProperties_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->layerName, params->propertyCapacityInput, params->propertyCountOutput, params->properties);

    params->result = wine_xrEnumerateInstanceExtensionProperties(params->layerName, params->propertyCapacityInput, params->propertyCountOutput, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumeratePerformanceMetricsCounterPathsMETA(void *args)
{
    struct xrEnumeratePerformanceMetricsCounterPathsMETA_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->instance, params->counterPathCapacityInput, params->counterPathCountOutput, params->counterPaths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePerformanceMetricsCounterPathsMETA(wine_instance_from_handle(params->instance)->host_instance, params->counterPathCapacityInput, params->counterPathCountOutput, params->counterPaths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumeratePersistedSpatialAnchorNamesMSFT(void *args)
{
    struct xrEnumeratePersistedSpatialAnchorNamesMSFT_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->spatialAnchorStore, params->spatialAnchorNameCapacityInput, params->spatialAnchorNameCountOutput, params->spatialAnchorNames);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePersistedSpatialAnchorNamesMSFT(params->spatialAnchorStore, params->spatialAnchorNameCapacityInput, params->spatialAnchorNameCountOutput, params->spatialAnchorNames);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateReferenceSpaces(void *args)
{
    struct xrEnumerateReferenceSpaces_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->spaceCapacityInput, params->spaceCountOutput, params->spaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReferenceSpaces(wine_session_from_handle(params->session)->host_session, params->spaceCapacityInput, params->spaceCountOutput, params->spaces);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateRenderModelPathsFB(void *args)
{
    struct xrEnumerateRenderModelPathsFB_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->pathCapacityInput, params->pathCountOutput, params->paths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRenderModelPathsFB(wine_session_from_handle(params->session)->host_session, params->pathCapacityInput, params->pathCountOutput, params->paths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateReprojectionModesMSFT(void *args)
{
    struct xrEnumerateReprojectionModesMSFT_params *params = args;

    TRACE("%p, 0x%s, %#x, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->modeCapacityInput, params->modeCountOutput, params->modes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReprojectionModesMSFT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->modeCapacityInput, params->modeCountOutput, params->modes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSceneComputeFeaturesMSFT(void *args)
{
    struct xrEnumerateSceneComputeFeaturesMSFT_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->featureCapacityInput, params->featureCountOutput, params->features);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSceneComputeFeaturesMSFT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->featureCapacityInput, params->featureCountOutput, params->features);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpaceSupportedComponentsFB(void *args)
{
    struct xrEnumerateSpaceSupportedComponentsFB_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->space, params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpaceSupportedComponentsFB(params->space, params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSwapchainFormats(void *args)
{
    struct xrEnumerateSwapchainFormats_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->formatCapacityInput, params->formatCountOutput, params->formats);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainFormats(wine_session_from_handle(params->session)->host_session, params->formatCapacityInput, params->formatCountOutput, params->formats);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSwapchainImages(void *args)
{
    struct xrEnumerateSwapchainImages_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainImages(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateViewConfigurationViews(void *args)
{
    struct xrEnumerateViewConfigurationViews_params *params = args;

    TRACE("%p, 0x%s, %#x, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->viewCapacityInput, params->viewCountOutput, params->views);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurationViews(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->viewCapacityInput, params->viewCountOutput, params->views);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateViewConfigurations(void *args)
{
    struct xrEnumerateViewConfigurations_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationTypeCapacityInput, params->viewConfigurationTypeCountOutput, params->viewConfigurationTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurations(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationTypeCapacityInput, params->viewConfigurationTypeCountOutput, params->viewConfigurationTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateViveTrackerPathsHTCX(void *args)
{
    struct xrEnumerateViveTrackerPathsHTCX_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->instance, params->pathCapacityInput, params->pathCountOutput, params->paths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViveTrackerPathsHTCX(wine_instance_from_handle(params->instance)->host_instance, params->pathCapacityInput, params->pathCountOutput, params->paths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEraseSpaceFB(void *args)
{
    struct xrEraseSpaceFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrEraseSpaceFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGeometryInstanceSetTransformFB(void *args)
{
    struct xrGeometryInstanceSetTransformFB_params *params = args;

    TRACE("%p, %p\n", params->instance, params->transformation);

    params->result = g_xr_host_instance_dispatch_table.p_xrGeometryInstanceSetTransformFB(params->instance, params->transformation);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStateBoolean(void *args)
{
    struct xrGetActionStateBoolean_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateBoolean(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStateFloat(void *args)
{
    struct xrGetActionStateFloat_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateFloat(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStatePose(void *args)
{
    struct xrGetActionStatePose_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStatePose(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStateVector2f(void *args)
{
    struct xrGetActionStateVector2f_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateVector2f(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAudioInputDeviceGuidOculus(void *args)
{
    struct xrGetAudioInputDeviceGuidOculus_params *params = args;

    TRACE("%p, %p\n", params->instance, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioInputDeviceGuidOculus(wine_instance_from_handle(params->instance)->host_instance, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAudioOutputDeviceGuidOculus(void *args)
{
    struct xrGetAudioOutputDeviceGuidOculus_params *params = args;

    TRACE("%p, %p\n", params->instance, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioOutputDeviceGuidOculus(wine_instance_from_handle(params->instance)->host_instance, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetBodySkeletonFB(void *args)
{
    struct xrGetBodySkeletonFB_params *params = args;

    TRACE("%p, %p\n", params->bodyTracker, params->skeleton);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetBodySkeletonFB(params->bodyTracker, params->skeleton);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetControllerModelKeyMSFT(void *args)
{
    struct xrGetControllerModelKeyMSFT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->topLevelUserPath), params->controllerModelKeyState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelKeyMSFT(wine_session_from_handle(params->session)->host_session, params->topLevelUserPath, params->controllerModelKeyState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetControllerModelPropertiesMSFT(void *args)
{
    struct xrGetControllerModelPropertiesMSFT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->modelKey), params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelPropertiesMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetControllerModelStateMSFT(void *args)
{
    struct xrGetControllerModelStateMSFT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->modelKey), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelStateMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetCurrentInteractionProfile(void *args)
{
    struct xrGetCurrentInteractionProfile_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->topLevelUserPath), params->interactionProfile);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetCurrentInteractionProfile(wine_session_from_handle(params->session)->host_session, params->topLevelUserPath, params->interactionProfile);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetDeviceSampleRateFB(void *args)
{
    struct xrGetDeviceSampleRateFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->hapticActionInfo, params->deviceSampleRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetDeviceSampleRateFB(wine_session_from_handle(params->session)->host_session, params->hapticActionInfo, params->deviceSampleRate);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetDisplayRefreshRateFB(void *args)
{
    struct xrGetDisplayRefreshRateFB_params *params = args;

    TRACE("%p, %p\n", params->session, params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetDisplayRefreshRateFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRate);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetEnvironmentDepthSwapchainStateMETA(void *args)
{
    struct xrGetEnvironmentDepthSwapchainStateMETA_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetEnvironmentDepthSwapchainStateMETA(params->swapchain, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetExportedLocalizationMapDataML(void *args)
{
    struct xrGetExportedLocalizationMapDataML_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->map, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetExportedLocalizationMapDataML(params->map, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetEyeGazesFB(void *args)
{
    struct xrGetEyeGazesFB_params *params = args;

    TRACE("%p, %p, %p\n", params->eyeTracker, params->gazeInfo, params->eyeGazes);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetEyeGazesFB(params->eyeTracker, params->gazeInfo, params->eyeGazes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFaceExpressionWeights2FB(void *args)
{
    struct xrGetFaceExpressionWeights2FB_params *params = args;

    TRACE("%p, %p, %p\n", params->faceTracker, params->expressionInfo, params->expressionWeights);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeights2FB(params->faceTracker, params->expressionInfo, params->expressionWeights);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFaceExpressionWeightsFB(void *args)
{
    struct xrGetFaceExpressionWeightsFB_params *params = args;

    TRACE("%p, %p, %p\n", params->faceTracker, params->expressionInfo, params->expressionWeights);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeightsFB(params->faceTracker, params->expressionInfo, params->expressionWeights);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFacialExpressionsHTC(void *args)
{
    struct xrGetFacialExpressionsHTC_params *params = args;

    TRACE("%p, %p\n", params->facialTracker, params->facialExpressions);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFacialExpressionsHTC(params->facialTracker, params->facialExpressions);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFoveationEyeTrackedStateMETA(void *args)
{
    struct xrGetFoveationEyeTrackedStateMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->foveationState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFoveationEyeTrackedStateMETA(wine_session_from_handle(params->session)->host_session, params->foveationState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetHandMeshFB(void *args)
{
    struct xrGetHandMeshFB_params *params = args;

    TRACE("%p, %p\n", params->handTracker, params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetHandMeshFB(params->handTracker, params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetInputSourceLocalizedName(void *args)
{
    struct xrGetInputSourceLocalizedName_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->session, params->getInfo, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetInputSourceLocalizedName(wine_session_from_handle(params->session)->host_session, params->getInfo, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetInstanceProperties(void *args)
{
    struct xrGetInstanceProperties_params *params = args;

    TRACE("%p, %p\n", params->instance, params->instanceProperties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetInstanceProperties(wine_instance_from_handle(params->instance)->host_instance, params->instanceProperties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerDetectorStateML(void *args)
{
    struct xrGetMarkerDetectorStateML_params *params = args;

    TRACE("%p, %p\n", params->markerDetector, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerDetectorStateML(params->markerDetector, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerLengthML(void *args)
{
    struct xrGetMarkerLengthML_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->meters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerLengthML(params->markerDetector, params->marker, params->meters);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerNumberML(void *args)
{
    struct xrGetMarkerNumberML_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->number);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerNumberML(params->markerDetector, params->marker, params->number);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerReprojectionErrorML(void *args)
{
    struct xrGetMarkerReprojectionErrorML_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->reprojectionErrorMeters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerReprojectionErrorML(params->markerDetector, params->marker, params->reprojectionErrorMeters);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerSizeVARJO(void *args)
{
    struct xrGetMarkerSizeVARJO_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->markerId), params->size);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerSizeVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->size);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerStringML(void *args)
{
    struct xrGetMarkerStringML_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerStringML(params->markerDetector, params->marker, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkersML(void *args)
{
    struct xrGetMarkersML_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->markerDetector, params->markerCapacityInput, params->markerCountOutput, params->markers);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkersML(params->markerDetector, params->markerCapacityInput, params->markerCountOutput, params->markers);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetOpenGLGraphicsRequirementsKHR(void *args)
{
    struct xrGetOpenGLGraphicsRequirementsKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetOpenGLGraphicsRequirementsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->graphicsRequirements);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPassthroughPreferencesMETA(void *args)
{
    struct xrGetPassthroughPreferencesMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->preferences);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPassthroughPreferencesMETA(wine_session_from_handle(params->session)->host_session, params->preferences);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPerformanceMetricsStateMETA(void *args)
{
    struct xrGetPerformanceMetricsStateMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPerformanceMetricsStateMETA(wine_session_from_handle(params->session)->host_session, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPlaneDetectionStateEXT(void *args)
{
    struct xrGetPlaneDetectionStateEXT_params *params = args;

    TRACE("%p, %p\n", params->planeDetector, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionStateEXT(params->planeDetector, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPlaneDetectionsEXT(void *args)
{
    struct xrGetPlaneDetectionsEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->planeDetector, params->info, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionsEXT(params->planeDetector, params->info, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPlanePolygonBufferEXT(void *args)
{
    struct xrGetPlanePolygonBufferEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->planeDetector, wine_dbgstr_longlong(params->planeId), params->polygonBufferIndex, params->polygonBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlanePolygonBufferEXT(params->planeDetector, params->planeId, params->polygonBufferIndex, params->polygonBuffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRecommendedLayerResolutionMETA(void *args)
{
    struct xrGetRecommendedLayerResolutionMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->resolution);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRecommendedLayerResolutionMETA(wine_session_from_handle(params->session)->host_session, params->info, params->resolution);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetReferenceSpaceBoundsRect(void *args)
{
    struct xrGetReferenceSpaceBoundsRect_params *params = args;

    TRACE("%p, %#x, %p\n", params->session, params->referenceSpaceType, params->bounds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetReferenceSpaceBoundsRect(wine_session_from_handle(params->session)->host_session, params->referenceSpaceType, params->bounds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelPropertiesFB(void *args)
{
    struct xrGetRenderModelPropertiesFB_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->path), params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPropertiesFB(wine_session_from_handle(params->session)->host_session, params->path, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneComponentsMSFT(void *args)
{
    struct xrGetSceneComponentsMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->scene, params->getInfo, params->components);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComponentsMSFT(params->scene, params->getInfo, params->components);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneComputeStateMSFT(void *args)
{
    struct xrGetSceneComputeStateMSFT_params *params = args;

    TRACE("%p, %p\n", params->sceneObserver, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComputeStateMSFT(params->sceneObserver, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneMarkerDecodedStringMSFT(void *args)
{
    struct xrGetSceneMarkerDecodedStringMSFT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerDecodedStringMSFT(params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneMarkerRawDataMSFT(void *args)
{
    struct xrGetSceneMarkerRawDataMSFT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerRawDataMSFT(params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneMeshBuffersMSFT(void *args)
{
    struct xrGetSceneMeshBuffersMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->scene, params->getInfo, params->buffers);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMeshBuffersMSFT(params->scene, params->getInfo, params->buffers);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSerializedSceneFragmentDataMSFT(void *args)
{
    struct xrGetSerializedSceneFragmentDataMSFT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->scene, params->getInfo, params->countInput, params->readOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSerializedSceneFragmentDataMSFT(params->scene, params->getInfo, params->countInput, params->readOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceBoundary2DFB(void *args)
{
    struct xrGetSpaceBoundary2DFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->boundary2DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundary2DFB(wine_session_from_handle(params->session)->host_session, params->space, params->boundary2DOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceBoundingBox2DFB(void *args)
{
    struct xrGetSpaceBoundingBox2DFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->boundingBox2DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox2DFB(wine_session_from_handle(params->session)->host_session, params->space, params->boundingBox2DOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceBoundingBox3DFB(void *args)
{
    struct xrGetSpaceBoundingBox3DFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->boundingBox3DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox3DFB(wine_session_from_handle(params->session)->host_session, params->space, params->boundingBox3DOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceComponentStatusFB(void *args)
{
    struct xrGetSpaceComponentStatusFB_params *params = args;

    TRACE("%p, %#x, %p\n", params->space, params->componentType, params->status);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceComponentStatusFB(params->space, params->componentType, params->status);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceContainerFB(void *args)
{
    struct xrGetSpaceContainerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->spaceContainerOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceContainerFB(wine_session_from_handle(params->session)->host_session, params->space, params->spaceContainerOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceRoomLayoutFB(void *args)
{
    struct xrGetSpaceRoomLayoutFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->roomLayoutOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceRoomLayoutFB(wine_session_from_handle(params->session)->host_session, params->space, params->roomLayoutOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceSemanticLabelsFB(void *args)
{
    struct xrGetSpaceSemanticLabelsFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->semanticLabelsOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceSemanticLabelsFB(wine_session_from_handle(params->session)->host_session, params->space, params->semanticLabelsOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceTriangleMeshMETA(void *args)
{
    struct xrGetSpaceTriangleMeshMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->space, params->getInfo, params->triangleMeshOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceTriangleMeshMETA(params->space, params->getInfo, params->triangleMeshOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceUserIdFB(void *args)
{
    struct xrGetSpaceUserIdFB_params *params = args;

    TRACE("%p, %p\n", params->user, params->userId);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUserIdFB(params->user, params->userId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceUuidFB(void *args)
{
    struct xrGetSpaceUuidFB_params *params = args;

    TRACE("%p, %p\n", params->space, params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUuidFB(params->space, params->uuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialAnchorNameHTC(void *args)
{
    struct xrGetSpatialAnchorNameHTC_params *params = args;

    TRACE("%p, %p\n", params->anchor, params->name);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialAnchorNameHTC(params->anchor, params->name);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialGraphNodeBindingPropertiesMSFT(void *args)
{
    struct xrGetSpatialGraphNodeBindingPropertiesMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->nodeBinding, params->getInfo, params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialGraphNodeBindingPropertiesMSFT(params->nodeBinding, params->getInfo, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSwapchainStateFB(void *args)
{
    struct xrGetSwapchainStateFB_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSwapchainStateFB(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSystem(void *args)
{
    struct xrGetSystem_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->getInfo, params->systemId);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystem(wine_instance_from_handle(params->instance)->host_instance, params->getInfo, params->systemId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSystemProperties(void *args)
{
    struct xrGetSystemProperties_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystemProperties(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetViewConfigurationProperties(void *args)
{
    struct xrGetViewConfigurationProperties_params *params = args;

    TRACE("%p, 0x%s, %#x, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->configurationProperties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetViewConfigurationProperties(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->configurationProperties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardDirtyTexturesMETA(void *args)
{
    struct xrGetVirtualKeyboardDirtyTexturesMETA_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->keyboard, params->textureIdCapacityInput, params->textureIdCountOutput, params->textureIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardDirtyTexturesMETA(params->keyboard, params->textureIdCapacityInput, params->textureIdCountOutput, params->textureIds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardModelAnimationStatesMETA(void *args)
{
    struct xrGetVirtualKeyboardModelAnimationStatesMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->animationStates);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardModelAnimationStatesMETA(params->keyboard, params->animationStates);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardScaleMETA(void *args)
{
    struct xrGetVirtualKeyboardScaleMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->scale);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardScaleMETA(params->keyboard, params->scale);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardTextureDataMETA(void *args)
{
    struct xrGetVirtualKeyboardTextureDataMETA_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->keyboard, wine_dbgstr_longlong(params->textureId), params->textureData);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardTextureDataMETA(params->keyboard, params->textureId, params->textureData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVisibilityMaskKHR(void *args)
{
    struct xrGetVisibilityMaskKHR_params *params = args;

    TRACE("%p, %#x, %u, %#x, %p\n", params->session, params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, params->visibilityMask);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVisibilityMaskKHR(wine_session_from_handle(params->session)->host_session, params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, params->visibilityMask);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanDeviceExtensionsKHR(void *args)
{
    struct xrGetVulkanDeviceExtensionsKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = wine_xrGetVulkanDeviceExtensionsKHR(params->instance, params->systemId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsDevice2KHR(void *args)
{
    struct xrGetVulkanGraphicsDevice2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->getInfo, params->vulkanPhysicalDevice);

    params->result = wine_xrGetVulkanGraphicsDevice2KHR(params->instance, params->getInfo, params->vulkanPhysicalDevice);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsDeviceKHR(void *args)
{
    struct xrGetVulkanGraphicsDeviceKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->vkInstance, params->vkPhysicalDevice);

    params->result = wine_xrGetVulkanGraphicsDeviceKHR(params->instance, params->systemId, params->vkInstance, params->vkPhysicalDevice);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsRequirements2KHR(void *args)
{
    struct xrGetVulkanGraphicsRequirements2KHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirements2KHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->graphicsRequirements);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsRequirementsKHR(void *args)
{
    struct xrGetVulkanGraphicsRequirementsKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirementsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->graphicsRequirements);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanInstanceExtensionsKHR(void *args)
{
    struct xrGetVulkanInstanceExtensionsKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = wine_xrGetVulkanInstanceExtensionsKHR(params->instance, params->systemId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrImportLocalizationMapML(void *args)
{
    struct xrImportLocalizationMapML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->importInfo, params->mapUuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrImportLocalizationMapML(wine_session_from_handle(params->session)->host_session, params->importInfo, params->mapUuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLoadControllerModelMSFT(void *args)
{
    struct xrLoadControllerModelMSFT_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->session, wine_dbgstr_longlong(params->modelKey), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrLoadControllerModelMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLoadRenderModelFB(void *args)
{
    struct xrLoadRenderModelFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrLoadRenderModelFB(wine_session_from_handle(params->session)->host_session, params->info, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateBodyJointsFB(void *args)
{
    struct xrLocateBodyJointsFB_params *params = args;

    TRACE("%p, %p, %p\n", params->bodyTracker, params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsFB(params->bodyTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateHandJointsEXT(void *args)
{
    struct xrLocateHandJointsEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->handTracker, params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateHandJointsEXT(params->handTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSceneComponentsMSFT(void *args)
{
    struct xrLocateSceneComponentsMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->scene, params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSceneComponentsMSFT(params->scene, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSpace(void *args)
{
    struct xrLocateSpace_params *params = args;

    TRACE("%p, %p, 0x%s, %p\n", params->space, params->baseSpace, wine_dbgstr_longlong(params->time), params->location);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpace(params->space, params->baseSpace, params->time, params->location);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSpaces(void *args)
{
    struct xrLocateSpaces_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->locateInfo, params->spaceLocations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpaces(wine_session_from_handle(params->session)->host_session, params->locateInfo, params->spaceLocations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSpacesKHR(void *args)
{
    struct xrLocateSpacesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->locateInfo, params->spaceLocations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpacesKHR(wine_session_from_handle(params->session)->host_session, params->locateInfo, params->spaceLocations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateViews(void *args)
{
    struct xrLocateViews_params *params = args;

    TRACE("%p, %p, %p, %u, %p, %p\n", params->session, params->viewLocateInfo, params->viewState, params->viewCapacityInput, params->viewCountOutput, params->views);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateViews(wine_session_from_handle(params->session)->host_session, params->viewLocateInfo, params->viewState, params->viewCapacityInput, params->viewCountOutput, params->views);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerPauseFB(void *args)
{
    struct xrPassthroughLayerPauseFB_params *params = args;

    TRACE("%p\n", params->layer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerPauseFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerResumeFB(void *args)
{
    struct xrPassthroughLayerResumeFB_params *params = args;

    TRACE("%p\n", params->layer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerResumeFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerSetKeyboardHandsIntensityFB(void *args)
{
    struct xrPassthroughLayerSetKeyboardHandsIntensityFB_params *params = args;

    TRACE("%p, %p\n", params->layer, params->intensity);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetKeyboardHandsIntensityFB(params->layer, params->intensity);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerSetStyleFB(void *args)
{
    struct xrPassthroughLayerSetStyleFB_params *params = args;

    TRACE("%p, %p\n", params->layer, params->style);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetStyleFB(params->layer, params->style);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughPauseFB(void *args)
{
    struct xrPassthroughPauseFB_params *params = args;

    TRACE("%p\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughPauseFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughStartFB(void *args)
{
    struct xrPassthroughStartFB_params *params = args;

    TRACE("%p\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughStartFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPathToString(void *args)
{
    struct xrPathToString_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->path), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPathToString(wine_instance_from_handle(params->instance)->host_instance, params->path, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPerfSettingsSetPerformanceLevelEXT(void *args)
{
    struct xrPerfSettingsSetPerformanceLevelEXT_params *params = args;

    TRACE("%p, %#x, %#x\n", params->session, params->domain, params->level);

    params->result = g_xr_host_instance_dispatch_table.p_xrPerfSettingsSetPerformanceLevelEXT(wine_session_from_handle(params->session)->host_session, params->domain, params->level);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialAnchorMSFT(void *args)
{
    struct xrPersistSpatialAnchorMSFT_params *params = args;

    TRACE("%p, %p\n", params->spatialAnchorStore, params->spatialAnchorPersistenceInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorMSFT(params->spatialAnchorStore, params->spatialAnchorPersistenceInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPollEvent(void *args)
{
    struct xrPollEvent_params *params = args;

    TRACE("%p, %p\n", params->instance, params->eventData);

    params->result = g_xr_host_instance_dispatch_table.p_xrPollEvent(wine_instance_from_handle(params->instance)->host_instance, params->eventData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPollFutureEXT(void *args)
{
    struct xrPollFutureEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pollInfo, params->pollResult);

    params->result = g_xr_host_instance_dispatch_table.p_xrPollFutureEXT(wine_instance_from_handle(params->instance)->host_instance, params->pollInfo, params->pollResult);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQueryLocalizationMapsML(void *args)
{
    struct xrQueryLocalizationMapsML_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->session, params->queryInfo, params->mapCapacityInput, params->mapCountOutput, params->maps);

    params->result = g_xr_host_instance_dispatch_table.p_xrQueryLocalizationMapsML(wine_session_from_handle(params->session)->host_session, params->queryInfo, params->mapCapacityInput, params->mapCountOutput, params->maps);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQueryPerformanceMetricsCounterMETA(void *args)
{
    struct xrQueryPerformanceMetricsCounterMETA_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->counterPath), params->counter);

    params->result = g_xr_host_instance_dispatch_table.p_xrQueryPerformanceMetricsCounterMETA(wine_session_from_handle(params->session)->host_session, params->counterPath, params->counter);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySpacesFB(void *args)
{
    struct xrQuerySpacesFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpacesFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySystemTrackedKeyboardFB(void *args)
{
    struct xrQuerySystemTrackedKeyboardFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->queryInfo, params->keyboard);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySystemTrackedKeyboardFB(wine_session_from_handle(params->session)->host_session, params->queryInfo, params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrReleaseSwapchainImage(void *args)
{
    struct xrReleaseSwapchainImage_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->releaseInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrReleaseSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->releaseInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestDisplayRefreshRateFB(void *args)
{
    struct xrRequestDisplayRefreshRateFB_params *params = args;

    TRACE("%p, %f\n", params->session, params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestDisplayRefreshRateFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRate);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestExitSession(void *args)
{
    struct xrRequestExitSession_params *params = args;

    TRACE("%p\n", params->session);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestExitSession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestMapLocalizationML(void *args)
{
    struct xrRequestMapLocalizationML_params *params = args;

    TRACE("%p, %p\n", params->session, params->requestInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestMapLocalizationML(wine_session_from_handle(params->session)->host_session, params->requestInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestSceneCaptureFB(void *args)
{
    struct xrRequestSceneCaptureFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestSceneCaptureFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrResultToString(void *args)
{
    struct xrResultToString_params *params = args;

    TRACE("%p, %#x, %p\n", params->instance, params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrResultToString(wine_instance_from_handle(params->instance)->host_instance, params->value, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRetrieveSpaceQueryResultsFB(void *args)
{
    struct xrRetrieveSpaceQueryResultsFB_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->requestId), params->results);

    params->result = g_xr_host_instance_dispatch_table.p_xrRetrieveSpaceQueryResultsFB(wine_session_from_handle(params->session)->host_session, params->requestId, params->results);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSaveSpaceFB(void *args)
{
    struct xrSaveSpaceFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSaveSpaceListFB(void *args)
{
    struct xrSaveSpaceListFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceListFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSendVirtualKeyboardInputMETA(void *args)
{
    struct xrSendVirtualKeyboardInputMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->keyboard, params->info, params->interactorRootPose);

    params->result = g_xr_host_instance_dispatch_table.p_xrSendVirtualKeyboardInputMETA(params->keyboard, params->info, params->interactorRootPose);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetColorSpaceFB(void *args)
{
    struct xrSetColorSpaceFB_params *params = args;

    TRACE("%p, %#x\n", params->session, params->colorSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetColorSpaceFB(wine_session_from_handle(params->session)->host_session, params->colorSpace);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetDigitalLensControlALMALENCE(void *args)
{
    struct xrSetDigitalLensControlALMALENCE_params *params = args;

    TRACE("%p, %p\n", params->session, params->digitalLensControl);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetDigitalLensControlALMALENCE(wine_session_from_handle(params->session)->host_session, params->digitalLensControl);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetEnvironmentDepthEstimationVARJO(void *args)
{
    struct xrSetEnvironmentDepthEstimationVARJO_params *params = args;

    TRACE("%p, %u\n", params->session, params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthEstimationVARJO(wine_session_from_handle(params->session)->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetEnvironmentDepthHandRemovalMETA(void *args)
{
    struct xrSetEnvironmentDepthHandRemovalMETA_params *params = args;

    TRACE("%p, %p\n", params->environmentDepthProvider, params->setInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthHandRemovalMETA(params->environmentDepthProvider, params->setInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceActiveEXT(void *args)
{
    struct xrSetInputDeviceActiveEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->session, wine_dbgstr_longlong(params->interactionProfile), wine_dbgstr_longlong(params->topLevelPath), params->isActive);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceActiveEXT(wine_session_from_handle(params->session)->host_session, params->interactionProfile, params->topLevelPath, params->isActive);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceLocationEXT(void *args)
{
    struct xrSetInputDeviceLocationEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %p, {{%f, %f, %f, %f}, {%f %f %f}}\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->space, params->pose.orientation.x, params->pose.orientation.y, params->pose.orientation.z, params->pose.orientation.w, params->pose.position.x, params->pose.position.y, params->pose.position.z);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceLocationEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->space, params->pose);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceStateBoolEXT(void *args)
{
    struct xrSetInputDeviceStateBoolEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateBoolEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceStateFloatEXT(void *args)
{
    struct xrSetInputDeviceStateFloatEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %f\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateFloatEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceStateVector2fEXT(void *args)
{
    struct xrSetInputDeviceStateVector2fEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %f, %f\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state.x, params->state.y);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateVector2fEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetMarkerTrackingPredictionVARJO(void *args)
{
    struct xrSetMarkerTrackingPredictionVARJO_params *params = args;

    TRACE("%p, 0x%s, %u\n", params->session, wine_dbgstr_longlong(params->markerId), params->enable);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingPredictionVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->enable);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetMarkerTrackingTimeoutVARJO(void *args)
{
    struct xrSetMarkerTrackingTimeoutVARJO_params *params = args;

    TRACE("%p, 0x%s, 0x%s\n", params->session, wine_dbgstr_longlong(params->markerId), wine_dbgstr_longlong(params->timeout));

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingTimeoutVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->timeout);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetMarkerTrackingVARJO(void *args)
{
    struct xrSetMarkerTrackingVARJO_params *params = args;

    TRACE("%p, %u\n", params->session, params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingVARJO(wine_session_from_handle(params->session)->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetPerformanceMetricsStateMETA(void *args)
{
    struct xrSetPerformanceMetricsStateMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetPerformanceMetricsStateMETA(wine_session_from_handle(params->session)->host_session, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetSpaceComponentStatusFB(void *args)
{
    struct xrSetSpaceComponentStatusFB_params *params = args;

    TRACE("%p, %p, %p\n", params->space, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetSpaceComponentStatusFB(params->space, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetTrackingOptimizationSettingsHintQCOM(void *args)
{
    struct xrSetTrackingOptimizationSettingsHintQCOM_params *params = args;

    TRACE("%p, %#x, %#x\n", params->session, params->domain, params->hint);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetTrackingOptimizationSettingsHintQCOM(wine_session_from_handle(params->session)->host_session, params->domain, params->hint);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetViewOffsetVARJO(void *args)
{
    struct xrSetViewOffsetVARJO_params *params = args;

    TRACE("%p, %f\n", params->session, params->offset);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetViewOffsetVARJO(wine_session_from_handle(params->session)->host_session, params->offset);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetVirtualKeyboardModelVisibilityMETA(void *args)
{
    struct xrSetVirtualKeyboardModelVisibilityMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->modelVisibility);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetVirtualKeyboardModelVisibilityMETA(params->keyboard, params->modelVisibility);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrShareSpacesFB(void *args)
{
    struct xrShareSpacesFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpacesFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSnapshotMarkerDetectorML(void *args)
{
    struct xrSnapshotMarkerDetectorML_params *params = args;

    TRACE("%p, %p\n", params->markerDetector, params->snapshotInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSnapshotMarkerDetectorML(params->markerDetector, params->snapshotInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartEnvironmentDepthProviderMETA(void *args)
{
    struct xrStartEnvironmentDepthProviderMETA_params *params = args;

    TRACE("%p\n", params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopEnvironmentDepthProviderMETA(void *args)
{
    struct xrStopEnvironmentDepthProviderMETA_params *params = args;

    TRACE("%p\n", params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopHapticFeedback(void *args)
{
    struct xrStopHapticFeedback_params *params = args;

    TRACE("%p, %p\n", params->session, params->hapticActionInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopHapticFeedback(wine_session_from_handle(params->session)->host_session, params->hapticActionInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStringToPath(void *args)
{
    struct xrStringToPath_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pathString, params->path);

    params->result = g_xr_host_instance_dispatch_table.p_xrStringToPath(wine_instance_from_handle(params->instance)->host_instance, params->pathString, params->path);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStructureTypeToString(void *args)
{
    struct xrStructureTypeToString_params *params = args;

    TRACE("%p, %#x, %p\n", params->instance, params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrStructureTypeToString(wine_instance_from_handle(params->instance)->host_instance, params->value, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSuggestInteractionProfileBindings(void *args)
{
    struct xrSuggestInteractionProfileBindings_params *params = args;

    TRACE("%p, %p\n", params->instance, params->suggestedBindings);

    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestInteractionProfileBindings(wine_instance_from_handle(params->instance)->host_instance, params->suggestedBindings);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSuggestVirtualKeyboardLocationMETA(void *args)
{
    struct xrSuggestVirtualKeyboardLocationMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->locationInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestVirtualKeyboardLocationMETA(params->keyboard, params->locationInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSyncActions(void *args)
{
    struct xrSyncActions_params *params = args;

    TRACE("%p, %p\n", params->session, params->syncInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSyncActions(wine_session_from_handle(params->session)->host_session, params->syncInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrThermalGetTemperatureTrendEXT(void *args)
{
    struct xrThermalGetTemperatureTrendEXT_params *params = args;

    TRACE("%p, %#x, %p, %p, %p\n", params->session, params->domain, params->notificationLevel, params->tempHeadroom, params->tempSlope);

    params->result = g_xr_host_instance_dispatch_table.p_xrThermalGetTemperatureTrendEXT(wine_session_from_handle(params->session)->host_session, params->domain, params->notificationLevel, params->tempHeadroom, params->tempSlope);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshBeginUpdateFB(void *args)
{
    struct xrTriangleMeshBeginUpdateFB_params *params = args;

    TRACE("%p\n", params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginUpdateFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshBeginVertexBufferUpdateFB(void *args)
{
    struct xrTriangleMeshBeginVertexBufferUpdateFB_params *params = args;

    TRACE("%p, %p\n", params->mesh, params->outVertexCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginVertexBufferUpdateFB(params->mesh, params->outVertexCount);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshEndUpdateFB(void *args)
{
    struct xrTriangleMeshEndUpdateFB_params *params = args;

    TRACE("%p, %u, %u\n", params->mesh, params->vertexCount, params->triangleCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndUpdateFB(params->mesh, params->vertexCount, params->triangleCount);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshEndVertexBufferUpdateFB(void *args)
{
    struct xrTriangleMeshEndVertexBufferUpdateFB_params *params = args;

    TRACE("%p\n", params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndVertexBufferUpdateFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshGetIndexBufferFB(void *args)
{
    struct xrTriangleMeshGetIndexBufferFB_params *params = args;

    TRACE("%p, %p\n", params->mesh, params->outIndexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetIndexBufferFB(params->mesh, params->outIndexBuffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshGetVertexBufferFB(void *args)
{
    struct xrTriangleMeshGetVertexBufferFB_params *params = args;

    TRACE("%p, %p\n", params->mesh, params->outVertexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetVertexBufferFB(params->mesh, params->outVertexBuffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTryCreateSpatialGraphStaticNodeBindingMSFT(void *args)
{
    struct xrTryCreateSpatialGraphStaticNodeBindingMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->nodeBinding);

    params->result = g_xr_host_instance_dispatch_table.p_xrTryCreateSpatialGraphStaticNodeBindingMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->nodeBinding);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialAnchorMSFT(void *args)
{
    struct xrUnpersistSpatialAnchorMSFT_params *params = args;

    TRACE("%p, %p\n", params->spatialAnchorStore, params->spatialAnchorPersistenceName);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorMSFT(params->spatialAnchorStore, params->spatialAnchorPersistenceName);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateHandMeshMSFT(void *args)
{
    struct xrUpdateHandMeshMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->handTracker, params->updateInfo, params->handMesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateHandMeshMSFT(params->handTracker, params->updateInfo, params->handMesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdatePassthroughColorLutMETA(void *args)
{
    struct xrUpdatePassthroughColorLutMETA_params *params = args;

    TRACE("%p, %p\n", params->colorLut, params->updateInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdatePassthroughColorLutMETA(params->colorLut, params->updateInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateSwapchainFB(void *args)
{
    struct xrUpdateSwapchainFB_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSwapchainFB(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrWaitFrame(void *args)
{
    struct xrWaitFrame_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->frameWaitInfo, params->frameState);

    params->result = g_xr_host_instance_dispatch_table.p_xrWaitFrame(wine_session_from_handle(params->session)->host_session, params->frameWaitInfo, params->frameState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrWaitSwapchainImage(void *args)
{
    struct xrWaitSwapchainImage_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->waitInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrWaitSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->waitInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

static const char * const xr_extensions[] =
{
    "XR_ALMALENCE_digital_lens_control",
    "XR_BD_controller_interaction",
    "XR_EPIC_view_configuration_fov",
    "XR_EXTX_overlay",
    "XR_EXT_active_action_set_priority",
    "XR_EXT_conformance_automation",
    "XR_EXT_dpad_binding",
    "XR_EXT_eye_gaze_interaction",
    "XR_EXT_future",
    "XR_EXT_hand_interaction",
    "XR_EXT_hand_joints_motion_range",
    "XR_EXT_hand_tracking",
    "XR_EXT_hand_tracking_data_source",
    "XR_EXT_hp_mixed_reality_controller",
    "XR_EXT_local_floor",
    "XR_EXT_palm_pose",
    "XR_EXT_performance_settings",
    "XR_EXT_plane_detection",
    "XR_EXT_samsung_odyssey_controller",
    "XR_EXT_thermal_query",
    "XR_EXT_user_presence",
    "XR_EXT_uuid",
    "XR_EXT_view_configuration_depth_range",
    "XR_EXT_win32_appcontainer_compatible",
    "XR_FB_body_tracking",
    "XR_FB_color_space",
    "XR_FB_composition_layer_alpha_blend",
    "XR_FB_composition_layer_depth_test",
    "XR_FB_composition_layer_image_layout",
    "XR_FB_composition_layer_secure_content",
    "XR_FB_composition_layer_settings",
    "XR_FB_display_refresh_rate",
    "XR_FB_eye_tracking_social",
    "XR_FB_face_tracking",
    "XR_FB_face_tracking2",
    "XR_FB_foveation",
    "XR_FB_foveation_configuration",
    "XR_FB_foveation_vulkan",
    "XR_FB_hand_tracking_aim",
    "XR_FB_hand_tracking_capsules",
    "XR_FB_hand_tracking_mesh",
    "XR_FB_haptic_amplitude_envelope",
    "XR_FB_haptic_pcm",
    "XR_FB_keyboard_tracking",
    "XR_FB_passthrough",
    "XR_FB_passthrough_keyboard_hands",
    "XR_FB_render_model",
    "XR_FB_scene",
    "XR_FB_scene_capture",
    "XR_FB_space_warp",
    "XR_FB_spatial_entity",
    "XR_FB_spatial_entity_container",
    "XR_FB_spatial_entity_query",
    "XR_FB_spatial_entity_sharing",
    "XR_FB_spatial_entity_storage",
    "XR_FB_spatial_entity_storage_batch",
    "XR_FB_spatial_entity_user",
    "XR_FB_swapchain_update_state",
    "XR_FB_swapchain_update_state_vulkan",
    "XR_FB_touch_controller_pro",
    "XR_FB_touch_controller_proximity",
    "XR_FB_triangle_mesh",
    "XR_HTCX_vive_tracker_interaction",
    "XR_HTC_anchor",
    "XR_HTC_facial_tracking",
    "XR_HTC_hand_interaction",
    "XR_HTC_passthrough",
    "XR_HTC_vive_cosmos_controller_interaction",
    "XR_HTC_vive_focus3_controller_interaction",
    "XR_HTC_vive_wrist_tracker_interaction",
    "XR_HUAWEI_controller_interaction",
    "XR_KHR_D3D11_enable",
    "XR_KHR_D3D12_enable",
    "XR_KHR_binding_modification",
    "XR_KHR_composition_layer_color_scale_bias",
    "XR_KHR_composition_layer_cube",
    "XR_KHR_composition_layer_cylinder",
    "XR_KHR_composition_layer_depth",
    "XR_KHR_composition_layer_equirect",
    "XR_KHR_composition_layer_equirect2",
    "XR_KHR_locate_spaces",
    "XR_KHR_maintenance1",
    "XR_KHR_opengl_enable",
    "XR_KHR_swapchain_usage_input_attachment_bit",
    "XR_KHR_visibility_mask",
    "XR_KHR_vulkan_enable",
    "XR_KHR_vulkan_enable2",
    "XR_KHR_vulkan_swapchain_format_list",
    "XR_KHR_win32_convert_performance_counter_time",
    "XR_META_automatic_layer_filter",
    "XR_META_environment_depth",
    "XR_META_foveation_eye_tracked",
    "XR_META_headset_id",
    "XR_META_local_dimming",
    "XR_META_passthrough_color_lut",
    "XR_META_passthrough_preferences",
    "XR_META_performance_metrics",
    "XR_META_recommended_layer_resolution",
    "XR_META_spatial_entity_mesh",
    "XR_META_touch_controller_plus",
    "XR_META_virtual_keyboard",
    "XR_META_vulkan_swapchain_create_info",
    "XR_ML_frame_end_info",
    "XR_ML_global_dimmer",
    "XR_ML_localization_map",
    "XR_ML_marker_understanding",
    "XR_ML_ml2_controller_interaction",
    "XR_ML_user_calibration",
    "XR_MNDX_force_feedback_curl",
    "XR_MND_headless",
    "XR_MND_swapchain_usage_input_attachment_bit",
    "XR_MSFT_composition_layer_reprojection",
    "XR_MSFT_controller_model",
    "XR_MSFT_first_person_observer",
    "XR_MSFT_hand_interaction",
    "XR_MSFT_hand_tracking_mesh",
    "XR_MSFT_holographic_window_attachment",
    "XR_MSFT_scene_marker",
    "XR_MSFT_scene_understanding",
    "XR_MSFT_scene_understanding_serialization",
    "XR_MSFT_secondary_view_configuration",
    "XR_MSFT_spatial_anchor",
    "XR_MSFT_spatial_anchor_persistence",
    "XR_MSFT_spatial_graph_bridge",
    "XR_MSFT_unbounded_reference_space",
    "XR_OCULUS_android_session_state_enable",
    "XR_OCULUS_audio_device_guid",
    "XR_OCULUS_external_camera",
    "XR_OPPO_controller_interaction",
    "XR_QCOM_tracking_optimization_settings",
    "XR_ULTRALEAP_hand_tracking_forearm",
    "XR_VALVE_analog_threshold",
    "XR_VARJO_composition_layer_depth_test",
    "XR_VARJO_environment_depth_estimation",
    "XR_VARJO_foveated_rendering",
    "XR_VARJO_marker_tracking",
    "XR_VARJO_quad_views",
    "XR_VARJO_view_offset",
    "XR_VARJO_xr4_controller_interaction",
    "XR_YVR_controller_interaction",
};

BOOL wine_xr_extension_supported(const char *name)
{
    unsigned int i;
    for (i = 0; i < ARRAY_SIZE(xr_extensions); i++)
    {
        if (strcmp(xr_extensions[i], name) == 0)
            return TRUE;
    }
    return FALSE;
}

BOOL wine_xr_is_type_wrapped(XrObjectType type)
{
    return FALSE ||
        type == XR_OBJECT_TYPE_INSTANCE ||
        type == XR_OBJECT_TYPE_SESSION ||
        type == XR_OBJECT_TYPE_SWAPCHAIN;
}

#ifdef _WIN64

const unixlib_entry_t __wine_unix_call_funcs[] =
{
    init_openxr,
    thunk64_xrAcquireEnvironmentDepthImageMETA,
    thunk64_xrAcquireSwapchainImage,
    thunk64_xrApplyForceFeedbackCurlMNDX,
    thunk64_xrApplyHapticFeedback,
    thunk64_xrAttachSessionActionSets,
    thunk64_xrBeginFrame,
    thunk64_xrBeginPlaneDetectionEXT,
    thunk64_xrBeginSession,
    thunk64_xrCancelFutureEXT,
    thunk64_xrChangeVirtualKeyboardTextContextMETA,
    thunk64_xrClearSpatialAnchorStoreMSFT,
    thunk64_xrComputeNewSceneMSFT,
    thunk64_xrCreateAction,
    thunk64_xrCreateActionSet,
    thunk64_xrCreateActionSpace,
    thunk64_xrCreateBodyTrackerFB,
    thunk64_xrCreateEnvironmentDepthProviderMETA,
    thunk64_xrCreateEnvironmentDepthSwapchainMETA,
    thunk64_xrCreateExportedLocalizationMapML,
    thunk64_xrCreateEyeTrackerFB,
    thunk64_xrCreateFaceTracker2FB,
    thunk64_xrCreateFaceTrackerFB,
    thunk64_xrCreateFacialTrackerHTC,
    thunk64_xrCreateFoveationProfileFB,
    thunk64_xrCreateGeometryInstanceFB,
    thunk64_xrCreateHandMeshSpaceMSFT,
    thunk64_xrCreateHandTrackerEXT,
    thunk64_xrCreateInstance,
    thunk64_xrCreateKeyboardSpaceFB,
    thunk64_xrCreateMarkerDetectorML,
    thunk64_xrCreateMarkerSpaceML,
    thunk64_xrCreateMarkerSpaceVARJO,
    thunk64_xrCreatePassthroughColorLutMETA,
    thunk64_xrCreatePassthroughFB,
    thunk64_xrCreatePassthroughHTC,
    thunk64_xrCreatePassthroughLayerFB,
    thunk64_xrCreatePlaneDetectorEXT,
    thunk64_xrCreateReferenceSpace,
    thunk64_xrCreateSceneMSFT,
    thunk64_xrCreateSceneObserverMSFT,
    thunk64_xrCreateSession,
    thunk64_xrCreateSpaceUserFB,
    thunk64_xrCreateSpatialAnchorFB,
    thunk64_xrCreateSpatialAnchorFromPersistedNameMSFT,
    thunk64_xrCreateSpatialAnchorHTC,
    thunk64_xrCreateSpatialAnchorMSFT,
    thunk64_xrCreateSpatialAnchorSpaceMSFT,
    thunk64_xrCreateSpatialAnchorStoreConnectionMSFT,
    thunk64_xrCreateSpatialGraphNodeSpaceMSFT,
    thunk64_xrCreateSwapchain,
    thunk64_xrCreateTriangleMeshFB,
    thunk64_xrCreateVirtualKeyboardMETA,
    thunk64_xrCreateVirtualKeyboardSpaceMETA,
    thunk64_xrDeserializeSceneMSFT,
    thunk64_xrDestroyAction,
    thunk64_xrDestroyActionSet,
    thunk64_xrDestroyBodyTrackerFB,
    thunk64_xrDestroyEnvironmentDepthProviderMETA,
    thunk64_xrDestroyEnvironmentDepthSwapchainMETA,
    thunk64_xrDestroyExportedLocalizationMapML,
    thunk64_xrDestroyEyeTrackerFB,
    thunk64_xrDestroyFaceTracker2FB,
    thunk64_xrDestroyFaceTrackerFB,
    thunk64_xrDestroyFacialTrackerHTC,
    thunk64_xrDestroyFoveationProfileFB,
    thunk64_xrDestroyGeometryInstanceFB,
    thunk64_xrDestroyHandTrackerEXT,
    thunk64_xrDestroyInstance,
    thunk64_xrDestroyMarkerDetectorML,
    thunk64_xrDestroyPassthroughColorLutMETA,
    thunk64_xrDestroyPassthroughFB,
    thunk64_xrDestroyPassthroughHTC,
    thunk64_xrDestroyPassthroughLayerFB,
    thunk64_xrDestroyPlaneDetectorEXT,
    thunk64_xrDestroySceneMSFT,
    thunk64_xrDestroySceneObserverMSFT,
    thunk64_xrDestroySession,
    thunk64_xrDestroySpace,
    thunk64_xrDestroySpaceUserFB,
    thunk64_xrDestroySpatialAnchorMSFT,
    thunk64_xrDestroySpatialAnchorStoreConnectionMSFT,
    thunk64_xrDestroySpatialGraphNodeBindingMSFT,
    thunk64_xrDestroySwapchain,
    thunk64_xrDestroyTriangleMeshFB,
    thunk64_xrDestroyVirtualKeyboardMETA,
    thunk64_xrEnableLocalizationEventsML,
    thunk64_xrEnableUserCalibrationEventsML,
    thunk64_xrEndFrame,
    thunk64_xrEndSession,
    thunk64_xrEnumerateApiLayerProperties,
    thunk64_xrEnumerateBoundSourcesForAction,
    thunk64_xrEnumerateColorSpacesFB,
    thunk64_xrEnumerateDisplayRefreshRatesFB,
    thunk64_xrEnumerateEnvironmentBlendModes,
    thunk64_xrEnumerateEnvironmentDepthSwapchainImagesMETA,
    thunk64_xrEnumerateExternalCamerasOCULUS,
    thunk64_xrEnumerateInstanceExtensionProperties,
    thunk64_xrEnumeratePerformanceMetricsCounterPathsMETA,
    thunk64_xrEnumeratePersistedSpatialAnchorNamesMSFT,
    thunk64_xrEnumerateReferenceSpaces,
    thunk64_xrEnumerateRenderModelPathsFB,
    thunk64_xrEnumerateReprojectionModesMSFT,
    thunk64_xrEnumerateSceneComputeFeaturesMSFT,
    thunk64_xrEnumerateSpaceSupportedComponentsFB,
    thunk64_xrEnumerateSwapchainFormats,
    thunk64_xrEnumerateSwapchainImages,
    thunk64_xrEnumerateViewConfigurationViews,
    thunk64_xrEnumerateViewConfigurations,
    thunk64_xrEnumerateViveTrackerPathsHTCX,
    thunk64_xrEraseSpaceFB,
    thunk64_xrGeometryInstanceSetTransformFB,
    thunk64_xrGetActionStateBoolean,
    thunk64_xrGetActionStateFloat,
    thunk64_xrGetActionStatePose,
    thunk64_xrGetActionStateVector2f,
    thunk64_xrGetAudioInputDeviceGuidOculus,
    thunk64_xrGetAudioOutputDeviceGuidOculus,
    thunk64_xrGetBodySkeletonFB,
    thunk64_xrGetControllerModelKeyMSFT,
    thunk64_xrGetControllerModelPropertiesMSFT,
    thunk64_xrGetControllerModelStateMSFT,
    thunk64_xrGetCurrentInteractionProfile,
    thunk64_xrGetDeviceSampleRateFB,
    thunk64_xrGetDisplayRefreshRateFB,
    thunk64_xrGetEnvironmentDepthSwapchainStateMETA,
    thunk64_xrGetExportedLocalizationMapDataML,
    thunk64_xrGetEyeGazesFB,
    thunk64_xrGetFaceExpressionWeights2FB,
    thunk64_xrGetFaceExpressionWeightsFB,
    thunk64_xrGetFacialExpressionsHTC,
    thunk64_xrGetFoveationEyeTrackedStateMETA,
    thunk64_xrGetHandMeshFB,
    thunk64_xrGetInputSourceLocalizedName,
    thunk64_xrGetInstanceProperties,
    thunk64_xrGetMarkerDetectorStateML,
    thunk64_xrGetMarkerLengthML,
    thunk64_xrGetMarkerNumberML,
    thunk64_xrGetMarkerReprojectionErrorML,
    thunk64_xrGetMarkerSizeVARJO,
    thunk64_xrGetMarkerStringML,
    thunk64_xrGetMarkersML,
    thunk64_xrGetOpenGLGraphicsRequirementsKHR,
    thunk64_xrGetPassthroughPreferencesMETA,
    thunk64_xrGetPerformanceMetricsStateMETA,
    thunk64_xrGetPlaneDetectionStateEXT,
    thunk64_xrGetPlaneDetectionsEXT,
    thunk64_xrGetPlanePolygonBufferEXT,
    thunk64_xrGetRecommendedLayerResolutionMETA,
    thunk64_xrGetReferenceSpaceBoundsRect,
    thunk64_xrGetRenderModelPropertiesFB,
    thunk64_xrGetSceneComponentsMSFT,
    thunk64_xrGetSceneComputeStateMSFT,
    thunk64_xrGetSceneMarkerDecodedStringMSFT,
    thunk64_xrGetSceneMarkerRawDataMSFT,
    thunk64_xrGetSceneMeshBuffersMSFT,
    thunk64_xrGetSerializedSceneFragmentDataMSFT,
    thunk64_xrGetSpaceBoundary2DFB,
    thunk64_xrGetSpaceBoundingBox2DFB,
    thunk64_xrGetSpaceBoundingBox3DFB,
    thunk64_xrGetSpaceComponentStatusFB,
    thunk64_xrGetSpaceContainerFB,
    thunk64_xrGetSpaceRoomLayoutFB,
    thunk64_xrGetSpaceSemanticLabelsFB,
    thunk64_xrGetSpaceTriangleMeshMETA,
    thunk64_xrGetSpaceUserIdFB,
    thunk64_xrGetSpaceUuidFB,
    thunk64_xrGetSpatialAnchorNameHTC,
    thunk64_xrGetSpatialGraphNodeBindingPropertiesMSFT,
    thunk64_xrGetSwapchainStateFB,
    thunk64_xrGetSystem,
    thunk64_xrGetSystemProperties,
    thunk64_xrGetViewConfigurationProperties,
    thunk64_xrGetVirtualKeyboardDirtyTexturesMETA,
    thunk64_xrGetVirtualKeyboardModelAnimationStatesMETA,
    thunk64_xrGetVirtualKeyboardScaleMETA,
    thunk64_xrGetVirtualKeyboardTextureDataMETA,
    thunk64_xrGetVisibilityMaskKHR,
    thunk64_xrGetVulkanDeviceExtensionsKHR,
    thunk64_xrGetVulkanGraphicsDevice2KHR,
    thunk64_xrGetVulkanGraphicsDeviceKHR,
    thunk64_xrGetVulkanGraphicsRequirements2KHR,
    thunk64_xrGetVulkanGraphicsRequirementsKHR,
    thunk64_xrGetVulkanInstanceExtensionsKHR,
    thunk64_xrImportLocalizationMapML,
    thunk64_xrLoadControllerModelMSFT,
    thunk64_xrLoadRenderModelFB,
    thunk64_xrLocateBodyJointsFB,
    thunk64_xrLocateHandJointsEXT,
    thunk64_xrLocateSceneComponentsMSFT,
    thunk64_xrLocateSpace,
    thunk64_xrLocateSpaces,
    thunk64_xrLocateSpacesKHR,
    thunk64_xrLocateViews,
    thunk64_xrPassthroughLayerPauseFB,
    thunk64_xrPassthroughLayerResumeFB,
    thunk64_xrPassthroughLayerSetKeyboardHandsIntensityFB,
    thunk64_xrPassthroughLayerSetStyleFB,
    thunk64_xrPassthroughPauseFB,
    thunk64_xrPassthroughStartFB,
    thunk64_xrPathToString,
    thunk64_xrPerfSettingsSetPerformanceLevelEXT,
    thunk64_xrPersistSpatialAnchorMSFT,
    thunk64_xrPollEvent,
    thunk64_xrPollFutureEXT,
    thunk64_xrQueryLocalizationMapsML,
    thunk64_xrQueryPerformanceMetricsCounterMETA,
    thunk64_xrQuerySpacesFB,
    thunk64_xrQuerySystemTrackedKeyboardFB,
    thunk64_xrReleaseSwapchainImage,
    thunk64_xrRequestDisplayRefreshRateFB,
    thunk64_xrRequestExitSession,
    thunk64_xrRequestMapLocalizationML,
    thunk64_xrRequestSceneCaptureFB,
    thunk64_xrResultToString,
    thunk64_xrRetrieveSpaceQueryResultsFB,
    thunk64_xrSaveSpaceFB,
    thunk64_xrSaveSpaceListFB,
    thunk64_xrSendVirtualKeyboardInputMETA,
    thunk64_xrSetColorSpaceFB,
    thunk64_xrSetDigitalLensControlALMALENCE,
    thunk64_xrSetEnvironmentDepthEstimationVARJO,
    thunk64_xrSetEnvironmentDepthHandRemovalMETA,
    thunk64_xrSetInputDeviceActiveEXT,
    thunk64_xrSetInputDeviceLocationEXT,
    thunk64_xrSetInputDeviceStateBoolEXT,
    thunk64_xrSetInputDeviceStateFloatEXT,
    thunk64_xrSetInputDeviceStateVector2fEXT,
    thunk64_xrSetMarkerTrackingPredictionVARJO,
    thunk64_xrSetMarkerTrackingTimeoutVARJO,
    thunk64_xrSetMarkerTrackingVARJO,
    thunk64_xrSetPerformanceMetricsStateMETA,
    thunk64_xrSetSpaceComponentStatusFB,
    thunk64_xrSetTrackingOptimizationSettingsHintQCOM,
    thunk64_xrSetViewOffsetVARJO,
    thunk64_xrSetVirtualKeyboardModelVisibilityMETA,
    thunk64_xrShareSpacesFB,
    thunk64_xrSnapshotMarkerDetectorML,
    thunk64_xrStartEnvironmentDepthProviderMETA,
    thunk64_xrStopEnvironmentDepthProviderMETA,
    thunk64_xrStopHapticFeedback,
    thunk64_xrStringToPath,
    thunk64_xrStructureTypeToString,
    thunk64_xrSuggestInteractionProfileBindings,
    thunk64_xrSuggestVirtualKeyboardLocationMETA,
    thunk64_xrSyncActions,
    thunk64_xrThermalGetTemperatureTrendEXT,
    thunk64_xrTriangleMeshBeginUpdateFB,
    thunk64_xrTriangleMeshBeginVertexBufferUpdateFB,
    thunk64_xrTriangleMeshEndUpdateFB,
    thunk64_xrTriangleMeshEndVertexBufferUpdateFB,
    thunk64_xrTriangleMeshGetIndexBufferFB,
    thunk64_xrTriangleMeshGetVertexBufferFB,
    thunk64_xrTryCreateSpatialGraphStaticNodeBindingMSFT,
    thunk64_xrUnpersistSpatialAnchorMSFT,
    thunk64_xrUpdateHandMeshMSFT,
    thunk64_xrUpdatePassthroughColorLutMETA,
    thunk64_xrUpdateSwapchainFB,
    thunk64_xrWaitFrame,
    thunk64_xrWaitSwapchainImage,
};
C_ASSERT(ARRAYSIZE(__wine_unix_call_funcs) == unix_count);

#endif /* _WIN64 */

C_ASSERT(ARRAYSIZE(__wine_unix_call_funcs) == unix_count);
