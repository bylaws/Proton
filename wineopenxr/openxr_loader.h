#ifndef __WINE_OPENXR_LOADER_H
#define __WINE_OPENXR_LOADER_H

#include <stdarg.h>
#include <stdlib.h>

#define COBJMACROS
#include "ntstatus.h"
#define WIN32_NO_STATUS
#include <assert.h>
#include <stdarg.h>
#include <stdlib.h>
#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"
#include "wine/list.h"
#include "wine/unixlib.h"
#include "wine/vulkan.h"
// #include "winternl.h"

#include "d3d11.h"
#include "d3d11_3.h"
#include "d3d12.h"
#include "dxgi.h"
#include "wineopenxr.h"
#include "loader_thunks.h"

static const char WINE_VULKAN_DEVICE_EXTENSION_NAME[] = "VK_WINE_openxr_device_extensions";
static const char WINE_VULKAN_DEVICE_VARIABLE[] = "__WINE_OPENXR_VK_DEVICE_EXTENSIONS";

struct IDXGIVkInteropDevice2;
typedef struct IDXGIVkInteropDevice2 IDXGIVkInteropDevice2;
typedef struct ID3D12DXVKInteropDevice ID3D12DXVKInteropDevice;

struct vk_create_callback_context {
  XrInstance wine_instance;
  UINT64 create_info;
  XrResult ret;
};

struct init_openxr_params {
  HMODULE winevulkan;
  UINT64 create_instance_callback;
  UINT64 create_device_callback;
};

typedef struct {
  XrInstance host_instance;
  VkInstance vk_instance;
  VkPhysicalDevice vk_phys_dev;

  XrSystemId systemId;

  IDXGIVkInteropDevice2 *dxvk_device;
  ID3D12DXVKInteropDevice *d3d12_device;
  ID3D12CommandQueue *d3d12_queue;

  VkDevice vk_device;
  VkQueue vk_queue;
  VkCommandPool vk_command_pool;
} wine_XrInstance;

static inline wine_XrInstance *wine_instance_from_handle(XrInstance handle) {
  return (wine_XrInstance *)(uintptr_t)handle;
}

union CompositionLayer;
typedef union CompositionLayer CompositionLayer;

typedef union {
  XrCompositionLayerDepthInfoKHR depth_info;
  XrCompositionLayerSpaceWarpInfoFB space_warp_info;
} view_info;

typedef struct {
  XrSession host_session;
  wine_XrInstance *instance;
  uint32_t session_type;
  struct list entry;
  uint32_t composition_layer_count;
  CompositionLayer *composition_layers;
  XrCompositionLayerBaseHeader **composition_layer_ptrs;

  uint32_t projection_view_count, view_info_count;
  XrCompositionLayerProjectionView *projection_views;
  view_info *view_infos;
} wine_XrSession;

static inline wine_XrSession *wine_session_from_handle(XrSession handle) {
  return (wine_XrSession *)(uintptr_t)handle;
}

typedef struct {
  XrSwapchain host_swapchain;
  wine_XrSession *session;
  XrSwapchainImageBaseHeader *images;
  uint32_t image_count;
  uint32_t acquired_count, acquired_start;
  BOOL *acquired;
  uint32_t *acquired_indices;

  XrSwapchainCreateInfo create_info;
  VkCommandBuffer *cmd_release;
  VkCommandBuffer *cmd_acquire;
} wine_XrSwapchain;

static inline wine_XrSwapchain *wine_swapchain_from_handle(XrSwapchain handle) {
  return (wine_XrSwapchain *)(uintptr_t)handle;
}

void *wine_xr_get_instance_proc_addr(const char *name);

struct openxr_func {
  const char *name;
  void *func;
};

#define UNIX_CALL(code, params) WINE_UNIX_CALL(unix_##code, params)

#endif /* __WINE_OPENXR_LOADER_H */
