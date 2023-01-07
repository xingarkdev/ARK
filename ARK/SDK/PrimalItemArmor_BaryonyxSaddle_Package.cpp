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
	 * 		Name   -> Function PrimalItemArmor_BaryonyxSaddle.PrimalItemArmor_BaryonyxSaddle_C.ExecuteUbergraph_PrimalItemArmor_BaryonyxSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_BaryonyxSaddle_C::ExecuteUbergraph_PrimalItemArmor_BaryonyxSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BaryonyxSaddle.PrimalItemArmor_BaryonyxSaddle_C.ExecuteUbergraph_PrimalItemArmor_BaryonyxSaddle");
		
		UPrimalItemArmor_BaryonyxSaddle_C_ExecuteUbergraph_PrimalItemArmor_BaryonyxSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_BaryonyxSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_BaryonyxSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_BaryonyxSaddle.PrimalItemArmor_BaryonyxSaddle_C");
		return ptr;
	}

}


