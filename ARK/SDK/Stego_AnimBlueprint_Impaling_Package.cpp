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
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStego_AnimBlueprint_Impaling_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.BlueprintPlayAnimationEvent");
		
		UStego_AnimBlueprint_Impaling_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_ModifyBone_98AD17E64DB87469E1D8A0962E334CCE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_AnimBlueprint_Impaling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_ModifyBone_98AD17E64DB87469E1D8A0962E334CCE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_ModifyBone_98AD17E64DB87469E1D8A0962E334CCE");
		
		UStego_AnimBlueprint_Impaling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_ModifyBone_98AD17E64DB87469E1D8A0962E334CCE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_ApplyAdditive_A809D7D246C254DAE03E62BBDCC5B5BA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_AnimBlueprint_Impaling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_ApplyAdditive_A809D7D246C254DAE03E62BBDCC5B5BA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_ApplyAdditive_A809D7D246C254DAE03E62BBDCC5B5BA");
		
		UStego_AnimBlueprint_Impaling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_ApplyAdditive_A809D7D246C254DAE03E62BBDCC5B5BA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_EDC7A4194726A9EBAE047489F7D045B7
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_AnimBlueprint_Impaling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_EDC7A4194726A9EBAE047489F7D045B7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_EDC7A4194726A9EBAE047489F7D045B7");
		
		UStego_AnimBlueprint_Impaling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_EDC7A4194726A9EBAE047489F7D045B7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_6122B61B4B6500EB825ED6ADE99231F1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_AnimBlueprint_Impaling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_6122B61B4B6500EB825ED6ADE99231F1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_6122B61B4B6500EB825ED6ADE99231F1");
		
		UStego_AnimBlueprint_Impaling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_6122B61B4B6500EB825ED6ADE99231F1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_2C50D559498A4208098788BF6DDB3261
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_AnimBlueprint_Impaling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_2C50D559498A4208098788BF6DDB3261()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_2C50D559498A4208098788BF6DDB3261");
		
		UStego_AnimBlueprint_Impaling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_2C50D559498A4208098788BF6DDB3261_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_D6ECEE674C0D9AC0F5751CBBEA656ACE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_AnimBlueprint_Impaling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_D6ECEE674C0D9AC0F5751CBBEA656ACE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_D6ECEE674C0D9AC0F5751CBBEA656ACE");
		
		UStego_AnimBlueprint_Impaling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_D6ECEE674C0D9AC0F5751CBBEA656ACE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_634C997A4C4F0AF8C50090BB73B18152
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_AnimBlueprint_Impaling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_634C997A4C4F0AF8C50090BB73B18152()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_634C997A4C4F0AF8C50090BB73B18152");
		
		UStego_AnimBlueprint_Impaling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_634C997A4C4F0AF8C50090BB73B18152_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_C2B26F1A401A7CFF226A7EBEF06E3226
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_AnimBlueprint_Impaling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_C2B26F1A401A7CFF226A7EBEF06E3226()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_C2B26F1A401A7CFF226A7EBEF06E3226");
		
		UStego_AnimBlueprint_Impaling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_AnimGraphNode_TransitionResult_C2B26F1A401A7CFF226A7EBEF06E3226_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStego_AnimBlueprint_Impaling_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.BlueprintUpdateAnimation");
		
		UStego_AnimBlueprint_Impaling_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.ExecuteUbergraph_Stego_AnimBlueprint_Impaling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStego_AnimBlueprint_Impaling_C::ExecuteUbergraph_Stego_AnimBlueprint_Impaling(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C.ExecuteUbergraph_Stego_AnimBlueprint_Impaling");
		
		UStego_AnimBlueprint_Impaling_C_ExecuteUbergraph_Stego_AnimBlueprint_Impaling_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStego_AnimBlueprint_Impaling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStego_AnimBlueprint_Impaling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Stego_AnimBlueprint_Impaling.Stego_AnimBlueprint_Impaling_C");
		return ptr;
	}

}


