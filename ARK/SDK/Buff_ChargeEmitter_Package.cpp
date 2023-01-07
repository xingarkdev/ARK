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
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterIsBuffOfType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeManagerType                                typeToCheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isOfType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::EmitterIsBuffOfType(E_ChargeManagerType typeToCheck, bool* isOfType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterIsBuffOfType");
		
		ABuff_ChargeEmitter_C_EmitterIsBuffOfType_Params params {};
		params.typeToCheck = typeToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isOfType != nullptr)
			*isOfType = params.isOfType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Get Extra Charge Consumed Multiplier for Receiver
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABuff_ChargeManager_C*                       Receiver                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              retMultiplier                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::GetExtraChargeConsumedMultiplierforReceiver(class ABuff_ChargeManager_C* Receiver, float* retMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Get Extra Charge Consumed Multiplier for Receiver");
		
		ABuff_ChargeEmitter_C_GetExtraChargeConsumedMultiplierforReceiver_Params params {};
		params.Receiver = Receiver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retMultiplier != nullptr)
			*retMultiplier = params.retMultiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetDistanceAndAngleCheckOrigin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      emitterActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     distanceAngleOrigin                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::GetDistanceAndAngleCheckOrigin(class AActor* emitterActor, struct FVector* distanceAngleOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetDistanceAndAngleCheckOrigin");
		
		ABuff_ChargeEmitter_C_GetDistanceAndAngleCheckOrigin_Params params {};
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
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.TakeChargeConsumedByReceivers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              chargeToTake                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::TakeChargeConsumedByReceivers(float chargeToTake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.TakeChargeConsumedByReceivers");
		
		ABuff_ChargeEmitter_C_TakeChargeConsumedByReceivers_Params params {};
		params.chargeToTake = chargeToTake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetChargeVariableExternalEmitter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::GetChargeVariableExternalEmitter(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetChargeVariableExternalEmitter");
		
		ABuff_ChargeEmitter_C_GetChargeVariableExternalEmitter_Params params {};
		params.variableType = variableType;
		
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
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldProcessChargeConsumedByReceivers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldProcess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::ShouldProcessChargeConsumedByReceivers(bool* shouldProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldProcessChargeConsumedByReceivers");
		
		ABuff_ChargeEmitter_C_ShouldProcessChargeConsumedByReceivers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldProcess != nullptr)
			*shouldProcess = params.shouldProcess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeConsumedByReceiversChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newCharge                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::OnChargeConsumedByReceiversChanged(float newCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeConsumedByReceiversChanged");
		
		ABuff_ChargeEmitter_C_OnChargeConsumedByReceiversChanged_Params params {};
		params.newCharge = newCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.WillReceiverAffectChargeConsumption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeManager_C*                       Receiver                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canProcess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::WillReceiverAffectChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* canProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.WillReceiverAffectChargeConsumption");
		
		ABuff_ChargeEmitter_C_WillReceiverAffectChargeConsumption_Params params {};
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
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Valid Receiver for Charge Consumption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeManager_C*                       Receiver                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::IsValidReceiverforChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Valid Receiver for Charge Consumption");
		
		ABuff_ChargeEmitter_C_IsValidReceiverforChargeConsumption_Params params {};
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
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Process Charge Consumed by Receivers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::ProcessChargeConsumedbyReceivers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Process Charge Consumed by Receivers");
		
		ABuff_ChargeEmitter_C_ProcessChargeConsumedbyReceivers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Can Process New Receiver For Charge Consumption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canProcess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::CanProcessNewReceiverForChargeConsumption(bool* canProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Can Process New Receiver For Charge Consumption");
		
		ABuff_ChargeEmitter_C_CanProcessNewReceiverForChargeConsumption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canProcess != nullptr)
			*canProcess = params.canProcess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetRadiusForDistanceCheck
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              radiusForCheck                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::GetRadiusForDistanceCheck(float* radiusForCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetRadiusForDistanceCheck");
		
		ABuff_ChargeEmitter_C_GetRadiusForDistanceCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (radiusForCheck != nullptr)
			*radiusForCheck = params.radiusForCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnActorEnteredEmitterArea
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      enteringActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::OnActorEnteredEmitterArea(class AActor* enteringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnActorEnteredEmitterArea");
		
		ABuff_ChargeEmitter_C_OnActorEnteredEmitterArea_Params params {};
		params.enteringActor = enteringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterLineTraceOrigin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      emitterActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     lineTraceOrigin                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::GetEmitterLineTraceOrigin(class AActor* emitterActor, struct FVector* lineTraceOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterLineTraceOrigin");
		
		ABuff_ChargeEmitter_C_GetEmitterLineTraceOrigin_Params params {};
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
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.On EnteredEmitterRadius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeManager_C*                       chargeReceiver                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::OnEnteredEmitterRadius(class ABuff_ChargeManager_C* chargeReceiver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.On EnteredEmitterRadius");
		
		ABuff_ChargeEmitter_C_OnEnteredEmitterRadius_Params params {};
		params.chargeReceiver = chargeReceiver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetActorsToIgnoreOnRaycast
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      emitterActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_ChargeEmitter_C::GetActorsToIgnoreOnRaycast(class AActor* emitterActor, TArray<class AActor*>* ActorsToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetActorsToIgnoreOnRaycast");
		
		ABuff_ChargeEmitter_C_GetActorsToIgnoreOnRaycast_Params params {};
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
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      emitterActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::GetEmitterActor(class AActor** emitterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterActor");
		
		ABuff_ChargeEmitter_C_GetEmitterActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (emitterActor != nullptr)
			*emitterActor = params.emitterActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Point Affected By Emitter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     affectedPoint                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      requestingActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAffected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::IsPointAffectedByEmitter(const struct FVector& affectedPoint, class AActor* requestingActor, bool* isAffected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Point Affected By Emitter");
		
		ABuff_ChargeEmitter_C_IsPointAffectedByEmitter_Params params {};
		params.affectedPoint = affectedPoint;
		params.requestingActor = requestingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isAffected != nullptr)
			*isAffected = params.isAffected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Take Harvesting Charge From Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              chargeHarvested                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeTaken                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::TakeHarvestingChargeFromCharacter(float chargeHarvested, float* chargeTaken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Take Harvesting Charge From Character");
		
		ABuff_ChargeEmitter_C_TakeHarvestingChargeFromCharacter_Params params {};
		params.chargeHarvested = chargeHarvested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeTaken != nullptr)
			*chargeTaken = params.chargeTaken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeHarvested
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amountHarvested                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::OnChargeHarvested(float amountHarvested)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeHarvested");
		
		ABuff_ChargeEmitter_C_OnChargeHarvested_Params params {};
		params.amountHarvested = amountHarvested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::InitializeManager(class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeManager");
		
		ABuff_ChargeEmitter_C_InitializeManager_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterIsActiveChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::OnEmitterIsActiveChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterIsActiveChanged");
		
		ABuff_ChargeEmitter_C_OnEmitterIsActiveChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ChargeVariableEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ChargeVariableEvent");
		
		ABuff_ChargeEmitter_C_ChargeVariableEvent_Params params {};
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
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterRangeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::OnEmitterRangeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterRangeChanged");
		
		ABuff_ChargeEmitter_C_OnEmitterRangeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is EmitterAvailableForHarvesting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::IsEmitterAvailableForHarvesting(bool* available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is EmitterAvailableForHarvesting");
		
		ABuff_ChargeEmitter_C_IsEmitterAvailableForHarvesting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (available != nullptr)
			*available = params.available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterForwardVector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ForwardVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::GetEmitterForwardVector(struct FVector* ForwardVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterForwardVector");
		
		ABuff_ChargeEmitter_C_GetEmitterForwardVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForwardVector != nullptr)
			*ForwardVector = params.ForwardVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanPlayerHarvest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               toBattery                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canHarvest                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::CanPlayerHarvest(class APlayerController* Controller, bool toBattery, bool* canHarvest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanPlayerHarvest");
		
		ABuff_ChargeEmitter_C_CanPlayerHarvest_Params params {};
		params.Controller = Controller;
		params.toBattery = toBattery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canHarvest != nullptr)
			*canHarvest = params.canHarvest;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.HarvestCharge
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MountedDino                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::HarvestCharge(bool MountedDino, class APlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.HarvestCharge");
		
		ABuff_ChargeEmitter_C_HarvestCharge_Params params {};
		params.MountedDino = MountedDino;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABuff_ChargeEmitter_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPGetMultiUseEntries");
		
		ABuff_ChargeEmitter_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_ChargeEmitter_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPTryMultiUse");
		
		ABuff_ChargeEmitter_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPDeactivated");
		
		ABuff_ChargeEmitter_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldEnableTimers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               tickServer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TickClient                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldEnableTimers");
		
		ABuff_ChargeEmitter_C_ShouldEnableTimers_Params params {};
		
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
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterShouldUpdateChargeOnTimer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldUpdateOnTimer                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::EmitterShouldUpdateChargeOnTimer(bool* shouldUpdateOnTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterShouldUpdateChargeOnTimer");
		
		ABuff_ChargeEmitter_C_EmitterShouldUpdateChargeOnTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldUpdateOnTimer != nullptr)
			*shouldUpdateOnTimer = params.shouldUpdateOnTimer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickClient");
		
		ABuff_ChargeEmitter_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterUpdateChargeOnTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::EmitterUpdateChargeOnTimer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterUpdateChargeOnTimer");
		
		ABuff_ChargeEmitter_C_EmitterUpdateChargeOnTimer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickServer");
		
		ABuff_ChargeEmitter_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanEmitCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canEmit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::CanEmitCharge(bool* canEmit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanEmitCharge");
		
		ABuff_ChargeEmitter_C_CanEmitCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canEmit != nullptr)
			*canEmit = params.canEmit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is ActorAffected by Emitter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      affectedActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               skipLineTrace                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAffected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::IsActorAffectedbyEmitter(class AActor* affectedActor, bool skipLineTrace, bool* isAffected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is ActorAffected by Emitter");
		
		ABuff_ChargeEmitter_C_IsActorAffectedbyEmitter_Params params {};
		params.affectedActor = affectedActor;
		params.skipLineTrace = skipLineTrace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isAffected != nullptr)
			*isAffected = params.isAffected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UserConstructionScript");
		
		ABuff_ChargeEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::FadeInTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__FinishedFunc");
		
		ABuff_ChargeEmitter_C_FadeInTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::FadeInTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__UpdateFunc");
		
		ABuff_ChargeEmitter_C_FadeInTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::FadeOutTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__FinishedFunc");
		
		ABuff_ChargeEmitter_C_FadeOutTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::FadeOutTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__UpdateFunc");
		
		ABuff_ChargeEmitter_C_FadeOutTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::FadeInPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse");
		
		ABuff_ChargeEmitter_C_FadeInPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::FadeInPulse_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse_Multicast");
		
		ABuff_ChargeEmitter_C_FadeInPulse_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::FadeOutPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse");
		
		ABuff_ChargeEmitter_C_FadeOutPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::FadeOutPulse_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse_Multicast");
		
		ABuff_ChargeEmitter_C_FadeOutPulse_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::UpdateEmitterEffectsRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius");
		
		ABuff_ChargeEmitter_C_UpdateEmitterEffectsRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::UpdateEmitterEffectsRadius_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius_Multicast");
		
		ABuff_ChargeEmitter_C_UpdateEmitterEffectsRadius_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeEmitter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_C::InitializeEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeEmitter");
		
		ABuff_ChargeEmitter_C_InitializeEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ExecuteUbergraph_Buff_ChargeEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_C::ExecuteUbergraph_Buff_ChargeEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ExecuteUbergraph_Buff_ChargeEmitter");
		
		ABuff_ChargeEmitter_C_ExecuteUbergraph_Buff_ChargeEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter.Buff_ChargeEmitter_C");
		return ptr;
	}

}


