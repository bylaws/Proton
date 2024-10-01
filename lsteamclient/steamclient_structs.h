#ifndef __STEAMCLIENT_STRUCTS_H
#define __STEAMCLIENT_STRUCTS_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include <windef.h>
#include <winbase.h>

#ifdef __cplusplus
#include <array>
extern "C"
{
#endif /* __cplusplus */

#ifdef __cplusplus
#define U64_ARRAY( type, count, name ) std::array<type, count> name
#define U32_ARRAY( type, count, name ) std::array<type, count> name
#define W64_ARRAY( type, count, name ) std::array<type, count> name
#define W32_ARRAY( type, count, name ) std::array<type, count> name
#else
#define U64_ARRAY( type, count, name ) type name[count]
#define U32_ARRAY( type, count, name ) type name[count]
#define W64_ARRAY( type, count, name ) type name[count]
#define W32_ARRAY( type, count, name ) type name[count]
#endif

#define W_CDECL   __cdecl
#define W_STDCALL __stdcall
#if defined(__i386__) || (defined(__x86_64__) && !defined(__arm64ec__))
#define U_CDECL   __attribute__((sysv_abi))
#define U_STDCALL __attribute__((sysv_abi))
#else
#define U_CDECL
#define U_STDCALL
#endif

#ifdef __i386__
#define U64_PTR( decl, name ) uint64_t name
#define U32_PTR( decl, name ) decl
#define W64_PTR( decl, name ) uint64_t name
#define W32_PTR( decl, name ) decl
// TMPHACK - needs to have this but work with 32 bit also
#define U_PTR U64_PTR
#define W_PTR W32_PTR
#endif

#if defined(__x86_64__) || defined(__aarch64__)
#define U64_PTR( decl, name ) decl
#define U32_PTR( decl, name ) uint32_t name
#define W64_PTR( decl, name ) decl
#define W32_PTR( decl, name ) uint32_t name
#define U_PTR U64_PTR
#define W_PTR W64_PTR
#endif

typedef struct { uint8_t _[8]; } CSteamID;
typedef struct { uint8_t _[8]; } CGameID;
typedef struct { uint8_t _[20]; } SteamIPAddress_t;
typedef struct { uint8_t _[120]; } ScePadTriggerEffectParam;
typedef char *SteamNetworkingErrMsg;

typedef struct SteamDatagramRelayAuthTicket SteamDatagramRelayAuthTicket;
typedef struct SteamDatagramHostedAddress SteamDatagramHostedAddress;
typedef struct SteamDatagramGameCoordinatorServerLogin SteamDatagramGameCoordinatorServerLogin;

#include "steamclient_structs_generated.h"

#define PATH_MAX 4096
extern char *g_tmppath;

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* __STEAMCLIENT_STRUCTS_H */
