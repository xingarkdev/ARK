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
	 * 		Name   -> Function TPV_ScoutGoggles_AnimBlueprint.TPV_ScoutGoggles_AnimBlueprint_C.ExecuteUbergraph_TPV_ScoutGoggles_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTPV_ScoutGoggles_AnimBlueprint_C::ExecuteUbergraph_TPV_ScoutGoggles_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_ScoutGoggles_AnimBlueprint.TPV_ScoutGoggles_AnimBlueprint_C.ExecuteUbergraph_TPV_ScoutGoggles_AnimBlueprint");
		
		UTPV_ScoutGoggles_AnimBlueprint_C_ExecuteUbergraph_TPV_ScoutGoggles_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTPV_ScoutGoggles_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTPV_ScoutGoggles_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_ScoutGoggles_AnimBlueprint.TPV_ScoutGoggles_AnimBlueprint_C");
		return ptr;
	}

}


