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
	 * 		Name   -> Function PrimalItemConsumable_Kibble_CarnoEgg.PrimalItemConsumable_Kibble_CarnoEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_CarnoEgg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Kibble_CarnoEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_CarnoEgg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_CarnoEgg.PrimalItemConsumable_Kibble_CarnoEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_CarnoEgg");
		
		UPrimalItemConsumable_Kibble_CarnoEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_CarnoEgg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Kibble_CarnoEgg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Kibble_CarnoEgg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_CarnoEgg.PrimalItemConsumable_Kibble_CarnoEgg_C");
		return ptr;
	}

}


