#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);


template <typename T> void free_callback_obj(T *obj)
{
    obj->w_iface = (struct w_steam_iface *)0xdeadbeef;
    *(void **)obj = (void *)0xdeadbeef;
    delete obj;
}

struct SteamMatchmakingServerListResponse_099u : u_ISteamMatchmakingServerListResponse_099u
{
    struct w_steam_iface *w_iface;
    virtual void ServerResponded( int32_t );
    virtual void ServerFailedToRespond( int32_t );
    virtual void RefreshComplete( uint32_t );
};

void SteamMatchmakingServerListResponse_099u::ServerResponded( int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_0_1, (intptr_t)iServer, 0 );
}

void SteamMatchmakingServerListResponse_099u::ServerFailedToRespond( int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_1, (intptr_t)iServer, 0 );
}

void SteamMatchmakingServerListResponse_099u::RefreshComplete( uint32_t response )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2_1, (intptr_t)response, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

u_ISteamMatchmakingServerListResponse_099u *create_LinuxISteamMatchmakingServerListResponse_099u( void *win )
{
    SteamMatchmakingServerListResponse_099u *ret;

    if (!win) return NULL;

    if (!(ret = new SteamMatchmakingServerListResponse_099u())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;

    TRACE("-> %p.\n", ret);
    return ret;
}

struct SteamMatchmakingServerListResponse_106 : u_ISteamMatchmakingServerListResponse_106
{
    struct w_steam_iface *w_iface;
    struct server_list_request *w_request;

    virtual void ServerResponded( void *, int32_t );
    virtual void ServerFailedToRespond( void *, int32_t );
    virtual void RefreshComplete( void *, uint32_t );
};

void SteamMatchmakingServerListResponse_106::ServerResponded( void *hRequest, int32_t iServer )
{
    w_request->u_request = hRequest;
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_0_2, (intptr_t)w_request, (intptr_t)iServer );
}

void SteamMatchmakingServerListResponse_106::ServerFailedToRespond( void *hRequest, int32_t iServer )
{
    w_request->u_request = hRequest;
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_2, (intptr_t)w_request, (intptr_t)iServer );
}

void SteamMatchmakingServerListResponse_106::RefreshComplete( void *hRequest, uint32_t response )
{
    w_request->u_request = hRequest;
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2_2, (intptr_t)w_request, (intptr_t)response );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

