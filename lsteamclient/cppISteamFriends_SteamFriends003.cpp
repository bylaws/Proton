/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends003_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends003_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends003_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetPersonaName( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetPersonaName_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends003_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends003_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_SetPersonaName( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_SetPersonaName_params *params = (struct wow64_ISteamFriends_SteamFriends003_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    iface->SetPersonaName( (const char *)params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends003_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends003_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetPersonaState( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetPersonaState_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends003_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendCount( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendCount_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends003_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendByIndex( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendByIndex_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    *(CSteamID *)params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends003_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendRelationship( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendRelationship_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends003_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendPersonaState( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendPersonaState_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends003_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendPersonaName( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendPersonaName_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendAvatar_params *params = (struct ISteamFriends_SteamFriends003_GetFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendAvatar( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendAvatar_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends003_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pulGameID, params->punGameIP, params->pusGamePort, params->pusQueryPort );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendGamePlayed( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendGamePlayed_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, (uint64_t *)params->pulGameID, (uint32_t *)params->punGameIP, (uint16_t *)params->pusGamePort, (uint16_t *)params->pusQueryPort );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends003_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendPersonaNameHistory( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendPersonaNameHistory_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends003_HasFriend_params *params = (struct ISteamFriends_SteamFriends003_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_HasFriend( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_HasFriend_params *params = (struct wow64_ISteamFriends_SteamFriends003_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends003_GetClanCount_params *params = (struct ISteamFriends_SteamFriends003_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetClanCount( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetClanCount_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends003_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends003_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetClanByIndex( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetClanByIndex_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    *(CSteamID *)params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends003_GetClanName_params *params = (struct ISteamFriends_SteamFriends003_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetClanName( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetClanName_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends003_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendCountFromSource( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendCountFromSource_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends003_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends003_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_GetFriendFromSourceByIndex( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_GetFriendFromSourceByIndex_params *params = (struct wow64_ISteamFriends_SteamFriends003_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    *(CSteamID *)params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends003_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends003_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_IsUserInSource( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_IsUserInSource_params *params = (struct wow64_ISteamFriends_SteamFriends003_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends003_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends003_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_SetInGameVoiceSpeaking( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_SetInGameVoiceSpeaking_params *params = (struct wow64_ISteamFriends_SteamFriends003_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends003_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends003_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends003_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends003_ActivateGameOverlay( void *args )
{
    struct wow64_ISteamFriends_SteamFriends003_ActivateGameOverlay_params *params = (struct wow64_ISteamFriends_SteamFriends003_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    iface->ActivateGameOverlay( (const char *)params->pchDialog );
    return 0;
}

