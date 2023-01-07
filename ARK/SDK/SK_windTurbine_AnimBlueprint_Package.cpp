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
	 * 		Name   -> Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_AnimGraphNode_ModifyBone_362E4F6B4A9F9AC4B3D4C99A30DF2E40
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USK_windTurbine_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_AnimGraphNode_ModifyBone_362E4F6B4A9F9AC4B3D4C99A30DF2E40()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_AnimGraphNode_ModifyBone_362E4F6B4A9F9AC4B3D4C99A30DF2E40");
		
		USK_windTurbine_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_AnimGraphNode_ModifyBone_362E4F6B4A9F9AC4B3D4C99A30DF2E40_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_windTurbine_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		USK_windTurbine_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.ExecuteUbergraph_SK_windTurbine_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_windTurbine_AnimBlueprint_C::ExecuteUbergraph_SK_windTurbine_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.ExecuteUbergraph_SK_windTurbine_AnimBlueprint");
		
		USK_windTurbine_AnimBlueprint_C_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USK_windTurbine_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_windTurbine_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C");
		return ptr;
	}

}


