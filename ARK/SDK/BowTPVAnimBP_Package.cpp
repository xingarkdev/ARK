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
	 * 		Name   -> Function BowTPVAnimBP.BowTPVAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBowTPVAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowTPVAnimBP.BowTPVAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1");
		
		UBowTPVAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BowTPVAnimBP.BowTPVAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBowTPVAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowTPVAnimBP.BowTPVAnimBP_C.BlueprintUpdateAnimation");
		
		UBowTPVAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BowTPVAnimBP.BowTPVAnimBP_C.ExecuteUbergraph_BowTPVAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBowTPVAnimBP_C::ExecuteUbergraph_BowTPVAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowTPVAnimBP.BowTPVAnimBP_C.ExecuteUbergraph_BowTPVAnimBP");
		
		UBowTPVAnimBP_C_ExecuteUbergraph_BowTPVAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowTPVAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowTPVAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BowTPVAnimBP.BowTPVAnimBP_C");
		return ptr;
	}

}


