/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWrite( (const char *)params->pchFile, (const void *)params->pvData, params->cubData );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileRead( (const char *)params->pchFile, (void *)params->pvData, params->cubDataToRead );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileForget( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileDelete( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileShare( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( (const char *)params->pchFile, params->eRemoteStoragePlatform );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamOpen( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamOpen( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamWriteChunk( params->writeHandle, params->pvData, params->cubData );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamWriteChunk( params->writeHandle, (const void *)params->pvData, params->cubData );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamClose( params->writeHandle );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamClose( params->writeHandle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamCancel( params->writeHandle );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamCancel( params->writeHandle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileExists( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FilePersisted( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileSize( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( (const char *)params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, (int32_t *)params->pnFileSizeInBytes );
    params->_ret_size = params->_ret ? (strlen(params->_ret) + 1) : 0;
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetQuota( (int32_t *)params->pnTotalBytes, (int32_t *)params->puAvailableBytes );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent, params->unPriority );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent, params->unPriority );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, params->pnBytesDownloaded, params->pnBytesExpected );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, (int32_t *)params->pnBytesDownloaded, (int32_t *)params->pnBytesExpected );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead, params->cOffset );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, (void *)params->pvData, params->cubDataToRead, params->cOffset );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( (const char *)params->pchFile, 0 );
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    u_SteamParamStringArray_t u_pTags = *params->pTags;
    params->_ret = iface->PublishWorkshopFile( u_pchFile, u_pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, &u_pTags, params->eWorkshopFileType );
    *params->pTags = u_pTags;
    steamclient_free_path( u_pchFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
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

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( (const char *)params->pchFile, 0 );
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, u_pchFile );
    steamclient_free_path( u_pchFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( (const char *)params->pchFile, 0 );
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, u_pchFile );
    steamclient_free_path( u_pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, u_pchPreviewFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, u_pchPreviewFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, params->pchTitle );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, (const char *)params->pchTitle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, params->pchDescription );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, (const char *)params->pchDescription );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    u_SteamParamStringArray_t u_pTags = *params->pTags;
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, &u_pTags );
    *params->pTags = u_pTags;
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    w32_SteamParamStringArray_t *w_pTags = (w32_SteamParamStringArray_t *)params->pTags;
    u_SteamParamStringArray_t u_pTags = *w_pTags;
    u_pTags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_pTags->m_ppStrings, w_pTags->m_nNumStrings );
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, &u_pTags );
    free( u_pTags.m_ppStrings );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId, params->unMaxSecondsOld );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId, params->unMaxSecondsOld );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, params->pchChangeDescription );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, (const char *)params->pchChangeDescription );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    u_SteamParamStringArray_t u_pExcludedTags = *params->pExcludedTags;
    u_SteamParamStringArray_t u_pRequiredTags = *params->pRequiredTags;
    params->_ret = iface->EnumerateUserSharedWorkshopFiles( params->steamId, params->unStartIndex, &u_pRequiredTags, &u_pExcludedTags );
    *params->pExcludedTags = u_pExcludedTags;
    *params->pRequiredTags = u_pRequiredTags;
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
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

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    u_SteamParamStringArray_t u_pTags = *params->pTags;
    params->_ret = iface->PublishVideo( params->eVideoProvider, params->pchVideoAccount, params->pchVideoIdentifier, u_pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, &u_pTags );
    *params->pTags = u_pTags;
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pchPreviewFile, 0 );
    w32_SteamParamStringArray_t *w_pTags = (w32_SteamParamStringArray_t *)params->pTags;
    u_SteamParamStringArray_t u_pTags = *w_pTags;
    u_pTags.m_ppStrings = (const char **)wow64_convert_ptr_array( w_pTags->m_ppStrings, w_pTags->m_nNumStrings );
    params->_ret = iface->PublishVideo( params->eVideoProvider, (const char *)params->pchVideoAccount, (const char *)params->pchVideoIdentifier, u_pchPreviewFile, params->nConsumerAppId, (const char *)params->pchTitle, (const char *)params->pchDescription, params->eVisibility, &u_pTags );
    free( u_pTags.m_ppStrings );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    u_SteamParamStringArray_t u_pTags = *params->pTags;
    u_SteamParamStringArray_t u_pUserTags = *params->pUserTags;
    params->_ret = iface->EnumeratePublishedWorkshopFiles( params->eEnumerationType, params->unStartIndex, params->unCount, params->unDays, &u_pTags, &u_pUserTags );
    *params->pTags = u_pTags;
    *params->pUserTags = u_pUserTags;
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
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

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    char *u_pchLocation = steamclient_dos_to_unix_path( (const char *)params->pchLocation, 0 );
    params->_ret = iface->UGCDownloadToLocation( params->hContent, u_pchLocation, params->unPriority );
    steamclient_free_path( u_pchLocation );
    return 0;
}

NTSTATUS wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation( void *args )
{
    struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation_params *params = (struct wow64_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    char *u_pchLocation = steamclient_dos_to_unix_path( (const char *)params->pchLocation, 0 );
    params->_ret = iface->UGCDownloadToLocation( params->hContent, u_pchLocation, params->unPriority );
    steamclient_free_path( u_pchLocation );
    return 0;
}

