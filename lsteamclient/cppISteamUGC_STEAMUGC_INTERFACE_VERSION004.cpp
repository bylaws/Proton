/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *(w32_SteamUGCDetails_t_128x *)params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *(w32_SteamUGCDetails_t_128x *)params->pDetails = u_pDetails;
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, (const char *)params->pTagName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, (const char *)params->pTagName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, (const char *)params->pMatchCloudFileName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, (const char *)params->pSearchText );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, (const char *)params->pchTitle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, (const char *)params->pchDescription );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    const u_SteamParamStringArray_t u_pTags = *params->pTags;
    params->_ret = iface->SetItemTags( params->updateHandle, &u_pTags );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    const u_SteamParamStringArray_t u_pTags = *(const w32_SteamParamStringArray_t *)params->pTags;
    params->_ret = iface->SetItemTags( params->updateHandle, &u_pTags );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    char *u_pszContentFolder = steamclient_dos_to_unix_path( (const char *)params->pszContentFolder, 0 );
    params->_ret = iface->SetItemContent( params->handle, u_pszContentFolder );
    steamclient_free_path( u_pszContentFolder );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    char *u_pszContentFolder = steamclient_dos_to_unix_path( (const char *)params->pszContentFolder, 0 );
    params->_ret = iface->SetItemContent( params->handle, u_pszContentFolder );
    steamclient_free_path( u_pszContentFolder );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    char *u_pszPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pszPreviewFile, 0 );
    params->_ret = iface->SetItemPreview( params->handle, u_pszPreviewFile );
    steamclient_free_path( u_pszPreviewFile );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    char *u_pszPreviewFile = steamclient_dos_to_unix_path( (const char *)params->pszPreviewFile, 0 );
    params->_ret = iface->SetItemPreview( params->handle, u_pszPreviewFile );
    steamclient_free_path( u_pszPreviewFile );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, (const char *)params->pchChangeNote );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, (uint64_t *)params->punBytesProcessed, (uint64_t *)params->punBytesTotal );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( (uint64_t *)params->pvecPublishedFileID, params->cMaxEntries );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
    steamclient_unix_path_to_dos_path( params->_ret, (const char *)params->pchFolder, (char *)params->pchFolder, params->cchFolderSize, 0 );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, (uint64_t *)params->punSizeOnDisk, (char *)params->pchFolder, params->cchFolderSize, (uint32_t *)params->punTimeStamp );
    steamclient_unix_path_to_dos_path( params->_ret, (const char *)params->pchFolder, (char *)params->pchFolder, params->cchFolderSize, 0 );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, (uint64_t *)params->punBytesDownloaded, (uint64_t *)params->punBytesTotal );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
    return 0;
}

NTSTATUS wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem( void *args )
{
    struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem_params *params = (struct wow64_ISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
    return 0;
}

