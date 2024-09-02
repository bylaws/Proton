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

#ifndef __WINE_OPENXR_DRIVER_H
#define __WINE_OPENXR_DRIVER_H

/* Wine internal openxr driver version, needs to be bumped upon openxr_funcs changes. */
#define WINE_OPENXR_DRIVER_VERSION 1

struct openxr_funcs
{
    /* Vulkan global functions. These are the only calls at this point a graphics driver
     * needs to provide. Other function calls will be provided indirectly by dispatch
     * tables part of dispatchable Vulkan objects such as XrInstance or xrDevice.
     */
    XrResult (*p_xrAcquireSwapchainImage)(XrSwapchain, const XrSwapchainImageAcquireInfo *, uint32_t *);
    XrResult (*p_xrBeginFrame)(XrSession, const XrFrameBeginInfo *);
    XrResult (*p_xrConvertTimeToWin32PerformanceCounterKHR)(XrInstance, XrTime, LARGE_INTEGER *);
    XrResult (*p_xrConvertWin32PerformanceCounterToTimeKHR)(XrInstance, const LARGE_INTEGER *, XrTime *);
    XrResult (*p_xrCreateApiLayerInstance)(const XrInstanceCreateInfo *, const XrApiLayerCreateInfo *, XrInstance *);
    XrResult (*p_xrCreateInstance)(const XrInstanceCreateInfo *, XrInstance *);
    XrResult (*p_xrCreateSession)(XrInstance, const XrSessionCreateInfo *, XrSession *);
    XrResult (*p_xrCreateSwapchain)(XrSession, const XrSwapchainCreateInfo *, XrSwapchain *);
    XrResult (*p_xrCreateVulkanDeviceKHR)(XrInstance, const XrVulkanDeviceCreateInfoKHR *, VkDevice *, VkResult *);
    XrResult (*p_xrCreateVulkanInstanceKHR)(XrInstance, const XrVulkanInstanceCreateInfoKHR *, VkInstance *, VkResult *);
    XrResult (*p_xrDestroyInstance)(XrInstance);
    XrResult (*p_xrDestroySession)(XrSession);
    XrResult (*p_xrDestroySwapchain)(XrSwapchain);
    XrResult (*p_xrEndFrame)(XrSession, const XrFrameEndInfo *);
    XrResult (*p_xrEnumerateInstanceExtensionProperties)(const char *, uint32_t, uint32_t *, XrExtensionProperties *);
    XrResult (*p_xrEnumerateSwapchainFormats)(XrSession, uint32_t, uint32_t *, int64_t *);
    XrResult (*p_xrEnumerateSwapchainImages)(XrSwapchain, uint32_t, uint32_t *, XrSwapchainImageBaseHeader *);
    XrResult (*p_xrGetD3D11GraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsD3D11KHR *);
    XrResult (*p_xrGetD3D12GraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsD3D12KHR *);
    XrResult (*p_xrGetInstanceProcAddr)(XrInstance, const char *, void * *);
    XrResult (*p_xrGetSystem)(XrInstance, const XrSystemGetInfo *, XrSystemId *);
    XrResult (*p_xrGetVulkanDeviceExtensionsKHR)(XrInstance, XrSystemId, uint32_t, uint32_t *, char *);
    XrResult (*p_xrGetVulkanGraphicsDevice2KHR)(XrInstance, const XrVulkanGraphicsDeviceGetInfoKHR *, VkPhysicalDevice *);
    XrResult (*p_xrGetVulkanGraphicsDeviceKHR)(XrInstance, XrSystemId, VkInstance, VkPhysicalDevice *);
    XrResult (*p_xrGetVulkanInstanceExtensionsKHR)(XrInstance, XrSystemId, uint32_t, uint32_t *, char *);
    XrResult (*p_xrNegotiateLoaderRuntimeInterface)(const XrNegotiateLoaderInfo *, XrNegotiateRuntimeRequest *);
    XrResult (*p_xrPollEvent)(XrInstance, XrEventDataBuffer *);
    XrResult (*p_xrReleaseSwapchainImage)(XrSwapchain, const XrSwapchainImageReleaseInfo *);

    /* wineopenxr specific functions */
    XrSurfaceKHR (*p_wine_get_host_surface)(XrSurfaceKHR);

    /* Optional. Returns TRUE if FS hack is active, otherwise returns FALSE. If
     * it returns TRUE, then real_sz will contain the actual display
     * resolution; user_sz will contain the app's requested mode; and dst_blit
     * will contain the area to blit the user image to in real coordinates.
     * All parameters are optional. */
    XrBool32 (*query_fs_hack)(XrSurfaceKHR surface, XrExtent2D *real_sz, XrExtent2D *user_sz, XrRect2D *dst_blit, XrFilter *filter);
};

