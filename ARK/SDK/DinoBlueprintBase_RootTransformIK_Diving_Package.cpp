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
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.UpdateDivingLeftRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ADino_Character_BP_DivingFlyer_C*            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::UpdateDivingLeftRight(float DeltaTime, class ADino_Character_BP_DivingFlyer_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.UpdateDivingLeftRight");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_UpdateDivingLeftRight_Params params {};
		params.DeltaTime = DeltaTime;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.UpdateDivingForwardBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADino_Character_BP_DivingFlyer_C*            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::UpdateDivingForwardBack(class ADino_Character_BP_DivingFlyer_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.UpdateDivingForwardBack");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_UpdateDivingForwardBack_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_75C9F4D7486A16065849099C3E7B6A07
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_75C9F4D7486A16065849099C3E7B6A07()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_75C9F4D7486A16065849099C3E7B6A07");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_75C9F4D7486A16065849099C3E7B6A07_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_BD938299484714D510F8DCB8D9075760
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_BD938299484714D510F8DCB8D9075760()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_BD938299484714D510F8DCB8D9075760");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_BD938299484714D510F8DCB8D9075760_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_302FBEC649DF0CDD81BC01B2CE42D764
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_302FBEC649DF0CDD81BC01B2CE42D764()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_302FBEC649DF0CDD81BC01B2CE42D764");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_302FBEC649DF0CDD81BC01B2CE42D764_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_BF8AE86E4B44BD1F61DE7D9BC73C4DC9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_BF8AE86E4B44BD1F61DE7D9BC73C4DC9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_BF8AE86E4B44BD1F61DE7D9BC73C4DC9");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_BF8AE86E4B44BD1F61DE7D9BC73C4DC9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_DB6CF9A2495DF1438287D3A98A35664D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_DB6CF9A2495DF1438287D3A98A35664D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_DB6CF9A2495DF1438287D3A98A35664D");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_DB6CF9A2495DF1438287D3A98A35664D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_7D1A7C36411A3DE375EE958532CAFDA9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_7D1A7C36411A3DE375EE958532CAFDA9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_7D1A7C36411A3DE375EE958532CAFDA9");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_SequencePlayer_7D1A7C36411A3DE375EE958532CAFDA9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_BlendSpacePlayer_7AF0DBD94B140A1926D86A992BA8B4B7
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_BlendSpacePlayer_7AF0DBD94B140A1926D86A992BA8B4B7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_BlendSpacePlayer_7AF0DBD94B140A1926D86A992BA8B4B7");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_AnimGraphNode_BlendSpacePlayer_7AF0DBD94B140A1926D86A992BA8B4B7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransformIK_Diving_C::ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C.ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving");
		
		UDinoBlueprintBase_RootTransformIK_Diving_C_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_Diving_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootTransformIK_Diving_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootTransformIK_Diving_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransformIK_Diving.DinoBlueprintBase_RootTransformIK_Diving_C");
		return ptr;
	}

}


