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
	 * 		Name   -> Function DinoAttackStateRangedMedium_Leading.DinoAttackStateRangedMedium_Leading_C.ExecuteUbergraph_DinoAttackStateRangedMedium_Leading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRangedMedium_Leading_C::ExecuteUbergraph_DinoAttackStateRangedMedium_Leading(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRangedMedium_Leading.DinoAttackStateRangedMedium_Leading_C.ExecuteUbergraph_DinoAttackStateRangedMedium_Leading");
		
		UDinoAttackStateRangedMedium_Leading_C_ExecuteUbergraph_DinoAttackStateRangedMedium_Leading_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateRangedMedium_Leading_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateRangedMedium_Leading_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRangedMedium_Leading.DinoAttackStateRangedMedium_Leading_C");
		return ptr;
	}

}


