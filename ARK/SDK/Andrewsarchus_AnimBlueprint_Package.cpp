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
	 * 		Name   -> Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAndrewsarchus_AnimBlueprint_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.BlueprintPlayAnimationEvent");
		
		UAndrewsarchus_AnimBlueprint_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_A6C9F03943E623D58E74718FC9C68401
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAndrewsarchus_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_A6C9F03943E623D58E74718FC9C68401()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_A6C9F03943E623D58E74718FC9C68401");
		
		UAndrewsarchus_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_A6C9F03943E623D58E74718FC9C68401_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ModifyBone_20BD7D5B4373D25F59595796A9324475
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAndrewsarchus_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ModifyBone_20BD7D5B4373D25F59595796A9324475()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ModifyBone_20BD7D5B4373D25F59595796A9324475");
		
		UAndrewsarchus_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ModifyBone_20BD7D5B4373D25F59595796A9324475_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_BFDB9F974438E2E50B69FC91F2F9D9AE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAndrewsarchus_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_BFDB9F974438E2E50B69FC91F2F9D9AE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_BFDB9F974438E2E50B69FC91F2F9D9AE");
		
		UAndrewsarchus_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_BFDB9F974438E2E50B69FC91F2F9D9AE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_584DEAF74F680F147ABA7281AB4A9C03
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAndrewsarchus_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_584DEAF74F680F147ABA7281AB4A9C03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_584DEAF74F680F147ABA7281AB4A9C03");
		
		UAndrewsarchus_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_BlendListByBool_584DEAF74F680F147ABA7281AB4A9C03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ApplyAdditive_4A30AB734C1890766837F781A89385E5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAndrewsarchus_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ApplyAdditive_4A30AB734C1890766837F781A89385E5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ApplyAdditive_4A30AB734C1890766837F781A89385E5");
		
		UAndrewsarchus_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ApplyAdditive_4A30AB734C1890766837F781A89385E5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ApplyAdditive_0D6D7BF244D6693D074D6295FCA86D3A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAndrewsarchus_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ApplyAdditive_0D6D7BF244D6693D074D6295FCA86D3A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ApplyAdditive_0D6D7BF244D6693D074D6295FCA86D3A");
		
		UAndrewsarchus_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_AnimGraphNode_ApplyAdditive_0D6D7BF244D6693D074D6295FCA86D3A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAndrewsarchus_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UAndrewsarchus_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.ExecuteUbergraph_Andrewsarchus_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAndrewsarchus_AnimBlueprint_C::ExecuteUbergraph_Andrewsarchus_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C.ExecuteUbergraph_Andrewsarchus_AnimBlueprint");
		
		UAndrewsarchus_AnimBlueprint_C_ExecuteUbergraph_Andrewsarchus_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAndrewsarchus_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAndrewsarchus_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Andrewsarchus_AnimBlueprint.Andrewsarchus_AnimBlueprint_C");
		return ptr;
	}

}


