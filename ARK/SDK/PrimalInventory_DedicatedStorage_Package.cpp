/**
 * Name: ARK
 * Version: 1.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPOnTransferAll
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   toInventory                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventory_DedicatedStorage_C::BPOnTransferAll(class UPrimalInventoryComponent* toInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPOnTransferAll");
		
		UPrimalInventory_DedicatedStorage_C_BPOnTransferAll_Params params {};
		params.toInventory = toInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPGetExtraItemDisplay
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShowExtraItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Description                                                (Parm, OutParm, ZeroConstructor)
	 * 		class FString                                      CustomString                                               (Parm, OutParm, ZeroConstructor)
	 * 		class UTexture2D*                                  EntryIcon                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterialInterface*                          EntryMaterial                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventory_DedicatedStorage_C::BPGetExtraItemDisplay(bool* bShowExtraItem, class FString* Description, class FString* CustomString, class UTexture2D** EntryIcon, class UMaterialInterface** EntryMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPGetExtraItemDisplay");
		
		UPrimalInventory_DedicatedStorage_C_BPGetExtraItemDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShowExtraItem != nullptr)
			*bShowExtraItem = params.bShowExtraItem;
		if (Description != nullptr)
			*Description = params.Description;
		if (CustomString != nullptr)
			*CustomString = params.CustomString;
		if (EntryIcon != nullptr)
			*EntryIcon = params.EntryIcon;
		if (EntryMaterial != nullptr)
			*EntryMaterial = params.EntryMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPAllowAddInventoryItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RequestedQuantity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOnlyAddAll                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventory_DedicatedStorage_C::BPAllowAddInventoryItem(class UPrimalItem* Item, int32_t RequestedQuantity, bool bOnlyAddAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPAllowAddInventoryItem");
		
		UPrimalInventory_DedicatedStorage_C_BPAllowAddInventoryItem_Params params {};
		params.Item = Item;
		params.RequestedQuantity = RequestedQuantity;
		params.bOnlyAddAll = bOnlyAddAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPRemoteInventoryGetMaxVisibleSlots
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumItems                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocal                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UPrimalInventory_DedicatedStorage_C::BPRemoteInventoryGetMaxVisibleSlots(int32_t NumItems, class AShooterPlayerController* PC, bool bIsLocal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPRemoteInventoryGetMaxVisibleSlots");
		
		UPrimalInventory_DedicatedStorage_C_BPRemoteInventoryGetMaxVisibleSlots_Params params {};
		params.NumItems = NumItems;
		params.PC = PC;
		params.bIsLocal = bIsLocal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.ExecuteUbergraph_PrimalInventory_DedicatedStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventory_DedicatedStorage_C::ExecuteUbergraph_PrimalInventory_DedicatedStorage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.ExecuteUbergraph_PrimalInventory_DedicatedStorage");
		
		UPrimalInventory_DedicatedStorage_C_ExecuteUbergraph_PrimalInventory_DedicatedStorage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventory_DedicatedStorage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventory_DedicatedStorage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C");
		return ptr;
	}

}


