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
	 * 		Name   -> Function PrimalItemArmor_Paracer_Saddle.PrimalItemArmor_Paracer_Saddle_C.ExecuteUbergraph_PrimalItemArmor_Paracer_Saddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_Paracer_Saddle_C::ExecuteUbergraph_PrimalItemArmor_Paracer_Saddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Paracer_Saddle.PrimalItemArmor_Paracer_Saddle_C.ExecuteUbergraph_PrimalItemArmor_Paracer_Saddle");
		
		UPrimalItemArmor_Paracer_Saddle_C_ExecuteUbergraph_PrimalItemArmor_Paracer_Saddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_Paracer_Saddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_Paracer_Saddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_Paracer_Saddle.PrimalItemArmor_Paracer_Saddle_C");
		return ptr;
	}

}


