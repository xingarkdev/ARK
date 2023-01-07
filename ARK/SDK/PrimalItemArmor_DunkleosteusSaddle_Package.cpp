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
	 * 		Name   -> Function PrimalItemArmor_DunkleosteusSaddle.PrimalItemArmor_DunkleosteusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DunkleosteusSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_DunkleosteusSaddle_C::ExecuteUbergraph_PrimalItemArmor_DunkleosteusSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DunkleosteusSaddle.PrimalItemArmor_DunkleosteusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DunkleosteusSaddle");
		
		UPrimalItemArmor_DunkleosteusSaddle_C_ExecuteUbergraph_PrimalItemArmor_DunkleosteusSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_DunkleosteusSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_DunkleosteusSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_DunkleosteusSaddle.PrimalItemArmor_DunkleosteusSaddle_C");
		return ptr;
	}

}


