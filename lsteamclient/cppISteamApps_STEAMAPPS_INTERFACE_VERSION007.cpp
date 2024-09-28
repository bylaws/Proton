/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, (uint32_t *)params->pAppID, (int8_t *)params->pbAvailable, (char *)params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    iface->RequestAppProofOfPurchaseKey( params->nAppID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    iface->RequestAppProofOfPurchaseKey( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetCurrentBetaName( params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetCurrentBetaName( (char *)params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->MarkContentCorrupt( params->bMissingFilesOnly );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->MarkContentCorrupt( params->bMissingFilesOnly );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetInstalledDepots( params->appID, params->pvecDepots, params->cMaxDepots );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetInstalledDepots( params->appID, (uint32_t *)params->pvecDepots, params->cMaxDepots );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->appID, params->pchFolder, params->cchFolderBufferSize );
    params->_ret = steamclient_unix_path_to_dos_path( params->_ret, (const char *)params->pchFolder, (char *)params->pchFolder, params->cchFolderBufferSize, 0 );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->appID, (char *)params->pchFolder, params->cchFolderBufferSize );
    params->_ret = steamclient_unix_path_to_dos_path( params->_ret, (const char *)params->pchFolder, (char *)params->pchFolder, params->cchFolderBufferSize, 0 );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsAppInstalled( params->appID );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsAppInstalled( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    *params->_ret = iface->GetAppOwner(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    *(CSteamID *)params->_ret = iface->GetAppOwner(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLaunchQueryParam( params->pchKey );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLaunchQueryParam( (const char *)params->pchKey );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetDlcDownloadProgress( params->nAppID, params->punBytesDownloaded, params->punBytesTotal );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetDlcDownloadProgress( params->nAppID, (uint64_t *)params->punBytesDownloaded, (uint64_t *)params->punBytesTotal );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAppBuildId(  );
    return 0;
}

NTSTATUS wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId( void *args )
{
    struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId_params *params = (struct wow64_ISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAppBuildId(  );
    return 0;
}

