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
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetDistanceAndAngleCheckOrigin
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      emitterActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     distanceAngleOrigin                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::GetDistanceAndAngleCheckOrigin(class AActor* emitterActor, struct FVector* distanceAngleOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetDistanceAndAngleCheckOrigin");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_GetDistanceAndAngleCheckOrigin_Params params {};
		params.emitterActor = emitterActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (distanceAngleOrigin != nullptr)
			*distanceAngleOrigin = params.distanceAngleOrigin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.BuffTickClient");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.TakeChargeConsumedByReceivers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              chargeToTake                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::TakeChargeConsumedByReceivers(float chargeToTake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.TakeChargeConsumedByReceivers");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_TakeChargeConsumedByReceivers_Params params {};
		params.chargeToTake = chargeToTake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.WillReceiverAffectChargeConsumption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeManager_C*                       Receiver                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canProcess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::WillReceiverAffectChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* canProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.WillReceiverAffectChargeConsumption");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_WillReceiverAffectChargeConsumption_Params params {};
		params.Receiver = Receiver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canProcess != nullptr)
			*canProcess = params.canProcess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Is Valid Receiver for Charge Consumption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeManager_C*                       Receiver                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::IsValidReceiverforChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Is Valid Receiver for Charge Consumption");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_IsValidReceiverforChargeConsumption_Params params {};
		params.Receiver = Receiver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.OnChargeConsumedByReceiversChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newCharge                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::OnChargeConsumedByReceiversChanged(float newCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.OnChargeConsumedByReceiversChanged");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_OnChargeConsumedByReceiversChanged_Params params {};
		params.newCharge = newCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldProcessChargeConsumedByReceivers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldProcess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::ShouldProcessChargeConsumedByReceivers(bool* shouldProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldProcessChargeConsumedByReceivers");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_ShouldProcessChargeConsumedByReceivers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldProcess != nullptr)
			*shouldProcess = params.shouldProcess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Can Process New Receiver For Charge Consumption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canProcess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::CanProcessNewReceiverForChargeConsumption(bool* canProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Can Process New Receiver For Charge Consumption");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_CanProcessNewReceiverForChargeConsumption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canProcess != nullptr)
			*canProcess = params.canProcess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterForwardVector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ForwardVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::GetEmitterForwardVector(struct FVector* ForwardVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterForwardVector");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_GetEmitterForwardVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForwardVector != nullptr)
			*ForwardVector = params.ForwardVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterLineTraceOrigin
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      emitterActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     lineTraceOrigin                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::GetEmitterLineTraceOrigin(class AActor* emitterActor, struct FVector* lineTraceOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterLineTraceOrigin");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_GetEmitterLineTraceOrigin_Params params {};
		params.emitterActor = emitterActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (lineTraceOrigin != nullptr)
			*lineTraceOrigin = params.lineTraceOrigin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Modify Charge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicast                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               triggerEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeAdded                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::ModifyCharge(bool SetValue, float amount, bool multicast, bool triggerEvent, bool multicastEvent, float* chargeAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Modify Charge");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_ModifyCharge_Params params {};
		params.SetValue = SetValue;
		params.amount = amount;
		params.multicast = multicast;
		params.triggerEvent = triggerEvent;
		params.multicastEvent = multicastEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeAdded != nullptr)
			*chargeAdded = params.chargeAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.EmitterUpdateChargeOnTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::EmitterUpdateChargeOnTimer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.EmitterUpdateChargeOnTimer");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_EmitterUpdateChargeOnTimer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldEnableTimers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               tickServer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TickClient                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldEnableTimers");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_ShouldEnableTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tickServer != nullptr)
			*tickServer = params.tickServer;
		if (TickClient != nullptr)
			*TickClient = params.TickClient;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ChargeVariableEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ChargeVariableEvent");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_ChargeVariableEvent_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.fValue = fValue;
		params.dValue = dValue;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.InitializeEmitter
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::InitializeEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.InitializeEmitter");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_InitializeEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.UserConstructionScript");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterStructure_ChargeLantern_C::ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern");
		
		ABuff_ChargeEmitterStructure_ChargeLantern_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeEmitterStructure_ChargeLantern_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeEmitterStructure_ChargeLantern_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C");
		return ptr;
	}

}


