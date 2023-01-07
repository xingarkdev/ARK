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
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C.BPCrafted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_TekCanteenRefill_C::BPCrafted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C.BPCrafted");
		
		UPrimalItemConsumable_TekCanteenRefill_C_BPCrafted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_TekCanteenRefill_C::ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill");
		
		UPrimalItemConsumable_TekCanteenRefill_C_ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_TekCanteenRefill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_TekCanteenRefill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C");
		return ptr;
	}

}


