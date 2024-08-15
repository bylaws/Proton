#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

template<typename TWMsg>
static void copy_message_utow_144( u_SteamNetworkingMessage_t_144 *u_msg, TWMsg *w_msg )
{
    w_msg->m_cbSize = u_msg->m_cbSize;
    w_msg->m_conn = u_msg->m_conn;
    w_msg->m_sender = u_msg->m_sender;
    w_msg->m_nConnUserData = u_msg->m_nConnUserData;
    w_msg->m_usecTimeReceived = u_msg->m_usecTimeReceived;
    w_msg->m_nMessageNumber = u_msg->m_nMessageNumber;
    w_msg->m_nChannel = u_msg->m_nChannel;
}

static void receive_messages_utow_144( uint32_t count, u_SteamNetworkingMessage_t_144 **u_msgs,
                                       w_SteamNetworkingMessage_t_144 **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_144 );
        w_SteamNetworkingMessage_t_144 *w_msg = &message->w_msg_144;
        u_SteamNetworkingMessage_t_144 *u_msg = u_msgs[i];
        message->u_msg_144 = u_msg;
        copy_message_utow_144( u_msg, w_msg);
    }
}

static void wow64_receive_messages_utow_144( uint32_t count, u_SteamNetworkingMessage_t_144 **u_msgs,
                                             uint32_t w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        w32_SteamNetworkingMessage_t_144 *w_msg = (w32_SteamNetworkingMessage_t_144 *)((uint32_t *)w_msgs)[i];
        struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_144 );
        u_SteamNetworkingMessage_t_144 *u_msg = u_msgs[i];
        message->u_msg_144 = u_msg;
        copy_message_utow_144( u_msg, w_msg);
    }
}

NTSTATUS steamclient_networking_messages_receive_144( void *args )
{
    struct steamclient_networking_messages_receive_144_params *params = (struct steamclient_networking_messages_receive_144_params *)args;
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( params->w_msgs[i], struct networking_message, w_msg_144 );
        w_SteamNetworkingMessage_t_144 *w_msg = &message->w_msg_144;
        u_SteamNetworkingMessage_t_144 *u_msg = message->u_msg_144;

        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_144 = NULL;
    }

    return 0;
}

NTSTATUS wow64_steamclient_networking_messages_receive_144( void *args )
{
    struct wow64_steamclient_networking_messages_receive_144_params *params = (struct wow64_steamclient_networking_messages_receive_144_params *)args;
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        w32_SteamNetworkingMessage_t_144 *w_msg = (w32_SteamNetworkingMessage_t_144 *)((uint32_t *)params->w_msgs)[i];
        struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_144 );
        u_SteamNetworkingMessage_t_144 *u_msg = message->u_msg_144;

        memcpy( (void *)w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_144 = NULL;
    }

    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets002 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets004 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

template<typename TWMsg>
static void copy_message_utow_147( u_SteamNetworkingMessage_t_147 *u_msg, TWMsg *w_msg )
{
    w_msg->m_cbSize = u_msg->m_cbSize;
    w_msg->m_conn = u_msg->m_conn;
    w_msg->m_identityPeer = u_msg->m_identityPeer;
    w_msg->m_nConnUserData = u_msg->m_nConnUserData;
    w_msg->m_usecTimeReceived = u_msg->m_usecTimeReceived;
    w_msg->m_nMessageNumber = u_msg->m_nMessageNumber;
    w_msg->m_nChannel = u_msg->m_nChannel;
    w_msg->m_nFlags = u_msg->m_nFlags;
    w_msg->m_nUserData = u_msg->m_nUserData;
}

static void receive_messages_utow_147( uint32_t count, u_SteamNetworkingMessage_t_147 **u_msgs,
                                       w_SteamNetworkingMessage_t_147 **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_147 );
        w_SteamNetworkingMessage_t_147 *w_msg = &message->w_msg_147;
        u_SteamNetworkingMessage_t_147 *u_msg = u_msgs[i];
        message->u_msg_147 = u_msg;
        copy_message_utow_147( u_msg, w_msg );
    }
}

