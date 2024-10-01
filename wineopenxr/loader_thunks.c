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

#include "openxr_loader.h"

WINE_DEFAULT_DEBUG_CHANNEL(openxr);

XrResult WINAPI xrAcquireEnvironmentDepthImageMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthImageAcquireInfoMETA *acquireInfo, XrEnvironmentDepthImageMETA *environmentDepthImage)
{
    struct xrAcquireEnvironmentDepthImageMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    params.acquireInfo = acquireInfo;
    params.environmentDepthImage = environmentDepthImage;
    _status = UNIX_CALL(xrAcquireEnvironmentDepthImageMETA, &params);
    assert(!_status && "xrAcquireEnvironmentDepthImageMETA");
    return params.result;
}

XrResult WINAPI xrApplyForceFeedbackCurlMNDX(XrHandTrackerEXT handTracker, const XrForceFeedbackCurlApplyLocationsMNDX *locations)
{
    struct xrApplyForceFeedbackCurlMNDX_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.locations = locations;
    _status = UNIX_CALL(xrApplyForceFeedbackCurlMNDX, &params);
    assert(!_status && "xrApplyForceFeedbackCurlMNDX");
    return params.result;
}

XrResult WINAPI xrApplyHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo, const XrHapticBaseHeader *hapticFeedback)
{
    struct xrApplyHapticFeedback_params params;
    NTSTATUS _status;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    params.hapticFeedback = hapticFeedback;
    _status = UNIX_CALL(xrApplyHapticFeedback, &params);
    assert(!_status && "xrApplyHapticFeedback");
    return params.result;
}

XrResult WINAPI xrAttachSessionActionSets(XrSession session, const XrSessionActionSetsAttachInfo *attachInfo)
{
    struct xrAttachSessionActionSets_params params;
    NTSTATUS _status;
    params.session = session;
    params.attachInfo = attachInfo;
    _status = UNIX_CALL(xrAttachSessionActionSets, &params);
    assert(!_status && "xrAttachSessionActionSets");
    return params.result;
}

XrResult WINAPI xrBeginFrame(XrSession session, const XrFrameBeginInfo *frameBeginInfo)
{
    struct xrBeginFrame_params params;
    NTSTATUS _status;
    params.session = session;
    params.frameBeginInfo = frameBeginInfo;
    _status = UNIX_CALL(xrBeginFrame, &params);
    assert(!_status && "xrBeginFrame");
    return params.result;
}

XrResult WINAPI xrBeginPlaneDetectionEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorBeginInfoEXT *beginInfo)
{
    struct xrBeginPlaneDetectionEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    params.beginInfo = beginInfo;
    _status = UNIX_CALL(xrBeginPlaneDetectionEXT, &params);
    assert(!_status && "xrBeginPlaneDetectionEXT");
    return params.result;
}

XrResult WINAPI xrBeginSession(XrSession session, const XrSessionBeginInfo *beginInfo)
{
    struct xrBeginSession_params params;
    NTSTATUS _status;
    params.session = session;
    params.beginInfo = beginInfo;
    _status = UNIX_CALL(xrBeginSession, &params);
    assert(!_status && "xrBeginSession");
    return params.result;
}

XrResult WINAPI xrCancelFutureEXT(XrInstance instance, const XrFutureCancelInfoEXT *cancelInfo)
{
    struct xrCancelFutureEXT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.cancelInfo = cancelInfo;
    _status = UNIX_CALL(xrCancelFutureEXT, &params);
    assert(!_status && "xrCancelFutureEXT");
    return params.result;
}

XrResult WINAPI xrChangeVirtualKeyboardTextContextMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardTextContextChangeInfoMETA *changeInfo)
{
    struct xrChangeVirtualKeyboardTextContextMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.changeInfo = changeInfo;
    _status = UNIX_CALL(xrChangeVirtualKeyboardTextContextMETA, &params);
    assert(!_status && "xrChangeVirtualKeyboardTextContextMETA");
    return params.result;
}

XrResult WINAPI xrClearSpatialAnchorStoreMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore)
{
    struct xrClearSpatialAnchorStoreMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    _status = UNIX_CALL(xrClearSpatialAnchorStoreMSFT, &params);
    assert(!_status && "xrClearSpatialAnchorStoreMSFT");
    return params.result;
}

XrResult WINAPI xrComputeNewSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrNewSceneComputeInfoMSFT *computeInfo)
{
    struct xrComputeNewSceneMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    params.computeInfo = computeInfo;
    _status = UNIX_CALL(xrComputeNewSceneMSFT, &params);
    assert(!_status && "xrComputeNewSceneMSFT");
    return params.result;
}

XrResult WINAPI xrCreateAction(XrActionSet actionSet, const XrActionCreateInfo *createInfo, XrAction *action)
{
    struct xrCreateAction_params params;
    NTSTATUS _status;
    params.actionSet = actionSet;
    params.createInfo = createInfo;
    params.action = action;
    _status = UNIX_CALL(xrCreateAction, &params);
    assert(!_status && "xrCreateAction");
    return params.result;
}

XrResult WINAPI xrCreateActionSet(XrInstance instance, const XrActionSetCreateInfo *createInfo, XrActionSet *actionSet)
{
    struct xrCreateActionSet_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.createInfo = createInfo;
    params.actionSet = actionSet;
    _status = UNIX_CALL(xrCreateActionSet, &params);
    assert(!_status && "xrCreateActionSet");
    return params.result;
}

XrResult WINAPI xrCreateActionSpace(XrSession session, const XrActionSpaceCreateInfo *createInfo, XrSpace *space)
{
    struct xrCreateActionSpace_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateActionSpace, &params);
    assert(!_status && "xrCreateActionSpace");
    return params.result;
}

XrResult WINAPI xrCreateBodyTrackerFB(XrSession session, const XrBodyTrackerCreateInfoFB *createInfo, XrBodyTrackerFB *bodyTracker)
{
    struct xrCreateBodyTrackerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.bodyTracker = bodyTracker;
    _status = UNIX_CALL(xrCreateBodyTrackerFB, &params);
    assert(!_status && "xrCreateBodyTrackerFB");
    return params.result;
}

XrResult WINAPI xrCreateEnvironmentDepthProviderMETA(XrSession session, const XrEnvironmentDepthProviderCreateInfoMETA *createInfo, XrEnvironmentDepthProviderMETA *environmentDepthProvider)
{
    struct xrCreateEnvironmentDepthProviderMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.environmentDepthProvider = environmentDepthProvider;
    _status = UNIX_CALL(xrCreateEnvironmentDepthProviderMETA, &params);
    assert(!_status && "xrCreateEnvironmentDepthProviderMETA");
    return params.result;
}

XrResult WINAPI xrCreateEnvironmentDepthSwapchainMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthSwapchainCreateInfoMETA *createInfo, XrEnvironmentDepthSwapchainMETA *swapchain)
{
    struct xrCreateEnvironmentDepthSwapchainMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    params.createInfo = createInfo;
    params.swapchain = swapchain;
    _status = UNIX_CALL(xrCreateEnvironmentDepthSwapchainMETA, &params);
    assert(!_status && "xrCreateEnvironmentDepthSwapchainMETA");
    return params.result;
}

XrResult WINAPI xrCreateExportedLocalizationMapML(XrSession session, const XrUuidEXT *mapUuid, XrExportedLocalizationMapML *map)
{
    struct xrCreateExportedLocalizationMapML_params params;
    NTSTATUS _status;
    params.session = session;
    params.mapUuid = mapUuid;
    params.map = map;
    _status = UNIX_CALL(xrCreateExportedLocalizationMapML, &params);
    assert(!_status && "xrCreateExportedLocalizationMapML");
    return params.result;
}

XrResult WINAPI xrCreateEyeTrackerFB(XrSession session, const XrEyeTrackerCreateInfoFB *createInfo, XrEyeTrackerFB *eyeTracker)
{
    struct xrCreateEyeTrackerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.eyeTracker = eyeTracker;
    _status = UNIX_CALL(xrCreateEyeTrackerFB, &params);
    assert(!_status && "xrCreateEyeTrackerFB");
    return params.result;
}

XrResult WINAPI xrCreateFaceTracker2FB(XrSession session, const XrFaceTrackerCreateInfo2FB *createInfo, XrFaceTracker2FB *faceTracker)
{
    struct xrCreateFaceTracker2FB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrCreateFaceTracker2FB, &params);
    assert(!_status && "xrCreateFaceTracker2FB");
    return params.result;
}

XrResult WINAPI xrCreateFaceTrackerFB(XrSession session, const XrFaceTrackerCreateInfoFB *createInfo, XrFaceTrackerFB *faceTracker)
{
    struct xrCreateFaceTrackerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrCreateFaceTrackerFB, &params);
    assert(!_status && "xrCreateFaceTrackerFB");
    return params.result;
}

XrResult WINAPI xrCreateFacialTrackerHTC(XrSession session, const XrFacialTrackerCreateInfoHTC *createInfo, XrFacialTrackerHTC *facialTracker)
{
    struct xrCreateFacialTrackerHTC_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.facialTracker = facialTracker;
    _status = UNIX_CALL(xrCreateFacialTrackerHTC, &params);
    assert(!_status && "xrCreateFacialTrackerHTC");
    return params.result;
}

XrResult WINAPI xrCreateFoveationProfileFB(XrSession session, const XrFoveationProfileCreateInfoFB *createInfo, XrFoveationProfileFB *profile)
{
    struct xrCreateFoveationProfileFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.profile = profile;
    _status = UNIX_CALL(xrCreateFoveationProfileFB, &params);
    assert(!_status && "xrCreateFoveationProfileFB");
    return params.result;
}

XrResult WINAPI xrCreateGeometryInstanceFB(XrSession session, const XrGeometryInstanceCreateInfoFB *createInfo, XrGeometryInstanceFB *outGeometryInstance)
{
    struct xrCreateGeometryInstanceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.outGeometryInstance = outGeometryInstance;
    _status = UNIX_CALL(xrCreateGeometryInstanceFB, &params);
    assert(!_status && "xrCreateGeometryInstanceFB");
    return params.result;
}

XrResult WINAPI xrCreateHandMeshSpaceMSFT(XrHandTrackerEXT handTracker, const XrHandMeshSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    struct xrCreateHandMeshSpaceMSFT_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateHandMeshSpaceMSFT, &params);
    assert(!_status && "xrCreateHandMeshSpaceMSFT");
    return params.result;
}

XrResult WINAPI xrCreateHandTrackerEXT(XrSession session, const XrHandTrackerCreateInfoEXT *createInfo, XrHandTrackerEXT *handTracker)
{
    struct xrCreateHandTrackerEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.handTracker = handTracker;
    _status = UNIX_CALL(xrCreateHandTrackerEXT, &params);
    assert(!_status && "xrCreateHandTrackerEXT");
    return params.result;
}

XrResult WINAPI xrCreateKeyboardSpaceFB(XrSession session, const XrKeyboardSpaceCreateInfoFB *createInfo, XrSpace *keyboardSpace)
{
    struct xrCreateKeyboardSpaceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.keyboardSpace = keyboardSpace;
    _status = UNIX_CALL(xrCreateKeyboardSpaceFB, &params);
    assert(!_status && "xrCreateKeyboardSpaceFB");
    return params.result;
}

XrResult WINAPI xrCreateMarkerDetectorML(XrSession session, const XrMarkerDetectorCreateInfoML *createInfo, XrMarkerDetectorML *markerDetector)
{
    struct xrCreateMarkerDetectorML_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.markerDetector = markerDetector;
    _status = UNIX_CALL(xrCreateMarkerDetectorML, &params);
    assert(!_status && "xrCreateMarkerDetectorML");
    return params.result;
}

XrResult WINAPI xrCreateMarkerSpaceML(XrSession session, const XrMarkerSpaceCreateInfoML *createInfo, XrSpace *space)
{
    struct xrCreateMarkerSpaceML_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateMarkerSpaceML, &params);
    assert(!_status && "xrCreateMarkerSpaceML");
    return params.result;
}

XrResult WINAPI xrCreateMarkerSpaceVARJO(XrSession session, const XrMarkerSpaceCreateInfoVARJO *createInfo, XrSpace *space)
{
    struct xrCreateMarkerSpaceVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateMarkerSpaceVARJO, &params);
    assert(!_status && "xrCreateMarkerSpaceVARJO");
    return params.result;
}

XrResult WINAPI xrCreatePassthroughColorLutMETA(XrPassthroughFB passthrough, const XrPassthroughColorLutCreateInfoMETA *createInfo, XrPassthroughColorLutMETA *colorLut)
{
    struct xrCreatePassthroughColorLutMETA_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    params.createInfo = createInfo;
    params.colorLut = colorLut;
    _status = UNIX_CALL(xrCreatePassthroughColorLutMETA, &params);
    assert(!_status && "xrCreatePassthroughColorLutMETA");
    return params.result;
}

XrResult WINAPI xrCreatePassthroughFB(XrSession session, const XrPassthroughCreateInfoFB *createInfo, XrPassthroughFB *outPassthrough)
{
    struct xrCreatePassthroughFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.outPassthrough = outPassthrough;
    _status = UNIX_CALL(xrCreatePassthroughFB, &params);
    assert(!_status && "xrCreatePassthroughFB");
    return params.result;
}

XrResult WINAPI xrCreatePassthroughHTC(XrSession session, const XrPassthroughCreateInfoHTC *createInfo, XrPassthroughHTC *passthrough)
{
    struct xrCreatePassthroughHTC_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrCreatePassthroughHTC, &params);
    assert(!_status && "xrCreatePassthroughHTC");
    return params.result;
}

XrResult WINAPI xrCreatePassthroughLayerFB(XrSession session, const XrPassthroughLayerCreateInfoFB *createInfo, XrPassthroughLayerFB *outLayer)
{
    struct xrCreatePassthroughLayerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.outLayer = outLayer;
    _status = UNIX_CALL(xrCreatePassthroughLayerFB, &params);
    assert(!_status && "xrCreatePassthroughLayerFB");
    return params.result;
}

XrResult WINAPI xrCreatePlaneDetectorEXT(XrSession session, const XrPlaneDetectorCreateInfoEXT *createInfo, XrPlaneDetectorEXT *planeDetector)
{
    struct xrCreatePlaneDetectorEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.planeDetector = planeDetector;
    _status = UNIX_CALL(xrCreatePlaneDetectorEXT, &params);
    assert(!_status && "xrCreatePlaneDetectorEXT");
    return params.result;
}

XrResult WINAPI xrCreateReferenceSpace(XrSession session, const XrReferenceSpaceCreateInfo *createInfo, XrSpace *space)
{
    struct xrCreateReferenceSpace_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateReferenceSpace, &params);
    assert(!_status && "xrCreateReferenceSpace");
    return params.result;
}

