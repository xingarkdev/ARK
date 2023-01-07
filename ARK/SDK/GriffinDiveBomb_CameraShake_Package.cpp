﻿/**
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
	 * 		Name   -> Function GriffinDiveBomb_CameraShake.GriffinDiveBomb_CameraShake_C.ExecuteUbergraph_GriffinDiveBomb_CameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGriffinDiveBomb_CameraShake_C::ExecuteUbergraph_GriffinDiveBomb_CameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GriffinDiveBomb_CameraShake.GriffinDiveBomb_CameraShake_C.ExecuteUbergraph_GriffinDiveBomb_CameraShake");
		
		UGriffinDiveBomb_CameraShake_C_ExecuteUbergraph_GriffinDiveBomb_CameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGriffinDiveBomb_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGriffinDiveBomb_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GriffinDiveBomb_CameraShake.GriffinDiveBomb_CameraShake_C");
		return ptr;
	}

}