static void wow64_receive_messages_utow_147( uint32_t count, u_SteamNetworkingMessage_t_147 **u_msgs,
                                             uint32_t w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {

        w32_SteamNetworkingMessage_t_147 *w_msg = (w32_SteamNetworkingMessage_t_147 *)((uint32_t *)w_msgs)[i];
        struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_147 );
        u_SteamNetworkingMessage_t_147 *u_msg = u_msgs[i];
        message->u_msg_147 = u_msg;
        copy_message_utow_147( u_msg, w_msg);
    }
}

NTSTATUS steamclient_networking_messages_receive_147( void *args )
{
    struct steamclient_networking_messages_receive_147_params *params = (struct steamclient_networking_messages_receive_147_params *)args;
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( params->w_msgs[i], struct networking_message, w_msg_147 );
        w_SteamNetworkingMessage_t_147 *w_msg = &message->w_msg_147;
        u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;

        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_147 = NULL;
    }

    return 0;
}

NTSTATUS wow64_steamclient_networking_messages_receive_147( void *args )
{
    struct wow64_steamclient_networking_messages_receive_147_params *params = (struct wow64_steamclient_networking_messages_receive_147_params *)args;
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        w32_SteamNetworkingMessage_t_147 *w_msg = (w32_SteamNetworkingMessage_t_147 *)((uint32_t *)params->w_msgs)[i];
        struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_147 );
        u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;

        memcpy( (void *)w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_147 = NULL;
    }

    return 0;
}

static void U_CDECL u_SteamNetworkingMessage_t_147_FreeData( u_SteamNetworkingMessage_t_147 *msg )
{
    free( msg->m_pData );
    msg->m_pData = NULL;
}

template<typename TWMsg>
static void copy_message_wtou_147( TWMsg *w_msg, u_SteamNetworkingMessage_t_147 *u_msg )
{
    if (!u_msg->m_pData)
    {
        u_msg->m_pData = malloc( w_msg->m_cbSize );
        u_msg->m_pfnFreeData = u_SteamNetworkingMessage_t_147_FreeData;
    }

    memcpy( u_msg->m_pData, (const void *)w_msg->m_pData, w_msg->m_cbSize );
    u_msg->m_cbSize = w_msg->m_cbSize;
    u_msg->m_conn = w_msg->m_conn;
    u_msg->m_identityPeer = w_msg->m_identityPeer;
    u_msg->m_nConnUserData = w_msg->m_nConnUserData;
    u_msg->m_usecTimeReceived = w_msg->m_usecTimeReceived;
    u_msg->m_nMessageNumber = w_msg->m_nMessageNumber;
    u_msg->m_nChannel = w_msg->m_nChannel;
    u_msg->m_nFlags = w_msg->m_nFlags;
    u_msg->m_nUserData = w_msg->m_nUserData;
}

static void send_messages_wtou_147( uint32_t count, w_SteamNetworkingMessage_t_147 *const *w_msgs,
                                    u_SteamNetworkingMessage_t_147 **u_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_147 );
        w_SteamNetworkingMessage_t_147 *w_msg = &message->w_msg_147;
        u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;
        copy_message_wtou_147( w_msg, u_msg );

        /* steamclient library takes ownership */
        message->u_msg_147 = NULL;
        u_msgs[i] = u_msg;
    }
}

static void wow64_send_messages_wtou_147( uint32_t count, uint32_t w_msgs,
                                          u_SteamNetworkingMessage_t_147 **u_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {

        w32_SteamNetworkingMessage_t_147 *w_msg = (w32_SteamNetworkingMessage_t_147 *)((uint32_t *)w_msgs)[i];
        struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_147 );
        u_SteamNetworkingMessage_t_147 *u_msg = u_msgs[i];
        copy_message_wtou_147( w_msg, u_msg);

        /* steamclient library takes ownership */
        message->u_msg_147 = NULL;
        u_msgs[i] = u_msg;
    }
}

static void networking_message_release_147( w_SteamNetworkingMessage_t_147 *w_msg )
{
    struct networking_message *message = CONTAINING_RECORD( w_msg, struct networking_message, w_msg_147 );
    u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;

    if (!message->u_msg_147) return;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg_147 = NULL;
}