XrResult WINAPI xrCreateSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneCreateInfoMSFT *createInfo, XrSceneMSFT *scene)
{
    struct xrCreateSceneMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    params.createInfo = createInfo;
    params.scene = scene;
    _status = UNIX_CALL(xrCreateSceneMSFT, &params);
    assert(!_status && "xrCreateSceneMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSceneObserverMSFT(XrSession session, const XrSceneObserverCreateInfoMSFT *createInfo, XrSceneObserverMSFT *sceneObserver)
{
    struct xrCreateSceneObserverMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.sceneObserver = sceneObserver;
    _status = UNIX_CALL(xrCreateSceneObserverMSFT, &params);
    assert(!_status && "xrCreateSceneObserverMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpaceUserFB(XrSession session, const XrSpaceUserCreateInfoFB *info, XrSpaceUserFB *user)
{
    struct xrCreateSpaceUserFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.user = user;
    _status = UNIX_CALL(xrCreateSpaceUserFB, &params);
    assert(!_status && "xrCreateSpaceUserFB");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorFB(XrSession session, const XrSpatialAnchorCreateInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrCreateSpatialAnchorFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrCreateSpatialAnchorFB, &params);
    assert(!_status && "xrCreateSpatialAnchorFB");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorFromPersistedNameMSFT(XrSession session, const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT *spatialAnchorCreateInfo, XrSpatialAnchorMSFT *spatialAnchor)
{
    struct xrCreateSpatialAnchorFromPersistedNameMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.spatialAnchorCreateInfo = spatialAnchorCreateInfo;
    params.spatialAnchor = spatialAnchor;
    _status = UNIX_CALL(xrCreateSpatialAnchorFromPersistedNameMSFT, &params);
    assert(!_status && "xrCreateSpatialAnchorFromPersistedNameMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorHTC(XrSession session, const XrSpatialAnchorCreateInfoHTC *createInfo, XrSpace *anchor)
{
    struct xrCreateSpatialAnchorHTC_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.anchor = anchor;
    _status = UNIX_CALL(xrCreateSpatialAnchorHTC, &params);
    assert(!_status && "xrCreateSpatialAnchorHTC");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorMSFT(XrSession session, const XrSpatialAnchorCreateInfoMSFT *createInfo, XrSpatialAnchorMSFT *anchor)
{
    struct xrCreateSpatialAnchorMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.anchor = anchor;
    _status = UNIX_CALL(xrCreateSpatialAnchorMSFT, &params);
    assert(!_status && "xrCreateSpatialAnchorMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorSpaceMSFT(XrSession session, const XrSpatialAnchorSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    struct xrCreateSpatialAnchorSpaceMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateSpatialAnchorSpaceMSFT, &params);
    assert(!_status && "xrCreateSpatialAnchorSpaceMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorStoreConnectionMSFT(XrSession session, XrSpatialAnchorStoreConnectionMSFT *spatialAnchorStore)
{
    struct xrCreateSpatialAnchorStoreConnectionMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.spatialAnchorStore = spatialAnchorStore;
    _status = UNIX_CALL(xrCreateSpatialAnchorStoreConnectionMSFT, &params);
    assert(!_status && "xrCreateSpatialAnchorStoreConnectionMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialGraphNodeSpaceMSFT(XrSession session, const XrSpatialGraphNodeSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    struct xrCreateSpatialGraphNodeSpaceMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateSpatialGraphNodeSpaceMSFT, &params);
    assert(!_status && "xrCreateSpatialGraphNodeSpaceMSFT");
    return params.result;
}

XrResult WINAPI xrCreateTriangleMeshFB(XrSession session, const XrTriangleMeshCreateInfoFB *createInfo, XrTriangleMeshFB *outTriangleMesh)
{
    struct xrCreateTriangleMeshFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.outTriangleMesh = outTriangleMesh;
    _status = UNIX_CALL(xrCreateTriangleMeshFB, &params);
    assert(!_status && "xrCreateTriangleMeshFB");
    return params.result;
}

XrResult WINAPI xrCreateVirtualKeyboardMETA(XrSession session, const XrVirtualKeyboardCreateInfoMETA *createInfo, XrVirtualKeyboardMETA *keyboard)
{
    struct xrCreateVirtualKeyboardMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.keyboard = keyboard;
    _status = UNIX_CALL(xrCreateVirtualKeyboardMETA, &params);
    assert(!_status && "xrCreateVirtualKeyboardMETA");
    return params.result;
}

XrResult WINAPI xrCreateVirtualKeyboardSpaceMETA(XrSession session, XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardSpaceCreateInfoMETA *createInfo, XrSpace *keyboardSpace)
{
    struct xrCreateVirtualKeyboardSpaceMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.keyboard = keyboard;
    params.createInfo = createInfo;
    params.keyboardSpace = keyboardSpace;
    _status = UNIX_CALL(xrCreateVirtualKeyboardSpaceMETA, &params);
    assert(!_status && "xrCreateVirtualKeyboardSpaceMETA");
    return params.result;
}

XrResult WINAPI xrDeserializeSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneDeserializeInfoMSFT *deserializeInfo)
{
    struct xrDeserializeSceneMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    params.deserializeInfo = deserializeInfo;
    _status = UNIX_CALL(xrDeserializeSceneMSFT, &params);
    assert(!_status && "xrDeserializeSceneMSFT");
    return params.result;
}

XrResult WINAPI xrDestroyAction(XrAction action)
{
    struct xrDestroyAction_params params;
    NTSTATUS _status;
    params.action = action;
    _status = UNIX_CALL(xrDestroyAction, &params);
    assert(!_status && "xrDestroyAction");
    return params.result;
}

XrResult WINAPI xrDestroyActionSet(XrActionSet actionSet)
{
    struct xrDestroyActionSet_params params;
    NTSTATUS _status;
    params.actionSet = actionSet;
    _status = UNIX_CALL(xrDestroyActionSet, &params);
    assert(!_status && "xrDestroyActionSet");
    return params.result;
}

XrResult WINAPI xrDestroyBodyTrackerFB(XrBodyTrackerFB bodyTracker)
{
    struct xrDestroyBodyTrackerFB_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    _status = UNIX_CALL(xrDestroyBodyTrackerFB, &params);
    assert(!_status && "xrDestroyBodyTrackerFB");
    return params.result;
}

XrResult WINAPI xrDestroyEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider)
{
    struct xrDestroyEnvironmentDepthProviderMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    _status = UNIX_CALL(xrDestroyEnvironmentDepthProviderMETA, &params);
    assert(!_status && "xrDestroyEnvironmentDepthProviderMETA");
    return params.result;
}

XrResult WINAPI xrDestroyEnvironmentDepthSwapchainMETA(XrEnvironmentDepthSwapchainMETA swapchain)
{
    struct xrDestroyEnvironmentDepthSwapchainMETA_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    _status = UNIX_CALL(xrDestroyEnvironmentDepthSwapchainMETA, &params);
    assert(!_status && "xrDestroyEnvironmentDepthSwapchainMETA");
    return params.result;
}

XrResult WINAPI xrDestroyExportedLocalizationMapML(XrExportedLocalizationMapML map)
{
    struct xrDestroyExportedLocalizationMapML_params params;
    NTSTATUS _status;
    params.map = map;
    _status = UNIX_CALL(xrDestroyExportedLocalizationMapML, &params);
    assert(!_status && "xrDestroyExportedLocalizationMapML");
    return params.result;
}

XrResult WINAPI xrDestroyEyeTrackerFB(XrEyeTrackerFB eyeTracker)
{
    struct xrDestroyEyeTrackerFB_params params;
    NTSTATUS _status;
    params.eyeTracker = eyeTracker;
    _status = UNIX_CALL(xrDestroyEyeTrackerFB, &params);
    assert(!_status && "xrDestroyEyeTrackerFB");
    return params.result;
}

XrResult WINAPI xrDestroyFaceTracker2FB(XrFaceTracker2FB faceTracker)
{
    struct xrDestroyFaceTracker2FB_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrDestroyFaceTracker2FB, &params);
    assert(!_status && "xrDestroyFaceTracker2FB");
    return params.result;
}

XrResult WINAPI xrDestroyFaceTrackerFB(XrFaceTrackerFB faceTracker)
{
    struct xrDestroyFaceTrackerFB_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrDestroyFaceTrackerFB, &params);
    assert(!_status && "xrDestroyFaceTrackerFB");
    return params.result;
}

XrResult WINAPI xrDestroyFacialTrackerHTC(XrFacialTrackerHTC facialTracker)
{
    struct xrDestroyFacialTrackerHTC_params params;
    NTSTATUS _status;
    params.facialTracker = facialTracker;
    _status = UNIX_CALL(xrDestroyFacialTrackerHTC, &params);
    assert(!_status && "xrDestroyFacialTrackerHTC");
    return params.result;
}

XrResult WINAPI xrDestroyFoveationProfileFB(XrFoveationProfileFB profile)
{
    struct xrDestroyFoveationProfileFB_params params;
    NTSTATUS _status;
    params.profile = profile;
    _status = UNIX_CALL(xrDestroyFoveationProfileFB, &params);
    assert(!_status && "xrDestroyFoveationProfileFB");
    return params.result;
}

XrResult WINAPI xrDestroyGeometryInstanceFB(XrGeometryInstanceFB instance)
{
    struct xrDestroyGeometryInstanceFB_params params;
    NTSTATUS _status;
    params.instance = instance;
    _status = UNIX_CALL(xrDestroyGeometryInstanceFB, &params);
    assert(!_status && "xrDestroyGeometryInstanceFB");
    return params.result;
}

XrResult WINAPI xrDestroyHandTrackerEXT(XrHandTrackerEXT handTracker)
{
    struct xrDestroyHandTrackerEXT_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    _status = UNIX_CALL(xrDestroyHandTrackerEXT, &params);
    assert(!_status && "xrDestroyHandTrackerEXT");
    return params.result;
}

XrResult WINAPI xrDestroyMarkerDetectorML(XrMarkerDetectorML markerDetector)
{
    struct xrDestroyMarkerDetectorML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    _status = UNIX_CALL(xrDestroyMarkerDetectorML, &params);
    assert(!_status && "xrDestroyMarkerDetectorML");
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut)
{
    struct xrDestroyPassthroughColorLutMETA_params params;
    NTSTATUS _status;
    params.colorLut = colorLut;
    _status = UNIX_CALL(xrDestroyPassthroughColorLutMETA, &params);
    assert(!_status && "xrDestroyPassthroughColorLutMETA");
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughFB(XrPassthroughFB passthrough)
{
    struct xrDestroyPassthroughFB_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrDestroyPassthroughFB, &params);
    assert(!_status && "xrDestroyPassthroughFB");
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughHTC(XrPassthroughHTC passthrough)
{
    struct xrDestroyPassthroughHTC_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrDestroyPassthroughHTC, &params);
    assert(!_status && "xrDestroyPassthroughHTC");
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughLayerFB(XrPassthroughLayerFB layer)
{
    struct xrDestroyPassthroughLayerFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    _status = UNIX_CALL(xrDestroyPassthroughLayerFB, &params);
    assert(!_status && "xrDestroyPassthroughLayerFB");
    return params.result;
}

XrResult WINAPI xrDestroyPlaneDetectorEXT(XrPlaneDetectorEXT planeDetector)
{
    struct xrDestroyPlaneDetectorEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    _status = UNIX_CALL(xrDestroyPlaneDetectorEXT, &params);
    assert(!_status && "xrDestroyPlaneDetectorEXT");
    return params.result;
}

XrResult WINAPI xrDestroySceneMSFT(XrSceneMSFT scene)
{
    struct xrDestroySceneMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    _status = UNIX_CALL(xrDestroySceneMSFT, &params);
    assert(!_status && "xrDestroySceneMSFT");
    return params.result;
}

XrResult WINAPI xrDestroySceneObserverMSFT(XrSceneObserverMSFT sceneObserver)
{
    struct xrDestroySceneObserverMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    _status = UNIX_CALL(xrDestroySceneObserverMSFT, &params);
    assert(!_status && "xrDestroySceneObserverMSFT");
    return params.result;
}

XrResult WINAPI xrDestroySpace(XrSpace space)
{
    struct xrDestroySpace_params params;
    NTSTATUS _status;
    params.space = space;
    _status = UNIX_CALL(xrDestroySpace, &params);
    assert(!_status && "xrDestroySpace");
    return params.result;
}

XrResult WINAPI xrDestroySpaceUserFB(XrSpaceUserFB user)
{
    struct xrDestroySpaceUserFB_params params;
    NTSTATUS _status;
    params.user = user;
    _status = UNIX_CALL(xrDestroySpaceUserFB, &params);
    assert(!_status && "xrDestroySpaceUserFB");
    return params.result;
}

XrResult WINAPI xrDestroySpatialAnchorMSFT(XrSpatialAnchorMSFT anchor)
{
    struct xrDestroySpatialAnchorMSFT_params params;
    NTSTATUS _status;
    params.anchor = anchor;
    _status = UNIX_CALL(xrDestroySpatialAnchorMSFT, &params);
    assert(!_status && "xrDestroySpatialAnchorMSFT");
    return params.result;
}

XrResult WINAPI xrDestroySpatialAnchorStoreConnectionMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore)
{
    struct xrDestroySpatialAnchorStoreConnectionMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    _status = UNIX_CALL(xrDestroySpatialAnchorStoreConnectionMSFT, &params);
    assert(!_status && "xrDestroySpatialAnchorStoreConnectionMSFT");
    return params.result;
}

XrResult WINAPI xrDestroySpatialGraphNodeBindingMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding)
{
    struct xrDestroySpatialGraphNodeBindingMSFT_params params;
    NTSTATUS _status;
    params.nodeBinding = nodeBinding;
    _status = UNIX_CALL(xrDestroySpatialGraphNodeBindingMSFT, &params);
    assert(!_status && "xrDestroySpatialGraphNodeBindingMSFT");
    return params.result;
}

XrResult WINAPI xrDestroyTriangleMeshFB(XrTriangleMeshFB mesh)
{
    struct xrDestroyTriangleMeshFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    _status = UNIX_CALL(xrDestroyTriangleMeshFB, &params);
    assert(!_status && "xrDestroyTriangleMeshFB");
    return params.result;
}

XrResult WINAPI xrDestroyVirtualKeyboardMETA(XrVirtualKeyboardMETA keyboard)
{
    struct xrDestroyVirtualKeyboardMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    _status = UNIX_CALL(xrDestroyVirtualKeyboardMETA, &params);
    assert(!_status && "xrDestroyVirtualKeyboardMETA");
    return params.result;
}

XrResult WINAPI xrEnableLocalizationEventsML(XrSession session, const XrLocalizationEnableEventsInfoML *info)
{
    struct xrEnableLocalizationEventsML_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    _status = UNIX_CALL(xrEnableLocalizationEventsML, &params);
    assert(!_status && "xrEnableLocalizationEventsML");
    return params.result;
}

XrResult WINAPI xrEnableUserCalibrationEventsML(XrInstance instance, const XrUserCalibrationEnableEventsInfoML *enableInfo)
{
    struct xrEnableUserCalibrationEventsML_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.enableInfo = enableInfo;
    _status = UNIX_CALL(xrEnableUserCalibrationEventsML, &params);
    assert(!_status && "xrEnableUserCalibrationEventsML");
    return params.result;
}

XrResult WINAPI xrEndSession(XrSession session)
{
    struct xrEndSession_params params;
    NTSTATUS _status;
    params.session = session;
    _status = UNIX_CALL(xrEndSession, &params);
    assert(!_status && "xrEndSession");
    return params.result;
}

XrResult WINAPI xrEnumerateApiLayerProperties(uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrApiLayerProperties *properties)
{
    struct xrEnumerateApiLayerProperties_params params;
    NTSTATUS _status;
    params.propertyCapacityInput = propertyCapacityInput;
    params.propertyCountOutput = propertyCountOutput;
    params.properties = properties;
    _status = UNIX_CALL(xrEnumerateApiLayerProperties, &params);
    assert(!_status && "xrEnumerateApiLayerProperties");
    return params.result;
}

XrResult WINAPI xrEnumerateBoundSourcesForAction(XrSession session, const XrBoundSourcesForActionEnumerateInfo *enumerateInfo, uint32_t sourceCapacityInput, uint32_t *sourceCountOutput, XrPath *sources)
{
    struct xrEnumerateBoundSourcesForAction_params params;
    NTSTATUS _status;
    params.session = session;
    params.enumerateInfo = enumerateInfo;
    params.sourceCapacityInput = sourceCapacityInput;
    params.sourceCountOutput = sourceCountOutput;
    params.sources = sources;
    _status = UNIX_CALL(xrEnumerateBoundSourcesForAction, &params);
    assert(!_status && "xrEnumerateBoundSourcesForAction");
    return params.result;
}

XrResult WINAPI xrEnumerateColorSpacesFB(XrSession session, uint32_t colorSpaceCapacityInput, uint32_t *colorSpaceCountOutput, XrColorSpaceFB *colorSpaces)
{
    struct xrEnumerateColorSpacesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.colorSpaceCapacityInput = colorSpaceCapacityInput;
    params.colorSpaceCountOutput = colorSpaceCountOutput;
    params.colorSpaces = colorSpaces;
    _status = UNIX_CALL(xrEnumerateColorSpacesFB, &params);
    assert(!_status && "xrEnumerateColorSpacesFB");
    return params.result;
}

XrResult WINAPI xrEnumerateDisplayRefreshRatesFB(XrSession session, uint32_t displayRefreshRateCapacityInput, uint32_t *displayRefreshRateCountOutput, float *displayRefreshRates)
{
    struct xrEnumerateDisplayRefreshRatesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.displayRefreshRateCapacityInput = displayRefreshRateCapacityInput;
    params.displayRefreshRateCountOutput = displayRefreshRateCountOutput;
    params.displayRefreshRates = displayRefreshRates;
    _status = UNIX_CALL(xrEnumerateDisplayRefreshRatesFB, &params);
    assert(!_status && "xrEnumerateDisplayRefreshRatesFB");
    return params.result;
}

XrResult WINAPI xrEnumerateEnvironmentBlendModes(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t *environmentBlendModeCountOutput, XrEnvironmentBlendMode *environmentBlendModes)
{
    struct xrEnumerateEnvironmentBlendModes_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.environmentBlendModeCapacityInput = environmentBlendModeCapacityInput;
    params.environmentBlendModeCountOutput = environmentBlendModeCountOutput;
    params.environmentBlendModes = environmentBlendModes;
    _status = UNIX_CALL(xrEnumerateEnvironmentBlendModes, &params);
    assert(!_status && "xrEnumerateEnvironmentBlendModes");
    return params.result;
}

XrResult WINAPI xrEnumerateEnvironmentDepthSwapchainImagesMETA(XrEnvironmentDepthSwapchainMETA swapchain, uint32_t imageCapacityInput, uint32_t *imageCountOutput, XrSwapchainImageBaseHeader *images)
{
    struct xrEnumerateEnvironmentDepthSwapchainImagesMETA_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.imageCapacityInput = imageCapacityInput;
    params.imageCountOutput = imageCountOutput;
    params.images = images;
    _status = UNIX_CALL(xrEnumerateEnvironmentDepthSwapchainImagesMETA, &params);
    assert(!_status && "xrEnumerateEnvironmentDepthSwapchainImagesMETA");
    return params.result;
}

XrResult WINAPI xrEnumerateExternalCamerasOCULUS(XrSession session, uint32_t cameraCapacityInput, uint32_t *cameraCountOutput, XrExternalCameraOCULUS *cameras)
{
    struct xrEnumerateExternalCamerasOCULUS_params params;
    NTSTATUS _status;
    params.session = session;
    params.cameraCapacityInput = cameraCapacityInput;
    params.cameraCountOutput = cameraCountOutput;
    params.cameras = cameras;
    _status = UNIX_CALL(xrEnumerateExternalCamerasOCULUS, &params);
    assert(!_status && "xrEnumerateExternalCamerasOCULUS");
    return params.result;
}

XrResult WINAPI xrEnumerateInstanceExtensionProperties(const char *layerName, uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrExtensionProperties *properties)
{
    struct xrEnumerateInstanceExtensionProperties_params params;
    NTSTATUS _status;
    params.layerName = layerName;
    params.propertyCapacityInput = propertyCapacityInput;
    params.propertyCountOutput = propertyCountOutput;
    params.properties = properties;
    _status = UNIX_CALL(xrEnumerateInstanceExtensionProperties, &params);
    assert(!_status && "xrEnumerateInstanceExtensionProperties");
    return params.result;
}

XrResult WINAPI xrEnumeratePerformanceMetricsCounterPathsMETA(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t *counterPathCountOutput, XrPath *counterPaths)
{
    struct xrEnumeratePerformanceMetricsCounterPathsMETA_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.counterPathCapacityInput = counterPathCapacityInput;
    params.counterPathCountOutput = counterPathCountOutput;
    params.counterPaths = counterPaths;
    _status = UNIX_CALL(xrEnumeratePerformanceMetricsCounterPathsMETA, &params);
    assert(!_status && "xrEnumeratePerformanceMetricsCounterPathsMETA");
    return params.result;
}

XrResult WINAPI xrEnumeratePersistedSpatialAnchorNamesMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, uint32_t spatialAnchorNameCapacityInput, uint32_t *spatialAnchorNameCountOutput, XrSpatialAnchorPersistenceNameMSFT *spatialAnchorNames)
{
    struct xrEnumeratePersistedSpatialAnchorNamesMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    params.spatialAnchorNameCapacityInput = spatialAnchorNameCapacityInput;
    params.spatialAnchorNameCountOutput = spatialAnchorNameCountOutput;
    params.spatialAnchorNames = spatialAnchorNames;
    _status = UNIX_CALL(xrEnumeratePersistedSpatialAnchorNamesMSFT, &params);
    assert(!_status && "xrEnumeratePersistedSpatialAnchorNamesMSFT");
    return params.result;
}

XrResult WINAPI xrEnumerateReferenceSpaces(XrSession session, uint32_t spaceCapacityInput, uint32_t *spaceCountOutput, XrReferenceSpaceType *spaces)
{
    struct xrEnumerateReferenceSpaces_params params;
    NTSTATUS _status;
    params.session = session;
    params.spaceCapacityInput = spaceCapacityInput;
    params.spaceCountOutput = spaceCountOutput;
    params.spaces = spaces;
    _status = UNIX_CALL(xrEnumerateReferenceSpaces, &params);
    assert(!_status && "xrEnumerateReferenceSpaces");
    return params.result;
}

XrResult WINAPI xrEnumerateRenderModelPathsFB(XrSession session, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrRenderModelPathInfoFB *paths)
{
    struct xrEnumerateRenderModelPathsFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.pathCapacityInput = pathCapacityInput;
    params.pathCountOutput = pathCountOutput;
    params.paths = paths;
    _status = UNIX_CALL(xrEnumerateRenderModelPathsFB, &params);
    assert(!_status && "xrEnumerateRenderModelPathsFB");
    return params.result;
}

XrResult WINAPI xrEnumerateReprojectionModesMSFT(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t modeCapacityInput, uint32_t *modeCountOutput, XrReprojectionModeMSFT *modes)
{
    struct xrEnumerateReprojectionModesMSFT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.modeCapacityInput = modeCapacityInput;
    params.modeCountOutput = modeCountOutput;
    params.modes = modes;
    _status = UNIX_CALL(xrEnumerateReprojectionModesMSFT, &params);
    assert(!_status && "xrEnumerateReprojectionModesMSFT");
    return params.result;
}

XrResult WINAPI xrEnumerateSceneComputeFeaturesMSFT(XrInstance instance, XrSystemId systemId, uint32_t featureCapacityInput, uint32_t *featureCountOutput, XrSceneComputeFeatureMSFT *features)
{
    struct xrEnumerateSceneComputeFeaturesMSFT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.featureCapacityInput = featureCapacityInput;
    params.featureCountOutput = featureCountOutput;
    params.features = features;
    _status = UNIX_CALL(xrEnumerateSceneComputeFeaturesMSFT, &params);
    assert(!_status && "xrEnumerateSceneComputeFeaturesMSFT");
    return params.result;
}

XrResult WINAPI xrEnumerateSpaceSupportedComponentsFB(XrSpace space, uint32_t componentTypeCapacityInput, uint32_t *componentTypeCountOutput, XrSpaceComponentTypeFB *componentTypes)
{
    struct xrEnumerateSpaceSupportedComponentsFB_params params;
    NTSTATUS _status;
    params.space = space;
    params.componentTypeCapacityInput = componentTypeCapacityInput;
    params.componentTypeCountOutput = componentTypeCountOutput;
    params.componentTypes = componentTypes;
    _status = UNIX_CALL(xrEnumerateSpaceSupportedComponentsFB, &params);
    assert(!_status && "xrEnumerateSpaceSupportedComponentsFB");
    return params.result;
}

XrResult WINAPI xrEnumerateViewConfigurationViews(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrViewConfigurationView *views)
{
    struct xrEnumerateViewConfigurationViews_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.viewCapacityInput = viewCapacityInput;
    params.viewCountOutput = viewCountOutput;
    params.views = views;
    _status = UNIX_CALL(xrEnumerateViewConfigurationViews, &params);
    assert(!_status && "xrEnumerateViewConfigurationViews");
    return params.result;
}

XrResult WINAPI xrEnumerateViewConfigurations(XrInstance instance, XrSystemId systemId, uint32_t viewConfigurationTypeCapacityInput, uint32_t *viewConfigurationTypeCountOutput, XrViewConfigurationType *viewConfigurationTypes)
{
    struct xrEnumerateViewConfigurations_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationTypeCapacityInput = viewConfigurationTypeCapacityInput;
    params.viewConfigurationTypeCountOutput = viewConfigurationTypeCountOutput;
    params.viewConfigurationTypes = viewConfigurationTypes;
    _status = UNIX_CALL(xrEnumerateViewConfigurations, &params);
    assert(!_status && "xrEnumerateViewConfigurations");
    return params.result;
}

XrResult WINAPI xrEnumerateViveTrackerPathsHTCX(XrInstance instance, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrViveTrackerPathsHTCX *paths)
{
    struct xrEnumerateViveTrackerPathsHTCX_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.pathCapacityInput = pathCapacityInput;
    params.pathCountOutput = pathCountOutput;
    params.paths = paths;
    _status = UNIX_CALL(xrEnumerateViveTrackerPathsHTCX, &params);
    assert(!_status && "xrEnumerateViveTrackerPathsHTCX");
    return params.result;
}

XrResult WINAPI xrEraseSpaceFB(XrSession session, const XrSpaceEraseInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrEraseSpaceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrEraseSpaceFB, &params);
    assert(!_status && "xrEraseSpaceFB");
    return params.result;
}

XrResult WINAPI xrGeometryInstanceSetTransformFB(XrGeometryInstanceFB instance, const XrGeometryInstanceTransformFB *transformation)
{
    struct xrGeometryInstanceSetTransformFB_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.transformation = transformation;
    _status = UNIX_CALL(xrGeometryInstanceSetTransformFB, &params);
    assert(!_status && "xrGeometryInstanceSetTransformFB");
    return params.result;
}

XrResult WINAPI xrGetActionStateBoolean(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateBoolean *state)
{
    struct xrGetActionStateBoolean_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    _status = UNIX_CALL(xrGetActionStateBoolean, &params);
    assert(!_status && "xrGetActionStateBoolean");
    return params.result;
}

XrResult WINAPI xrGetActionStateFloat(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateFloat *state)
{
    struct xrGetActionStateFloat_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    _status = UNIX_CALL(xrGetActionStateFloat, &params);
    assert(!_status && "xrGetActionStateFloat");
    return params.result;
}

XrResult WINAPI xrGetActionStatePose(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStatePose *state)
{
    struct xrGetActionStatePose_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    _status = UNIX_CALL(xrGetActionStatePose, &params);
    assert(!_status && "xrGetActionStatePose");
    return params.result;
}

XrResult WINAPI xrGetActionStateVector2f(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateVector2f *state)
{
    struct xrGetActionStateVector2f_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    _status = UNIX_CALL(xrGetActionStateVector2f, &params);
    assert(!_status && "xrGetActionStateVector2f");
    return params.result;
}

XrResult WINAPI xrGetAudioInputDeviceGuidOculus(XrInstance instance, wchar_t buffer[])
{
    struct xrGetAudioInputDeviceGuidOculus_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetAudioInputDeviceGuidOculus, &params);
    assert(!_status && "xrGetAudioInputDeviceGuidOculus");
    return params.result;
}

XrResult WINAPI xrGetAudioOutputDeviceGuidOculus(XrInstance instance, wchar_t buffer[])
{
    struct xrGetAudioOutputDeviceGuidOculus_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetAudioOutputDeviceGuidOculus, &params);
    assert(!_status && "xrGetAudioOutputDeviceGuidOculus");
    return params.result;
}

XrResult WINAPI xrGetBodySkeletonFB(XrBodyTrackerFB bodyTracker, XrBodySkeletonFB *skeleton)
{
    struct xrGetBodySkeletonFB_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    params.skeleton = skeleton;
    _status = UNIX_CALL(xrGetBodySkeletonFB, &params);
    assert(!_status && "xrGetBodySkeletonFB");
    return params.result;
}

XrResult WINAPI xrGetControllerModelKeyMSFT(XrSession session, XrPath topLevelUserPath, XrControllerModelKeyStateMSFT *controllerModelKeyState)
{
    struct xrGetControllerModelKeyMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelUserPath = topLevelUserPath;
    params.controllerModelKeyState = controllerModelKeyState;
    _status = UNIX_CALL(xrGetControllerModelKeyMSFT, &params);
    assert(!_status && "xrGetControllerModelKeyMSFT");
    return params.result;
}

XrResult WINAPI xrGetControllerModelPropertiesMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelPropertiesMSFT *properties)
{
    struct xrGetControllerModelPropertiesMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.modelKey = modelKey;
    params.properties = properties;
    _status = UNIX_CALL(xrGetControllerModelPropertiesMSFT, &params);
    assert(!_status && "xrGetControllerModelPropertiesMSFT");
    return params.result;
}

XrResult WINAPI xrGetControllerModelStateMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelStateMSFT *state)
{
    struct xrGetControllerModelStateMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.modelKey = modelKey;
    params.state = state;
    _status = UNIX_CALL(xrGetControllerModelStateMSFT, &params);
    assert(!_status && "xrGetControllerModelStateMSFT");
    return params.result;
}

XrResult WINAPI xrGetCurrentInteractionProfile(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState *interactionProfile)
{
    struct xrGetCurrentInteractionProfile_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelUserPath = topLevelUserPath;
    params.interactionProfile = interactionProfile;
    _status = UNIX_CALL(xrGetCurrentInteractionProfile, &params);
    assert(!_status && "xrGetCurrentInteractionProfile");
    return params.result;
}

XrResult WINAPI xrGetDeviceSampleRateFB(XrSession session, const XrHapticActionInfo *hapticActionInfo, XrDevicePcmSampleRateGetInfoFB *deviceSampleRate)
{
    struct xrGetDeviceSampleRateFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    params.deviceSampleRate = deviceSampleRate;
    _status = UNIX_CALL(xrGetDeviceSampleRateFB, &params);
    assert(!_status && "xrGetDeviceSampleRateFB");
    return params.result;
}

XrResult WINAPI xrGetDisplayRefreshRateFB(XrSession session, float *displayRefreshRate)
{
    struct xrGetDisplayRefreshRateFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.displayRefreshRate = displayRefreshRate;
    _status = UNIX_CALL(xrGetDisplayRefreshRateFB, &params);
    assert(!_status && "xrGetDisplayRefreshRateFB");
    return params.result;
}

XrResult WINAPI xrGetEnvironmentDepthSwapchainStateMETA(XrEnvironmentDepthSwapchainMETA swapchain, XrEnvironmentDepthSwapchainStateMETA *state)
{
    struct xrGetEnvironmentDepthSwapchainStateMETA_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.state = state;
    _status = UNIX_CALL(xrGetEnvironmentDepthSwapchainStateMETA, &params);
    assert(!_status && "xrGetEnvironmentDepthSwapchainStateMETA");
    return params.result;
}

XrResult WINAPI xrGetExportedLocalizationMapDataML(XrExportedLocalizationMapML map, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetExportedLocalizationMapDataML_params params;
    NTSTATUS _status;
    params.map = map;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetExportedLocalizationMapDataML, &params);
    assert(!_status && "xrGetExportedLocalizationMapDataML");
    return params.result;
}

