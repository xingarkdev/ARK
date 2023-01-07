﻿/**
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
	 * 		Name   -> Function PrimalItemArmor_TerrorBirdSaddle.PrimalItemArmor_TerrorBirdSaddle_C.ExecuteUbergraph_PrimalItemArmor_TerrorBirdSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_TerrorBirdSaddle_C::ExecuteUbergraph_PrimalItemArmor_TerrorBirdSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TerrorBirdSaddle.PrimalItemArmor_TerrorBirdSaddle_C.ExecuteUbergraph_PrimalItemArmor_TerrorBirdSaddle");
		
		UPrimalItemArmor_TerrorBirdSaddle_C_ExecuteUbergraph_PrimalItemArmor_TerrorBirdSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_TerrorBirdSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_TerrorBirdSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TerrorBirdSaddle.PrimalItemArmor_TerrorBirdSaddle_C");
		return ptr;
	}

}