static void wow64_networking_message_release_147( w32_SteamNetworkingMessage_t_147 *w_msg )
{
    struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_147 );
    u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;

    if (!message->u_msg_147) return;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg_147 = NULL;
}

NTSTATUS steamclient_networking_message_release_147( void *args )
{
    struct steamclient_networking_message_release_147_params *params = (struct steamclient_networking_message_release_147_params *)args;
    networking_message_release_147( params->w_msg );
    return 0;
}

NTSTATUS wow64_steamclient_networking_message_release_147( void *args )
{
    struct wow64_steamclient_networking_message_release_147_params *params = (struct wow64_steamclient_networking_message_release_147_params *)args;
    wow64_networking_message_release_147( (w32_SteamNetworkingMessage_t_147 *)params->w_msg );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets006 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    wow64_send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, (int64_t *)params->pOutMessageNumberOrResult );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets008 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    wow64_send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, (int64_t *)params->pOutMessageNumberOrResult );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets009 */


NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    wow64_send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, (int64_t *)params->pOutMessageNumberOrResult );
    return 0;
}

/* ISteamNetworkingUtils_SteamNetworkingUtils003 */

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) receive_messages_utow_147( 1, &u_msg, &params->_ret );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage( void *args )
{
    struct wow64_ISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *params = (struct wow64_ISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) wow64_receive_messages_utow_147( 1, &u_msg, (uint32_t)(uintptr_t)&params->_ret );
    return 0;
}

static void (*W_CDECL w_SteamNetConnectionStatusChanged)( w_SteamNetConnectionStatusChangedCallback_t_151 * );
static void U_CDECL u_SteamNetConnectionStatusChanged( u_SteamNetConnectionStatusChangedCallback_t_151 *u_dat )
{
    w_SteamNetConnectionStatusChangedCallback_t_151 w_dat = *u_dat;
    if (w_SteamNetConnectionStatusChanged) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetConnectionStatusChanged, &w_dat, sizeof(w_dat) );
}

static void (*W_CDECL w_SteamNetAuthenticationStatusChanged)( SteamNetAuthenticationStatus_t * );
static void U_CDECL u_SteamNetAuthenticationStatusChanged( SteamNetAuthenticationStatus_t *dat )
{
    if (w_SteamNetAuthenticationStatusChanged) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetAuthenticationStatusChanged, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamRelayNetworkStatusChanged)( SteamRelayNetworkStatus_t * );
static void U_CDECL u_SteamRelayNetworkStatusChanged( SteamRelayNetworkStatus_t *dat )
{
    if (w_SteamRelayNetworkStatusChanged) queue_cdecl_func_callback( (w_cdecl_func)w_SteamRelayNetworkStatusChanged, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamNetworkingMessagesSessionRequest)( SteamNetworkingMessagesSessionRequest_t_151 * );
static void U_CDECL u_SteamNetworkingMessagesSessionRequest( SteamNetworkingMessagesSessionRequest_t_151 *dat )
{
    if (w_SteamNetworkingMessagesSessionRequest) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingMessagesSessionRequest, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamNetworkingMessagesSessionFailed)( SteamNetworkingMessagesSessionFailed_t_151 * );
static void U_CDECL u_SteamNetworkingMessagesSessionFailed( SteamNetworkingMessagesSessionFailed_t_151 *dat )
{
    if (w_SteamNetworkingMessagesSessionFailed) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingMessagesSessionFailed, dat, sizeof(*dat) );
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    void *u_fn; /* api requires passing pointer-to-pointer */

    switch (params->eValue)
    {
#define CASE( y )                                                                                  \
    if (!params->pArg)                                                                             \
    {                                                                                              \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, NULL );         \
    }                                                                                              \
    else                                                                                           \
    {                                                                                              \
        if (*(void **)params->pArg == NULL) u_fn = NULL;                                           \
        else u_fn = (void *)&u_##y;                                                                \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &u_fn );        \
        if (params->_ret) w_##y = *(decltype(w_##y) *)params->pArg;                                \
    }                                                                                              \
    break;

    case 201 /*ConnectionStatusChanged*/: CASE( SteamNetConnectionStatusChanged )
    case 202 /*AuthStatusChanged*/: CASE( SteamNetAuthenticationStatusChanged )
    case 203 /*RelayNetworkStatusChanged*/: CASE( SteamRelayNetworkStatusChanged )
    case 204 /*MessagesSessionRequest*/: CASE( SteamNetworkingMessagesSessionRequest )
    case 205 /*MessagesSessionFailed*/: CASE( SteamNetworkingMessagesSessionFailed )

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, params->pArg );
    }

    return 0;
}

