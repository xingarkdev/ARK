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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_5C21F1D94F35E632033FF081F31A0160
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_5C21F1D94F35E632033FF081F31A0160()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_5C21F1D94F35E632033FF081F31A0160");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_5C21F1D94F35E632033FF081F31A0160_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_89DBD4C64A6167B26CE68495DB95D69A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_89DBD4C64A6167B26CE68495DB95D69A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_89DBD4C64A6167B26CE68495DB95D69A");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_89DBD4C64A6167B26CE68495DB95D69A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_0A9CAC6342A3FAB127FE9F9DAF301EE2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_0A9CAC6342A3FAB127FE9F9DAF301EE2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_0A9CAC6342A3FAB127FE9F9DAF301EE2");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_0A9CAC6342A3FAB127FE9F9DAF301EE2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_B296FDCA40043124CD16B5A87381C35E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_B296FDCA40043124CD16B5A87381C35E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_B296FDCA40043124CD16B5A87381C35E");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_B296FDCA40043124CD16B5A87381C35E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneNameInterpSpeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneNameInterpSpeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C");
		return ptr;
	}

}


