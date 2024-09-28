/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL( void *args )
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params *params = (struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    iface->GetVideoURL( params->unVideoAppID );
    return 0;
}

NTSTATUS wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL( void *args )
{
    struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params *params = (struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    iface->GetVideoURL( params->unVideoAppID );
    return 0;
}

NTSTATUS ISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting( void *args )
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params *params = (struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->IsBroadcasting( params->pnNumViewers );
    return 0;
}

NTSTATUS wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting( void *args )
{
    struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params *params = (struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->IsBroadcasting( (int32_t *)params->pnNumViewers );
    return 0;
}

NTSTATUS ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings( void *args )
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params *params = (struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    iface->GetOPFSettings( params->unVideoAppID );
    return 0;
}

NTSTATUS wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings( void *args )
{
    struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params *params = (struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    iface->GetOPFSettings( params->unVideoAppID );
    return 0;
}

NTSTATUS ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp( void *args )
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params *params = (struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetOPFStringForApp( params->unVideoAppID, params->pchBuffer, params->pnBufferSize );
    return 0;
}

NTSTATUS wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp( void *args )
{
    struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params *params = (struct wow64_ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params *)args;
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetOPFStringForApp( params->unVideoAppID, (char *)params->pchBuffer, (int32_t *)params->pnBufferSize );
    return 0;
}

