#ifndef __STEAMCLIENT_UNIXLIB_H
#define __STEAMCLIENT_UNIXLIB_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <assert.h>

#include <windef.h>
#include <winbase.h>
#include <winternl.h>

#include "steamclient_structs.h"

#define TEMP_PATH_BUFFER_LENGTH 4096

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#include "wine/unixlib.h"

#include <pshpack1.h>

struct steamclient_init_params
{
    W_PTR(char *g_tmppath, g_tmppath);
    W_PTR(const char *steam_app_id, steam_app_id);
    int8_t steam_app_id_unset;
    W_PTR(const char *ignore_child_processes, ignore_child_processes);
    int8_t ignore_child_processes_unset;
};

struct wow64_steamclient_init_params
{
    W32_PTR(char *g_tmppath, g_tmppath);
    W32_PTR(const char *steam_app_id, steam_app_id);
    int8_t steam_app_id_unset;
    W32_PTR(const char *ignore_child_processes, ignore_child_processes);
    int8_t ignore_child_processes_unset;
};

struct bufcache_key {
    U_PTR(const void *buf, buf);
    uint32_t size;
};

struct steamclient_bufcache_get_params {
    U_PTR(void *ret, ret);
    struct bufcache_key key;
};

struct steamclient_bufcache_put_params {
    U_PTR(void *mem, mem);
    U_PTR(void *ret, ret);
    struct bufcache_key key;
};

enum callback_type
{
    SOCKETS_DEBUG_OUTPUT = 1,
    WARNING_MESSAGE_HOOK,
    CALL_CDECL_FUNC_DATA,
    CALL_IFACE_VTABLE_0_0,
    CALL_IFACE_VTABLE_0_1,
    CALL_IFACE_VTABLE_0_2,
    CALL_IFACE_VTABLE_1_0,
    CALL_IFACE_VTABLE_1_1,
    CALL_IFACE_VTABLE_1_2,
    CALL_IFACE_VTABLE_2_0,
    CALL_IFACE_VTABLE_2_1,
    CALL_IFACE_VTABLE_2_2,
    CALL_IFACE_VTABLE_0_SERVER_RESPONDED,
    CALL_IFACE_VTABLE_0_ADD_PLAYER_TO_LIST,
    CALL_IFACE_VTABLE_0_RULES_RESPONDED,
};

struct callback
{
    enum callback_type type;
    uint32_t size;

    union
    {
        struct
        {
            U_PTR(void (*W_CDECL pfnFunc)( uint32_t, const char * ), pfnFunc);
            uint32_t type;
            const char msg[1];
        } sockets_debug_output;

        struct
        {
            U_PTR(void (*W_CDECL pFunction)( int32_t, const char * ), pFunction);
            int32_t severity;
            const char msg[1];
        } warning_message_hook;

        struct
        {
            U_PTR(void (*W_CDECL pFunc)( void * ), pFunc);
            unsigned char data[1];
        } call_cdecl_func_data;

        struct
        {
            U_PTR(struct w_steam_iface *iface, iface);
            uint64_t arg0;
            uint64_t arg1;
        } call_iface_vtable;

        struct
        {
            U_PTR(struct w_steam_iface *iface, iface);
            gameserveritem_t_105 server[];
        } server_responded;

        struct
        {
            U_PTR(struct w_steam_iface *iface, iface);
            int32_t score;
            float time_played;
            const char name[1];
        } add_player_to_list;

        struct
        {
            U_PTR(struct w_steam_iface *iface, iface);
            const char rule_and_value[1];
        } rules_responded;
    };
};

struct steamclient_next_callback_params
{
    int8_t _ret;
    int8_t pad[7];
    U_PTR(struct callback *callback, callback);
    uint32_t size;
};

struct steamclient_CreateInterface_params
{
    U_PTR(void *_ret, _ret);
    W_PTR(const char *name, name);
    W_PTR(int *return_code, return_code);
};

struct wow64_steamclient_CreateInterface_params
{
    U_PTR(void *_ret, _ret);
    W32_PTR(const char *name, name);
    W32_PTR(int *return_code, return_code);
};

struct steamclient_Steam_GetAPICallResult_params
{
    int8_t _ret;
    int32_t pipe;
    uint64_t call;
    W_PTR(void *w_callback, w_callback);
    int w_callback_len;
    int id;
    W_PTR(int8_t *failed, failed);
};

struct wow64_steamclient_Steam_GetAPICallResult_params
{
    int8_t _ret;
    int32_t pipe;
    uint64_t call;
    W32_PTR(void *w_callback, w_callback);
    int w_callback_len;
    int id;
    W32_PTR(int8_t *failed, failed);
};

struct steamclient_Steam_BGetCallback_params
{
    int8_t _ret;
    uint32_t pipe;
    W_PTR(w_CallbackMsg_t *w_msg, w_msg);
    W_PTR(int32_t *ignored, ignored);
    U_PTR(u_CallbackMsg_t *u_msg, u_msg);
};

struct wow64_steamclient_Steam_BGetCallback_params
{
    int8_t _ret;
    uint32_t pipe;
    W32_PTR(w32_CallbackMsg_t *w_msg, w_msg);
    W32_PTR(int32_t *ignored, ignored);
    U_PTR(u_CallbackMsg_t *u_msg, u_msg);
};

