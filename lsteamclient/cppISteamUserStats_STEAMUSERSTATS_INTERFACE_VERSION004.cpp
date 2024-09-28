/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetStat( (const char *)params->pchName, (int32_t *)params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetStat( (const char *)params->pchName, (float *)params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetStat( (const char *)params->pchName, params->nData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetStat( (const char *)params->pchName, params->fData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( (const char *)params->pchName, params->flCountThisSession, params->dSessionLength );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievement( (const char *)params->pchName, (int8_t *)params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetAchievement( (const char *)params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->ClearAchievement( (const char *)params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( (const char *)params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( (const char *)params->pchName, (const char *)params->pchKey );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( (const char *)params->pchName, params->nCurProgress, params->nMaxProgress );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, (const char *)params->pchName, (int32_t *)params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, (const char *)params->pchName, (float *)params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement( void *args )
{
    struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement_params *params = (struct wow64_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, (const char *)params->pchName, (int8_t *)params->pbAchieved );
    return 0;
}

