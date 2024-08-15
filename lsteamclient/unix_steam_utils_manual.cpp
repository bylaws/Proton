#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

template<typename TIface, typename TParams, bool WoW64>
static NTSTATUS ISteamUtils_GetAPICallResult( void *args )
{
    TParams *params = (TParams *)args;
    TIface *iface = (TIface *)params->linux_side;
    void *w_callback = (void *)params->pCallback;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, w_callback, &u_callback_len, WoW64 )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, (int8_t *)params->pbFailed );
    if (params->_ret && u_callback != w_callback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len, w_callback,
                               params->cubCallback, WoW64 );
        free( u_callback );
    }

    return 0;
}


#define DEF_API_ISteamUtils_GetAPICallResult(ver) \
    NTSTATUS ISteamUtils_SteamUtils ## ver ## _GetAPICallResult( void *args ) \
    { \
        return ISteamUtils_GetAPICallResult<u_ISteamUtils_SteamUtils ## ver, ISteamUtils_SteamUtils ## ver ## _GetAPICallResult_params, false>( args ); \
    } \
    NTSTATUS wow64_ISteamUtils_SteamUtils ## ver ## _GetAPICallResult( void *args ) \
    { \
        return ISteamUtils_GetAPICallResult<u_ISteamUtils_SteamUtils ## ver, wow64_ISteamUtils_SteamUtils ## ver ## _GetAPICallResult_params, true>( args ); \
    }

DEF_API_ISteamUtils_GetAPICallResult(002)
DEF_API_ISteamUtils_GetAPICallResult(004)
DEF_API_ISteamUtils_GetAPICallResult(005)
DEF_API_ISteamUtils_GetAPICallResult(006)
DEF_API_ISteamUtils_GetAPICallResult(007)
DEF_API_ISteamUtils_GetAPICallResult(008)
DEF_API_ISteamUtils_GetAPICallResult(009)
DEF_API_ISteamUtils_GetAPICallResult(010)
