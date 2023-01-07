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
	 * 		Name   -> Function PrimalItemConsumable_Seed_BaseBerry.PrimalItemConsumable_Seed_BaseBerry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_BaseBerry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Seed_BaseBerry_C::ExecuteUbergraph_PrimalItemConsumable_Seed_BaseBerry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_BaseBerry.PrimalItemConsumable_Seed_BaseBerry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_BaseBerry");
		
		UPrimalItemConsumable_Seed_BaseBerry_C_ExecuteUbergraph_PrimalItemConsumable_Seed_BaseBerry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Seed_BaseBerry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Seed_BaseBerry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_BaseBerry.PrimalItemConsumable_Seed_BaseBerry_C");
		return ptr;
	}

}


