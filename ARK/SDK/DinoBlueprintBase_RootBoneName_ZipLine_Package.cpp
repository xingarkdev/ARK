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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.GetZiplineBlendY
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_ZipLine_C::GetZiplineBlendY(class APrimalDinoCharacter* Dino, float* BlendY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.GetZiplineBlendY");
		
		UDinoBlueprintBase_RootBoneName_ZipLine_C_GetZiplineBlendY_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlendY != nullptr)
			*BlendY = params.BlendY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_ZipLine_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneName_ZipLine_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_3ED13717438C56FC63E209A85B1420C1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_ZipLine_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_3ED13717438C56FC63E209A85B1420C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_3ED13717438C56FC63E209A85B1420C1");
		
		UDinoBlueprintBase_RootBoneName_ZipLine_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_3ED13717438C56FC63E209A85B1420C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_ModifyBone_D21CDEDF484976322F5FCEB70F39D181
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_ZipLine_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_ModifyBone_D21CDEDF484976322F5FCEB70F39D181()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_ModifyBone_D21CDEDF484976322F5FCEB70F39D181");
		
		UDinoBlueprintBase_RootBoneName_ZipLine_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_ModifyBone_D21CDEDF484976322F5FCEB70F39D181_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_E82445754652FDD46FC314B3A264BAF9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_ZipLine_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_E82445754652FDD46FC314B3A264BAF9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_E82445754652FDD46FC314B3A264BAF9");
		
		UDinoBlueprintBase_RootBoneName_ZipLine_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_E82445754652FDD46FC314B3A264BAF9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_CFED515446982B7C3EC317BF21286C4A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_ZipLine_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_CFED515446982B7C3EC317BF21286C4A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_CFED515446982B7C3EC317BF21286C4A");
		
		UDinoBlueprintBase_RootBoneName_ZipLine_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_CFED515446982B7C3EC317BF21286C4A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_68E7573C4CC7B5430F2C8F907C8CC387
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_ZipLine_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_68E7573C4CC7B5430F2C8F907C8CC387()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_68E7573C4CC7B5430F2C8F907C8CC387");
		
		UDinoBlueprintBase_RootBoneName_ZipLine_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_AnimGraphNode_BlendListByBool_68E7573C4CC7B5430F2C8F907C8CC387_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_ZipLine_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneName_ZipLine_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_ZipLine_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine");
		
		UDinoBlueprintBase_RootBoneName_ZipLine_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_ZipLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneName_ZipLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneName_ZipLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_ZipLine.DinoBlueprintBase_RootBoneName_ZipLine_C");
		return ptr;
	}

}


