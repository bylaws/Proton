/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData( void *args )
{
    struct ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params *params = (struct ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params *)args;
    struct u_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *iface = (struct u_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppOwnershipTicketData( params->nAppID, params->pvBuffer, params->cbBufferLength, params->piAppId, params->piSteamId, params->piSignature, params->pcbSignature );
    return 0;
}

NTSTATUS wow64_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData( void *args )
{
    struct wow64_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params *params = (struct wow64_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params *)args;
    struct u_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *iface = (struct u_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppOwnershipTicketData( params->nAppID, (void *)params->pvBuffer, params->cbBufferLength, (uint32_t *)params->piAppId, (uint32_t *)params->piSteamId, (uint32_t *)params->piSignature, (uint32_t *)params->pcbSignature );
    return 0;
}