NTSTATUS wow64_ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue( void *args )
{
    struct wow64_ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params *params = (struct wow64_ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    void *u_fn; /* api requires passing pointer-to-pointer */

    switch (params->eValue)
    {
#define CASE( y )                                                                                  \
    if (!params->pArg)                                                                             \
    {                                                                                              \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, NULL );         \
    }                                                                                              \
    else                                                                                           \
    {                                                                                              \
        if (!*(uint32_t *)params->pArg) u_fn = NULL;                                               \
        else u_fn = (void *)&u_##y;                                                                \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &u_fn );        \
        if (params->_ret) w_##y = *(decltype(w_##y) *)params->pArg;                                \
    }                                                                                              \
    break;

    case 201 /*ConnectionStatusChanged*/: CASE( SteamNetConnectionStatusChanged )
    case 202 /*AuthStatusChanged*/: CASE( SteamNetAuthenticationStatusChanged )
    case 203 /*RelayNetworkStatusChanged*/: CASE( SteamRelayNetworkStatusChanged )
    case 204 /*MessagesSessionRequest*/: CASE( SteamNetworkingMessagesSessionRequest )
    case 205 /*MessagesSessionFailed*/: CASE( SteamNetworkingMessagesSessionFailed )

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, (const void *)params->pArg );
    }

    return 0;
}

template<typename TWMsg>
static void copy_message_utow_153a( u_SteamNetworkingMessage_t_153a *u_msg, TWMsg *w_msg )
{
    w_msg->m_cbSize = u_msg->m_cbSize;
    w_msg->m_conn = u_msg->m_conn;
    w_msg->m_identityPeer = u_msg->m_identityPeer;
    w_msg->m_nConnUserData = u_msg->m_nConnUserData;
    w_msg->m_usecTimeReceived = u_msg->m_usecTimeReceived;
    w_msg->m_nMessageNumber = u_msg->m_nMessageNumber;
    w_msg->m_nChannel = u_msg->m_nChannel;
    w_msg->m_nFlags = u_msg->m_nFlags;
    w_msg->m_nUserData = u_msg->m_nUserData;
    w_msg->m_idxLane = u_msg->m_idxLane;
}

static void receive_messages_utow_153a( uint32_t count, u_SteamNetworkingMessage_t_153a **u_msgs,
                                        w_SteamNetworkingMessage_t_153a **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_153a );
        w_SteamNetworkingMessage_t_153a *w_msg = &message->w_msg_153a;
        u_SteamNetworkingMessage_t_153a *u_msg = u_msgs[i];
        message->u_msg_153a = u_msg;
        copy_message_utow_153a( u_msg, w_msg );
    }
}

static void wow64_receive_messages_utow_153a( uint32_t count, u_SteamNetworkingMessage_t_153a **u_msgs,
                                              uint32_t w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {

        w32_SteamNetworkingMessage_t_153a *w_msg = (w32_SteamNetworkingMessage_t_153a *)((uint32_t *)w_msgs)[i];
        struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_153a );
        u_SteamNetworkingMessage_t_153a *u_msg = u_msgs[i];
        message->u_msg_153a = u_msg;
        copy_message_utow_153a( u_msg, w_msg);
    }
}

NTSTATUS steamclient_networking_messages_receive_153a( void *args )
{
    struct steamclient_networking_messages_receive_153a_params *params = (struct steamclient_networking_messages_receive_153a_params *)args;
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( params->w_msgs[i], struct networking_message, w_msg_153a );
        w_SteamNetworkingMessage_t_153a *w_msg = &message->w_msg_153a;
        u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;

        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_153a = NULL;
    }

    return 0;
}

