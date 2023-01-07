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
	 * 		Name   -> Function slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Uslingshot_TPV_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1");
		
		Uslingshot_TPV_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uslingshot_TPV_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		Uslingshot_TPV_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C.ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uslingshot_TPV_RIG_AnimBlueprint_C::ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C.ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint");
		
		Uslingshot_TPV_RIG_AnimBlueprint_C_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uslingshot_TPV_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uslingshot_TPV_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C");
		return ptr;
	}

}


