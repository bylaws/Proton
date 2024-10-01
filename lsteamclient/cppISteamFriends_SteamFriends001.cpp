/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends001_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends001_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends001_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetPersonaName( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetPersonaName_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends001_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends001_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_SetPersonaName( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_SetPersonaName_params *params = (struct wow64_ISteamFriends_SteamFriends001_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetPersonaName( (const char *)params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends001_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends001_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetPersonaState( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetPersonaState_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_SetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends001_SetPersonaState_params *params = (struct ISteamFriends_SteamFriends001_SetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetPersonaState( params->ePersonaState );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_SetPersonaState( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_SetPersonaState_params *params = (struct wow64_ISteamFriends_SteamFriends001_SetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetPersonaState( params->ePersonaState );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_AddFriend( void *args )
{
    struct ISteamFriends_SteamFriends001_AddFriend_params *params = (struct ISteamFriends_SteamFriends001_AddFriend_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->AddFriend( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_AddFriend( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_AddFriend_params *params = (struct wow64_ISteamFriends_SteamFriends001_AddFriend_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->AddFriend( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_RemoveFriend( void *args )
{
    struct ISteamFriends_SteamFriends001_RemoveFriend_params *params = (struct ISteamFriends_SteamFriends001_RemoveFriend_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->RemoveFriend( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_RemoveFriend( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_RemoveFriend_params *params = (struct wow64_ISteamFriends_SteamFriends001_RemoveFriend_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->RemoveFriend( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends001_HasFriend_params *params = (struct ISteamFriends_SteamFriends001_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_HasFriend( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_HasFriend_params *params = (struct wow64_ISteamFriends_SteamFriends001_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends001_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends001_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetFriendRelationship( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetFriendRelationship_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends001_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends001_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetFriendPersonaState( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetFriendPersonaState_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->Deprecated_GetFriendGamePlayed( params->steamIDFriend, params->pnGameID, params->punGameIP, params->pusGamePort );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed_params *params = (struct wow64_ISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->Deprecated_GetFriendGamePlayed( params->steamIDFriend, (int32_t *)params->pnGameID, (uint32_t *)params->punGameIP, (uint16_t *)params->pusGamePort );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends001_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends001_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetFriendPersonaName( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetFriendPersonaName_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_AddFriendByName( void *args )
{
    struct ISteamFriends_SteamFriends001_AddFriendByName_params *params = (struct ISteamFriends_SteamFriends001_AddFriendByName_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->AddFriendByName( params->pchEmailOrAccountName );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_AddFriendByName( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_AddFriendByName_params *params = (struct wow64_ISteamFriends_SteamFriends001_AddFriendByName_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->AddFriendByName( (const char *)params->pchEmailOrAccountName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends001_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends001_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendCount(  );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetFriendCount( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetFriendCount_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends001_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends001_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetFriendByIndex( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetFriendByIndex_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    *(CSteamID *)params->_ret = iface->GetFriendByIndex( params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_SendMsgToFriend( void *args )
{
    struct ISteamFriends_SteamFriends001_SendMsgToFriend_params *params = (struct ISteamFriends_SteamFriends001_SendMsgToFriend_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SendMsgToFriend( params->steamIDFriend, params->eChatEntryType, params->pchMsgBody );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_SendMsgToFriend( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_SendMsgToFriend_params *params = (struct wow64_ISteamFriends_SteamFriends001_SendMsgToFriend_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SendMsgToFriend( params->steamIDFriend, params->eChatEntryType, (const char *)params->pchMsgBody );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_SetFriendRegValue( void *args )
{
    struct ISteamFriends_SteamFriends001_SetFriendRegValue_params *params = (struct ISteamFriends_SteamFriends001_SetFriendRegValue_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetFriendRegValue( params->steamIDFriend, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_SetFriendRegValue( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_SetFriendRegValue_params *params = (struct wow64_ISteamFriends_SteamFriends001_SetFriendRegValue_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetFriendRegValue( params->steamIDFriend, (const char *)params->pchKey, (const char *)params->pchValue );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetFriendRegValue( void *args )
{
    struct ISteamFriends_SteamFriends001_GetFriendRegValue_params *params = (struct ISteamFriends_SteamFriends001_GetFriendRegValue_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendRegValue( params->steamIDFriend, params->pchKey );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetFriendRegValue( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetFriendRegValue_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetFriendRegValue_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendRegValue( params->steamIDFriend, (const char *)params->pchKey );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends001_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends001_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetFriendPersonaNameHistory( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetFriendPersonaNameHistory_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends001_GetChatMessage_params *params = (struct ISteamFriends_SteamFriends001_GetChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetChatMessage( params->steamIDFriend, params->iChatID, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetChatMessage( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetChatMessage_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetChatMessage( params->steamIDFriend, params->iChatID, (void *)params->pvData, params->cubData, (uint32_t *)params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_SendMsgToFriend_2( void *args )
{
    struct ISteamFriends_SteamFriends001_SendMsgToFriend_2_params *params = (struct ISteamFriends_SteamFriends001_SendMsgToFriend_2_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->SendMsgToFriend( params->steamIDFriend, params->eChatEntryType, params->pvMsgBody, params->cubMsgBody );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_SendMsgToFriend_2( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_SendMsgToFriend_2_params *params = (struct wow64_ISteamFriends_SteamFriends001_SendMsgToFriend_2_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->SendMsgToFriend( params->steamIDFriend, params->eChatEntryType, (const void *)params->pvMsgBody, params->cubMsgBody );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart( void *args )
{
    struct ISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart_params *params = (struct ISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetChatIDOfChatHistoryStart( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetChatIDOfChatHistoryStart( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_SetChatHistoryStart( void *args )
{
    struct ISteamFriends_SteamFriends001_SetChatHistoryStart_params *params = (struct ISteamFriends_SteamFriends001_SetChatHistoryStart_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetChatHistoryStart( params->steamIDFriend, params->iChatID );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_SetChatHistoryStart( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_SetChatHistoryStart_params *params = (struct wow64_ISteamFriends_SteamFriends001_SetChatHistoryStart_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetChatHistoryStart( params->steamIDFriend, params->iChatID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_ClearChatHistory( void *args )
{
    struct ISteamFriends_SteamFriends001_ClearChatHistory_params *params = (struct ISteamFriends_SteamFriends001_ClearChatHistory_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->ClearChatHistory( params->steamIDFriend );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_ClearChatHistory( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_ClearChatHistory_params *params = (struct wow64_ISteamFriends_SteamFriends001_ClearChatHistory_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->ClearChatHistory( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_InviteFriendByEmail( void *args )
{
    struct ISteamFriends_SteamFriends001_InviteFriendByEmail_params *params = (struct ISteamFriends_SteamFriends001_InviteFriendByEmail_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->InviteFriendByEmail( params->pchEmailAccount );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_InviteFriendByEmail( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_InviteFriendByEmail_params *params = (struct wow64_ISteamFriends_SteamFriends001_InviteFriendByEmail_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->InviteFriendByEmail( (const char *)params->pchEmailAccount );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetBlockedFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends001_GetBlockedFriendCount_params *params = (struct ISteamFriends_SteamFriends001_GetBlockedFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetBlockedFriendCount(  );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetBlockedFriendCount( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetBlockedFriendCount_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetBlockedFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetBlockedFriendCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends001_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends001_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pulGameID, params->punGameIP, params->pusGamePort );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetFriendGamePlayed( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetFriendGamePlayed_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, (uint64_t *)params->pulGameID, (uint32_t *)params->punGameIP, (uint16_t *)params->pusGamePort );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends001_GetFriendGamePlayed2( void *args )
{
    struct ISteamFriends_SteamFriends001_GetFriendGamePlayed2_params *params = (struct ISteamFriends_SteamFriends001_GetFriendGamePlayed2_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed2( params->steamIDFriend, params->pulGameID, params->punGameIP, params->pusGamePort, params->pusQueryPort );
    return 0;
}

NTSTATUS wow64_ISteamFriends_SteamFriends001_GetFriendGamePlayed2( void *args )
{
    struct wow64_ISteamFriends_SteamFriends001_GetFriendGamePlayed2_params *params = (struct wow64_ISteamFriends_SteamFriends001_GetFriendGamePlayed2_params *)args;
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed2( params->steamIDFriend, (uint64_t *)params->pulGameID, (uint32_t *)params->punGameIP, (uint16_t *)params->pusGamePort, (uint16_t *)params->pusQueryPort );
    return 0;
}