NTSTATUS wow64_steamclient_networking_messages_receive_153a( void *args )
{
    struct wow64_steamclient_networking_messages_receive_153a_params *params = (struct wow64_steamclient_networking_messages_receive_153a_params *)args;
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        w32_SteamNetworkingMessage_t_153a *w_msg = (w32_SteamNetworkingMessage_t_153a *)((uint32_t *)params->w_msgs)[i];
        struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_153a );
        u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;

        memcpy( (void *)w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_153a = NULL;
    }

    return 0;
}

static void U_CDECL u_SteamNetworkingMessage_t_153a_FreeData( u_SteamNetworkingMessage_t_153a *msg )
{
    free( msg->m_pData );
    msg->m_pData = NULL;
}

template<typename TWMsg>
static void copy_message_wtou_153a( TWMsg *w_msg, u_SteamNetworkingMessage_t_153a *u_msg )
{
    if (!u_msg->m_pData)
    {
        u_msg->m_pData = malloc( w_msg->m_cbSize );
        u_msg->m_pfnFreeData = u_SteamNetworkingMessage_t_153a_FreeData;
    }

    memcpy( u_msg->m_pData, (const void *)w_msg->m_pData, w_msg->m_cbSize );
    u_msg->m_cbSize = w_msg->m_cbSize;
    u_msg->m_conn = w_msg->m_conn;
    u_msg->m_identityPeer = w_msg->m_identityPeer;
    u_msg->m_nConnUserData = w_msg->m_nConnUserData;
    u_msg->m_usecTimeReceived = w_msg->m_usecTimeReceived;
    u_msg->m_nMessageNumber = w_msg->m_nMessageNumber;
    u_msg->m_nChannel = w_msg->m_nChannel;
    u_msg->m_nFlags = w_msg->m_nFlags;
    u_msg->m_nUserData = w_msg->m_nUserData;
    u_msg->m_idxLane = w_msg->m_idxLane;
}

static void send_messages_wtou_153a( uint32_t count, w_SteamNetworkingMessage_t_153a *const *w_msgs,
                                     u_SteamNetworkingMessage_t_153a **u_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_153a );
        w_SteamNetworkingMessage_t_153a *w_msg = &message->w_msg_153a;
        u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;
        copy_message_wtou_153a( w_msg, u_msg);

        /* steamclient library takes ownership */
        message->u_msg_153a = NULL;
        u_msgs[i] = u_msg;
    }
}


static void wow64_send_messages_wtou_153a( uint32_t count, uint32_t w_msgs,
                                           u_SteamNetworkingMessage_t_153a **u_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {

        w32_SteamNetworkingMessage_t_153a *w_msg = (w32_SteamNetworkingMessage_t_153a *)((uint32_t *)w_msgs)[i];
        struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_153a );
        u_SteamNetworkingMessage_t_153a *u_msg = u_msgs[i];
        copy_message_wtou_153a( w_msg, u_msg);

        /* steamclient library takes ownership */
        message->u_msg_153a = NULL;
        u_msgs[i] = u_msg;
    }
}

static void networking_message_release_153a( w_SteamNetworkingMessage_t_153a *w_msg )
{
    struct networking_message *message = CONTAINING_RECORD( w_msg, struct networking_message, w_msg_153a );
    u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;

    if (!message->u_msg_153a) return;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg_153a = NULL;
}

static void wow64_networking_message_release_153a( w32_SteamNetworkingMessage_t_153a *w_msg )
{
    struct wow64_networking_message *message = CONTAINING_RECORD( w_msg, struct wow64_networking_message, w_msg_153a );
    u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;

    if (!message->u_msg_153a) return;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg_153a = NULL;
}

NTSTATUS steamclient_networking_message_release_153a( void *args )
{
    struct steamclient_networking_message_release_153a_params *params = (struct steamclient_networking_message_release_153a_params *)args;
    networking_message_release_153a( params->w_msg );
    return 0;
}

NTSTATUS wow64_steamclient_networking_message_release_153a( void *args )
{
    struct steamclient_networking_message_release_153a_params *params = (struct steamclient_networking_message_release_153a_params *)args;
    wow64_networking_message_release_153a( (w32_SteamNetworkingMessage_t_153a *)params->w_msg );
    return 0;
}

/* ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 */

NTSTATUS ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages( void *args )
{
    struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params *params = (struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params *)args;
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessages( u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages( void *args )
{
    struct wow64_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params *params = (struct wow64_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params *)args;
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessages( u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

/* ISteamNetworkingMessages_SteamNetworkingMessages002 */

NTSTATUS ISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel( void *args )
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *params = (struct ISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *)args;
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnChannel( params->nLocalChannel, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel( void *args )
{
    struct wow64_ISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *params = (struct wow64_ISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *)args;
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnChannel( params->nLocalChannel, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets012 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) wow64_receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMessages];
    send_messages_wtou_153a( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMessages];
    wow64_send_messages_wtou_153a( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, (int64_t *)params->pOutMessageNumberOrResult );
    return 0;
}

/* ISteamNetworkingUtils_SteamNetworkingUtils004 */

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) receive_messages_utow_153a( 1, &u_msg, &params->_ret );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage( void *args )
{
    struct wow64_ISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params *params = (struct wow64_ISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) wow64_receive_messages_utow_153a( 1, &u_msg, (uint32_t)(uintptr_t)&params->_ret );
    return 0;
}

static void (*W_CDECL w_SteamNetConnectionStatusChanged_153a)( w_SteamNetConnectionStatusChangedCallback_t_153a * );
static void U_CDECL u_SteamNetConnectionStatusChanged_153a( u_SteamNetConnectionStatusChangedCallback_t_153a *u_dat )
{
    w_SteamNetConnectionStatusChangedCallback_t_153a w_dat = *u_dat;
    if (w_SteamNetConnectionStatusChanged_153a) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetConnectionStatusChanged_153a, &w_dat, sizeof(w_dat) );
}

static void (*W_CDECL w_SteamNetworkingMessagesSessionFailed_153a)( SteamNetworkingMessagesSessionFailed_t_153a * );
static void U_CDECL u_SteamNetworkingMessagesSessionFailed_153a( SteamNetworkingMessagesSessionFailed_t_153a *dat )
{
    if (w_SteamNetworkingMessagesSessionFailed_153a) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingMessagesSessionFailed_153a, dat, sizeof(*dat) );
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    bool ret;
    void *u_fn; /* api requires passing pointer-to-pointer */

    switch (params->eValue)
    {

#define CASE( y )                                                                                  \
    if (!params->pArg)                                                                             \
    {                                                                                              \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, NULL );         \
    }                                                                                              \
    else                                                                                           \
    {                                                                                              \
        if (*(void **)params->pArg == NULL) u_fn = NULL;                                           \
        else u_fn = (void *)&u_##y;                                                                \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &u_fn );        \
        if (params->_ret) w_##y = *(decltype(w_##y) *)params->pArg;                                \
    }                                                                                              \
    break;

    case 201 /*ConnectionStatusChanged*/: CASE( SteamNetConnectionStatusChanged_153a )
    case 202 /*AuthStatusChanged*/: CASE( SteamNetAuthenticationStatusChanged )
    case 203 /*RelayNetworkStatusChanged*/: CASE( SteamRelayNetworkStatusChanged )
    case 204 /*MessagesSessionRequest*/: CASE( SteamNetworkingMessagesSessionRequest )
    case 205 /*MessagesSessionFailed*/: CASE( SteamNetworkingMessagesSessionFailed_153a )

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, params->pArg );
    }

    return 0;
}

