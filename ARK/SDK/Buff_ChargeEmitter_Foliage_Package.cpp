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
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetActorsToIgnoreOnRaycast
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      emitterActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_ChargeEmitter_Foliage_C::GetActorsToIgnoreOnRaycast(class AActor* emitterActor, TArray<class AActor*>* ActorsToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetActorsToIgnoreOnRaycast");
		
		ABuff_ChargeEmitter_Foliage_C_GetActorsToIgnoreOnRaycast_Params params {};
		params.emitterActor = emitterActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToIgnore != nullptr)
			*ActorsToIgnore = params.ActorsToIgnore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetEmitterActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      emitterActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Foliage_C::GetEmitterActor(class AActor** emitterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetEmitterActor");
		
		ABuff_ChargeEmitter_Foliage_C_GetEmitterActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (emitterActor != nullptr)
			*emitterActor = params.emitterActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.Get Charge Variable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Foliage_C::GetChargeVariable(E_ChargeVariableNames VariableName, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.Get Charge Variable");
		
		ABuff_ChargeEmitter_Foliage_C_GetChargeVariable_Params params {};
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (fValue != nullptr)
			*fValue = params.fValue;
		if (dValue != nullptr)
			*dValue = params.dValue;
		if (bBValue != nullptr)
			*bBValue = params.bBValue;
		if (ivalue != nullptr)
			*ivalue = params.ivalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.CanEmitCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canEmit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Foliage_C::CanEmitCharge(bool* canEmit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.CanEmitCharge");
		
		ABuff_ChargeEmitter_Foliage_C_CanEmitCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canEmit != nullptr)
			*canEmit = params.canEmit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_Foliage_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.UserConstructionScript");
		
		ABuff_ChargeEmitter_Foliage_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_Foliage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ReceiveBeginPlay");
		
		ABuff_ChargeEmitter_Foliage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Foliage_C::ExecuteUbergraph_Buff_ChargeEmitter_Foliage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage");
		
		ABuff_ChargeEmitter_Foliage_C_ExecuteUbergraph_Buff_ChargeEmitter_Foliage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeEmitter_Foliage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeEmitter_Foliage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C");
		return ptr;
	}

}


