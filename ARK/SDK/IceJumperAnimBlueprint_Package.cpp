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
	 * 		Name   -> Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceJumperAnimBlueprint_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.BlueprintPlayAnimationEvent");
		
		UIceJumperAnimBlueprint_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_AE1AABA5452250DF4A4E32BED5BC319C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIceJumperAnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_AE1AABA5452250DF4A4E32BED5BC319C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_AE1AABA5452250DF4A4E32BED5BC319C");
		
		UIceJumperAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_AE1AABA5452250DF4A4E32BED5BC319C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_53A725DA485D79747675D08B3E68BB94
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIceJumperAnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_53A725DA485D79747675D08B3E68BB94()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_53A725DA485D79747675D08B3E68BB94");
		
		UIceJumperAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_53A725DA485D79747675D08B3E68BB94_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ModifyBone_6B724A2848D454DF1DC087ACA9B777ED
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIceJumperAnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ModifyBone_6B724A2848D454DF1DC087ACA9B777ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ModifyBone_6B724A2848D454DF1DC087ACA9B777ED");
		
		UIceJumperAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ModifyBone_6B724A2848D454DF1DC087ACA9B777ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_788F944149DD1011B5F44FAE1FC9FADD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIceJumperAnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_788F944149DD1011B5F44FAE1FC9FADD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_788F944149DD1011B5F44FAE1FC9FADD");
		
		UIceJumperAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_788F944149DD1011B5F44FAE1FC9FADD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ApplyAdditive_55E6DD4C4D401A32D5841A80A81DB749
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIceJumperAnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ApplyAdditive_55E6DD4C4D401A32D5841A80A81DB749()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ApplyAdditive_55E6DD4C4D401A32D5841A80A81DB749");
		
		UIceJumperAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ApplyAdditive_55E6DD4C4D401A32D5841A80A81DB749_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceJumperAnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.BlueprintUpdateAnimation");
		
		UIceJumperAnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.ExecuteUbergraph_IceJumperAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceJumperAnimBlueprint_C::ExecuteUbergraph_IceJumperAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumperAnimBlueprint.IceJumperAnimBlueprint_C.ExecuteUbergraph_IceJumperAnimBlueprint");
		
		UIceJumperAnimBlueprint_C_ExecuteUbergraph_IceJumperAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIceJumperAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIceJumperAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass IceJumperAnimBlueprint.IceJumperAnimBlueprint_C");
		return ptr;
	}

}


