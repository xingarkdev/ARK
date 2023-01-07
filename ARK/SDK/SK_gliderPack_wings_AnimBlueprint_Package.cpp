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
	 * 		Name   -> Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.UpdateWingOffsets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_gliderPack_wings_AnimBlueprint_C::UpdateWingOffsets(class AShooterCharacter* ShooterCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.UpdateWingOffsets");
		
		USK_gliderPack_wings_AnimBlueprint_C_UpdateWingOffsets_Params params {};
		params.ShooterCharacter = ShooterCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.UpdateVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_gliderPack_wings_AnimBlueprint_C::UpdateVelocity(class AShooterCharacter* ShooterCharacter, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.UpdateVelocity");
		
		USK_gliderPack_wings_AnimBlueprint_C_UpdateVelocity_Params params {};
		params.ShooterCharacter = ShooterCharacter;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_39F5091F4B1ACC2793D1439328F94B59
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USK_gliderPack_wings_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_39F5091F4B1ACC2793D1439328F94B59()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_39F5091F4B1ACC2793D1439328F94B59");
		
		USK_gliderPack_wings_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_39F5091F4B1ACC2793D1439328F94B59_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_45BCAA304FAFD876B51609B0919C39DA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USK_gliderPack_wings_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_45BCAA304FAFD876B51609B0919C39DA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_45BCAA304FAFD876B51609B0919C39DA");
		
		USK_gliderPack_wings_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_45BCAA304FAFD876B51609B0919C39DA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_gliderPack_wings_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		USK_gliderPack_wings_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_gliderPack_wings_AnimBlueprint_C::ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C.ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint");
		
		USK_gliderPack_wings_AnimBlueprint_C_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USK_gliderPack_wings_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_gliderPack_wings_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C");
		return ptr;
	}

}


