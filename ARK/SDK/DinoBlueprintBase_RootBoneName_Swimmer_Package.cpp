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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_F2191D36485CAB4A7BA298AB513C1838
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_F2191D36485CAB4A7BA298AB513C1838()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_F2191D36485CAB4A7BA298AB513C1838");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_F2191D36485CAB4A7BA298AB513C1838_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_7335AC5E4194BAB38073F286983D3ED4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_7335AC5E4194BAB38073F286983D3ED4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_7335AC5E4194BAB38073F286983D3ED4");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_7335AC5E4194BAB38073F286983D3ED4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_BF3083C64E419B47ADA64CBDAE03C0DA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_BF3083C64E419B47ADA64CBDAE03C0DA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_BF3083C64E419B47ADA64CBDAE03C0DA");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_BF3083C64E419B47ADA64CBDAE03C0DA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_79413B094F492C088B7401A09E07F85A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_79413B094F492C088B7401A09E07F85A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_79413B094F492C088B7401A09E07F85A");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_79413B094F492C088B7401A09E07F85A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_B8882E1345C36CE352649CB5AE45F40F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_B8882E1345C36CE352649CB5AE45F40F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_B8882E1345C36CE352649CB5AE45F40F");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_B8882E1345C36CE352649CB5AE45F40F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneName_Swimmer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneName_Swimmer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C");
		return ptr;
	}

}


