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
	 * 		Name   -> Function PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C.GeneratedItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventoryBP_BaseAutoGenerateItems_C::GeneratedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C.GeneratedItems");
		
		UPrimalInventoryBP_BaseAutoGenerateItems_C_GeneratedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C.BPInitializeInventory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventoryBP_BaseAutoGenerateItems_C::BPInitializeInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C.BPInitializeInventory");
		
		UPrimalInventoryBP_BaseAutoGenerateItems_C_BPInitializeInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C.BPInventoryRefresh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventoryBP_BaseAutoGenerateItems_C::BPInventoryRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C.BPInventoryRefresh");
		
		UPrimalInventoryBP_BaseAutoGenerateItems_C_BPInventoryRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C.ExecuteUbergraph_PrimalInventoryBP_BaseAutoGenerateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_BaseAutoGenerateItems_C::ExecuteUbergraph_PrimalInventoryBP_BaseAutoGenerateItems(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C.ExecuteUbergraph_PrimalInventoryBP_BaseAutoGenerateItems");
		
		UPrimalInventoryBP_BaseAutoGenerateItems_C_ExecuteUbergraph_PrimalInventoryBP_BaseAutoGenerateItems_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_BaseAutoGenerateItems_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_BaseAutoGenerateItems_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C");
		return ptr;
	}

}


