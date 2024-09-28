/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL( void *args )
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params *params = (struct ISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *)params->linux_side;
    iface->GetVideoURL( params->unVideoAppID );
    return 0;
}

NTSTATUS wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL( void *args )
{
    struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params *params = (struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *)params->linux_side;
    iface->GetVideoURL( params->unVideoAppID );
    return 0;
}

NTSTATUS ISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting( void *args )
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params *params = (struct ISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->IsBroadcasting( params->pnNumViewers );
    return 0;
}

NTSTATUS wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting( void *args )
{
    struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params *params = (struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->IsBroadcasting( (int32_t *)params->pnNumViewers );
    return 0;
}

