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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_4A1BD5424F5FCC3B2CB7859FDE8492CB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_4A1BD5424F5FCC3B2CB7859FDE8492CB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_4A1BD5424F5FCC3B2CB7859FDE8492CB");
		
		UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_4A1BD5424F5FCC3B2CB7859FDE8492CB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_ModifyBone_C09E08ED4A7D7255027966A22CA2803B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_ModifyBone_C09E08ED4A7D7255027966A22CA2803B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_ModifyBone_C09E08ED4A7D7255027966A22CA2803B");
		
		UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_ModifyBone_C09E08ED4A7D7255027966A22CA2803B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_02E02FBB49E7DD8D1BAC4AA97AD6F606
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_02E02FBB49E7DD8D1BAC4AA97AD6F606()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_02E02FBB49E7DD8D1BAC4AA97AD6F606");
		
		UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_02E02FBB49E7DD8D1BAC4AA97AD6F606_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_6222F38F44B5208E882FB2956AA55814
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_6222F38F44B5208E882FB2956AA55814()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_6222F38F44B5208E882FB2956AA55814");
		
		UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_AnimGraphNode_BlendListByBool_6222F38F44B5208E882FB2956AA55814_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride");
		
		UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_DynamicAnimOverride_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_DynamicAnimOverride.DinoBlueprintBase_RootBoneName_DynamicAnimOverride_C");
		return ptr;
	}

}