XrResult WINAPI xrGetEyeGazesFB(XrEyeTrackerFB eyeTracker, const XrEyeGazesInfoFB *gazeInfo, XrEyeGazesFB *eyeGazes)
{
    struct xrGetEyeGazesFB_params params;
    NTSTATUS _status;
    params.eyeTracker = eyeTracker;
    params.gazeInfo = gazeInfo;
    params.eyeGazes = eyeGazes;
    _status = UNIX_CALL(xrGetEyeGazesFB, &params);
    assert(!_status && "xrGetEyeGazesFB");
    return params.result;
}

XrResult WINAPI xrGetFaceExpressionWeights2FB(XrFaceTracker2FB faceTracker, const XrFaceExpressionInfo2FB *expressionInfo, XrFaceExpressionWeights2FB *expressionWeights)
{
    struct xrGetFaceExpressionWeights2FB_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    params.expressionInfo = expressionInfo;
    params.expressionWeights = expressionWeights;
    _status = UNIX_CALL(xrGetFaceExpressionWeights2FB, &params);
    assert(!_status && "xrGetFaceExpressionWeights2FB");
    return params.result;
}

XrResult WINAPI xrGetFaceExpressionWeightsFB(XrFaceTrackerFB faceTracker, const XrFaceExpressionInfoFB *expressionInfo, XrFaceExpressionWeightsFB *expressionWeights)
{
    struct xrGetFaceExpressionWeightsFB_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    params.expressionInfo = expressionInfo;
    params.expressionWeights = expressionWeights;
    _status = UNIX_CALL(xrGetFaceExpressionWeightsFB, &params);
    assert(!_status && "xrGetFaceExpressionWeightsFB");
    return params.result;
}

