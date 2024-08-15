#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

gameserveritem_t_105 * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails(struct w_steam_iface *_this, uint32_t eType, int32_t iServer)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
        .iServer = iServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails, &params );
    return bufcache_obtain( params._ret, sizeof(gameserveritem_t_105) );
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct server_list_request *request = HeapAlloc( GetProcessHeap(), 0, sizeof(struct server_list_request) );
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = request,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    request->details_array = NULL;
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList, &params );
    if (!request->u_request)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList(struct w_steam_iface *_this, uint32_t iApp, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct server_list_request *request = HeapAlloc( GetProcessHeap(), 0, sizeof(struct server_list_request) );
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = request,
        .iApp = iApp,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    request->details_array = NULL;
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList, &params );
    if (!request->u_request)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct server_list_request *request = HeapAlloc( GetProcessHeap(), 0, sizeof(struct server_list_request) );
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = request,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    request->details_array = NULL;
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList, &params );
    if (!request->u_request)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct server_list_request *request = HeapAlloc( GetProcessHeap(), 0, sizeof(struct server_list_request) );
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = request,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    request->details_array = NULL;
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList, &params );
    if (!request->u_request)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct server_list_request *request = HeapAlloc( GetProcessHeap(), 0, sizeof(struct server_list_request) );
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = request,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    request->details_array = NULL;
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList, &params );
    if (!request->u_request)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct server_list_request *request = HeapAlloc( GetProcessHeap(), 0, sizeof(struct server_list_request) );
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = request,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    request->details_array = NULL;
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList, &params );
    if (!request->u_request)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

gameserveritem_t_105 * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails(struct w_steam_iface *_this, void *hRequest, int32_t iServer)
{
    struct server_list_request *request = hRequest;
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params get_count_params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .iServer = iServer,
    };
    gameserveritem_t_105 *details_array = request ? request->details_array : NULL;
    TRACE("%p\n", _this);

    if (!request)
    {
        ERR("no request\n");
        return NULL;
    }

    if (!details_array)
    {
        STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount, &get_count_params );
        if (!get_count_params._ret) return NULL;

        request->details_array = details_array = HeapAlloc( GetProcessHeap(), 0, sizeof(gameserveritem_t_105) * get_count_params._ret );
    }

    params._ret = (U_PTR(gameserveritem_t_105 *,))&details_array[iServer];
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails, &params );
    return (gameserveritem_t_105 *)params._ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest( struct w_steam_iface *_this, void *hServerListRequest )
{
    struct server_list_request *request = hServerListRequest;
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hServerListRequest = hServerListRequest,
    };

    TRACE("%p\n", _this);
    execute_pending_callbacks(); /* execute any pending callbacks that might still need to use the request */

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest, &params );

    if (request) HeapFree( GetProcessHeap(), 0, request->details_array );
    HeapFree( GetProcessHeap(), 0, request );
}


