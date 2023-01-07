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
	 * 		Name   -> Function parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_F4D1CB92414E3E64D65AAFB76DDD2067
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Uparachute_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_F4D1CB92414E3E64D65AAFB76DDD2067()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_F4D1CB92414E3E64D65AAFB76DDD2067");
		
		Uparachute_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_F4D1CB92414E3E64D65AAFB76DDD2067_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_56D065BE4B56D2876D71E6AC03E7C454
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Uparachute_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_56D065BE4B56D2876D71E6AC03E7C454()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_56D065BE4B56D2876D71E6AC03E7C454");
		
		Uparachute_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_56D065BE4B56D2876D71E6AC03E7C454_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uparachute_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		Uparachute_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C.ExecuteUbergraph_parachute_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uparachute_RIG_AnimBlueprint_C::ExecuteUbergraph_parachute_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C.ExecuteUbergraph_parachute_RIG_AnimBlueprint");
		
		Uparachute_RIG_AnimBlueprint_C_ExecuteUbergraph_parachute_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uparachute_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uparachute_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C");
		return ptr;
	}

}