NTSTATUS wow64_ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue( void *args )
{
    struct wow64_ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params *params = (struct wow64_ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    bool ret;
    void *u_fn; /* api requires passing pointer-to-pointer */

    switch (params->eValue)
    {

#define CASE( y )                                                                                  \
    if (!params->pArg)                                                                             \
    {                                                                                              \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, NULL );         \
    }                                                                                              \
    else                                                                                           \
    {                                                                                              \
        if (!*(uint32_t *)params->pArg) u_fn = NULL;                                               \
        else u_fn = (void *)&u_##y;                                                                \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &u_fn );        \
        if (params->_ret) w_##y = *(decltype(w_##y) *)params->pArg;                                \
    }                                                                                              \
    break;

    case 201 /*ConnectionStatusChanged*/: CASE( SteamNetConnectionStatusChanged_153a )
    case 202 /*AuthStatusChanged*/: CASE( SteamNetAuthenticationStatusChanged )
    case 203 /*RelayNetworkStatusChanged*/: CASE( SteamRelayNetworkStatusChanged )
    case 204 /*MessagesSessionRequest*/: CASE( SteamNetworkingMessagesSessionRequest )
    case 205 /*MessagesSessionFailed*/: CASE( SteamNetworkingMessagesSessionFailed_153a )

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, (const void *)params->pArg );
    }

    return 0;
}

struct u_ISteamNetworkingConnectionCustomSignaling *create_LinuxISteamNetworkingConnectionCustomSignaling( void *win )
{
    FIXME( "not implemented!\n" );
    return NULL;
}

struct u_ISteamNetworkingCustomSignalingRecvContext *create_LinuxISteamNetworkingCustomSignalingRecvContext( void *win )
{
    FIXME( "not implemented!\n" );
    return NULL;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_ISteamNetworkingConnectionCustomSignaling *u_pSignaling = create_LinuxISteamNetworkingConnectionCustomSignaling( params->pSignaling );
    params->_ret = iface->ConnectP2PCustomSignaling( u_pSignaling, params->pPeerIdentity, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_ISteamNetworkingConnectionCustomSignaling *u_pSignaling = create_LinuxISteamNetworkingConnectionCustomSignaling( (void *)params->pSignaling );
    params->_ret = iface->ConnectP2PCustomSignaling( u_pSignaling, (const SteamNetworkingIdentity_144 *)params->pPeerIdentity, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_ISteamNetworkingCustomSignalingRecvContext *u_pContext = create_LinuxISteamNetworkingCustomSignalingRecvContext( params->pContext );
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, u_pContext );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_ISteamNetworkingCustomSignalingRecvContext *u_pContext = create_LinuxISteamNetworkingCustomSignalingRecvContext( (void *)params->pContext );
    params->_ret = iface->ReceivedP2PCustomSignal( (const void *)params->pMsg, params->cbMsg, u_pContext );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_ISteamNetworkingConnectionCustomSignaling *u_pSignaling = create_LinuxISteamNetworkingConnectionCustomSignaling( params->pSignaling );
    params->_ret = iface->ConnectP2PCustomSignaling( u_pSignaling, params->pPeerIdentity, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_ISteamNetworkingConnectionCustomSignaling *u_pSignaling = create_LinuxISteamNetworkingConnectionCustomSignaling( (void *)params->pSignaling );
    params->_ret = iface->ConnectP2PCustomSignaling( u_pSignaling, (const SteamNetworkingIdentity_144 *)params->pPeerIdentity, params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_ISteamNetworkingCustomSignalingRecvContext *u_pContext = create_LinuxISteamNetworkingCustomSignalingRecvContext( params->pContext );
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, u_pContext );
    return 0;
}

NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_ISteamNetworkingCustomSignalingRecvContext *u_pContext = create_LinuxISteamNetworkingCustomSignalingRecvContext( (void *)params->pContext );
    params->_ret = iface->ReceivedP2PCustomSignal( (const void *)params->pMsg, params->cbMsg, u_pContext );
    return 0;
}
NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    u_RemoteStorageUpdatePublishedFileRequest_t u_updatePublishedFileRequest = params->updatePublishedFileRequest;
    params->_ret = iface->UpdatePublishedFile( u_updatePublishedFileRequest );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    u_RemoteStorageUpdatePublishedFileRequest_t u_updatePublishedFileRequest = params->updatePublishedFileRequest;
    w32_SteamParamStringArray_t *w_tags = (w32_SteamParamStringArray_t *)params->updatePublishedFileRequest.m_pTags;
    u_SteamParamStringArray_t u_tags = *w_tags;
    u_tags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_tags->m_ppStrings, w_tags->m_nNumStrings );
    u_updatePublishedFileRequest.m_pTags = &u_tags;
    params->_ret = iface->UpdatePublishedFile( u_updatePublishedFileRequest );
    free( u_tags.m_ppStrings );
    return 0;
}

