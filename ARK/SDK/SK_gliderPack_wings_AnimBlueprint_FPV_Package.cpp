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
	 * 		Name   -> Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.UpdateWingOffsets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_gliderPack_wings_AnimBlueprint_FPV_C::UpdateWingOffsets(class AShooterCharacter* ShooterCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.UpdateWingOffsets");
		
		USK_gliderPack_wings_AnimBlueprint_FPV_C_UpdateWingOffsets_Params params {};
		params.ShooterCharacter = ShooterCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_gliderPack_wings_AnimBlueprint_FPV_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.BlueprintUpdateAnimation");
		
		USK_gliderPack_wings_AnimBlueprint_FPV_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_FPV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_gliderPack_wings_AnimBlueprint_FPV_C::ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_FPV(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C.ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_FPV");
		
		USK_gliderPack_wings_AnimBlueprint_FPV_C_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_FPV_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USK_gliderPack_wings_AnimBlueprint_FPV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_gliderPack_wings_AnimBlueprint_FPV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_gliderPack_wings_AnimBlueprint_FPV.SK_gliderPack_wings_AnimBlueprint_FPV_C");
		return ptr;
	}

}


