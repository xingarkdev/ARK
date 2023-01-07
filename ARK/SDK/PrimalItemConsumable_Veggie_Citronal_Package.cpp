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
	 * 		Name   -> Function PrimalItemConsumable_Veggie_Citronal.PrimalItemConsumable_Veggie_Citronal_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Citronal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Veggie_Citronal_C::ExecuteUbergraph_PrimalItemConsumable_Veggie_Citronal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Veggie_Citronal.PrimalItemConsumable_Veggie_Citronal_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Citronal");
		
		UPrimalItemConsumable_Veggie_Citronal_C_ExecuteUbergraph_PrimalItemConsumable_Veggie_Citronal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Veggie_Citronal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Veggie_Citronal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Veggie_Citronal.PrimalItemConsumable_Veggie_Citronal_C");
		return ptr;
	}

}


