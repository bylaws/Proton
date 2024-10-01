/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultStatus( params->resultHandle );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultStatus( params->resultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultItems( params->resultHandle, params->pOutItemsArray, params->punOutItemsArraySize );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultItems( params->resultHandle, (SteamItemDetails_t *)params->pOutItemsArray, (uint32_t *)params->punOutItemsArraySize );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultItemProperty( params->resultHandle, params->unItemIndex, params->pchPropertyName, params->pchValueBuffer, params->punValueBufferSizeOut );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultItemProperty( params->resultHandle, params->unItemIndex, (const char *)params->pchPropertyName, (char *)params->pchValueBuffer, (uint32_t *)params->punValueBufferSizeOut );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultTimestamp( params->resultHandle );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultTimestamp( params->resultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->CheckResultSteamID( params->resultHandle, params->steamIDExpected );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->CheckResultSteamID( params->resultHandle, params->steamIDExpected );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    iface->DestroyResult( params->resultHandle );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    iface->DestroyResult( params->resultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetAllItems( params->pResultHandle );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetAllItems( (int32_t *)params->pResultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemsByID( params->pResultHandle, params->pInstanceIDs, params->unCountInstanceIDs );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemsByID( (int32_t *)params->pResultHandle, (const uint64_t *)params->pInstanceIDs, params->unCountInstanceIDs );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SerializeResult( params->resultHandle, params->pOutBuffer, params->punOutBufferSize );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SerializeResult( params->resultHandle, (void *)params->pOutBuffer, (uint32_t *)params->punOutBufferSize );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->DeserializeResult( params->pOutResultHandle, params->pBuffer, params->unBufferSize, params->bRESERVED_MUST_BE_FALSE );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->DeserializeResult( (int32_t *)params->pOutResultHandle, (const void *)params->pBuffer, params->unBufferSize, params->bRESERVED_MUST_BE_FALSE );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GenerateItems( params->pResultHandle, params->pArrayItemDefs, params->punArrayQuantity, params->unArrayLength );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GenerateItems( (int32_t *)params->pResultHandle, (const int32_t *)params->pArrayItemDefs, (const uint32_t *)params->punArrayQuantity, params->unArrayLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GrantPromoItems( params->pResultHandle );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GrantPromoItems( (int32_t *)params->pResultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->AddPromoItem( params->pResultHandle, params->itemDef );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->AddPromoItem( (int32_t *)params->pResultHandle, params->itemDef );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->AddPromoItems( params->pResultHandle, params->pArrayItemDefs, params->unArrayLength );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->AddPromoItems( (int32_t *)params->pResultHandle, (const int32_t *)params->pArrayItemDefs, params->unArrayLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->ConsumeItem( params->pResultHandle, params->itemConsume, params->unQuantity );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->ConsumeItem( (int32_t *)params->pResultHandle, params->itemConsume, params->unQuantity );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->ExchangeItems( params->pResultHandle, params->pArrayGenerate, params->punArrayGenerateQuantity, params->unArrayGenerateLength, params->pArrayDestroy, params->punArrayDestroyQuantity, params->unArrayDestroyLength );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->ExchangeItems( (int32_t *)params->pResultHandle, (const int32_t *)params->pArrayGenerate, (const uint32_t *)params->punArrayGenerateQuantity, params->unArrayGenerateLength, (const uint64_t *)params->pArrayDestroy, (const uint32_t *)params->punArrayDestroyQuantity, params->unArrayDestroyLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->TransferItemQuantity( params->pResultHandle, params->itemIdSource, params->unQuantity, params->itemIdDest );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->TransferItemQuantity( (int32_t *)params->pResultHandle, params->itemIdSource, params->unQuantity, params->itemIdDest );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    iface->SendItemDropHeartbeat(  );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    iface->SendItemDropHeartbeat(  );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->TriggerItemDrop( params->pResultHandle, params->dropListDefinition );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->TriggerItemDrop( (int32_t *)params->pResultHandle, params->dropListDefinition );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->TradeItems( params->pResultHandle, params->steamIDTradePartner, params->pArrayGive, params->pArrayGiveQuantity, params->nArrayGiveLength, params->pArrayGet, params->pArrayGetQuantity, params->nArrayGetLength );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->TradeItems( (int32_t *)params->pResultHandle, params->steamIDTradePartner, (const uint64_t *)params->pArrayGive, (const uint32_t *)params->pArrayGiveQuantity, params->nArrayGiveLength, (const uint64_t *)params->pArrayGet, (const uint32_t *)params->pArrayGetQuantity, params->nArrayGetLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->LoadItemDefinitions(  );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->LoadItemDefinitions(  );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionIDs( params->pItemDefIDs, params->punItemDefIDsArraySize );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionIDs( (int32_t *)params->pItemDefIDs, (uint32_t *)params->punItemDefIDsArraySize );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionProperty( params->iDefinition, params->pchPropertyName, params->pchValueBuffer, params->punValueBufferSizeOut );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionProperty( params->iDefinition, (const char *)params->pchPropertyName, (char *)params->pchValueBuffer, (uint32_t *)params->punValueBufferSizeOut );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->RequestEligiblePromoItemDefinitionsIDs( params->steamID );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->RequestEligiblePromoItemDefinitionsIDs( params->steamID );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetEligiblePromoItemDefinitionIDs( params->steamID, params->pItemDefIDs, params->punItemDefIDsArraySize );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetEligiblePromoItemDefinitionIDs( params->steamID, (int32_t *)params->pItemDefIDs, (uint32_t *)params->punItemDefIDsArraySize );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->StartPurchase( params->pArrayItemDefs, params->punArrayQuantity, params->unArrayLength );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->StartPurchase( (const int32_t *)params->pArrayItemDefs, (const uint32_t *)params->punArrayQuantity, params->unArrayLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->RequestPrices(  );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->RequestPrices(  );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetNumItemsWithPrices(  );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetNumItemsWithPrices(  );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemsWithPrices( params->pArrayItemDefs, params->pCurrentPrices, params->pBasePrices, params->unArrayLength );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemsWithPrices( (int32_t *)params->pArrayItemDefs, (uint64_t *)params->pCurrentPrices, (uint64_t *)params->pBasePrices, params->unArrayLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemPrice( params->iDefinition, params->pCurrentPrice, params->pBasePrice );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemPrice( params->iDefinition, (uint64_t *)params->pCurrentPrice, (uint64_t *)params->pBasePrice );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->StartUpdateProperties(  );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->StartUpdateProperties(  );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->RemoveProperty( params->handle, params->nItemID, params->pchPropertyName );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->RemoveProperty( params->handle, params->nItemID, (const char *)params->pchPropertyName );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->pchPropertyValue );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, (const char *)params->pchPropertyName, (const char *)params->pchPropertyValue );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->bValue );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, (const char *)params->pchPropertyName, params->bValue );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->nValue );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, (const char *)params->pchPropertyName, params->nValue );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->flValue );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, (const char *)params->pchPropertyName, params->flValue );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SubmitUpdateProperties( params->handle, params->pResultHandle );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SubmitUpdateProperties( params->handle, (int32_t *)params->pResultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->InspectItem( params->pResultHandle, params->pchItemToken );
    return 0;
}

NTSTATUS wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem( void *args )
{
    struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem_params *params = (struct wow64_ISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->InspectItem( (int32_t *)params->pResultHandle, (const char *)params->pchItemToken );
    return 0;
}