XrResult WINAPI xrGetFacialExpressionsHTC(XrFacialTrackerHTC facialTracker, XrFacialExpressionsHTC *facialExpressions)
{
    struct xrGetFacialExpressionsHTC_params params;
    NTSTATUS _status;
    params.facialTracker = facialTracker;
    params.facialExpressions = facialExpressions;
    _status = UNIX_CALL(xrGetFacialExpressionsHTC, &params);
    assert(!_status && "xrGetFacialExpressionsHTC");
    return params.result;
}

XrResult WINAPI xrGetFoveationEyeTrackedStateMETA(XrSession session, XrFoveationEyeTrackedStateMETA *foveationState)
{
    struct xrGetFoveationEyeTrackedStateMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.foveationState = foveationState;
    _status = UNIX_CALL(xrGetFoveationEyeTrackedStateMETA, &params);
    assert(!_status && "xrGetFoveationEyeTrackedStateMETA");
    return params.result;
}

XrResult WINAPI xrGetHandMeshFB(XrHandTrackerEXT handTracker, XrHandTrackingMeshFB *mesh)
{
    struct xrGetHandMeshFB_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.mesh = mesh;
    _status = UNIX_CALL(xrGetHandMeshFB, &params);
    assert(!_status && "xrGetHandMeshFB");
    return params.result;
}

XrResult WINAPI xrGetInputSourceLocalizedName(XrSession session, const XrInputSourceLocalizedNameGetInfo *getInfo, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetInputSourceLocalizedName_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetInputSourceLocalizedName, &params);
    assert(!_status && "xrGetInputSourceLocalizedName");
    return params.result;
}

XrResult WINAPI xrGetInstanceProperties(XrInstance instance, XrInstanceProperties *instanceProperties)
{
    struct xrGetInstanceProperties_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.instanceProperties = instanceProperties;
    _status = UNIX_CALL(xrGetInstanceProperties, &params);
    assert(!_status && "xrGetInstanceProperties");
    return params.result;
}

XrResult WINAPI xrGetMarkerDetectorStateML(XrMarkerDetectorML markerDetector, XrMarkerDetectorStateML *state)
{
    struct xrGetMarkerDetectorStateML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.state = state;
    _status = UNIX_CALL(xrGetMarkerDetectorStateML, &params);
    assert(!_status && "xrGetMarkerDetectorStateML");
    return params.result;
}

XrResult WINAPI xrGetMarkerLengthML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float *meters)
{
    struct xrGetMarkerLengthML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.meters = meters;
    _status = UNIX_CALL(xrGetMarkerLengthML, &params);
    assert(!_status && "xrGetMarkerLengthML");
    return params.result;
}

XrResult WINAPI xrGetMarkerNumberML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint64_t *number)
{
    struct xrGetMarkerNumberML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.number = number;
    _status = UNIX_CALL(xrGetMarkerNumberML, &params);
    assert(!_status && "xrGetMarkerNumberML");
    return params.result;
}

XrResult WINAPI xrGetMarkerReprojectionErrorML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float *reprojectionErrorMeters)
{
    struct xrGetMarkerReprojectionErrorML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.reprojectionErrorMeters = reprojectionErrorMeters;
    _status = UNIX_CALL(xrGetMarkerReprojectionErrorML, &params);
    assert(!_status && "xrGetMarkerReprojectionErrorML");
    return params.result;
}

XrResult WINAPI xrGetMarkerSizeVARJO(XrSession session, uint64_t markerId, XrExtent2Df *size)
{
    struct xrGetMarkerSizeVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.markerId = markerId;
    params.size = size;
    _status = UNIX_CALL(xrGetMarkerSizeVARJO, &params);
    assert(!_status && "xrGetMarkerSizeVARJO");
    return params.result;
}

XrResult WINAPI xrGetMarkerStringML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetMarkerStringML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetMarkerStringML, &params);
    assert(!_status && "xrGetMarkerStringML");
    return params.result;
}

XrResult WINAPI xrGetMarkersML(XrMarkerDetectorML markerDetector, uint32_t markerCapacityInput, uint32_t *markerCountOutput, XrMarkerML *markers)
{
    struct xrGetMarkersML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.markerCapacityInput = markerCapacityInput;
    params.markerCountOutput = markerCountOutput;
    params.markers = markers;
    _status = UNIX_CALL(xrGetMarkersML, &params);
    assert(!_status && "xrGetMarkersML");
    return params.result;
}

XrResult WINAPI xrGetOpenGLGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLKHR *graphicsRequirements)
{
    struct xrGetOpenGLGraphicsRequirementsKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsRequirements = graphicsRequirements;
    _status = UNIX_CALL(xrGetOpenGLGraphicsRequirementsKHR, &params);
    assert(!_status && "xrGetOpenGLGraphicsRequirementsKHR");
    return params.result;
}

XrResult WINAPI xrGetPassthroughPreferencesMETA(XrSession session, XrPassthroughPreferencesMETA *preferences)
{
    struct xrGetPassthroughPreferencesMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.preferences = preferences;
    _status = UNIX_CALL(xrGetPassthroughPreferencesMETA, &params);
    assert(!_status && "xrGetPassthroughPreferencesMETA");
    return params.result;
}

XrResult WINAPI xrGetPerformanceMetricsStateMETA(XrSession session, XrPerformanceMetricsStateMETA *state)
{
    struct xrGetPerformanceMetricsStateMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.state = state;
    _status = UNIX_CALL(xrGetPerformanceMetricsStateMETA, &params);
    assert(!_status && "xrGetPerformanceMetricsStateMETA");
    return params.result;
}

XrResult WINAPI xrGetPlaneDetectionStateEXT(XrPlaneDetectorEXT planeDetector, XrPlaneDetectionStateEXT *state)
{
    struct xrGetPlaneDetectionStateEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    params.state = state;
    _status = UNIX_CALL(xrGetPlaneDetectionStateEXT, &params);
    assert(!_status && "xrGetPlaneDetectionStateEXT");
    return params.result;
}

XrResult WINAPI xrGetPlaneDetectionsEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorGetInfoEXT *info, XrPlaneDetectorLocationsEXT *locations)
{
    struct xrGetPlaneDetectionsEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    params.info = info;
    params.locations = locations;
    _status = UNIX_CALL(xrGetPlaneDetectionsEXT, &params);
    assert(!_status && "xrGetPlaneDetectionsEXT");
    return params.result;
}

XrResult WINAPI xrGetPlanePolygonBufferEXT(XrPlaneDetectorEXT planeDetector, uint64_t planeId, uint32_t polygonBufferIndex, XrPlaneDetectorPolygonBufferEXT *polygonBuffer)
{
    struct xrGetPlanePolygonBufferEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    params.planeId = planeId;
    params.polygonBufferIndex = polygonBufferIndex;
    params.polygonBuffer = polygonBuffer;
    _status = UNIX_CALL(xrGetPlanePolygonBufferEXT, &params);
    assert(!_status && "xrGetPlanePolygonBufferEXT");
    return params.result;
}

XrResult WINAPI xrGetRecommendedLayerResolutionMETA(XrSession session, const XrRecommendedLayerResolutionGetInfoMETA *info, XrRecommendedLayerResolutionMETA *resolution)
{
    struct xrGetRecommendedLayerResolutionMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.resolution = resolution;
    _status = UNIX_CALL(xrGetRecommendedLayerResolutionMETA, &params);
    assert(!_status && "xrGetRecommendedLayerResolutionMETA");
    return params.result;
}

XrResult WINAPI xrGetReferenceSpaceBoundsRect(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df *bounds)
{
    struct xrGetReferenceSpaceBoundsRect_params params;
    NTSTATUS _status;
    params.session = session;
    params.referenceSpaceType = referenceSpaceType;
    params.bounds = bounds;
    _status = UNIX_CALL(xrGetReferenceSpaceBoundsRect, &params);
    assert(!_status && "xrGetReferenceSpaceBoundsRect");
    return params.result;
}

XrResult WINAPI xrGetRenderModelPropertiesFB(XrSession session, XrPath path, XrRenderModelPropertiesFB *properties)
{
    struct xrGetRenderModelPropertiesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.path = path;
    params.properties = properties;
    _status = UNIX_CALL(xrGetRenderModelPropertiesFB, &params);
    assert(!_status && "xrGetRenderModelPropertiesFB");
    return params.result;
}

XrResult WINAPI xrGetSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsGetInfoMSFT *getInfo, XrSceneComponentsMSFT *components)
{
    struct xrGetSceneComponentsMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.getInfo = getInfo;
    params.components = components;
    _status = UNIX_CALL(xrGetSceneComponentsMSFT, &params);
    assert(!_status && "xrGetSceneComponentsMSFT");
    return params.result;
}

XrResult WINAPI xrGetSceneComputeStateMSFT(XrSceneObserverMSFT sceneObserver, XrSceneComputeStateMSFT *state)
{
    struct xrGetSceneComputeStateMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    params.state = state;
    _status = UNIX_CALL(xrGetSceneComputeStateMSFT, &params);
    assert(!_status && "xrGetSceneComputeStateMSFT");
    return params.result;
}

XrResult WINAPI xrGetSceneMarkerDecodedStringMSFT(XrSceneMSFT scene, const XrUuidMSFT *markerId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetSceneMarkerDecodedStringMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.markerId = markerId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSceneMarkerDecodedStringMSFT, &params);
    assert(!_status && "xrGetSceneMarkerDecodedStringMSFT");
    return params.result;
}

XrResult WINAPI xrGetSceneMarkerRawDataMSFT(XrSceneMSFT scene, const XrUuidMSFT *markerId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    struct xrGetSceneMarkerRawDataMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.markerId = markerId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSceneMarkerRawDataMSFT, &params);
    assert(!_status && "xrGetSceneMarkerRawDataMSFT");
    return params.result;
}

XrResult WINAPI xrGetSceneMeshBuffersMSFT(XrSceneMSFT scene, const XrSceneMeshBuffersGetInfoMSFT *getInfo, XrSceneMeshBuffersMSFT *buffers)
{
    struct xrGetSceneMeshBuffersMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.getInfo = getInfo;
    params.buffers = buffers;
    _status = UNIX_CALL(xrGetSceneMeshBuffersMSFT, &params);
    assert(!_status && "xrGetSceneMeshBuffersMSFT");
    return params.result;
}

XrResult WINAPI xrGetSerializedSceneFragmentDataMSFT(XrSceneMSFT scene, const XrSerializedSceneFragmentDataGetInfoMSFT *getInfo, uint32_t countInput, uint32_t *readOutput, uint8_t *buffer)
{
    struct xrGetSerializedSceneFragmentDataMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.getInfo = getInfo;
    params.countInput = countInput;
    params.readOutput = readOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSerializedSceneFragmentDataMSFT, &params);
    assert(!_status && "xrGetSerializedSceneFragmentDataMSFT");
    return params.result;
}