u_ISteamMatchmakingServerListResponse_106 *create_LinuxISteamMatchmakingServerListResponse_106( void *win, struct server_list_request *w_request ) 
{
    SteamMatchmakingServerListResponse_106 *ret;

    if (!win) return NULL;

    if (!(ret = new SteamMatchmakingServerListResponse_106())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;
    ret->w_request = w_request;

    TRACE("-> %p.\n", ret);
    return ret;
}

struct SteamMatchmakingPingResponse : u_ISteamMatchmakingPingResponse
{
    struct w_steam_iface *w_iface;
    virtual void ServerResponded( gameserveritem_t_105 * );
    virtual void ServerFailedToRespond(  );
};

void SteamMatchmakingPingResponse::ServerResponded( gameserveritem_t_105 *server )
{
    queue_vtable_callback_0_server_responded( this->w_iface, server );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

void SteamMatchmakingPingResponse::ServerFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

struct u_ISteamMatchmakingPingResponse *create_LinuxISteamMatchmakingPingResponse( void *win )
{
    SteamMatchmakingPingResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingPingResponse())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;

    TRACE("-> %p.\n", ret);
    return ret;
}

struct SteamMatchmakingPlayersResponse : u_ISteamMatchmakingPlayersResponse
{
    struct w_steam_iface *w_iface;
    virtual void AddPlayerToList( const char *, int32_t, float );
    virtual void PlayersFailedToRespond(  );
    virtual void PlayersRefreshComplete(  );
};

void SteamMatchmakingPlayersResponse::AddPlayerToList(const char *pchName, int nScore, float flTimePlayed)
{
    queue_vtable_callback_0_add_player_to_list( this->w_iface, pchName, nScore, flTimePlayed );
}

void SteamMatchmakingPlayersResponse::PlayersFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

void SteamMatchmakingPlayersResponse::PlayersRefreshComplete(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

struct u_ISteamMatchmakingPlayersResponse *create_LinuxISteamMatchmakingPlayersResponse( void *win )
{
    struct SteamMatchmakingPlayersResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingPlayersResponse())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;

    TRACE("-> %p.\n", ret);
    return ret;
}

struct SteamMatchmakingRulesResponse : u_ISteamMatchmakingRulesResponse
{
    struct w_steam_iface *w_iface;
    virtual void RulesResponded( const char *, const char * );
    virtual void RulesFailedToRespond(  );
    virtual void RulesRefreshComplete(  );
};

void SteamMatchmakingRulesResponse::RulesResponded(const char *pchRule, const char *pchValue)
{
    queue_vtable_callback_0_rules_responded( this->w_iface, pchRule, pchValue );
}

void SteamMatchmakingRulesResponse::RulesFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

void SteamMatchmakingRulesResponse::RulesRefreshComplete(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

struct u_ISteamMatchmakingRulesResponse *create_LinuxISteamMatchmakingRulesResponse( void *win )
{
    SteamMatchmakingRulesResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingRulesResponse())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;

    TRACE("-> %p.\n", ret);
    return ret;
}

template<typename TIface, typename TParams, bool WoW64, typename TMethod>
static NTSTATUS ISteamMatchmakingServers_request_filtered_server_list_001( TMethod method, void *args )
{
    TParams *params = (TParams *)args;
    TIface *iface = (TIface *)params->linux_side;
    auto *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_099u( (void *)params->pRequestServersResponse );
    MatchMakingKeyValuePair_t **u_ppchFilters;

    if constexpr (WoW64)
        u_ppchFilters = (MatchMakingKeyValuePair_t **)wow64_convert_ptr_array(  params->ppchFilters, params->nFilters );
    else
        u_ppchFilters = params->ppchFilters;

    (iface->*method)( params->iApp, u_ppchFilters, params->nFilters, u_pRequestServersResponse );

    if constexpr (WoW64)
        free(u_ppchFilters);

    return 0;
}

template<typename TIface, typename TParams, bool WoW64, typename TMethod>
static NTSTATUS ISteamMatchmakingServers_request_filtered_server_list_002( TMethod method, void *args )
{
    TParams *params = (TParams *)args;
    TIface *iface = (TIface *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->_ret;
    auto *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_106( (void *)params->pRequestServersResponse, request );
    MatchMakingKeyValuePair_t **u_ppchFilters;

    if constexpr (WoW64)
        u_ppchFilters = (MatchMakingKeyValuePair_t **)wow64_convert_ptr_array(  params->ppchFilters, params->nFilters );
    else
        u_ppchFilters = params->ppchFilters;

    request->u_request = (iface->*method)( params->iApp, u_ppchFilters, params->nFilters, u_pRequestServersResponse );

    if constexpr (WoW64)
        free(u_ppchFilters);

    return 0;
}

#define DEF_API_ISteamMatchmakingServers_request_filtered_server_list(ver, type) \
    NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers ## ver ## _Request ## type ## ServerList( void *args ) \
    { \
        return ISteamMatchmakingServers_request_filtered_server_list_ ## ver <u_ISteamMatchmakingServers_SteamMatchMakingServers ## ver, struct ISteamMatchmakingServers_SteamMatchMakingServers ## ver ## _Request ## type ## ServerList_params, false>( &u_ISteamMatchmakingServers_SteamMatchMakingServers ## ver ::Request ## type ## ServerList, args ); \
    } \
    NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers ## ver ## _Request ## type ## ServerList( void *args ) \
    { \
        return ISteamMatchmakingServers_request_filtered_server_list_ ## ver <u_ISteamMatchmakingServers_SteamMatchMakingServers ## ver, struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers ## ver ## _Request ## type ## ServerList_params, true>( &u_ISteamMatchmakingServers_SteamMatchMakingServers ## ver ::Request ## type ## ServerList, args ); \
    }

DEF_API_ISteamMatchmakingServers_request_filtered_server_list(001, Internet)

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_099u *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );
    iface->RequestLANServerList( params->iApp, u_pRequestServersResponse );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_099u *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_099u( (void *)params->pRequestServersResponse );
    iface->RequestLANServerList( params->iApp, u_pRequestServersResponse );
    return 0;
}

