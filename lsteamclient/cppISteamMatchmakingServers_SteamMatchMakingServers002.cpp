/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->CancelServerQuery( params->hServerQuery );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->CancelServerQuery( params->hServerQuery );
    return 0;
}

