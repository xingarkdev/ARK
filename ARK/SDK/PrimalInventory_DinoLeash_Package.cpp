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
	 * 		Name   -> Function PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C.BPPreInitDefaultInventory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventory_DinoLeash_C::BPPreInitDefaultInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C.BPPreInitDefaultInventory");
		
		UPrimalInventory_DinoLeash_C_BPPreInitDefaultInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C.ExecuteUbergraph_PrimalInventory_DinoLeash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventory_DinoLeash_C::ExecuteUbergraph_PrimalInventory_DinoLeash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C.ExecuteUbergraph_PrimalInventory_DinoLeash");
		
		UPrimalInventory_DinoLeash_C_ExecuteUbergraph_PrimalInventory_DinoLeash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventory_DinoLeash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventory_DinoLeash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C");
		return ptr;
	}

}