template<typename TIface, typename TParams>
static NTSTATUS ISteamRemoteStorage_GetUGCDetails( void *args )
{
    TParams *params = (TParams *)args;
    TIface *iface = (TIface *)params->linux_side;
    char *u_str;
    params->_ret = iface->GetUGCDetails( params->hContent, (uint32_t *)params->pnAppID, params->ppchName ? &u_str : nullptr, (int32_t *)params->pnFileSizeInBytes, (CSteamID *)params->pSteamIDOwner );
    params->_str = u_str;
    params->_str_size = u_str ? (strlen(u_str) + 1) : 0;
    return 0;
}

#define DEF_API_ISteamRemoteStorage_GetUGCDetails(ver) \
    NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION ## ver ##_GetUGCDetails( void *args ) \
    { \
        return ISteamRemoteStorage_GetUGCDetails<u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION ## ver, ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION ## ver ## _GetUGCDetails_params>( args ); \
    } \
    NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION ## ver ##_GetUGCDetails( void *args ) \
    { \
        return ISteamRemoteStorage_GetUGCDetails<u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION ## ver, wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION ## ver ## _GetUGCDetails_params>( args ); \
    }

DEF_API_ISteamRemoteStorage_GetUGCDetails(003)
DEF_API_ISteamRemoteStorage_GetUGCDetails(004)
DEF_API_ISteamRemoteStorage_GetUGCDetails(005)
DEF_API_ISteamRemoteStorage_GetUGCDetails(006)
DEF_API_ISteamRemoteStorage_GetUGCDetails(007)
DEF_API_ISteamRemoteStorage_GetUGCDetails(008)
DEF_API_ISteamRemoteStorage_GetUGCDetails(009)
DEF_API_ISteamRemoteStorage_GetUGCDetails(010)
DEF_API_ISteamRemoteStorage_GetUGCDetails(011)
DEF_API_ISteamRemoteStorage_GetUGCDetails(012)
DEF_API_ISteamRemoteStorage_GetUGCDetails(013)
DEF_API_ISteamRemoteStorage_GetUGCDetails(014)
DEF_API_ISteamRemoteStorage_GetUGCDetails(016)

template<typename TIface, typename TParams>
static NTSTATUS ISteamNetworkingUtils_GetConfigValueInfo( void *args )
{
    TParams *params = (TParams *)args;
    TIface *iface = (TIface *)params->linux_side;
    const char *u_str;
    params->_ret = iface->GetConfigValueInfo( params->eValue, params->pOutName ? &u_str : nullptr, (uint32_t *)params->pOutDataType, (uint32_t *)params->pOutScope, (uint32_t *)params->pOutNextValue );
    params->_str = u_str;
    params->_str_size = u_str ? (strlen(u_str) + 1) : 0;
    return 0;
}

#define DEF_API_ISteamNetworkingUtils_GetConfigValueInfo(ver) \
    NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils ## ver ## _GetConfigValueInfo( void *args ) \
    { \
        return ISteamNetworkingUtils_GetConfigValueInfo<u_ISteamNetworkingUtils_SteamNetworkingUtils ## ver, ISteamNetworkingUtils_SteamNetworkingUtils ## ver ## _GetConfigValueInfo_params>( args ); \
    } \
    NTSTATUS wow64_ISteamNetworkingUtils_SteamNetworkingUtils ## ver ## _GetConfigValueInfo( void *args ) \
    { \
        return ISteamNetworkingUtils_GetConfigValueInfo<u_ISteamNetworkingUtils_SteamNetworkingUtils ## ver, wow64_ISteamNetworkingUtils_SteamNetworkingUtils ## ver ## _GetConfigValueInfo_params>( args ); \
    }

DEF_API_ISteamNetworkingUtils_GetConfigValueInfo(001)
DEF_API_ISteamNetworkingUtils_GetConfigValueInfo(002)
DEF_API_ISteamNetworkingUtils_GetConfigValueInfo(003)
