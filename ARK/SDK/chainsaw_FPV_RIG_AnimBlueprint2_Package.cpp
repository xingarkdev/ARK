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
	 * 		Name   -> Function chainsaw_FPV_RIG_AnimBlueprint2.chainsaw_FPV_RIG_AnimBlueprint2_C.ExecuteUbergraph_chainsaw_FPV_RIG_AnimBlueprint2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uchainsaw_FPV_RIG_AnimBlueprint2_C::ExecuteUbergraph_chainsaw_FPV_RIG_AnimBlueprint2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function chainsaw_FPV_RIG_AnimBlueprint2.chainsaw_FPV_RIG_AnimBlueprint2_C.ExecuteUbergraph_chainsaw_FPV_RIG_AnimBlueprint2");
		
		Uchainsaw_FPV_RIG_AnimBlueprint2_C_ExecuteUbergraph_chainsaw_FPV_RIG_AnimBlueprint2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uchainsaw_FPV_RIG_AnimBlueprint2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uchainsaw_FPV_RIG_AnimBlueprint2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass chainsaw_FPV_RIG_AnimBlueprint2.chainsaw_FPV_RIG_AnimBlueprint2_C");
		return ptr;
	}

}


