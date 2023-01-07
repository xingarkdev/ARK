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
	 * 		Name   -> Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowAddItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            anItemQuantityOverride                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRequestedByPlayer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventoryBP_EggIncubator_C::BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController* PC, class UPrimalItem* anItem, int32_t anItemQuantityOverride, bool bRequestedByPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowAddItems");
		
		UPrimalInventoryBP_EggIncubator_C_BPCustomRemoteInventoryAllowAddItems_Params params {};
		params.PC = PC;
		params.anItem = anItem;
		params.anItemQuantityOverride = anItemQuantityOverride;
		params.bRequestedByPlayer = bRequestedByPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowRemoveItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 anItemToTransfer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RequestedQuantity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRequestedByPlayer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRequestDropping                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventoryBP_EggIncubator_C::BPCustomRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer, int32_t RequestedQuantity, bool bRequestedByPlayer, bool bRequestDropping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowRemoveItems");
		
		UPrimalInventoryBP_EggIncubator_C_BPCustomRemoteInventoryAllowRemoveItems_Params params {};
		params.PC = PC;
		params.anItemToTransfer = anItemToTransfer;
		params.RequestedQuantity = RequestedQuantity;
		params.bRequestedByPlayer = bRequestedByPlayer;
		params.bRequestDropping = bRequestDropping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.InventoryCustomSortPredicate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 LeftItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 RightItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventoryBP_EggIncubator_C::InventoryCustomSortPredicate(class UPrimalItem* LeftItem, class UPrimalItem* RightItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.InventoryCustomSortPredicate");
		
		UPrimalInventoryBP_EggIncubator_C_InventoryCustomSortPredicate_Params params {};
		params.LeftItem = LeftItem;
		params.RightItem = RightItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPRemoteInventoryAllowRemoveItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 anItemToTransfer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventoryBP_EggIncubator_C::BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPRemoteInventoryAllowRemoveItems");
		
		UPrimalInventoryBP_EggIncubator_C_BPRemoteInventoryAllowRemoveItems_Params params {};
		params.PC = PC;
		params.anItemToTransfer = anItemToTransfer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemRemoved
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_EggIncubator_C::BPNotifyItemRemoved(class UPrimalItem* anItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemRemoved");
		
		UPrimalInventoryBP_EggIncubator_C_BPNotifyItemRemoved_Params params {};
		params.anItem = anItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemAdded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_EggIncubator_C::BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemAdded");
		
		UPrimalInventoryBP_EggIncubator_C_BPNotifyItemAdded_Params params {};
		params.anItem = anItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.ExecuteUbergraph_PrimalInventoryBP_EggIncubator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_EggIncubator_C::ExecuteUbergraph_PrimalInventoryBP_EggIncubator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.ExecuteUbergraph_PrimalInventoryBP_EggIncubator");
		
		UPrimalInventoryBP_EggIncubator_C_ExecuteUbergraph_PrimalInventoryBP_EggIncubator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggRemoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_EggIncubator_C::OnFertilizedEggRemoved__DelegateSignature(class UPrimalItemConsumable_Egg_C* eggItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggRemoved__DelegateSignature");
		
		UPrimalInventoryBP_EggIncubator_C_OnFertilizedEggRemoved__DelegateSignature_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggAdded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_EggIncubator_C::OnFertilizedEggAdded__DelegateSignature(class UPrimalItemConsumable_Egg_C* eggItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggAdded__DelegateSignature");
		
		UPrimalInventoryBP_EggIncubator_C_OnFertilizedEggAdded__DelegateSignature_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_EggIncubator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_EggIncubator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C");
		return ptr;
	}

}


