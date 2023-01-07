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
	 * 		Name   -> Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPCraftingFinishedNotification
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 itemToBeCrafted                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_TekReplicator_C::BPCraftingFinishedNotification(class UPrimalItem* itemToBeCrafted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPCraftingFinishedNotification");
		
		UPrimalInventoryBP_TekReplicator_C_BPCraftingFinishedNotification_Params params {};
		params.itemToBeCrafted = itemToBeCrafted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPRemoteInventoryAllowViewing
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventoryBP_TekReplicator_C::BPRemoteInventoryAllowViewing(class AShooterPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPRemoteInventoryAllowViewing");
		
		UPrimalInventoryBP_TekReplicator_C_BPRemoteInventoryAllowViewing_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.ExecuteUbergraph_PrimalInventoryBP_TekReplicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_TekReplicator_C::ExecuteUbergraph_PrimalInventoryBP_TekReplicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.ExecuteUbergraph_PrimalInventoryBP_TekReplicator");
		
		UPrimalInventoryBP_TekReplicator_C_ExecuteUbergraph_PrimalInventoryBP_TekReplicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_TekReplicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_TekReplicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C");
		return ptr;
	}

}