struct steamclient_callback_message_receive_params
{
    U_PTR(u_CallbackMsg_t *u_msg, u_msg);
    W_PTR(w_CallbackMsg_t *w_msg, w_msg);
};

struct wow64_steamclient_callback_message_receive_params
{
    U_PTR(u_CallbackMsg_t *u_msg, u_msg);
    W32_PTR(w32_CallbackMsg_t *w_msg, w_msg);
};

struct steamclient_Steam_FreeLastCallback_params
{
    int8_t _ret;
    uint32_t pipe;
};

struct steamclient_Steam_ReleaseThreadLocalMemory_params
{
    int thread_exit;
};

struct steamclient_Steam_IsKnownInterface_params
{
    int8_t _ret;
    W_PTR(const char *version, version);
};

struct wow64_steamclient_Steam_IsKnownInterface_params
{
    int8_t _ret;
    W32_PTR(const char *version, version);
};

struct steamclient_Steam_NotifyMissingInterface_params
{
    int32_t pipe;
    W_PTR(const char *version, version);
};

struct wow64_steamclient_Steam_NotifyMissingInterface_params
{
    int32_t pipe;
    W32_PTR(const char *version, version);
};

struct steamclient_networking_messages_receive_144_params
{
    uint32_t count;
    W_PTR(w_SteamNetworkingMessage_t_144 **w_msgs, w_msgs);
};

struct wow64_steamclient_networking_messages_receive_144_params
{
    uint32_t count;
    W32_PTR(w32_SteamNetworkingMessage_t_144 **w_msgs, w_msgs);
};

struct steamclient_networking_messages_receive_147_params
{
    uint32_t count;
    W_PTR(w_SteamNetworkingMessage_t_147 **w_msgs, w_msgs);
};

struct wow64_steamclient_networking_messages_receive_147_params
{
    uint32_t count;
    W32_PTR(w32_SteamNetworkingMessage_t_147 **w_msgs, w_msgs);
};

struct steamclient_networking_messages_receive_153a_params
{
    uint32_t count;
    W_PTR(w_SteamNetworkingMessage_t_153a **w_msgs, w_msgs);
};

struct wow64_steamclient_networking_messages_receive_153a_params
{
    uint32_t count;
    W32_PTR(w32_SteamNetworkingMessage_t_153a **w_msgs, w_msgs);
};

struct steamclient_networking_message_release_147_params
{
    W_PTR(w_SteamNetworkingMessage_t_147 *w_msg, w_msg);
};

struct wow64_steamclient_networking_message_release_147_params
{
    W32_PTR(w32_SteamNetworkingMessage_t_147 *w_msg, w_msg);
};

struct steamclient_networking_message_release_153a_params
{
    W_PTR(w_SteamNetworkingMessage_t_153a *w_msg, w_msg);
};

struct wow64_steamclient_networking_message_release_153a_params
{
    W32_PTR(w32_SteamNetworkingMessage_t_153a *w_msg, w_msg);
};


struct networking_message_pool;
struct networking_message
{
    struct networking_message_pool *pool;
    void **p_data;
    uint32_t *p_size;

    union
    {
        U_PTR(u_SteamNetworkingMessage_t_144 *u_msg_144, u_msg_144);
        U_PTR(u_SteamNetworkingMessage_t_147 *u_msg_147, u_msg_147);
        U_PTR(u_SteamNetworkingMessage_t_153a *u_msg_153a, u_msg_153a);
    };
    union
    {
        w_SteamNetworkingMessage_t_144 w_msg_144;
        w_SteamNetworkingMessage_t_147 w_msg_147;
        w_SteamNetworkingMessage_t_153a w_msg_153a;
    };
};

struct wow64_networking_message
{
    W32_PTR(struct networking_message_pool *pool, pool);
    W32_PTR(void **p_data, p_data);
    W32_PTR(uint32_t *p_size, p_size);

    union
    {
        U_PTR(u_SteamNetworkingMessage_t_144 *u_msg_144, u_msg_144);
        U_PTR(u_SteamNetworkingMessage_t_147 *u_msg_147, u_msg_147);
        U_PTR(u_SteamNetworkingMessage_t_153a *u_msg_153a, u_msg_153a);
    };
    union
    {
        w32_SteamNetworkingMessage_t_144 w_msg_144;
        w32_SteamNetworkingMessage_t_147 w_msg_147;
        w32_SteamNetworkingMessage_t_153a w_msg_153a;
    };
};

struct server_list_request
{
    U_PTR(void *u_request, u_request);
#ifndef WINE_UNIX_LIB
    gameserveritem_t_105 *details_array;
#endif
};

#include <poppack.h>

NTSTATUS steamclient_call( unsigned int code, void *args, const char *name );

#define STEAMCLIENT_CALL( code, args )                                     \
    ({                                                                     \
        NTSTATUS status = steamclient_call( unix_ ## code, args, #code );  \
        assert( !status );                                                 \
        status;                                                            \
    })

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#include "unixlib_generated.h"

#endif /* __STEAMCLIENT_UNIXLIB_H */
