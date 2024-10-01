/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWrite( (const char *)params->pchFile, (const void *)params->pvData, params->cubData );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileRead( (const char *)params->pchFile, (void *)params->pvData, params->cubDataToRead );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteAsync( params->pchFile, params->pvData, params->cubData );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteAsync( (const char *)params->pchFile, (const void *)params->pvData, params->cubData );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileReadAsync( params->pchFile, params->nOffset, params->cubToRead );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileReadAsync( (const char *)params->pchFile, params->nOffset, params->cubToRead );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileReadAsyncComplete( params->hReadCall, params->pvBuffer, params->cubToRead );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileReadAsyncComplete( params->hReadCall, (void *)params->pvBuffer, params->cubToRead );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileForget( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileDelete( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileShare( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( (const char *)params->pchFile, params->eRemoteStoragePlatform );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteStreamOpen( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteStreamOpen( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteStreamWriteChunk( params->writeHandle, params->pvData, params->cubData );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteStreamWriteChunk( params->writeHandle, (const void *)params->pvData, params->cubData );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteStreamClose( params->writeHandle );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteStreamClose( params->writeHandle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteStreamCancel( params->writeHandle );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileWriteStreamCancel( params->writeHandle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FileExists( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->FilePersisted( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetFileSize( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, (int32_t *)params->pnFileSizeInBytes );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQuota( (uint64_t *)params->pnTotalBytes, (uint64_t *)params->puAvailableBytes );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent, params->unPriority );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent, params->unPriority );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, params->pnBytesDownloaded, params->pnBytesExpected );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, (int32_t *)params->pnBytesDownloaded, (int32_t *)params->pnBytesExpected );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead, params->cOffset, params->eAction );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, (void *)params->pvData, params->cubDataToRead, params->cOffset, params->eAction );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( (const char *)params->pchFile, 0 );
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    u_SteamParamStringArray_t u_pTags = *params->pTags;
    params->_ret = iface->PublishWorkshopFile( u_pchFile, u_pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, &u_pTags, params->eWorkshopFileType );
    *params->pTags = u_pTags;
    steamclient_free_path( u_pchFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( (const char *)params->pchFile, 0 );
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    w32_SteamParamStringArray_t *w_pTags = (w32_SteamParamStringArray_t *)params->pTags;
    u_SteamParamStringArray_t u_pTags = *w_pTags;
    u_pTags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_pTags->m_ppStrings, w_pTags->m_nNumStrings );
    params->_ret = iface->PublishWorkshopFile( u_pchFile, u_pchPreviewFile, params->nConsumerAppId, (const char *)params->pchTitle, (const char *)params->pchDescription, params->eVisibility, &u_pTags, params->eWorkshopFileType );
    free( u_pTags.m_ppStrings );
    steamclient_free_path( u_pchFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( (const char *)params->pchFile, 0 );
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, u_pchFile );
    steamclient_free_path( u_pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( (const char *)params->pchFile, 0 );
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, u_pchFile );
    steamclient_free_path( u_pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, u_pchPreviewFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, u_pchPreviewFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, params->pchTitle );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, (const char *)params->pchTitle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, params->pchDescription );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, (const char *)params->pchDescription );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    u_SteamParamStringArray_t u_pTags = *params->pTags;
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, &u_pTags );
    *params->pTags = u_pTags;
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    w32_SteamParamStringArray_t *w_pTags = (w32_SteamParamStringArray_t *)params->pTags;
    u_SteamParamStringArray_t u_pTags = *w_pTags;
    u_pTags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_pTags->m_ppStrings, w_pTags->m_nNumStrings );
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, &u_pTags );
    free( u_pTags.m_ppStrings );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId, params->unMaxSecondsOld );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId, params->unMaxSecondsOld );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, params->pchChangeDescription );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, (const char *)params->pchChangeDescription );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    u_SteamParamStringArray_t u_pExcludedTags = *params->pExcludedTags;
    u_SteamParamStringArray_t u_pRequiredTags = *params->pRequiredTags;
    params->_ret = iface->EnumerateUserSharedWorkshopFiles( params->steamId, params->unStartIndex, &u_pRequiredTags, &u_pExcludedTags );
    *params->pExcludedTags = u_pExcludedTags;
    *params->pRequiredTags = u_pRequiredTags;
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    w32_SteamParamStringArray_t *w_pExcludedTags = (w32_SteamParamStringArray_t *)params->pExcludedTags;
    u_SteamParamStringArray_t u_pExcludedTags = *w_pExcludedTags;
    u_pExcludedTags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_pExcludedTags->m_ppStrings, w_pExcludedTags->m_nNumStrings );
    w32_SteamParamStringArray_t *w_pRequiredTags = (w32_SteamParamStringArray_t *)params->pRequiredTags;
    u_SteamParamStringArray_t u_pRequiredTags = *w_pRequiredTags;
    u_pRequiredTags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_pRequiredTags->m_ppStrings, w_pRequiredTags->m_nNumStrings );
    params->_ret = iface->EnumerateUserSharedWorkshopFiles( params->steamId, params->unStartIndex, &u_pRequiredTags, &u_pExcludedTags );
    free( u_pExcludedTags.m_ppStrings );
    free( u_pRequiredTags.m_ppStrings );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    u_SteamParamStringArray_t u_pTags = *params->pTags;
    params->_ret = iface->PublishVideo( params->eVideoProvider, params->pchVideoAccount, params->pchVideoIdentifier, u_pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, &u_pTags );
    *params->pTags = u_pTags;
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    w32_SteamParamStringArray_t *w_pTags = (w32_SteamParamStringArray_t *)params->pTags;
    u_SteamParamStringArray_t u_pTags = *w_pTags;
    u_pTags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_pTags->m_ppStrings, w_pTags->m_nNumStrings );
    params->_ret = iface->PublishVideo( params->eVideoProvider, (const char *)params->pchVideoAccount, (const char *)params->pchVideoIdentifier, u_pchPreviewFile, params->nConsumerAppId, (const char *)params->pchTitle, (const char *)params->pchDescription, params->eVisibility, &u_pTags );
    free( u_pTags.m_ppStrings );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    u_SteamParamStringArray_t u_pTags = *params->pTags;
    u_SteamParamStringArray_t u_pUserTags = *params->pUserTags;
    params->_ret = iface->EnumeratePublishedWorkshopFiles( params->eEnumerationType, params->unStartIndex, params->unCount, params->unDays, &u_pTags, &u_pUserTags );
    *params->pTags = u_pTags;
    *params->pUserTags = u_pUserTags;
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    w32_SteamParamStringArray_t *w_pTags = (w32_SteamParamStringArray_t *)params->pTags;
    u_SteamParamStringArray_t u_pTags = *w_pTags;
    u_pTags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_pTags->m_ppStrings, w_pTags->m_nNumStrings );
    w32_SteamParamStringArray_t *w_pUserTags = (w32_SteamParamStringArray_t *)params->pUserTags;
    u_SteamParamStringArray_t u_pUserTags = *w_pUserTags;
    u_pUserTags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_pUserTags->m_ppStrings, w_pUserTags->m_nNumStrings );
    params->_ret = iface->EnumeratePublishedWorkshopFiles( params->eEnumerationType, params->unStartIndex, params->unCount, params->unDays, &u_pTags, &u_pUserTags );
    free( u_pTags.m_ppStrings );
    free( u_pUserTags.m_ppStrings );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchLocation = steamclient_dos_to_unix_path( (const char *)params->pchLocation, 0 );
    params->_ret = iface->UGCDownloadToLocation( params->hContent, u_pchLocation, params->unPriority );
    steamclient_free_path( u_pchLocation );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    char *u_pchLocation = steamclient_dos_to_unix_path( (const char *)params->pchLocation, 0 );
    params->_ret = iface->UGCDownloadToLocation( params->hContent, u_pchLocation, params->unPriority );
    steamclient_free_path( u_pchLocation );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetLocalFileChangeCount(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetLocalFileChangeCount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetLocalFileChange( params->iFile, params->pEChangeType, params->pEFilePathType );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetLocalFileChange( params->iFile, (uint32_t *)params->pEChangeType, (uint32_t *)params->pEFilePathType );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->BeginFileWriteBatch(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->BeginFileWriteBatch(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->EndFileWriteBatch(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->EndFileWriteBatch(  );
    return 0;
}

