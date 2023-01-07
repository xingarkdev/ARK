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
	 * 		Name   -> Function rockDrake_TekSaddle_Jaw_RIG_AnimBP.rockDrake_TekSaddle_Jaw_RIG_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UrockDrake_TekSaddle_Jaw_RIG_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function rockDrake_TekSaddle_Jaw_RIG_AnimBP.rockDrake_TekSaddle_Jaw_RIG_AnimBP_C.BlueprintUpdateAnimation");
		
		UrockDrake_TekSaddle_Jaw_RIG_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function rockDrake_TekSaddle_Jaw_RIG_AnimBP.rockDrake_TekSaddle_Jaw_RIG_AnimBP_C.ExecuteUbergraph_rockDrake_TekSaddle_Jaw_RIG_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UrockDrake_TekSaddle_Jaw_RIG_AnimBP_C::ExecuteUbergraph_rockDrake_TekSaddle_Jaw_RIG_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function rockDrake_TekSaddle_Jaw_RIG_AnimBP.rockDrake_TekSaddle_Jaw_RIG_AnimBP_C.ExecuteUbergraph_rockDrake_TekSaddle_Jaw_RIG_AnimBP");
		
		UrockDrake_TekSaddle_Jaw_RIG_AnimBP_C_ExecuteUbergraph_rockDrake_TekSaddle_Jaw_RIG_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UrockDrake_TekSaddle_Jaw_RIG_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UrockDrake_TekSaddle_Jaw_RIG_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass rockDrake_TekSaddle_Jaw_RIG_AnimBP.rockDrake_TekSaddle_Jaw_RIG_AnimBP_C");
		return ptr;
	}

}


