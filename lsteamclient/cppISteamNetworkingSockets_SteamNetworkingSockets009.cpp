/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( params->localAddress, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( (const SteamNetworkingIPAddr *)params->localAddress, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( params->address, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( (const SteamNetworkingIPAddr *)params->address, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nLocalVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nLocalVirtualPort, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nRemoteVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectP2P( (const SteamNetworkingIdentity_144 *)params->identityRemote, params->nRemoteVirtualPort, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, (const char *)params->pszDebug, params->bEnableLinger );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, params->pszName );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, (const char *)params->pszName );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, (char *)params->pszName, params->nMaxLen );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags, params->pOutMessageNumber );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, (const void *)params->pData, params->cbData, params->nSendFlags, (int64_t *)params->pOutMessageNumber );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, (SteamNetConnectionInfo_t_144 *)params->pInfo );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, params->pStats );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, (SteamNetworkingQuickConnectionStatus *)params->pStats );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, (char *)params->pszBuf, params->cbBuf );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, (SteamNetworkingIPAddr *)params->address );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pIdentity1, params->pIdentity2 );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( (uint32_t *)params->pOutConnection1, (uint32_t *)params->pOutConnection2, params->bUseNetworkLoopback, (const SteamNetworkingIdentity_144 *)params->pIdentity1, (const SteamNetworkingIdentity_144 *)params->pIdentity2 );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetIdentity( params->pIdentity );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetIdentity( (SteamNetworkingIdentity_144 *)params->pIdentity );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( (SteamNetAuthenticationStatus_t *)params->pDetails );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreatePollGroup(  );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreatePollGroup(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->DestroyPollGroup( params->hPollGroup );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->DestroyPollGroup( params->hPollGroup );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SetConnectionPollGroup( params->hConn, params->hPollGroup );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SetConnectionPollGroup( params->hConn, params->hPollGroup );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( (const void *)params->pvTicket, params->cbTicket, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nRemoteVirtualPort, params->pOutParsedTicket );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( (const SteamNetworkingIdentity_144 *)params->identityGameServer, params->nRemoteVirtualPort, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nRemoteVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( (const SteamNetworkingIdentity_144 *)params->identityTarget, params->nRemoteVirtualPort, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( (SteamDatagramHostedAddress *)params->pRouting );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nLocalVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nLocalVirtualPort, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( (SteamDatagramGameCoordinatorServerLogin *)params->pLoginInfo, (int32_t *)params->pcbSignedBlob, (void *)params->pBlob );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectP2PCustomSignaling( params->pSignaling, params->pPeerIdentity, params->nRemoteVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectP2PCustomSignaling( (void /*ISteamNetworkingConnectionSignaling*/ *)params->pSignaling, (const SteamNetworkingIdentity_144 *)params->pPeerIdentity, params->nRemoteVirtualPort, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, params->pContext );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ReceivedP2PCustomSignal( (const void *)params->pMsg, params->cbMsg, (void /*ISteamNetworkingSignalingRecvContext*/ *)params->pContext );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetCertificateRequest( params->pcbBlob, params->pBlob, params->errMsg );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetCertificateRequest( (int32_t *)params->pcbBlob, (void *)params->pBlob, (char (*)[1024])params->errMsg );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SetCertificate( params->pCertificate, params->cbCertificate, params->errMsg );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SetCertificate( (const void *)params->pCertificate, params->cbCertificate, (char (*)[1024])params->errMsg );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    iface->RunCallbacks(  );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    iface->RunCallbacks(  );
    return 0;
}

