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
	 * 		Name   -> Function camelsaurus_AnimBlueprint.camelsaurus_AnimBlueprint_C.ExecuteUbergraph_camelsaurus_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ucamelsaurus_AnimBlueprint_C::ExecuteUbergraph_camelsaurus_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function camelsaurus_AnimBlueprint.camelsaurus_AnimBlueprint_C.ExecuteUbergraph_camelsaurus_AnimBlueprint");
		
		Ucamelsaurus_AnimBlueprint_C_ExecuteUbergraph_camelsaurus_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Ucamelsaurus_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Ucamelsaurus_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass camelsaurus_AnimBlueprint.camelsaurus_AnimBlueprint_C");
		return ptr;
	}

}