XrResult WINAPI xrGetSpaceBoundary2DFB(XrSession session, XrSpace space, XrBoundary2DFB *boundary2DOutput)
{
    struct xrGetSpaceBoundary2DFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.boundary2DOutput = boundary2DOutput;
    _status = UNIX_CALL(xrGetSpaceBoundary2DFB, &params);
    assert(!_status && "xrGetSpaceBoundary2DFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceBoundingBox2DFB(XrSession session, XrSpace space, XrRect2Df *boundingBox2DOutput)
{
    struct xrGetSpaceBoundingBox2DFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.boundingBox2DOutput = boundingBox2DOutput;
    _status = UNIX_CALL(xrGetSpaceBoundingBox2DFB, &params);
    assert(!_status && "xrGetSpaceBoundingBox2DFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceBoundingBox3DFB(XrSession session, XrSpace space, XrRect3DfFB *boundingBox3DOutput)
{
    struct xrGetSpaceBoundingBox3DFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.boundingBox3DOutput = boundingBox3DOutput;
    _status = UNIX_CALL(xrGetSpaceBoundingBox3DFB, &params);
    assert(!_status && "xrGetSpaceBoundingBox3DFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceComponentStatusFB(XrSpace space, XrSpaceComponentTypeFB componentType, XrSpaceComponentStatusFB *status)
{
    struct xrGetSpaceComponentStatusFB_params params;
    NTSTATUS _status;
    params.space = space;
    params.componentType = componentType;
    params.status = status;
    _status = UNIX_CALL(xrGetSpaceComponentStatusFB, &params);
    assert(!_status && "xrGetSpaceComponentStatusFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceContainerFB(XrSession session, XrSpace space, XrSpaceContainerFB *spaceContainerOutput)
{
    struct xrGetSpaceContainerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.spaceContainerOutput = spaceContainerOutput;
    _status = UNIX_CALL(xrGetSpaceContainerFB, &params);
    assert(!_status && "xrGetSpaceContainerFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceRoomLayoutFB(XrSession session, XrSpace space, XrRoomLayoutFB *roomLayoutOutput)
{
    struct xrGetSpaceRoomLayoutFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.roomLayoutOutput = roomLayoutOutput;
    _status = UNIX_CALL(xrGetSpaceRoomLayoutFB, &params);
    assert(!_status && "xrGetSpaceRoomLayoutFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceSemanticLabelsFB(XrSession session, XrSpace space, XrSemanticLabelsFB *semanticLabelsOutput)
{
    struct xrGetSpaceSemanticLabelsFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.semanticLabelsOutput = semanticLabelsOutput;
    _status = UNIX_CALL(xrGetSpaceSemanticLabelsFB, &params);
    assert(!_status && "xrGetSpaceSemanticLabelsFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceTriangleMeshMETA(XrSpace space, const XrSpaceTriangleMeshGetInfoMETA *getInfo, XrSpaceTriangleMeshMETA *triangleMeshOutput)
{
    struct xrGetSpaceTriangleMeshMETA_params params;
    NTSTATUS _status;
    params.space = space;
    params.getInfo = getInfo;
    params.triangleMeshOutput = triangleMeshOutput;
    _status = UNIX_CALL(xrGetSpaceTriangleMeshMETA, &params);
    assert(!_status && "xrGetSpaceTriangleMeshMETA");
    return params.result;
}

XrResult WINAPI xrGetSpaceUserIdFB(XrSpaceUserFB user, XrSpaceUserIdFB *userId)
{
    struct xrGetSpaceUserIdFB_params params;
    NTSTATUS _status;
    params.user = user;
    params.userId = userId;
    _status = UNIX_CALL(xrGetSpaceUserIdFB, &params);
    assert(!_status && "xrGetSpaceUserIdFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceUuidFB(XrSpace space, XrUuidEXT *uuid)
{
    struct xrGetSpaceUuidFB_params params;
    NTSTATUS _status;
    params.space = space;
    params.uuid = uuid;
    _status = UNIX_CALL(xrGetSpaceUuidFB, &params);
    assert(!_status && "xrGetSpaceUuidFB");
    return params.result;
}

XrResult WINAPI xrGetSpatialAnchorNameHTC(XrSpace anchor, XrSpatialAnchorNameHTC *name)
{
    struct xrGetSpatialAnchorNameHTC_params params;
    NTSTATUS _status;
    params.anchor = anchor;
    params.name = name;
    _status = UNIX_CALL(xrGetSpatialAnchorNameHTC, &params);
    assert(!_status && "xrGetSpatialAnchorNameHTC");
    return params.result;
}

XrResult WINAPI xrGetSpatialGraphNodeBindingPropertiesMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding, const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *getInfo, XrSpatialGraphNodeBindingPropertiesMSFT *properties)
{
    struct xrGetSpatialGraphNodeBindingPropertiesMSFT_params params;
    NTSTATUS _status;
    params.nodeBinding = nodeBinding;
    params.getInfo = getInfo;
    params.properties = properties;
    _status = UNIX_CALL(xrGetSpatialGraphNodeBindingPropertiesMSFT, &params);
    assert(!_status && "xrGetSpatialGraphNodeBindingPropertiesMSFT");
    return params.result;
}

XrResult WINAPI xrGetSwapchainStateFB(XrSwapchain swapchain, XrSwapchainStateBaseHeaderFB *state)
{
    struct xrGetSwapchainStateFB_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.state = state;
    _status = UNIX_CALL(xrGetSwapchainStateFB, &params);
    assert(!_status && "xrGetSwapchainStateFB");
    return params.result;
}

XrResult WINAPI xrGetSystemProperties(XrInstance instance, XrSystemId systemId, XrSystemProperties *properties)
{
    struct xrGetSystemProperties_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.properties = properties;
    _status = UNIX_CALL(xrGetSystemProperties, &params);
    assert(!_status && "xrGetSystemProperties");
    return params.result;
}

XrResult WINAPI xrGetViewConfigurationProperties(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, XrViewConfigurationProperties *configurationProperties)
{
    struct xrGetViewConfigurationProperties_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.configurationProperties = configurationProperties;
    _status = UNIX_CALL(xrGetViewConfigurationProperties, &params);
    assert(!_status && "xrGetViewConfigurationProperties");
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardDirtyTexturesMETA(XrVirtualKeyboardMETA keyboard, uint32_t textureIdCapacityInput, uint32_t *textureIdCountOutput, uint64_t *textureIds)
{
    struct xrGetVirtualKeyboardDirtyTexturesMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.textureIdCapacityInput = textureIdCapacityInput;
    params.textureIdCountOutput = textureIdCountOutput;
    params.textureIds = textureIds;
    _status = UNIX_CALL(xrGetVirtualKeyboardDirtyTexturesMETA, &params);
    assert(!_status && "xrGetVirtualKeyboardDirtyTexturesMETA");
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardModelAnimationStatesMETA(XrVirtualKeyboardMETA keyboard, XrVirtualKeyboardModelAnimationStatesMETA *animationStates)
{
    struct xrGetVirtualKeyboardModelAnimationStatesMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.animationStates = animationStates;
    _status = UNIX_CALL(xrGetVirtualKeyboardModelAnimationStatesMETA, &params);
    assert(!_status && "xrGetVirtualKeyboardModelAnimationStatesMETA");
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardScaleMETA(XrVirtualKeyboardMETA keyboard, float *scale)
{
    struct xrGetVirtualKeyboardScaleMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.scale = scale;
    _status = UNIX_CALL(xrGetVirtualKeyboardScaleMETA, &params);
    assert(!_status && "xrGetVirtualKeyboardScaleMETA");
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardTextureDataMETA(XrVirtualKeyboardMETA keyboard, uint64_t textureId, XrVirtualKeyboardTextureDataMETA *textureData)
{
    struct xrGetVirtualKeyboardTextureDataMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.textureId = textureId;
    params.textureData = textureData;
    _status = UNIX_CALL(xrGetVirtualKeyboardTextureDataMETA, &params);
    assert(!_status && "xrGetVirtualKeyboardTextureDataMETA");
    return params.result;
}

XrResult WINAPI xrGetVisibilityMaskKHR(XrSession session, XrViewConfigurationType viewConfigurationType, uint32_t viewIndex, XrVisibilityMaskTypeKHR visibilityMaskType, XrVisibilityMaskKHR *visibilityMask)
{
    struct xrGetVisibilityMaskKHR_params params;
    NTSTATUS _status;
    params.session = session;
    params.viewConfigurationType = viewConfigurationType;
    params.viewIndex = viewIndex;
    params.visibilityMaskType = visibilityMaskType;
    params.visibilityMask = visibilityMask;
    _status = UNIX_CALL(xrGetVisibilityMaskKHR, &params);
    assert(!_status && "xrGetVisibilityMaskKHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanDeviceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetVulkanDeviceExtensionsKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetVulkanDeviceExtensionsKHR, &params);
    assert(!_status && "xrGetVulkanDeviceExtensionsKHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsDevice2KHR(XrInstance instance, const XrVulkanGraphicsDeviceGetInfoKHR *getInfo, VkPhysicalDevice *vulkanPhysicalDevice)
{
    struct xrGetVulkanGraphicsDevice2KHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.getInfo = getInfo;
    params.vulkanPhysicalDevice = vulkanPhysicalDevice;
    _status = UNIX_CALL(xrGetVulkanGraphicsDevice2KHR, &params);
    assert(!_status && "xrGetVulkanGraphicsDevice2KHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsDeviceKHR(XrInstance instance, XrSystemId systemId, VkInstance vkInstance, VkPhysicalDevice *vkPhysicalDevice)
{
    struct xrGetVulkanGraphicsDeviceKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.vkInstance = vkInstance;
    params.vkPhysicalDevice = vkPhysicalDevice;
    _status = UNIX_CALL(xrGetVulkanGraphicsDeviceKHR, &params);
    assert(!_status && "xrGetVulkanGraphicsDeviceKHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsRequirements2KHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    struct xrGetVulkanGraphicsRequirements2KHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsRequirements = graphicsRequirements;
    _status = UNIX_CALL(xrGetVulkanGraphicsRequirements2KHR, &params);
    assert(!_status && "xrGetVulkanGraphicsRequirements2KHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    struct xrGetVulkanGraphicsRequirementsKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsRequirements = graphicsRequirements;
    _status = UNIX_CALL(xrGetVulkanGraphicsRequirementsKHR, &params);
    assert(!_status && "xrGetVulkanGraphicsRequirementsKHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanInstanceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetVulkanInstanceExtensionsKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetVulkanInstanceExtensionsKHR, &params);
    assert(!_status && "xrGetVulkanInstanceExtensionsKHR");
    return params.result;
}

XrResult WINAPI xrImportLocalizationMapML(XrSession session, const XrLocalizationMapImportInfoML *importInfo, XrUuidEXT *mapUuid)
{
    struct xrImportLocalizationMapML_params params;
    NTSTATUS _status;
    params.session = session;
    params.importInfo = importInfo;
    params.mapUuid = mapUuid;
    _status = UNIX_CALL(xrImportLocalizationMapML, &params);
    assert(!_status && "xrImportLocalizationMapML");
    return params.result;
}

XrResult WINAPI xrLoadControllerModelMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    struct xrLoadControllerModelMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.modelKey = modelKey;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrLoadControllerModelMSFT, &params);
    assert(!_status && "xrLoadControllerModelMSFT");
    return params.result;
}

XrResult WINAPI xrLoadRenderModelFB(XrSession session, const XrRenderModelLoadInfoFB *info, XrRenderModelBufferFB *buffer)
{
    struct xrLoadRenderModelFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.buffer = buffer;
    _status = UNIX_CALL(xrLoadRenderModelFB, &params);
    assert(!_status && "xrLoadRenderModelFB");
    return params.result;
}

XrResult WINAPI xrLocateBodyJointsFB(XrBodyTrackerFB bodyTracker, const XrBodyJointsLocateInfoFB *locateInfo, XrBodyJointLocationsFB *locations)
{
    struct xrLocateBodyJointsFB_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    _status = UNIX_CALL(xrLocateBodyJointsFB, &params);
    assert(!_status && "xrLocateBodyJointsFB");
    return params.result;
}

XrResult WINAPI xrLocateHandJointsEXT(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT *locateInfo, XrHandJointLocationsEXT *locations)
{
    struct xrLocateHandJointsEXT_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    _status = UNIX_CALL(xrLocateHandJointsEXT, &params);
    assert(!_status && "xrLocateHandJointsEXT");
    return params.result;
}

XrResult WINAPI xrLocateSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsLocateInfoMSFT *locateInfo, XrSceneComponentLocationsMSFT *locations)
{
    struct xrLocateSceneComponentsMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.locateInfo = locateInfo;
    params.locations = locations;
    _status = UNIX_CALL(xrLocateSceneComponentsMSFT, &params);
    assert(!_status && "xrLocateSceneComponentsMSFT");
    return params.result;
}

XrResult WINAPI xrLocateSpace(XrSpace space, XrSpace baseSpace, XrTime time, XrSpaceLocation *location)
{
    struct xrLocateSpace_params params;
    NTSTATUS _status;
    params.space = space;
    params.baseSpace = baseSpace;
    params.time = time;
    params.location = location;
    _status = UNIX_CALL(xrLocateSpace, &params);
    assert(!_status && "xrLocateSpace");
    return params.result;
}

XrResult WINAPI xrLocateSpaces(XrSession session, const XrSpacesLocateInfo *locateInfo, XrSpaceLocations *spaceLocations)
{
    struct xrLocateSpaces_params params;
    NTSTATUS _status;
    params.session = session;
    params.locateInfo = locateInfo;
    params.spaceLocations = spaceLocations;
    _status = UNIX_CALL(xrLocateSpaces, &params);
    assert(!_status && "xrLocateSpaces");
    return params.result;
}

XrResult WINAPI xrLocateSpacesKHR(XrSession session, const XrSpacesLocateInfo *locateInfo, XrSpaceLocations *spaceLocations)
{
    struct xrLocateSpacesKHR_params params;
    NTSTATUS _status;
    params.session = session;
    params.locateInfo = locateInfo;
    params.spaceLocations = spaceLocations;
    _status = UNIX_CALL(xrLocateSpacesKHR, &params);
    assert(!_status && "xrLocateSpacesKHR");
    return params.result;
}

XrResult WINAPI xrLocateViews(XrSession session, const XrViewLocateInfo *viewLocateInfo, XrViewState *viewState, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrView *views)
{
    struct xrLocateViews_params params;
    NTSTATUS _status;
    params.session = session;
    params.viewLocateInfo = viewLocateInfo;
    params.viewState = viewState;
    params.viewCapacityInput = viewCapacityInput;
    params.viewCountOutput = viewCountOutput;
    params.views = views;
    _status = UNIX_CALL(xrLocateViews, &params);
    assert(!_status && "xrLocateViews");
    return params.result;
}

XrResult WINAPI xrPassthroughLayerPauseFB(XrPassthroughLayerFB layer)
{
    struct xrPassthroughLayerPauseFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    _status = UNIX_CALL(xrPassthroughLayerPauseFB, &params);
    assert(!_status && "xrPassthroughLayerPauseFB");
    return params.result;
}

XrResult WINAPI xrPassthroughLayerResumeFB(XrPassthroughLayerFB layer)
{
    struct xrPassthroughLayerResumeFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    _status = UNIX_CALL(xrPassthroughLayerResumeFB, &params);
    assert(!_status && "xrPassthroughLayerResumeFB");
    return params.result;
}

XrResult WINAPI xrPassthroughLayerSetKeyboardHandsIntensityFB(XrPassthroughLayerFB layer, const XrPassthroughKeyboardHandsIntensityFB *intensity)
{
    struct xrPassthroughLayerSetKeyboardHandsIntensityFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    params.intensity = intensity;
    _status = UNIX_CALL(xrPassthroughLayerSetKeyboardHandsIntensityFB, &params);
    assert(!_status && "xrPassthroughLayerSetKeyboardHandsIntensityFB");
    return params.result;
}

XrResult WINAPI xrPassthroughLayerSetStyleFB(XrPassthroughLayerFB layer, const XrPassthroughStyleFB *style)
{
    struct xrPassthroughLayerSetStyleFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    params.style = style;
    _status = UNIX_CALL(xrPassthroughLayerSetStyleFB, &params);
    assert(!_status && "xrPassthroughLayerSetStyleFB");
    return params.result;
}

XrResult WINAPI xrPassthroughPauseFB(XrPassthroughFB passthrough)
{
    struct xrPassthroughPauseFB_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrPassthroughPauseFB, &params);
    assert(!_status && "xrPassthroughPauseFB");
    return params.result;
}

XrResult WINAPI xrPassthroughStartFB(XrPassthroughFB passthrough)
{
    struct xrPassthroughStartFB_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrPassthroughStartFB, &params);
    assert(!_status && "xrPassthroughStartFB");
    return params.result;
}

XrResult WINAPI xrPathToString(XrInstance instance, XrPath path, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrPathToString_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.path = path;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrPathToString, &params);
    assert(!_status && "xrPathToString");
    return params.result;
}

XrResult WINAPI xrPerfSettingsSetPerformanceLevelEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsLevelEXT level)
{
    struct xrPerfSettingsSetPerformanceLevelEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.domain = domain;
    params.level = level;
    _status = UNIX_CALL(xrPerfSettingsSetPerformanceLevelEXT, &params);
    assert(!_status && "xrPerfSettingsSetPerformanceLevelEXT");
    return params.result;
}

XrResult WINAPI xrPersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceInfoMSFT *spatialAnchorPersistenceInfo)
{
    struct xrPersistSpatialAnchorMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    params.spatialAnchorPersistenceInfo = spatialAnchorPersistenceInfo;
    _status = UNIX_CALL(xrPersistSpatialAnchorMSFT, &params);
    assert(!_status && "xrPersistSpatialAnchorMSFT");
    return params.result;
}

XrResult WINAPI xrPollFutureEXT(XrInstance instance, const XrFuturePollInfoEXT *pollInfo, XrFuturePollResultEXT *pollResult)
{
    struct xrPollFutureEXT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.pollInfo = pollInfo;
    params.pollResult = pollResult;
    _status = UNIX_CALL(xrPollFutureEXT, &params);
    assert(!_status && "xrPollFutureEXT");
    return params.result;
}

XrResult WINAPI xrQueryLocalizationMapsML(XrSession session, const XrLocalizationMapQueryInfoBaseHeaderML *queryInfo, uint32_t mapCapacityInput, uint32_t *mapCountOutput, XrLocalizationMapML *maps)
{
    struct xrQueryLocalizationMapsML_params params;
    NTSTATUS _status;
    params.session = session;
    params.queryInfo = queryInfo;
    params.mapCapacityInput = mapCapacityInput;
    params.mapCountOutput = mapCountOutput;
    params.maps = maps;
    _status = UNIX_CALL(xrQueryLocalizationMapsML, &params);
    assert(!_status && "xrQueryLocalizationMapsML");
    return params.result;
}

XrResult WINAPI xrQueryPerformanceMetricsCounterMETA(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterMETA *counter)
{
    struct xrQueryPerformanceMetricsCounterMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.counterPath = counterPath;
    params.counter = counter;
    _status = UNIX_CALL(xrQueryPerformanceMetricsCounterMETA, &params);
    assert(!_status && "xrQueryPerformanceMetricsCounterMETA");
    return params.result;
}

XrResult WINAPI xrQuerySpacesFB(XrSession session, const XrSpaceQueryInfoBaseHeaderFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrQuerySpacesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrQuerySpacesFB, &params);
    assert(!_status && "xrQuerySpacesFB");
    return params.result;
}

XrResult WINAPI xrQuerySystemTrackedKeyboardFB(XrSession session, const XrKeyboardTrackingQueryFB *queryInfo, XrKeyboardTrackingDescriptionFB *keyboard)
{
    struct xrQuerySystemTrackedKeyboardFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.queryInfo = queryInfo;
    params.keyboard = keyboard;
    _status = UNIX_CALL(xrQuerySystemTrackedKeyboardFB, &params);
    assert(!_status && "xrQuerySystemTrackedKeyboardFB");
    return params.result;
}

XrResult WINAPI xrReleaseSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageReleaseInfo *releaseInfo)
{
    struct xrReleaseSwapchainImage_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.releaseInfo = releaseInfo;
    _status = UNIX_CALL(xrReleaseSwapchainImage, &params);
    assert(!_status && "xrReleaseSwapchainImage");
    return params.result;
}

XrResult WINAPI xrRequestDisplayRefreshRateFB(XrSession session, float displayRefreshRate)
{
    struct xrRequestDisplayRefreshRateFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.displayRefreshRate = displayRefreshRate;
    _status = UNIX_CALL(xrRequestDisplayRefreshRateFB, &params);
    assert(!_status && "xrRequestDisplayRefreshRateFB");
    return params.result;
}

XrResult WINAPI xrRequestExitSession(XrSession session)
{
    struct xrRequestExitSession_params params;
    NTSTATUS _status;
    params.session = session;
    _status = UNIX_CALL(xrRequestExitSession, &params);
    assert(!_status && "xrRequestExitSession");
    return params.result;
}

XrResult WINAPI xrRequestMapLocalizationML(XrSession session, const XrMapLocalizationRequestInfoML *requestInfo)
{
    struct xrRequestMapLocalizationML_params params;
    NTSTATUS _status;
    params.session = session;
    params.requestInfo = requestInfo;
    _status = UNIX_CALL(xrRequestMapLocalizationML, &params);
    assert(!_status && "xrRequestMapLocalizationML");
    return params.result;
}

XrResult WINAPI xrRequestSceneCaptureFB(XrSession session, const XrSceneCaptureRequestInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrRequestSceneCaptureFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrRequestSceneCaptureFB, &params);
    assert(!_status && "xrRequestSceneCaptureFB");
    return params.result;
}

XrResult WINAPI xrResultToString(XrInstance instance, XrResult value, char buffer[])
{
    struct xrResultToString_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.value = value;
    params.buffer = buffer;
    _status = UNIX_CALL(xrResultToString, &params);
    assert(!_status && "xrResultToString");
    return params.result;
}

XrResult WINAPI xrRetrieveSpaceQueryResultsFB(XrSession session, XrAsyncRequestIdFB requestId, XrSpaceQueryResultsFB *results)
{
    struct xrRetrieveSpaceQueryResultsFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.requestId = requestId;
    params.results = results;
    _status = UNIX_CALL(xrRetrieveSpaceQueryResultsFB, &params);
    assert(!_status && "xrRetrieveSpaceQueryResultsFB");
    return params.result;
}

XrResult WINAPI xrSaveSpaceFB(XrSession session, const XrSpaceSaveInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSaveSpaceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrSaveSpaceFB, &params);
    assert(!_status && "xrSaveSpaceFB");
    return params.result;
}

XrResult WINAPI xrSaveSpaceListFB(XrSession session, const XrSpaceListSaveInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSaveSpaceListFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrSaveSpaceListFB, &params);
    assert(!_status && "xrSaveSpaceListFB");
    return params.result;
}

XrResult WINAPI xrSendVirtualKeyboardInputMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardInputInfoMETA *info, XrPosef *interactorRootPose)
{
    struct xrSendVirtualKeyboardInputMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.info = info;
    params.interactorRootPose = interactorRootPose;
    _status = UNIX_CALL(xrSendVirtualKeyboardInputMETA, &params);
    assert(!_status && "xrSendVirtualKeyboardInputMETA");
    return params.result;
}

XrResult WINAPI xrSetColorSpaceFB(XrSession session, const XrColorSpaceFB colorSpace)
{
    struct xrSetColorSpaceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.colorSpace = colorSpace;
    _status = UNIX_CALL(xrSetColorSpaceFB, &params);
    assert(!_status && "xrSetColorSpaceFB");
    return params.result;
}

XrResult WINAPI xrSetDigitalLensControlALMALENCE(XrSession session, const XrDigitalLensControlALMALENCE *digitalLensControl)
{
    struct xrSetDigitalLensControlALMALENCE_params params;
    NTSTATUS _status;
    params.session = session;
    params.digitalLensControl = digitalLensControl;
    _status = UNIX_CALL(xrSetDigitalLensControlALMALENCE, &params);
    assert(!_status && "xrSetDigitalLensControlALMALENCE");
    return params.result;
}

XrResult WINAPI xrSetEnvironmentDepthEstimationVARJO(XrSession session, XrBool32 enabled)
{
    struct xrSetEnvironmentDepthEstimationVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.enabled = enabled;
    _status = UNIX_CALL(xrSetEnvironmentDepthEstimationVARJO, &params);
    assert(!_status && "xrSetEnvironmentDepthEstimationVARJO");
    return params.result;
}

XrResult WINAPI xrSetEnvironmentDepthHandRemovalMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthHandRemovalSetInfoMETA *setInfo)
{
    struct xrSetEnvironmentDepthHandRemovalMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    params.setInfo = setInfo;
    _status = UNIX_CALL(xrSetEnvironmentDepthHandRemovalMETA, &params);
    assert(!_status && "xrSetEnvironmentDepthHandRemovalMETA");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceActiveEXT(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive)
{
    struct xrSetInputDeviceActiveEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.interactionProfile = interactionProfile;
    params.topLevelPath = topLevelPath;
    params.isActive = isActive;
    _status = UNIX_CALL(xrSetInputDeviceActiveEXT, &params);
    assert(!_status && "xrSetInputDeviceActiveEXT");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceLocationEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose)
{
    struct xrSetInputDeviceLocationEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.space = space;
    params.pose = pose;
    _status = UNIX_CALL(xrSetInputDeviceLocationEXT, &params);
    assert(!_status && "xrSetInputDeviceLocationEXT");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceStateBoolEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrBool32 state)
{
    struct xrSetInputDeviceStateBoolEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.state = state;
    _status = UNIX_CALL(xrSetInputDeviceStateBoolEXT, &params);
    assert(!_status && "xrSetInputDeviceStateBoolEXT");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceStateFloatEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, float state)
{
    struct xrSetInputDeviceStateFloatEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.state = state;
    _status = UNIX_CALL(xrSetInputDeviceStateFloatEXT, &params);
    assert(!_status && "xrSetInputDeviceStateFloatEXT");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceStateVector2fEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrVector2f state)
{
    struct xrSetInputDeviceStateVector2fEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.state = state;
    _status = UNIX_CALL(xrSetInputDeviceStateVector2fEXT, &params);
    assert(!_status && "xrSetInputDeviceStateVector2fEXT");
    return params.result;
}

XrResult WINAPI xrSetMarkerTrackingPredictionVARJO(XrSession session, uint64_t markerId, XrBool32 enable)
{
    struct xrSetMarkerTrackingPredictionVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.markerId = markerId;
    params.enable = enable;
    _status = UNIX_CALL(xrSetMarkerTrackingPredictionVARJO, &params);
    assert(!_status && "xrSetMarkerTrackingPredictionVARJO");
    return params.result;
}

XrResult WINAPI xrSetMarkerTrackingTimeoutVARJO(XrSession session, uint64_t markerId, XrDuration timeout)
{
    struct xrSetMarkerTrackingTimeoutVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.markerId = markerId;
    params.timeout = timeout;
    _status = UNIX_CALL(xrSetMarkerTrackingTimeoutVARJO, &params);
    assert(!_status && "xrSetMarkerTrackingTimeoutVARJO");
    return params.result;
}

XrResult WINAPI xrSetMarkerTrackingVARJO(XrSession session, XrBool32 enabled)
{
    struct xrSetMarkerTrackingVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.enabled = enabled;
    _status = UNIX_CALL(xrSetMarkerTrackingVARJO, &params);
    assert(!_status && "xrSetMarkerTrackingVARJO");
    return params.result;
}

XrResult WINAPI xrSetPerformanceMetricsStateMETA(XrSession session, const XrPerformanceMetricsStateMETA *state)
{
    struct xrSetPerformanceMetricsStateMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.state = state;
    _status = UNIX_CALL(xrSetPerformanceMetricsStateMETA, &params);
    assert(!_status && "xrSetPerformanceMetricsStateMETA");
    return params.result;
}

XrResult WINAPI xrSetSpaceComponentStatusFB(XrSpace space, const XrSpaceComponentStatusSetInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSetSpaceComponentStatusFB_params params;
    NTSTATUS _status;
    params.space = space;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrSetSpaceComponentStatusFB, &params);
    assert(!_status && "xrSetSpaceComponentStatusFB");
    return params.result;
}

XrResult WINAPI xrSetTrackingOptimizationSettingsHintQCOM(XrSession session, XrTrackingOptimizationSettingsDomainQCOM domain, XrTrackingOptimizationSettingsHintQCOM hint)
{
    struct xrSetTrackingOptimizationSettingsHintQCOM_params params;
    NTSTATUS _status;
    params.session = session;
    params.domain = domain;
    params.hint = hint;
    _status = UNIX_CALL(xrSetTrackingOptimizationSettingsHintQCOM, &params);
    assert(!_status && "xrSetTrackingOptimizationSettingsHintQCOM");
    return params.result;
}

XrResult WINAPI xrSetViewOffsetVARJO(XrSession session, float offset)
{
    struct xrSetViewOffsetVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.offset = offset;
    _status = UNIX_CALL(xrSetViewOffsetVARJO, &params);
    assert(!_status && "xrSetViewOffsetVARJO");
    return params.result;
}

XrResult WINAPI xrSetVirtualKeyboardModelVisibilityMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardModelVisibilitySetInfoMETA *modelVisibility)
{
    struct xrSetVirtualKeyboardModelVisibilityMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.modelVisibility = modelVisibility;
    _status = UNIX_CALL(xrSetVirtualKeyboardModelVisibilityMETA, &params);
    assert(!_status && "xrSetVirtualKeyboardModelVisibilityMETA");
    return params.result;
}

XrResult WINAPI xrShareSpacesFB(XrSession session, const XrSpaceShareInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrShareSpacesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrShareSpacesFB, &params);
    assert(!_status && "xrShareSpacesFB");
    return params.result;
}

XrResult WINAPI xrSnapshotMarkerDetectorML(XrMarkerDetectorML markerDetector, XrMarkerDetectorSnapshotInfoML *snapshotInfo)
{
    struct xrSnapshotMarkerDetectorML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.snapshotInfo = snapshotInfo;
    _status = UNIX_CALL(xrSnapshotMarkerDetectorML, &params);
    assert(!_status && "xrSnapshotMarkerDetectorML");
    return params.result;
}

XrResult WINAPI xrStartEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider)
{
    struct xrStartEnvironmentDepthProviderMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    _status = UNIX_CALL(xrStartEnvironmentDepthProviderMETA, &params);
    assert(!_status && "xrStartEnvironmentDepthProviderMETA");
    return params.result;
}

XrResult WINAPI xrStopEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider)
{
    struct xrStopEnvironmentDepthProviderMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    _status = UNIX_CALL(xrStopEnvironmentDepthProviderMETA, &params);
    assert(!_status && "xrStopEnvironmentDepthProviderMETA");
    return params.result;
}

XrResult WINAPI xrStopHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo)
{
    struct xrStopHapticFeedback_params params;
    NTSTATUS _status;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    _status = UNIX_CALL(xrStopHapticFeedback, &params);
    assert(!_status && "xrStopHapticFeedback");
    return params.result;
}

XrResult WINAPI xrStringToPath(XrInstance instance, const char *pathString, XrPath *path)
{
    struct xrStringToPath_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.pathString = pathString;
    params.path = path;
    _status = UNIX_CALL(xrStringToPath, &params);
    assert(!_status && "xrStringToPath");
    return params.result;
}

XrResult WINAPI xrStructureTypeToString(XrInstance instance, XrStructureType value, char buffer[])
{
    struct xrStructureTypeToString_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.value = value;
    params.buffer = buffer;
    _status = UNIX_CALL(xrStructureTypeToString, &params);
    assert(!_status && "xrStructureTypeToString");
    return params.result;
}

XrResult WINAPI xrSuggestInteractionProfileBindings(XrInstance instance, const XrInteractionProfileSuggestedBinding *suggestedBindings)
{
    struct xrSuggestInteractionProfileBindings_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.suggestedBindings = suggestedBindings;
    _status = UNIX_CALL(xrSuggestInteractionProfileBindings, &params);
    assert(!_status && "xrSuggestInteractionProfileBindings");
    return params.result;
}

XrResult WINAPI xrSuggestVirtualKeyboardLocationMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardLocationInfoMETA *locationInfo)
{
    struct xrSuggestVirtualKeyboardLocationMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.locationInfo = locationInfo;
    _status = UNIX_CALL(xrSuggestVirtualKeyboardLocationMETA, &params);
    assert(!_status && "xrSuggestVirtualKeyboardLocationMETA");
    return params.result;
}

XrResult WINAPI xrSyncActions(XrSession session, const XrActionsSyncInfo *syncInfo)
{
    struct xrSyncActions_params params;
    NTSTATUS _status;
    params.session = session;
    params.syncInfo = syncInfo;
    _status = UNIX_CALL(xrSyncActions, &params);
    assert(!_status && "xrSyncActions");
    return params.result;
}

XrResult WINAPI xrThermalGetTemperatureTrendEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsNotificationLevelEXT *notificationLevel, float *tempHeadroom, float *tempSlope)
{
    struct xrThermalGetTemperatureTrendEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.domain = domain;
    params.notificationLevel = notificationLevel;
    params.tempHeadroom = tempHeadroom;
    params.tempSlope = tempSlope;
    _status = UNIX_CALL(xrThermalGetTemperatureTrendEXT, &params);
    assert(!_status && "xrThermalGetTemperatureTrendEXT");
    return params.result;
}

XrResult WINAPI xrTriangleMeshBeginUpdateFB(XrTriangleMeshFB mesh)
{
    struct xrTriangleMeshBeginUpdateFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    _status = UNIX_CALL(xrTriangleMeshBeginUpdateFB, &params);
    assert(!_status && "xrTriangleMeshBeginUpdateFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshBeginVertexBufferUpdateFB(XrTriangleMeshFB mesh, uint32_t *outVertexCount)
{
    struct xrTriangleMeshBeginVertexBufferUpdateFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    params.outVertexCount = outVertexCount;
    _status = UNIX_CALL(xrTriangleMeshBeginVertexBufferUpdateFB, &params);
    assert(!_status && "xrTriangleMeshBeginVertexBufferUpdateFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshEndUpdateFB(XrTriangleMeshFB mesh, uint32_t vertexCount, uint32_t triangleCount)
{
    struct xrTriangleMeshEndUpdateFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    params.vertexCount = vertexCount;
    params.triangleCount = triangleCount;
    _status = UNIX_CALL(xrTriangleMeshEndUpdateFB, &params);
    assert(!_status && "xrTriangleMeshEndUpdateFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshEndVertexBufferUpdateFB(XrTriangleMeshFB mesh)
{
    struct xrTriangleMeshEndVertexBufferUpdateFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    _status = UNIX_CALL(xrTriangleMeshEndVertexBufferUpdateFB, &params);
    assert(!_status && "xrTriangleMeshEndVertexBufferUpdateFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshGetIndexBufferFB(XrTriangleMeshFB mesh, uint32_t **outIndexBuffer)
{
    struct xrTriangleMeshGetIndexBufferFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    params.outIndexBuffer = outIndexBuffer;
    _status = UNIX_CALL(xrTriangleMeshGetIndexBufferFB, &params);
    assert(!_status && "xrTriangleMeshGetIndexBufferFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshGetVertexBufferFB(XrTriangleMeshFB mesh, XrVector3f **outVertexBuffer)
{
    struct xrTriangleMeshGetVertexBufferFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    params.outVertexBuffer = outVertexBuffer;
    _status = UNIX_CALL(xrTriangleMeshGetVertexBufferFB, &params);
    assert(!_status && "xrTriangleMeshGetVertexBufferFB");
    return params.result;
}

XrResult WINAPI xrTryCreateSpatialGraphStaticNodeBindingMSFT(XrSession session, const XrSpatialGraphStaticNodeBindingCreateInfoMSFT *createInfo, XrSpatialGraphNodeBindingMSFT *nodeBinding)
{
    struct xrTryCreateSpatialGraphStaticNodeBindingMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.nodeBinding = nodeBinding;
    _status = UNIX_CALL(xrTryCreateSpatialGraphStaticNodeBindingMSFT, &params);
    assert(!_status && "xrTryCreateSpatialGraphStaticNodeBindingMSFT");
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceNameMSFT *spatialAnchorPersistenceName)
{
    struct xrUnpersistSpatialAnchorMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    params.spatialAnchorPersistenceName = spatialAnchorPersistenceName;
    _status = UNIX_CALL(xrUnpersistSpatialAnchorMSFT, &params);
    assert(!_status && "xrUnpersistSpatialAnchorMSFT");
    return params.result;
}

XrResult WINAPI xrUpdateHandMeshMSFT(XrHandTrackerEXT handTracker, const XrHandMeshUpdateInfoMSFT *updateInfo, XrHandMeshMSFT *handMesh)
{
    struct xrUpdateHandMeshMSFT_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.updateInfo = updateInfo;
    params.handMesh = handMesh;
    _status = UNIX_CALL(xrUpdateHandMeshMSFT, &params);
    assert(!_status && "xrUpdateHandMeshMSFT");
    return params.result;
}

XrResult WINAPI xrUpdatePassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut, const XrPassthroughColorLutUpdateInfoMETA *updateInfo)
{
    struct xrUpdatePassthroughColorLutMETA_params params;
    NTSTATUS _status;
    params.colorLut = colorLut;
    params.updateInfo = updateInfo;
    _status = UNIX_CALL(xrUpdatePassthroughColorLutMETA, &params);
    assert(!_status && "xrUpdatePassthroughColorLutMETA");
    return params.result;
}

XrResult WINAPI xrUpdateSwapchainFB(XrSwapchain swapchain, const XrSwapchainStateBaseHeaderFB *state)
{
    struct xrUpdateSwapchainFB_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.state = state;
    _status = UNIX_CALL(xrUpdateSwapchainFB, &params);
    assert(!_status && "xrUpdateSwapchainFB");
    return params.result;
}

XrResult WINAPI xrWaitFrame(XrSession session, const XrFrameWaitInfo *frameWaitInfo, XrFrameState *frameState)
{
    struct xrWaitFrame_params params;
    NTSTATUS _status;
    params.session = session;
    params.frameWaitInfo = frameWaitInfo;
    params.frameState = frameState;
    _status = UNIX_CALL(xrWaitFrame, &params);
    assert(!_status && "xrWaitFrame");
    return params.result;
}

XrResult WINAPI xrWaitSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageWaitInfo *waitInfo)
{
    struct xrWaitSwapchainImage_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.waitInfo = waitInfo;
    _status = UNIX_CALL(xrWaitSwapchainImage, &params);
    assert(!_status && "xrWaitSwapchainImage");
    return params.result;
}

static const struct openxr_func xr_instance_dispatch_table[] =
{
    {"xrAcquireEnvironmentDepthImageMETA", xrAcquireEnvironmentDepthImageMETA},
    {"xrAcquireSwapchainImage", xrAcquireSwapchainImage},
    {"xrApplyForceFeedbackCurlMNDX", xrApplyForceFeedbackCurlMNDX},
    {"xrApplyHapticFeedback", xrApplyHapticFeedback},
    {"xrAttachSessionActionSets", xrAttachSessionActionSets},
    {"xrBeginFrame", xrBeginFrame},
    {"xrBeginPlaneDetectionEXT", xrBeginPlaneDetectionEXT},
    {"xrBeginSession", xrBeginSession},
    {"xrCancelFutureEXT", xrCancelFutureEXT},
    {"xrChangeVirtualKeyboardTextContextMETA", xrChangeVirtualKeyboardTextContextMETA},
    {"xrClearSpatialAnchorStoreMSFT", xrClearSpatialAnchorStoreMSFT},
    {"xrComputeNewSceneMSFT", xrComputeNewSceneMSFT},
    {"xrConvertTimeToWin32PerformanceCounterKHR", xrConvertTimeToWin32PerformanceCounterKHR},
    {"xrConvertWin32PerformanceCounterToTimeKHR", xrConvertWin32PerformanceCounterToTimeKHR},
    {"xrCreateAction", xrCreateAction},
    {"xrCreateActionSet", xrCreateActionSet},
    {"xrCreateActionSpace", xrCreateActionSpace},
    {"xrCreateApiLayerInstance", xrCreateApiLayerInstance},
    {"xrCreateBodyTrackerFB", xrCreateBodyTrackerFB},
    {"xrCreateEnvironmentDepthProviderMETA", xrCreateEnvironmentDepthProviderMETA},
    {"xrCreateEnvironmentDepthSwapchainMETA", xrCreateEnvironmentDepthSwapchainMETA},
    {"xrCreateExportedLocalizationMapML", xrCreateExportedLocalizationMapML},
    {"xrCreateEyeTrackerFB", xrCreateEyeTrackerFB},
    {"xrCreateFaceTracker2FB", xrCreateFaceTracker2FB},
    {"xrCreateFaceTrackerFB", xrCreateFaceTrackerFB},
    {"xrCreateFacialTrackerHTC", xrCreateFacialTrackerHTC},
    {"xrCreateFoveationProfileFB", xrCreateFoveationProfileFB},
    {"xrCreateGeometryInstanceFB", xrCreateGeometryInstanceFB},
    {"xrCreateHandMeshSpaceMSFT", xrCreateHandMeshSpaceMSFT},
    {"xrCreateHandTrackerEXT", xrCreateHandTrackerEXT},
    {"xrCreateInstance", xrCreateInstance},
    {"xrCreateKeyboardSpaceFB", xrCreateKeyboardSpaceFB},
    {"xrCreateMarkerDetectorML", xrCreateMarkerDetectorML},
    {"xrCreateMarkerSpaceML", xrCreateMarkerSpaceML},
    {"xrCreateMarkerSpaceVARJO", xrCreateMarkerSpaceVARJO},
    {"xrCreatePassthroughColorLutMETA", xrCreatePassthroughColorLutMETA},
    {"xrCreatePassthroughFB", xrCreatePassthroughFB},
    {"xrCreatePassthroughHTC", xrCreatePassthroughHTC},
    {"xrCreatePassthroughLayerFB", xrCreatePassthroughLayerFB},
    {"xrCreatePlaneDetectorEXT", xrCreatePlaneDetectorEXT},
    {"xrCreateReferenceSpace", xrCreateReferenceSpace},
    {"xrCreateSceneMSFT", xrCreateSceneMSFT},
    {"xrCreateSceneObserverMSFT", xrCreateSceneObserverMSFT},
    {"xrCreateSession", xrCreateSession},
    {"xrCreateSpaceUserFB", xrCreateSpaceUserFB},
    {"xrCreateSpatialAnchorFB", xrCreateSpatialAnchorFB},
    {"xrCreateSpatialAnchorFromPersistedNameMSFT", xrCreateSpatialAnchorFromPersistedNameMSFT},
    {"xrCreateSpatialAnchorHTC", xrCreateSpatialAnchorHTC},
    {"xrCreateSpatialAnchorMSFT", xrCreateSpatialAnchorMSFT},
    {"xrCreateSpatialAnchorSpaceMSFT", xrCreateSpatialAnchorSpaceMSFT},
    {"xrCreateSpatialAnchorStoreConnectionMSFT", xrCreateSpatialAnchorStoreConnectionMSFT},
    {"xrCreateSpatialGraphNodeSpaceMSFT", xrCreateSpatialGraphNodeSpaceMSFT},
    {"xrCreateSwapchain", xrCreateSwapchain},
    {"xrCreateTriangleMeshFB", xrCreateTriangleMeshFB},
    {"xrCreateVirtualKeyboardMETA", xrCreateVirtualKeyboardMETA},
    {"xrCreateVirtualKeyboardSpaceMETA", xrCreateVirtualKeyboardSpaceMETA},
    {"xrCreateVulkanDeviceKHR", xrCreateVulkanDeviceKHR},
    {"xrCreateVulkanInstanceKHR", xrCreateVulkanInstanceKHR},
    {"xrDeserializeSceneMSFT", xrDeserializeSceneMSFT},
    {"xrDestroyAction", xrDestroyAction},
    {"xrDestroyActionSet", xrDestroyActionSet},
    {"xrDestroyBodyTrackerFB", xrDestroyBodyTrackerFB},
    {"xrDestroyEnvironmentDepthProviderMETA", xrDestroyEnvironmentDepthProviderMETA},
    {"xrDestroyEnvironmentDepthSwapchainMETA", xrDestroyEnvironmentDepthSwapchainMETA},
    {"xrDestroyExportedLocalizationMapML", xrDestroyExportedLocalizationMapML},
    {"xrDestroyEyeTrackerFB", xrDestroyEyeTrackerFB},
    {"xrDestroyFaceTracker2FB", xrDestroyFaceTracker2FB},
    {"xrDestroyFaceTrackerFB", xrDestroyFaceTrackerFB},
    {"xrDestroyFacialTrackerHTC", xrDestroyFacialTrackerHTC},
    {"xrDestroyFoveationProfileFB", xrDestroyFoveationProfileFB},
    {"xrDestroyGeometryInstanceFB", xrDestroyGeometryInstanceFB},
    {"xrDestroyHandTrackerEXT", xrDestroyHandTrackerEXT},
    {"xrDestroyInstance", xrDestroyInstance},
    {"xrDestroyMarkerDetectorML", xrDestroyMarkerDetectorML},
    {"xrDestroyPassthroughColorLutMETA", xrDestroyPassthroughColorLutMETA},
    {"xrDestroyPassthroughFB", xrDestroyPassthroughFB},
    {"xrDestroyPassthroughHTC", xrDestroyPassthroughHTC},
    {"xrDestroyPassthroughLayerFB", xrDestroyPassthroughLayerFB},
    {"xrDestroyPlaneDetectorEXT", xrDestroyPlaneDetectorEXT},
    {"xrDestroySceneMSFT", xrDestroySceneMSFT},
    {"xrDestroySceneObserverMSFT", xrDestroySceneObserverMSFT},
    {"xrDestroySession", xrDestroySession},
    {"xrDestroySpace", xrDestroySpace},
    {"xrDestroySpaceUserFB", xrDestroySpaceUserFB},
    {"xrDestroySpatialAnchorMSFT", xrDestroySpatialAnchorMSFT},
    {"xrDestroySpatialAnchorStoreConnectionMSFT", xrDestroySpatialAnchorStoreConnectionMSFT},
    {"xrDestroySpatialGraphNodeBindingMSFT", xrDestroySpatialGraphNodeBindingMSFT},
    {"xrDestroySwapchain", xrDestroySwapchain},
    {"xrDestroyTriangleMeshFB", xrDestroyTriangleMeshFB},
    {"xrDestroyVirtualKeyboardMETA", xrDestroyVirtualKeyboardMETA},
    {"xrEnableLocalizationEventsML", xrEnableLocalizationEventsML},
    {"xrEnableUserCalibrationEventsML", xrEnableUserCalibrationEventsML},
    {"xrEndFrame", xrEndFrame},
    {"xrEndSession", xrEndSession},
    {"xrEnumerateApiLayerProperties", xrEnumerateApiLayerProperties},
    {"xrEnumerateBoundSourcesForAction", xrEnumerateBoundSourcesForAction},
    {"xrEnumerateColorSpacesFB", xrEnumerateColorSpacesFB},
    {"xrEnumerateDisplayRefreshRatesFB", xrEnumerateDisplayRefreshRatesFB},
    {"xrEnumerateEnvironmentBlendModes", xrEnumerateEnvironmentBlendModes},
    {"xrEnumerateEnvironmentDepthSwapchainImagesMETA", xrEnumerateEnvironmentDepthSwapchainImagesMETA},
    {"xrEnumerateExternalCamerasOCULUS", xrEnumerateExternalCamerasOCULUS},
    {"xrEnumerateInstanceExtensionProperties", xrEnumerateInstanceExtensionProperties},
    {"xrEnumeratePerformanceMetricsCounterPathsMETA", xrEnumeratePerformanceMetricsCounterPathsMETA},
    {"xrEnumeratePersistedSpatialAnchorNamesMSFT", xrEnumeratePersistedSpatialAnchorNamesMSFT},
    {"xrEnumerateReferenceSpaces", xrEnumerateReferenceSpaces},
    {"xrEnumerateRenderModelPathsFB", xrEnumerateRenderModelPathsFB},
    {"xrEnumerateReprojectionModesMSFT", xrEnumerateReprojectionModesMSFT},
    {"xrEnumerateSceneComputeFeaturesMSFT", xrEnumerateSceneComputeFeaturesMSFT},
    {"xrEnumerateSpaceSupportedComponentsFB", xrEnumerateSpaceSupportedComponentsFB},
    {"xrEnumerateSwapchainFormats", xrEnumerateSwapchainFormats},
    {"xrEnumerateSwapchainImages", xrEnumerateSwapchainImages},
    {"xrEnumerateViewConfigurationViews", xrEnumerateViewConfigurationViews},
    {"xrEnumerateViewConfigurations", xrEnumerateViewConfigurations},
    {"xrEnumerateViveTrackerPathsHTCX", xrEnumerateViveTrackerPathsHTCX},
    {"xrEraseSpaceFB", xrEraseSpaceFB},
    {"xrGeometryInstanceSetTransformFB", xrGeometryInstanceSetTransformFB},
    {"xrGetActionStateBoolean", xrGetActionStateBoolean},
    {"xrGetActionStateFloat", xrGetActionStateFloat},
    {"xrGetActionStatePose", xrGetActionStatePose},
    {"xrGetActionStateVector2f", xrGetActionStateVector2f},
    {"xrGetAudioInputDeviceGuidOculus", xrGetAudioInputDeviceGuidOculus},
    {"xrGetAudioOutputDeviceGuidOculus", xrGetAudioOutputDeviceGuidOculus},
    {"xrGetBodySkeletonFB", xrGetBodySkeletonFB},
    {"xrGetControllerModelKeyMSFT", xrGetControllerModelKeyMSFT},
    {"xrGetControllerModelPropertiesMSFT", xrGetControllerModelPropertiesMSFT},
    {"xrGetControllerModelStateMSFT", xrGetControllerModelStateMSFT},
    {"xrGetCurrentInteractionProfile", xrGetCurrentInteractionProfile},
    {"xrGetD3D11GraphicsRequirementsKHR", xrGetD3D11GraphicsRequirementsKHR},
    {"xrGetD3D12GraphicsRequirementsKHR", xrGetD3D12GraphicsRequirementsKHR},
    {"xrGetDeviceSampleRateFB", xrGetDeviceSampleRateFB},
    {"xrGetDisplayRefreshRateFB", xrGetDisplayRefreshRateFB},
    {"xrGetEnvironmentDepthSwapchainStateMETA", xrGetEnvironmentDepthSwapchainStateMETA},
    {"xrGetExportedLocalizationMapDataML", xrGetExportedLocalizationMapDataML},
    {"xrGetEyeGazesFB", xrGetEyeGazesFB},
    {"xrGetFaceExpressionWeights2FB", xrGetFaceExpressionWeights2FB},
    {"xrGetFaceExpressionWeightsFB", xrGetFaceExpressionWeightsFB},
    {"xrGetFacialExpressionsHTC", xrGetFacialExpressionsHTC},
    {"xrGetFoveationEyeTrackedStateMETA", xrGetFoveationEyeTrackedStateMETA},
    {"xrGetHandMeshFB", xrGetHandMeshFB},
    {"xrGetInputSourceLocalizedName", xrGetInputSourceLocalizedName},
    {"xrGetInstanceProcAddr", xrGetInstanceProcAddr},
    {"xrGetInstanceProperties", xrGetInstanceProperties},
    {"xrGetMarkerDetectorStateML", xrGetMarkerDetectorStateML},
    {"xrGetMarkerLengthML", xrGetMarkerLengthML},
    {"xrGetMarkerNumberML", xrGetMarkerNumberML},
    {"xrGetMarkerReprojectionErrorML", xrGetMarkerReprojectionErrorML},
    {"xrGetMarkerSizeVARJO", xrGetMarkerSizeVARJO},
    {"xrGetMarkerStringML", xrGetMarkerStringML},
    {"xrGetMarkersML", xrGetMarkersML},
    {"xrGetOpenGLGraphicsRequirementsKHR", xrGetOpenGLGraphicsRequirementsKHR},
    {"xrGetPassthroughPreferencesMETA", xrGetPassthroughPreferencesMETA},
    {"xrGetPerformanceMetricsStateMETA", xrGetPerformanceMetricsStateMETA},
    {"xrGetPlaneDetectionStateEXT", xrGetPlaneDetectionStateEXT},
    {"xrGetPlaneDetectionsEXT", xrGetPlaneDetectionsEXT},
    {"xrGetPlanePolygonBufferEXT", xrGetPlanePolygonBufferEXT},
    {"xrGetRecommendedLayerResolutionMETA", xrGetRecommendedLayerResolutionMETA},
    {"xrGetReferenceSpaceBoundsRect", xrGetReferenceSpaceBoundsRect},
    {"xrGetRenderModelPropertiesFB", xrGetRenderModelPropertiesFB},
    {"xrGetSceneComponentsMSFT", xrGetSceneComponentsMSFT},
    {"xrGetSceneComputeStateMSFT", xrGetSceneComputeStateMSFT},
    {"xrGetSceneMarkerDecodedStringMSFT", xrGetSceneMarkerDecodedStringMSFT},
    {"xrGetSceneMarkerRawDataMSFT", xrGetSceneMarkerRawDataMSFT},
    {"xrGetSceneMeshBuffersMSFT", xrGetSceneMeshBuffersMSFT},
    {"xrGetSerializedSceneFragmentDataMSFT", xrGetSerializedSceneFragmentDataMSFT},
    {"xrGetSpaceBoundary2DFB", xrGetSpaceBoundary2DFB},
    {"xrGetSpaceBoundingBox2DFB", xrGetSpaceBoundingBox2DFB},
    {"xrGetSpaceBoundingBox3DFB", xrGetSpaceBoundingBox3DFB},
    {"xrGetSpaceComponentStatusFB", xrGetSpaceComponentStatusFB},
    {"xrGetSpaceContainerFB", xrGetSpaceContainerFB},
    {"xrGetSpaceRoomLayoutFB", xrGetSpaceRoomLayoutFB},
    {"xrGetSpaceSemanticLabelsFB", xrGetSpaceSemanticLabelsFB},
    {"xrGetSpaceTriangleMeshMETA", xrGetSpaceTriangleMeshMETA},
    {"xrGetSpaceUserIdFB", xrGetSpaceUserIdFB},
    {"xrGetSpaceUuidFB", xrGetSpaceUuidFB},
    {"xrGetSpatialAnchorNameHTC", xrGetSpatialAnchorNameHTC},
    {"xrGetSpatialGraphNodeBindingPropertiesMSFT", xrGetSpatialGraphNodeBindingPropertiesMSFT},
    {"xrGetSwapchainStateFB", xrGetSwapchainStateFB},
    {"xrGetSystem", xrGetSystem},
    {"xrGetSystemProperties", xrGetSystemProperties},
    {"xrGetViewConfigurationProperties", xrGetViewConfigurationProperties},
    {"xrGetVirtualKeyboardDirtyTexturesMETA", xrGetVirtualKeyboardDirtyTexturesMETA},
    {"xrGetVirtualKeyboardModelAnimationStatesMETA", xrGetVirtualKeyboardModelAnimationStatesMETA},
    {"xrGetVirtualKeyboardScaleMETA", xrGetVirtualKeyboardScaleMETA},
    {"xrGetVirtualKeyboardTextureDataMETA", xrGetVirtualKeyboardTextureDataMETA},
    {"xrGetVisibilityMaskKHR", xrGetVisibilityMaskKHR},
    {"xrGetVulkanDeviceExtensionsKHR", xrGetVulkanDeviceExtensionsKHR},
    {"xrGetVulkanGraphicsDevice2KHR", xrGetVulkanGraphicsDevice2KHR},
    {"xrGetVulkanGraphicsDeviceKHR", xrGetVulkanGraphicsDeviceKHR},
    {"xrGetVulkanGraphicsRequirements2KHR", xrGetVulkanGraphicsRequirements2KHR},
    {"xrGetVulkanGraphicsRequirementsKHR", xrGetVulkanGraphicsRequirementsKHR},
    {"xrGetVulkanInstanceExtensionsKHR", xrGetVulkanInstanceExtensionsKHR},
    {"xrImportLocalizationMapML", xrImportLocalizationMapML},
    {"xrLoadControllerModelMSFT", xrLoadControllerModelMSFT},
    {"xrLoadRenderModelFB", xrLoadRenderModelFB},
    {"xrLocateBodyJointsFB", xrLocateBodyJointsFB},
    {"xrLocateHandJointsEXT", xrLocateHandJointsEXT},
    {"xrLocateSceneComponentsMSFT", xrLocateSceneComponentsMSFT},
    {"xrLocateSpace", xrLocateSpace},
    {"xrLocateSpaces", xrLocateSpaces},
    {"xrLocateSpacesKHR", xrLocateSpacesKHR},
    {"xrLocateViews", xrLocateViews},
    {"xrNegotiateLoaderRuntimeInterface", xrNegotiateLoaderRuntimeInterface},
    {"xrPassthroughLayerPauseFB", xrPassthroughLayerPauseFB},
    {"xrPassthroughLayerResumeFB", xrPassthroughLayerResumeFB},
    {"xrPassthroughLayerSetKeyboardHandsIntensityFB", xrPassthroughLayerSetKeyboardHandsIntensityFB},
    {"xrPassthroughLayerSetStyleFB", xrPassthroughLayerSetStyleFB},
    {"xrPassthroughPauseFB", xrPassthroughPauseFB},
    {"xrPassthroughStartFB", xrPassthroughStartFB},
    {"xrPathToString", xrPathToString},
    {"xrPerfSettingsSetPerformanceLevelEXT", xrPerfSettingsSetPerformanceLevelEXT},
    {"xrPersistSpatialAnchorMSFT", xrPersistSpatialAnchorMSFT},
    {"xrPollEvent", xrPollEvent},
    {"xrPollFutureEXT", xrPollFutureEXT},
    {"xrQueryLocalizationMapsML", xrQueryLocalizationMapsML},
    {"xrQueryPerformanceMetricsCounterMETA", xrQueryPerformanceMetricsCounterMETA},
    {"xrQuerySpacesFB", xrQuerySpacesFB},
    {"xrQuerySystemTrackedKeyboardFB", xrQuerySystemTrackedKeyboardFB},
    {"xrReleaseSwapchainImage", xrReleaseSwapchainImage},
    {"xrRequestDisplayRefreshRateFB", xrRequestDisplayRefreshRateFB},
    {"xrRequestExitSession", xrRequestExitSession},
    {"xrRequestMapLocalizationML", xrRequestMapLocalizationML},
    {"xrRequestSceneCaptureFB", xrRequestSceneCaptureFB},
    {"xrResultToString", xrResultToString},
    {"xrRetrieveSpaceQueryResultsFB", xrRetrieveSpaceQueryResultsFB},
    {"xrSaveSpaceFB", xrSaveSpaceFB},
    {"xrSaveSpaceListFB", xrSaveSpaceListFB},
    {"xrSendVirtualKeyboardInputMETA", xrSendVirtualKeyboardInputMETA},
    {"xrSetColorSpaceFB", xrSetColorSpaceFB},
    {"xrSetDigitalLensControlALMALENCE", xrSetDigitalLensControlALMALENCE},
    {"xrSetEnvironmentDepthEstimationVARJO", xrSetEnvironmentDepthEstimationVARJO},
    {"xrSetEnvironmentDepthHandRemovalMETA", xrSetEnvironmentDepthHandRemovalMETA},
    {"xrSetInputDeviceActiveEXT", xrSetInputDeviceActiveEXT},
    {"xrSetInputDeviceLocationEXT", xrSetInputDeviceLocationEXT},
    {"xrSetInputDeviceStateBoolEXT", xrSetInputDeviceStateBoolEXT},
    {"xrSetInputDeviceStateFloatEXT", xrSetInputDeviceStateFloatEXT},
    {"xrSetInputDeviceStateVector2fEXT", xrSetInputDeviceStateVector2fEXT},
    {"xrSetMarkerTrackingPredictionVARJO", xrSetMarkerTrackingPredictionVARJO},
    {"xrSetMarkerTrackingTimeoutVARJO", xrSetMarkerTrackingTimeoutVARJO},
    {"xrSetMarkerTrackingVARJO", xrSetMarkerTrackingVARJO},
    {"xrSetPerformanceMetricsStateMETA", xrSetPerformanceMetricsStateMETA},
    {"xrSetSpaceComponentStatusFB", xrSetSpaceComponentStatusFB},
    {"xrSetTrackingOptimizationSettingsHintQCOM", xrSetTrackingOptimizationSettingsHintQCOM},
    {"xrSetViewOffsetVARJO", xrSetViewOffsetVARJO},
    {"xrSetVirtualKeyboardModelVisibilityMETA", xrSetVirtualKeyboardModelVisibilityMETA},
    {"xrShareSpacesFB", xrShareSpacesFB},
    {"xrSnapshotMarkerDetectorML", xrSnapshotMarkerDetectorML},
    {"xrStartEnvironmentDepthProviderMETA", xrStartEnvironmentDepthProviderMETA},
    {"xrStopEnvironmentDepthProviderMETA", xrStopEnvironmentDepthProviderMETA},
    {"xrStopHapticFeedback", xrStopHapticFeedback},
    {"xrStringToPath", xrStringToPath},
    {"xrStructureTypeToString", xrStructureTypeToString},
    {"xrSuggestInteractionProfileBindings", xrSuggestInteractionProfileBindings},
    {"xrSuggestVirtualKeyboardLocationMETA", xrSuggestVirtualKeyboardLocationMETA},
    {"xrSyncActions", xrSyncActions},
    {"xrThermalGetTemperatureTrendEXT", xrThermalGetTemperatureTrendEXT},
    {"xrTriangleMeshBeginUpdateFB", xrTriangleMeshBeginUpdateFB},
    {"xrTriangleMeshBeginVertexBufferUpdateFB", xrTriangleMeshBeginVertexBufferUpdateFB},
    {"xrTriangleMeshEndUpdateFB", xrTriangleMeshEndUpdateFB},
    {"xrTriangleMeshEndVertexBufferUpdateFB", xrTriangleMeshEndVertexBufferUpdateFB},
    {"xrTriangleMeshGetIndexBufferFB", xrTriangleMeshGetIndexBufferFB},
    {"xrTriangleMeshGetVertexBufferFB", xrTriangleMeshGetVertexBufferFB},
    {"xrTryCreateSpatialGraphStaticNodeBindingMSFT", xrTryCreateSpatialGraphStaticNodeBindingMSFT},
    {"xrUnpersistSpatialAnchorMSFT", xrUnpersistSpatialAnchorMSFT},
    {"xrUpdateHandMeshMSFT", xrUpdateHandMeshMSFT},
    {"xrUpdatePassthroughColorLutMETA", xrUpdatePassthroughColorLutMETA},
    {"xrUpdateSwapchainFB", xrUpdateSwapchainFB},
    {"xrWaitFrame", xrWaitFrame},
    {"xrWaitSwapchainImage", xrWaitSwapchainImage},
};

void *wine_xr_get_instance_proc_addr(const char *name)
{
    unsigned int i;
    for (i = 0; i < ARRAY_SIZE(xr_instance_dispatch_table); i++)
    {
        if (strcmp(xr_instance_dispatch_table[i].name, name) == 0)
        {
            TRACE("Found name=%s in instance table\n", debugstr_a(name));
            return xr_instance_dispatch_table[i].func;
        }
    }
    return NULL;
}
