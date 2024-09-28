/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, (uint32_t *)params->pAppID, (int8_t *)params->pbAvailable, (char *)params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->RequestAppProofOfPurchaseKey( params->nAppID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->RequestAppProofOfPurchaseKey( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetCurrentBetaName( params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetCurrentBetaName( (char *)params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->MarkContentCorrupt( params->bMissingFilesOnly );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->MarkContentCorrupt( params->bMissingFilesOnly );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetInstalledDepots( params->appID, params->pvecDepots, params->cMaxDepots );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetInstalledDepots( params->appID, (uint32_t *)params->pvecDepots, params->cMaxDepots );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->appID, params->pchFolder, params->cchFolderBufferSize );
    params->_ret = steamclient_unix_path_to_dos_path( params->_ret, (const char *)params->pchFolder, (char *)params->pchFolder, params->cchFolderBufferSize, 0 );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->appID, (char *)params->pchFolder, params->cchFolderBufferSize );
    params->_ret = steamclient_unix_path_to_dos_path( params->_ret, (const char *)params->pchFolder, (char *)params->pchFolder, params->cchFolderBufferSize, 0 );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsAppInstalled( params->appID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsAppInstalled( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    *params->_ret = iface->GetAppOwner(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    *(CSteamID *)params->_ret = iface->GetAppOwner(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetLaunchQueryParam( params->pchKey );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetLaunchQueryParam( (const char *)params->pchKey );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetDlcDownloadProgress( params->nAppID, params->punBytesDownloaded, params->punBytesTotal );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetDlcDownloadProgress( params->nAppID, (uint64_t *)params->punBytesDownloaded, (uint64_t *)params->punBytesTotal );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetAppBuildId(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetAppBuildId(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->RequestAllProofOfPurchaseKeys(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->RequestAllProofOfPurchaseKeys(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    char *u_pszFileName = steamclient_dos_to_unix_path( (const char *)params->pszFileName, 0 );
    params->_ret = iface->GetFileDetails( u_pszFileName );
    steamclient_free_path( u_pszFileName );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    char *u_pszFileName = steamclient_dos_to_unix_path( (const char *)params->pszFileName, 0 );
    params->_ret = iface->GetFileDetails( u_pszFileName );
    steamclient_free_path( u_pszFileName );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetLaunchCommandLine( params->pszCommandLine, params->cubCommandLine );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetLaunchCommandLine( (char *)params->pszCommandLine, params->cubCommandLine );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFamilySharing(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFamilySharing(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsTimedTrial( params->punSecondsAllowed, params->punSecondsPlayed );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsTimedTrial( (uint32_t *)params->punSecondsAllowed, (uint32_t *)params->punSecondsPlayed );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetDlcContext( params->nAppID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetDlcContext( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetNumBetas( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetNumBetas_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetNumBetas_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetNumBetas( params->pnAvailable, params->pnPrivate );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetNumBetas( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetNumBetas_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetNumBetas_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetNumBetas( (int32_t *)params->pnAvailable, (int32_t *)params->pnPrivate );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetBetaInfo( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetBetaInfo_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetBetaInfo_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetBetaInfo( params->iBetaIndex, params->punFlags, params->punBuildID, params->pchBetaName, params->cchBetaName, params->pchDescription, params->cchDescription );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetBetaInfo( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetBetaInfo_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetBetaInfo_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetBetaInfo( params->iBetaIndex, (uint32_t *)params->punFlags, (uint32_t *)params->punBuildID, (char *)params->pchBetaName, params->cchBetaName, (char *)params->pchDescription, params->cchDescription );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetActiveBeta( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetActiveBeta_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetActiveBeta_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetActiveBeta( params->pchBetaName );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetActiveBeta( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetActiveBeta_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetActiveBeta_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetActiveBeta( (const char *)params->pchBetaName );
    return 0;
}

