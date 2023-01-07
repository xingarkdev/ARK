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
	 * 		Name   -> Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlantSpeciesR_AnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintPlayAnimationEvent");
		
		UPlantSpeciesR_AnimBP_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_0A6C822C43025BCF30DEB19D9CA04C11
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlantSpeciesR_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_0A6C822C43025BCF30DEB19D9CA04C11()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_0A6C822C43025BCF30DEB19D9CA04C11");
		
		UPlantSpeciesR_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_0A6C822C43025BCF30DEB19D9CA04C11_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlantSpeciesR_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintUpdateAnimation");
		
		UPlantSpeciesR_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.ExecuteUbergraph_PlantSpeciesR_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlantSpeciesR_AnimBP_C::ExecuteUbergraph_PlantSpeciesR_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.ExecuteUbergraph_PlantSpeciesR_AnimBP");
		
		UPlantSpeciesR_AnimBP_C_ExecuteUbergraph_PlantSpeciesR_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlantSpeciesR_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlantSpeciesR_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C");
		return ptr;
	}

}


