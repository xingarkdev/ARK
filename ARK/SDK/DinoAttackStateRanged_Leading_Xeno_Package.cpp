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
	 * 		Name   -> Function DinoAttackStateRanged_Leading_Xeno.DinoAttackStateRanged_Leading_Xeno_C.ExecuteUbergraph_DinoAttackStateRanged_Leading_Xeno
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateRanged_Leading_Xeno_C::ExecuteUbergraph_DinoAttackStateRanged_Leading_Xeno(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Leading_Xeno.DinoAttackStateRanged_Leading_Xeno_C.ExecuteUbergraph_DinoAttackStateRanged_Leading_Xeno");
		
		UDinoAttackStateRanged_Leading_Xeno_C_ExecuteUbergraph_DinoAttackStateRanged_Leading_Xeno_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateRanged_Leading_Xeno_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateRanged_Leading_Xeno_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRanged_Leading_Xeno.DinoAttackStateRanged_Leading_Xeno_C");
		return ptr;
	}

}