DEF_API_ISteamMatchmakingServers_request_filtered_server_list(001, Friends)
DEF_API_ISteamMatchmakingServers_request_filtered_server_list(001, Favorites)
DEF_API_ISteamMatchmakingServers_request_filtered_server_list(001, History)
DEF_API_ISteamMatchmakingServers_request_filtered_server_list(001, Spectator)

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingPingResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse( params->pRequestServersResponse );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingPingResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse( (void *)params->pRequestServersResponse );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingPlayersResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse( params->pRequestServersResponse );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingPlayersResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse( (void *)params->pRequestServersResponse );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingRulesResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse( params->pRequestServersResponse );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingRulesResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse( (void *)params->pRequestServersResponse );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

DEF_API_ISteamMatchmakingServers_request_filtered_server_list(002, Internet)

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->_ret;
    u_ISteamMatchmakingServerListResponse_106 *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_106( params->pRequestServersResponse, request );
    request->u_request = iface->RequestLANServerList( params->iApp, u_pRequestServersResponse );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->_ret;
    u_ISteamMatchmakingServerListResponse_106 *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_106( (void *)params->pRequestServersResponse, request );
    request->u_request = iface->RequestLANServerList( params->iApp, u_pRequestServersResponse );
    return 0;
}

DEF_API_ISteamMatchmakingServers_request_filtered_server_list(002, Friends)
DEF_API_ISteamMatchmakingServers_request_filtered_server_list(002, Favorites)
DEF_API_ISteamMatchmakingServers_request_filtered_server_list(002, History)
DEF_API_ISteamMatchmakingServers_request_filtered_server_list(002, Spectator)

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    gameserveritem_t_105 *ret = iface->GetServerDetails( request ? request->u_request : nullptr, params->iServer );
    if (ret) *params->_ret = *ret;
    else params->_ret = nullptr;
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    gameserveritem_t_105 *ret = iface->GetServerDetails( request ? request->u_request : nullptr, params->iServer );
    if (ret) *params->_ret = *ret;
    else params->_ret = nullptr;
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPingResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse( params->pRequestServersResponse );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPingResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse( (void *)params->pRequestServersResponse );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPlayersResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse( params->pRequestServersResponse );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPlayersResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse( (void *)params->pRequestServersResponse );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingRulesResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse( params->pRequestServersResponse );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingRulesResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse( (void *)params->pRequestServersResponse );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hServerListRequest;
    iface->ReleaseRequest( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hServerListRequest;
    iface->ReleaseRequest( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    iface->CancelQuery( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    iface->CancelQuery( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    iface->RefreshQuery( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    iface->RefreshQuery( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    params->_ret = iface->IsRefreshing( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    params->_ret = iface->IsRefreshing( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    params->_ret = iface->GetServerCount( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    params->_ret = iface->GetServerCount( request ? request->u_request : nullptr );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    iface->RefreshServer( request ? request->u_request : nullptr, params->iServer );
    return 0;
}

NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    struct server_list_request *request = (struct server_list_request *)params->hRequest;
    iface->RefreshServer( request ? request->u_request : nullptr, params->iServer );
    return 0;
}
