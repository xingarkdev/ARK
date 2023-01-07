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
	 * 		Name   -> Function FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_26B30DD243A308F72F68ACAB5121C3F0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFPVWeaponAnimBP_Base_MachinePistol_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_26B30DD243A308F72F68ACAB5121C3F0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_26B30DD243A308F72F68ACAB5121C3F0");
		
		UFPVWeaponAnimBP_Base_MachinePistol_C_EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_26B30DD243A308F72F68ACAB5121C3F0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_0D084ECB41C753BF83F289B38D5D594A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFPVWeaponAnimBP_Base_MachinePistol_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_0D084ECB41C753BF83F289B38D5D594A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_0D084ECB41C753BF83F289B38D5D594A");
		
		UFPVWeaponAnimBP_Base_MachinePistol_C_EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_0D084ECB41C753BF83F289B38D5D594A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPVWeaponAnimBP_Base_MachinePistol_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C.BlueprintUpdateAnimation");
		
		UFPVWeaponAnimBP_Base_MachinePistol_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C.ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPVWeaponAnimBP_Base_MachinePistol_C::ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C.ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol");
		
		UFPVWeaponAnimBP_Base_MachinePistol_C_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPVWeaponAnimBP_Base_MachinePistol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPVWeaponAnimBP_Base_MachinePistol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C");
		return ptr;
	}

}


