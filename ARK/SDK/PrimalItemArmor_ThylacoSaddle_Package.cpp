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
	 * 		Name   -> Function PrimalItemArmor_ThylacoSaddle.PrimalItemArmor_ThylacoSaddle_C.ExecuteUbergraph_PrimalItemArmor_ThylacoSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_ThylacoSaddle_C::ExecuteUbergraph_PrimalItemArmor_ThylacoSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ThylacoSaddle.PrimalItemArmor_ThylacoSaddle_C.ExecuteUbergraph_PrimalItemArmor_ThylacoSaddle");
		
		UPrimalItemArmor_ThylacoSaddle_C_ExecuteUbergraph_PrimalItemArmor_ThylacoSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_ThylacoSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_ThylacoSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ThylacoSaddle.PrimalItemArmor_ThylacoSaddle_C");
		return ptr;
	}

}


