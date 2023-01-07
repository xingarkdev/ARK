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
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransformIK_FullFlight_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootTransformIK_FullFlight_C_BlueprintPlayAnimationEvent_Params params {};
		params.AnimationMontage = AnimationMontage;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (playedAnimLength != nullptr)
			*playedAnimLength = params.playedAnimLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_861B8C9A48B17123EA662587129D1B0E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_FullFlight_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_861B8C9A48B17123EA662587129D1B0E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_861B8C9A48B17123EA662587129D1B0E");
		
		UDinoBlueprintBase_RootTransformIK_FullFlight_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_861B8C9A48B17123EA662587129D1B0E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_50DE56E948A16B9770145DA206C68925
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_FullFlight_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_50DE56E948A16B9770145DA206C68925()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_50DE56E948A16B9770145DA206C68925");
		
		UDinoBlueprintBase_RootTransformIK_FullFlight_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_50DE56E948A16B9770145DA206C68925_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_F3DCD1CD4592E2B0312D8A90CC4830E4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_FullFlight_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_F3DCD1CD4592E2B0312D8A90CC4830E4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_F3DCD1CD4592E2B0312D8A90CC4830E4");
		
		UDinoBlueprintBase_RootTransformIK_FullFlight_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_F3DCD1CD4592E2B0312D8A90CC4830E4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_54606F22470CD4B7DB94329CD2D8C166
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_FullFlight_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_54606F22470CD4B7DB94329CD2D8C166()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_54606F22470CD4B7DB94329CD2D8C166");
		
		UDinoBlueprintBase_RootTransformIK_FullFlight_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_54606F22470CD4B7DB94329CD2D8C166_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_CD0078114CAA20D2FE5ACBA15186C1C6
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_FullFlight_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_CD0078114CAA20D2FE5ACBA15186C1C6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_CD0078114CAA20D2FE5ACBA15186C1C6");
		
		UDinoBlueprintBase_RootTransformIK_FullFlight_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_CD0078114CAA20D2FE5ACBA15186C1C6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_B87F7E5D49707F8F5FFC3384A2AAD3CB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_FullFlight_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_B87F7E5D49707F8F5FFC3384A2AAD3CB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_B87F7E5D49707F8F5FFC3384A2AAD3CB");
		
		UDinoBlueprintBase_RootTransformIK_FullFlight_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_AnimGraphNode_SequencePlayer_B87F7E5D49707F8F5FFC3384A2AAD3CB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransformIK_FullFlight_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootTransformIK_FullFlight_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransformIK_FullFlight_C::ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C.ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight");
		
		UDinoBlueprintBase_RootTransformIK_FullFlight_C_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_FullFlight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootTransformIK_FullFlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootTransformIK_FullFlight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransformIK_FullFlight.DinoBlueprintBase_RootTransformIK_FullFlight_C");
		return ptr;
	}

}


