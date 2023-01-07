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
	 * 		Name   -> Function SK_GroundedChargeLantern_AnimBlueprint.SK_GroundedChargeLantern_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GroundedChargeLantern_AnimBlueprint_AnimGraphNode_ModifyBone_16A540E94B6F9A3A4328D5B202C39B8D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USK_GroundedChargeLantern_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GroundedChargeLantern_AnimBlueprint_AnimGraphNode_ModifyBone_16A540E94B6F9A3A4328D5B202C39B8D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_GroundedChargeLantern_AnimBlueprint.SK_GroundedChargeLantern_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GroundedChargeLantern_AnimBlueprint_AnimGraphNode_ModifyBone_16A540E94B6F9A3A4328D5B202C39B8D");
		
		USK_GroundedChargeLantern_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GroundedChargeLantern_AnimBlueprint_AnimGraphNode_ModifyBone_16A540E94B6F9A3A4328D5B202C39B8D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_GroundedChargeLantern_AnimBlueprint.SK_GroundedChargeLantern_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_GroundedChargeLantern_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_GroundedChargeLantern_AnimBlueprint.SK_GroundedChargeLantern_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		USK_GroundedChargeLantern_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_GroundedChargeLantern_AnimBlueprint.SK_GroundedChargeLantern_AnimBlueprint_C.ExecuteUbergraph_SK_GroundedChargeLantern_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_GroundedChargeLantern_AnimBlueprint_C::ExecuteUbergraph_SK_GroundedChargeLantern_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_GroundedChargeLantern_AnimBlueprint.SK_GroundedChargeLantern_AnimBlueprint_C.ExecuteUbergraph_SK_GroundedChargeLantern_AnimBlueprint");
		
		USK_GroundedChargeLantern_AnimBlueprint_C_ExecuteUbergraph_SK_GroundedChargeLantern_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USK_GroundedChargeLantern_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_GroundedChargeLantern_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_GroundedChargeLantern_AnimBlueprint.SK_GroundedChargeLantern_AnimBlueprint_C");
		return ptr;
	}

}


