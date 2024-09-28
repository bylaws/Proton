/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamUtils_SteamUtils004_GetSecondsSinceAppActive( void *args )
{
    struct ISteamUtils_SteamUtils004_GetSecondsSinceAppActive_params *params = (struct ISteamUtils_SteamUtils004_GetSecondsSinceAppActive_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetSecondsSinceAppActive( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetSecondsSinceAppActive_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetSecondsSinceAppActive_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetSecondsSinceComputerActive( void *args )
{
    struct ISteamUtils_SteamUtils004_GetSecondsSinceComputerActive_params *params = (struct ISteamUtils_SteamUtils004_GetSecondsSinceComputerActive_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetSecondsSinceComputerActive( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetSecondsSinceComputerActive_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetSecondsSinceComputerActive_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetConnectedUniverse( void *args )
{
    struct ISteamUtils_SteamUtils004_GetConnectedUniverse_params *params = (struct ISteamUtils_SteamUtils004_GetConnectedUniverse_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetConnectedUniverse( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetConnectedUniverse_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetConnectedUniverse_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetServerRealTime( void *args )
{
    struct ISteamUtils_SteamUtils004_GetServerRealTime_params *params = (struct ISteamUtils_SteamUtils004_GetServerRealTime_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetServerRealTime( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetServerRealTime_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetServerRealTime_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetIPCountry( void *args )
{
    struct ISteamUtils_SteamUtils004_GetIPCountry_params *params = (struct ISteamUtils_SteamUtils004_GetIPCountry_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetIPCountry( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetIPCountry_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetIPCountry_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetImageSize( void *args )
{
    struct ISteamUtils_SteamUtils004_GetImageSize_params *params = (struct ISteamUtils_SteamUtils004_GetImageSize_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetImageSize( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetImageSize_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetImageSize_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetImageRGBA( void *args )
{
    struct ISteamUtils_SteamUtils004_GetImageRGBA_params *params = (struct ISteamUtils_SteamUtils004_GetImageRGBA_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetImageRGBA( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetImageRGBA_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetImageRGBA_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, (uint8_t *)params->pubDest, params->nDestBufferSize );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetCSERIPPort( void *args )
{
    struct ISteamUtils_SteamUtils004_GetCSERIPPort_params *params = (struct ISteamUtils_SteamUtils004_GetCSERIPPort_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetCSERIPPort( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetCSERIPPort_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetCSERIPPort_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( (uint32_t *)params->unIP, (uint16_t *)params->usPort );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetCurrentBatteryPower( void *args )
{
    struct ISteamUtils_SteamUtils004_GetCurrentBatteryPower_params *params = (struct ISteamUtils_SteamUtils004_GetCurrentBatteryPower_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetCurrentBatteryPower( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetCurrentBatteryPower_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetCurrentBatteryPower_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetAppID( void *args )
{
    struct ISteamUtils_SteamUtils004_GetAppID_params *params = (struct ISteamUtils_SteamUtils004_GetAppID_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetAppID( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetAppID_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetAppID_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_SetOverlayNotificationPosition( void *args )
{
    struct ISteamUtils_SteamUtils004_SetOverlayNotificationPosition_params *params = (struct ISteamUtils_SteamUtils004_SetOverlayNotificationPosition_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_SetOverlayNotificationPosition( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_SetOverlayNotificationPosition_params *params = (struct wow64_ISteamUtils_SteamUtils004_SetOverlayNotificationPosition_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_IsAPICallCompleted( void *args )
{
    struct ISteamUtils_SteamUtils004_IsAPICallCompleted_params *params = (struct ISteamUtils_SteamUtils004_IsAPICallCompleted_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_IsAPICallCompleted( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_IsAPICallCompleted_params *params = (struct wow64_ISteamUtils_SteamUtils004_IsAPICallCompleted_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, (int8_t *)params->pbFailed );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetAPICallFailureReason( void *args )
{
    struct ISteamUtils_SteamUtils004_GetAPICallFailureReason_params *params = (struct ISteamUtils_SteamUtils004_GetAPICallFailureReason_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetAPICallFailureReason( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetAPICallFailureReason_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetAPICallFailureReason_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_RunFrame( void *args )
{
    struct ISteamUtils_SteamUtils004_RunFrame_params *params = (struct ISteamUtils_SteamUtils004_RunFrame_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_RunFrame( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_RunFrame_params *params = (struct wow64_ISteamUtils_SteamUtils004_RunFrame_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_GetIPCCallCount( void *args )
{
    struct ISteamUtils_SteamUtils004_GetIPCCallCount_params *params = (struct ISteamUtils_SteamUtils004_GetIPCCallCount_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_GetIPCCallCount( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_GetIPCCallCount_params *params = (struct wow64_ISteamUtils_SteamUtils004_GetIPCCallCount_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_SetWarningMessageHook( void *args )
{
    struct ISteamUtils_SteamUtils004_SetWarningMessageHook_params *params = (struct ISteamUtils_SteamUtils004_SetWarningMessageHook_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_SetWarningMessageHook( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_SetWarningMessageHook_params *params = (struct wow64_ISteamUtils_SteamUtils004_SetWarningMessageHook_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( (void (*W_CDECL )(int32_t, const char *))params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils004_IsOverlayEnabled( void *args )
{
    struct ISteamUtils_SteamUtils004_IsOverlayEnabled_params *params = (struct ISteamUtils_SteamUtils004_IsOverlayEnabled_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
    return 0;
}

NTSTATUS wow64_ISteamUtils_SteamUtils004_IsOverlayEnabled( void *args )
{
    struct wow64_ISteamUtils_SteamUtils004_IsOverlayEnabled_params *params = (struct wow64_ISteamUtils_SteamUtils004_IsOverlayEnabled_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
    return 0;
}

