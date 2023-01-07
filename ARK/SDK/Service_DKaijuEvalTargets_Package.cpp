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
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.IsTamedAndPassive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPassive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_DKaijuEvalTargets_C::IsTamedAndPassive(bool* IsPassive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.IsTamedAndPassive");
		
		UService_DKaijuEvalTargets_C_IsTamedAndPassive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPassive != nullptr)
			*IsPassive = params.IsPassive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.AlertFlocksForRoll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_DKaijuEvalTargets_C::AlertFlocksForRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.AlertFlocksForRoll");
		
		UService_DKaijuEvalTargets_C_AlertFlocksForRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.Eval Attacks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_DKaijuEvalTargets_C::EvalAttacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.Eval Attacks");
		
		UService_DKaijuEvalTargets_C_EvalAttacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.DestroyFlocks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_DKaijuEvalTargets_C::DestroyFlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.DestroyFlocks");
		
		UService_DKaijuEvalTargets_C_DestroyFlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SetFlockTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_DKaijuEvalTargets_C::SetFlockTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SetFlockTargets");
		
		UService_DKaijuEvalTargets_C_SetFlockTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SummonLightningGroundTargets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UService_DKaijuEvalTargets_C::SummonLightningGroundTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SummonLightningGroundTargets");
		
		UService_DKaijuEvalTargets_C_SummonLightningGroundTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.EvalFlockHoverAttackModes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_DKaijuEvalTargets_C::EvalFlockHoverAttackModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.EvalFlockHoverAttackModes");
		
		UService_DKaijuEvalTargets_C_EvalFlockHoverAttackModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.MaybeSummonFlocks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UService_DKaijuEvalTargets_C::MaybeSummonFlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.MaybeSummonFlocks");
		
		UService_DKaijuEvalTargets_C_MaybeSummonFlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_DKaijuEvalTargets_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveTick");
		
		UService_DKaijuEvalTargets_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_DKaijuEvalTargets_C::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveActivation");
		
		UService_DKaijuEvalTargets_C_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ExecuteUbergraph_Service_DKaijuEvalTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_DKaijuEvalTargets_C::ExecuteUbergraph_Service_DKaijuEvalTargets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ExecuteUbergraph_Service_DKaijuEvalTargets");
		
		UService_DKaijuEvalTargets_C_ExecuteUbergraph_Service_DKaijuEvalTargets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UService_DKaijuEvalTargets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UService_DKaijuEvalTargets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C");
		return ptr;
	}

}


