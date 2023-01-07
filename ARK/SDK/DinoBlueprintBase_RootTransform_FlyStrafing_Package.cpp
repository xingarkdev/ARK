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
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.GetFlyingBlendspaceCoords
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        ForDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   BlendspaceCoords                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::GetFlyingBlendspaceCoords(class APrimalDinoCharacter* ForDino, struct FVector2D* BlendspaceCoords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.GetFlyingBlendspaceCoords");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_GetFlyingBlendspaceCoords_Params params {};
		params.ForDino = ForDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlendspaceCoords != nullptr)
			*BlendspaceCoords = params.BlendspaceCoords;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_CBA3241542AD2982DCADDEB15DCF8C7A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_CBA3241542AD2982DCADDEB15DCF8C7A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_CBA3241542AD2982DCADDEB15DCF8C7A");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_CBA3241542AD2982DCADDEB15DCF8C7A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_2E1F923348F57B9E13F2F8A3A0EEB1F1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_2E1F923348F57B9E13F2F8A3A0EEB1F1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_2E1F923348F57B9E13F2F8A3A0EEB1F1");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_2E1F923348F57B9E13F2F8A3A0EEB1F1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_752DE619419F957955B310A983E5BD99
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_752DE619419F957955B310A983E5BD99()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_752DE619419F957955B310A983E5BD99");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_752DE619419F957955B310A983E5BD99_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_D581A35C4585F7817EF74B96BD2B9913
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_D581A35C4585F7817EF74B96BD2B9913()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_D581A35C4585F7817EF74B96BD2B9913");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_D581A35C4585F7817EF74B96BD2B9913_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_1E180CCD4D3BA8E831238B96CDDE1447
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_1E180CCD4D3BA8E831238B96CDDE1447()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_1E180CCD4D3BA8E831238B96CDDE1447");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_1E180CCD4D3BA8E831238B96CDDE1447_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_166E0D6842B8A622566054969A38E611
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_166E0D6842B8A622566054969A38E611()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_166E0D6842B8A622566054969A38E611");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_166E0D6842B8A622566054969A38E611_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_3AB2773547AC94FA75ACB58B49BE55B3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_3AB2773547AC94FA75ACB58B49BE55B3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_3AB2773547AC94FA75ACB58B49BE55B3");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_3AB2773547AC94FA75ACB58B49BE55B3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_0D521F194607154F53586EB1B293E387
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_0D521F194607154F53586EB1B293E387()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_0D521F194607154F53586EB1B293E387");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_0D521F194607154F53586EB1B293E387_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_C35C8EE44A32487B1528E8A754105407
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_C35C8EE44A32487B1528E8A754105407()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_C35C8EE44A32487B1528E8A754105407");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_C35C8EE44A32487B1528E8A754105407_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_4BBD99824FE6516920935480F9B29F12
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_4BBD99824FE6516920935480F9B29F12()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_4BBD99824FE6516920935480F9B29F12");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_AnimGraphNode_BlendListByBool_4BBD99824FE6516920935480F9B29F12_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_FlyStrafing_C::ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing");
		
		UDinoBlueprintBase_RootTransform_FlyStrafing_C_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlyStrafing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootTransform_FlyStrafing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootTransform_FlyStrafing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_FlyStrafing.DinoBlueprintBase_RootTransform_FlyStrafing_C");
		return ptr;
	}

}


