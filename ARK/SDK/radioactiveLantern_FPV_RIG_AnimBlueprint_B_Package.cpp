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
	 * 		Name   -> Function radioactiveLantern_FPV_RIG_AnimBlueprint_B.radioactiveLantern_FPV_RIG_AnimBlueprint_B_C.ExecuteUbergraph_radioactiveLantern_FPV_RIG_AnimBlueprint_B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UradioactiveLantern_FPV_RIG_AnimBlueprint_B_C::ExecuteUbergraph_radioactiveLantern_FPV_RIG_AnimBlueprint_B(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function radioactiveLantern_FPV_RIG_AnimBlueprint_B.radioactiveLantern_FPV_RIG_AnimBlueprint_B_C.ExecuteUbergraph_radioactiveLantern_FPV_RIG_AnimBlueprint_B");
		
		UradioactiveLantern_FPV_RIG_AnimBlueprint_B_C_ExecuteUbergraph_radioactiveLantern_FPV_RIG_AnimBlueprint_B_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UradioactiveLantern_FPV_RIG_AnimBlueprint_B_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UradioactiveLantern_FPV_RIG_AnimBlueprint_B_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass radioactiveLantern_FPV_RIG_AnimBlueprint_B.radioactiveLantern_FPV_RIG_AnimBlueprint_B_C");
		return ptr;
	}

}


