/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( params->localAddress, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( (const SteamNetworkingIPAddr *)params->localAddress, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( params->address, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( (const SteamNetworkingIPAddr *)params->address, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nVirtualPort, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ConnectP2P( (const SteamNetworkingIdentity_144 *)params->identityRemote, params->nVirtualPort, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, (const char *)params->pszDebug, params->bEnableLinger );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, params->pszName );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, (const char *)params->pszName );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, (char *)params->pszName, params->nMaxLen );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags, params->pOutMessageNumber );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, (const void *)params->pData, params->cbData, params->nSendFlags, (int64_t *)params->pOutMessageNumber );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, (SteamNetConnectionInfo_t_144 *)params->pInfo );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, params->pStats );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, (SteamNetworkingQuickConnectionStatus *)params->pStats );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, (char *)params->pszBuf, params->cbBuf );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, (SteamNetworkingIPAddr *)params->address );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pIdentity1, params->pIdentity2 );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( (uint32_t *)params->pOutConnection1, (uint32_t *)params->pOutConnection2, params->bUseNetworkLoopback, (const SteamNetworkingIdentity_144 *)params->pIdentity1, (const SteamNetworkingIdentity_144 *)params->pIdentity2 );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetIdentity( params->pIdentity );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetIdentity( (SteamNetworkingIdentity_144 *)params->pIdentity );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( (SteamNetAuthenticationStatus_t *)params->pDetails );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( (const void *)params->pvTicket, params->cbTicket, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nVirtualPort, params->pOutParsedTicket );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( (const SteamNetworkingIdentity_144 *)params->identityGameServer, params->nVirtualPort, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( (const SteamNetworkingIdentity_144 *)params->identityTarget, params->nVirtualPort, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( (SteamDatagramHostedAddress *)params->pRouting );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nVirtualPort, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( (SteamDatagramGameCoordinatorServerLogin *)params->pLoginInfo, (int32_t *)params->pcbSignedBlob, (void *)params->pBlob );
    return 0;
}