static inline void *get_openxr_driver_device_proc_addr(
        const struct openxr_funcs *openxr_funcs, const char *name)
{
    if (!name || name[0] != 'v' || name[1] != 'k') return NULL;

    name += 2;

    if (!strcmp(name, "AcquireSwapchainImage"))
        return openxr_funcs->p_xrAcquireSwapchainImage;
    if (!strcmp(name, "BeginFrame"))
        return openxr_funcs->p_xrBeginFrame;
    if (!strcmp(name, "CreateSwapchain"))
        return openxr_funcs->p_xrCreateSwapchain;
    if (!strcmp(name, "DestroySession"))
        return openxr_funcs->p_xrDestroySession;
    if (!strcmp(name, "DestroySwapchain"))
        return openxr_funcs->p_xrDestroySwapchain;
    if (!strcmp(name, "EndFrame"))
        return openxr_funcs->p_xrEndFrame;
    if (!strcmp(name, "EnumerateSwapchainFormats"))
        return openxr_funcs->p_xrEnumerateSwapchainFormats;
    if (!strcmp(name, "EnumerateSwapchainImages"))
        return openxr_funcs->p_xrEnumerateSwapchainImages;
    if (!strcmp(name, "ReleaseSwapchainImage"))
        return openxr_funcs->p_xrReleaseSwapchainImage;

    return NULL;
}

static inline void *get_openxr_driver_instance_proc_addr(
        const struct openxr_funcs *openxr_funcs, XrInstance instance, const char *name)
{
    if (!name || name[0] != 'v' || name[1] != 'k') return NULL;

    name += 2;

    if (!strcmp(name, "CreateApiLayerInstance"))
        return openxr_funcs->p_xrCreateApiLayerInstance;
    if (!strcmp(name, "CreateInstance"))
        return openxr_funcs->p_xrCreateInstance;
    if (!strcmp(name, "EnumerateInstanceExtensionProperties"))
        return openxr_funcs->p_xrEnumerateInstanceExtensionProperties;
    if (!strcmp(name, "NegotiateLoaderRuntimeInterface"))
        return openxr_funcs->p_xrNegotiateLoaderRuntimeInterface;

    if (!instance) return NULL;

    if (!strcmp(name, "ConvertTimeToWin32PerformanceCounterKHR"))
        return openxr_funcs->p_xrConvertTimeToWin32PerformanceCounterKHR;
    if (!strcmp(name, "ConvertWin32PerformanceCounterToTimeKHR"))
        return openxr_funcs->p_xrConvertWin32PerformanceCounterToTimeKHR;
    if (!strcmp(name, "CreateSession"))
        return openxr_funcs->p_xrCreateSession;
    if (!strcmp(name, "CreateVulkanDeviceKHR"))
        return openxr_funcs->p_xrCreateVulkanDeviceKHR;
    if (!strcmp(name, "CreateVulkanInstanceKHR"))
        return openxr_funcs->p_xrCreateVulkanInstanceKHR;
    if (!strcmp(name, "DestroyInstance"))
        return openxr_funcs->p_xrDestroyInstance;
    if (!strcmp(name, "GetD3D11GraphicsRequirementsKHR"))
        return openxr_funcs->p_xrGetD3D11GraphicsRequirementsKHR;
    if (!strcmp(name, "GetD3D12GraphicsRequirementsKHR"))
        return openxr_funcs->p_xrGetD3D12GraphicsRequirementsKHR;
    if (!strcmp(name, "GetInstanceProcAddr"))
        return openxr_funcs->p_xrGetInstanceProcAddr;
    if (!strcmp(name, "GetSystem"))
        return openxr_funcs->p_xrGetSystem;
    if (!strcmp(name, "GetVulkanDeviceExtensionsKHR"))
        return openxr_funcs->p_xrGetVulkanDeviceExtensionsKHR;
    if (!strcmp(name, "GetVulkanGraphicsDevice2KHR"))
        return openxr_funcs->p_xrGetVulkanGraphicsDevice2KHR;
    if (!strcmp(name, "GetVulkanGraphicsDeviceKHR"))
        return openxr_funcs->p_xrGetVulkanGraphicsDeviceKHR;
    if (!strcmp(name, "GetVulkanInstanceExtensionsKHR"))
        return openxr_funcs->p_xrGetVulkanInstanceExtensionsKHR;
    if (!strcmp(name, "PollEvent"))
        return openxr_funcs->p_xrPollEvent;

    name -= 2;

    return get_openxr_driver_device_proc_addr(openxr_funcs, name);
}

typedef XrResult (WINAPI *PFN_native_xrCreateInstance)(const XrInstanceCreateInfo *, const XrAllocationCallbacks *, XrInstance *,
                                                       void * (*)(XrInstance, const char *), void *);
typedef XrResult (WINAPI *PFN_native_xrCreateDevice)(XrPhysicalDevice, const XrDeviceCreateInfo *, const XrAllocationCallbacks *, XrDevice *,
                                                     void * (*)(XrInstance, const char *), void *);

typedef struct XrCreateInfoWineDeviceCallback {
    XrStructureType             type;
    const void*                 next;
    PFN_native_xrCreateDevice   native_create_callback;
    void*                       context;
} XrCreateInfoWineDeviceCallback;
#define XR_STRUCTURE_TYPE_CREATE_INFO_WINE_DEVICE_CALLBACK 2125312001
typedef struct XrCreateInfoWineInstanceCallback {
    XrStructureType             type;
    const void*                 next;
    PFN_native_xrCreateInstance native_create_callback;
    void*                       context;
} XrCreateInfoWineInstanceCallback;
#define XR_STRUCTURE_TYPE_CREATE_INFO_WINE_INSTANCE_CALLBACK 2125312002
#endif /* __WINE_OPENXR_DRIVER_H */
