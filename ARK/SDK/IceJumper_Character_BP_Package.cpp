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
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnTamedProcessOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnTamedProcessOrder");
		
		AIceJumper_Character_BP_C_BPOnTamedProcessOrder_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowServerFPS
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::IsLowServerFPS(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowServerFPS");
		
		AIceJumper_Character_BP_C_IsLowServerFPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetPositionErrorTolerance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FlyingTolerance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetPositionErrorTolerance(float Tolerance, float FlyingTolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetPositionErrorTolerance");
		
		AIceJumper_Character_BP_C_SetPositionErrorTolerance_Params params {};
		params.Tolerance = Tolerance;
		params.FlyingTolerance = FlyingTolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.Queue Random Boredom
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IncludePossibleInstantBoredom                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::QueueRandomBoredom(bool IncludePossibleInstantBoredom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Queue Random Boredom");
		
		AIceJumper_Character_BP_C_QueueRandomBoredom_Params params {};
		params.IncludePossibleInstantBoredom = IncludePossibleInstantBoredom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIsBored
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBored                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetIsBored(bool IsBored)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIsBored");
		
		AIceJumper_Character_BP_C_SetIsBored_Params params {};
		params.IsBored = IsBored;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceJumper_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTryMultiUse");
		
		AIceJumper_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AIceJumper_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetMultiUseEntries");
		
		AIceJumper_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPUnstasis");
		
		AIceJumper_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetDebugInfoString
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString AIceJumper_Character_BP_C::BPGetDebugInfoString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetDebugInfoString");
		
		AIceJumper_Character_BP_C_BPGetDebugInfoString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTriggerStasisEvent");
		
		AIceJumper_Character_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AIceJumper_Character_BP_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOV");
		
		AIceJumper_Character_BP_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOVInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVInterpSpeedIn                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AIceJumper_Character_BP_C::BPModifyFOVInterpSpeed(float FOVInterpSpeedIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOVInterpSpeed");
		
		AIceJumper_Character_BP_C_BPModifyFOVInterpSpeed_Params params {};
		params.FOVInterpSpeedIn = FOVInterpSpeedIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.PlayTiredAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::PlayTiredAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.PlayTiredAnim");
		
		AIceJumper_Character_BP_C_PlayTiredAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyAimOffsetNoTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Aim                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator AIceJumper_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyAimOffsetNoTarget");
		
		AIceJumper_Character_BP_C_BPModifyAimOffsetNoTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Aim != nullptr)
			*Aim = params.Aim;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceJumper_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_PreventMovementMode");
		
		AIceJumper_Character_BP_C_BP_PreventMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.Spawn Ice Breath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::SpawnIceBreath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Spawn Ice Breath");
		
		AIceJumper_Character_BP_C_SpawnIceBreath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandlePoop
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AIceJumper_Character_BP_C::BPHandlePoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandlePoop");
		
		AIceJumper_Character_BP_C_BPHandlePoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashMaxDistance2D
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::GetForwardDashMaxDistance2D(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashMaxDistance2D");
		
		AIceJumper_Character_BP_C_GetForwardDashMaxDistance2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ClientLocationInterpSpeedReplicated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::OnRep_ClientLocationInterpSpeedReplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ClientLocationInterpSpeedReplicated");
		
		AIceJumper_Character_BP_C_OnRep_ClientLocationInterpSpeedReplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathStateIsActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::IceBreathStateIsActive(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathStateIsActive");
		
		AIceJumper_Character_BP_C_IceBreathStateIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathInputPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Pressed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetIceBreathInputPressed(bool Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathInputPressed");
		
		AIceJumper_Character_BP_C_SetIceBreathInputPressed_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceJumper_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AIceJumper_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnSetDeath");
		
		AIceJumper_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifySetRider");
		
		AIceJumper_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifyClearRider");
		
		AIceJumper_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveAnyDamage");
		
		AIceJumper_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.Get AbilityStamina Cost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Base                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::GetAbilityStaminaCost(float Base, float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Get AbilityStamina Cost");
		
		AIceJumper_Character_BP_C_GetAbilityStaminaCost_Params params {};
		params.Base = Base;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is AIControlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               AIControlled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::IsAIControlled(bool* AIControlled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is AIControlled");
		
		AIceJumper_Character_BP_C_IsAIControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AIControlled != nullptr)
			*AIControlled = params.AIControlled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t AIceJumper_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		AIceJumper_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationArray != nullptr)
			*AnimationArray = params.AnimationArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.Set AITargetLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetAITargetLocation(const struct FVector& TargetLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Set AITargetLocation");
		
		AIceJumper_Character_BP_C_SetAITargetLocation_Params params {};
		params.TargetLoc = TargetLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.InAirStateIsResultOfJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::InAirStateIsResultOfJump(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.InAirStateIsResultOfJump");
		
		AIceJumper_Character_BP_C_InAirStateIsResultOfJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.K2_OnMovementModeChanged");
		
		AIceJumper_Character_BP_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsOutOfStamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               OutOfStamina                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::IsOutOfStamina(bool* OutOfStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsOutOfStamina");
		
		AIceJumper_Character_BP_C_IsOutOfStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOfStamina != nullptr)
			*OutOfStamina = params.OutOfStamina;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetIceBreathRange
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Range                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::GetIceBreathRange(float* Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetIceBreathRange");
		
		AIceJumper_Character_BP_C_GetIceBreathRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashDamage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::GetForwardDashDamage(class APrimalCharacter* Target, float* Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashDamage");
		
		AIceJumper_Character_BP_C_GetForwardDashDamage_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Damage != nullptr)
			*Damage = params.Damage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetThawSpeed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FrozenThawAmountPerRate                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::GetThawSpeed(class AActor* Target, float* FrozenThawAmountPerRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetThawSpeed");
		
		AIceJumper_Character_BP_C_GetThawSpeed_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FrozenThawAmountPerRate != nullptr)
			*FrozenThawAmountPerRate = params.FrozenThawAmountPerRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowStamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::IsLowStamina(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowStamina");
		
		AIceJumper_Character_BP_C_IsLowStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AIceJumper_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPAdjustAttackIndex");
		
		AIceJumper_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_PreviousAbilityReplicated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::OnRep_PreviousAbilityReplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_PreviousAbilityReplicated");
		
		AIceJumper_Character_BP_C_OnRep_PreviousAbilityReplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceJumper_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveForward");
		
		AIceJumper_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is DecendingRapidly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::IsDecendingRapidly(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is DecendingRapidly");
		
		AIceJumper_Character_BP_C_IsDecendingRapidly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ActivateWingTrails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Deactivate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RightWing                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ActivateWingTrails(bool Deactivate, bool RightWing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ActivateWingTrails");
		
		AIceJumper_Character_BP_C_ActivateWingTrails_Params params {};
		params.Deactivate = Deactivate;
		params.RightWing = RightWing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveTick");
		
		AIceJumper_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnDinoCheat");
		
		AIceJumper_Character_BP_C_BPOnDinoCheat_Params params {};
		params.CheatName = CheatName;
		params.bSetValue = bSetValue;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnStaminaDrained
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::BPOnStaminaDrained()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnStaminaDrained");
		
		AIceJumper_Character_BP_C_BPOnStaminaDrained_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_bOverrideNewFallVelocityReplicated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::OnRep_bOverrideNewFallVelocityReplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_bOverrideNewFallVelocityReplicated");
		
		AIceJumper_Character_BP_C_OnRep_bOverrideNewFallVelocityReplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AIceJumper_Character_BP_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideCharacterNewFallVelocity");
		
		AIceJumper_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialVelocity != nullptr)
			*InitialVelocity = params.InitialVelocity;
		if (Gravity != nullptr)
			*Gravity = params.Gravity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetActiveAbility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIceJumperAbilities_Enum                           Ability                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetActiveAbility(EIceJumperAbilities_Enum Ability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetActiveAbility");
		
		AIceJumper_Character_BP_C_SetActiveAbility_Params params {};
		params.Ability = Ability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ActiveAbilityByte
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::OnRep_ActiveAbilityByte()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ActiveAbilityByte");
		
		AIceJumper_Character_BP_C_OnRep_ActiveAbilityByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsAscending
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::IsAscending(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsAscending");
		
		AIceJumper_Character_BP_C_IsAscending_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPDoAttack");
		
		AIceJumper_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetDinoCollisionState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetDinoCollisionState(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetDinoCollisionState");
		
		AIceJumper_Character_BP_C_SetDinoCollisionState_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_UseControlRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::OnRep_UseControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_UseControlRotation");
		
		AIceJumper_Character_BP_C_OnRep_UseControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_TargetYaw
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::OnRep_TargetYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_TargetYaw");
		
		AIceJumper_Character_BP_C_OnRep_TargetYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AIceJumper_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetHUDElements");
		
		AIceJumper_Character_BP_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceJumper_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BlueprintCanAttack");
		
		AIceJumper_Character_BP_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeductStamina
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Stamina                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::DeductStamina(float Stamina, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeductStamina");
		
		AIceJumper_Character_BP_C_DeductStamina_Params params {};
		params.Stamina = Stamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathProjectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AIceJumperProjIceBreath_C*                   Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetIceBreathProjectile(class AIceJumperProjIceBreath_C* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathProjectile");
		
		AIceJumper_Character_BP_C_SetIceBreathProjectile_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdateDashCollider
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              damageMult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitTarget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::UpdateDashCollider(float Radius, float damageMult, bool* HitTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdateDashCollider");
		
		AIceJumper_Character_BP_C_UpdateDashCollider_Params params {};
		params.Radius = Radius;
		params.damageMult = damageMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitTarget != nullptr)
			*HitTarget = params.HitTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetStartTimeForMovementAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EIceJumperAbilities_Enum                           Ability                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             StartTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::GetStartTimeForMovementAbility(EIceJumperAbilities_Enum Ability, double* StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetStartTimeForMovementAbility");
		
		AIceJumper_Character_BP_C_GetStartTimeForMovementAbility_Params params {};
		params.Ability = Ability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartTime != nullptr)
			*StartTime = params.StartTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor AIceJumper_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetCrosshairColor");
		
		AIceJumper_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AIceJumper_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleOnStopTargeting");
		
		AIceJumper_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.Clear Any Active Ability State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIceJumperAbilities_Enum                           TriggeredAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ClearVelocity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EIceJumperAbilities_Enum                           ExcludingAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ClearAnyActiveAbilityState(EIceJumperAbilities_Enum TriggeredAbility, bool ClearVelocity, EIceJumperAbilities_Enum ExcludingAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.Clear Any Active Ability State");
		
		AIceJumper_Character_BP_C_ClearAnyActiveAbilityState_Params params {};
		params.TriggeredAbility = TriggeredAbility;
		params.ClearVelocity = ClearVelocity;
		params.ExcludingAbility = ExcludingAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.RidingTick");
		
		AIceJumper_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceJumper_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveRight");
		
		AIceJumper_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveBeginPlay");
		
		AIceJumper_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AIceJumper_Character_BP_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnLanded");
		
		AIceJumper_Character_BP_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.UserConstructionScript");
		
		AIceJumper_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLanded
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::MULTI_OnLanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLanded");
		
		AIceJumper_Character_BP_C_MULTI_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLandedValidated
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     GroundImpactLoc                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     GroundImpactNormal                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::MULTI_OnLandedValidated(const struct FVector& GroundImpactLoc, const struct FVector& GroundImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLandedValidated");
		
		AIceJumper_Character_BP_C_MULTI_OnLandedValidated_Params params {};
		params.GroundImpactLoc = GroundImpactLoc;
		params.GroundImpactNormal = GroundImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnJumpReleased");
		
		AIceJumper_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::OnIceBreathBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathBegin");
		
		AIceJumper_Character_BP_C_OnIceBreathBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathBegin
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::MultiOnIceBreathBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathBegin");
		
		AIceJumper_Character_BP_C_MultiOnIceBreathBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_SetIceBreathInputPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Pressed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SERVER_SetIceBreathInputPressed(bool Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_SetIceBreathInputPressed");
		
		AIceJumper_Character_BP_C_SERVER_SetIceBreathInputPressed_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ForwardDashTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ForwardDashTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ForwardDashTick");
		
		AIceJumper_Character_BP_C_ForwardDashTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_ForwardDashEnd
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::MULTI_ForwardDashEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_ForwardDashEnd");
		
		AIceJumper_Character_BP_C_MULTI_ForwardDashEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickThrusterVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::TickThrusterVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickThrusterVFX");
		
		AIceJumper_Character_BP_C_TickThrusterVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.FailsafeEndForestDash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::FailsafeEndForestDash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.FailsafeEndForestDash");
		
		AIceJumper_Character_BP_C_FailsafeEndForestDash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdatePositionErrorTolerance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::UpdatePositionErrorTolerance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdatePositionErrorTolerance");
		
		AIceJumper_Character_BP_C_UpdatePositionErrorTolerance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.EndJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::EndJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.EndJump");
		
		AIceJumper_Character_BP_C_EndJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInputActionJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ServerInputActionJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInputActionJump");
		
		AIceJumper_Character_BP_C_ServerInputActionJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.RotateToTargetYawTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::RotateToTargetYawTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.RotateToTargetYawTick");
		
		AIceJumper_Character_BP_C_RotateToTargetYawTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartThrusterVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::StartThrusterVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartThrusterVFX");
		
		AIceJumper_Character_BP_C_StartThrusterVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartForwardDash
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::StartForwardDash(const struct FVector& Direction, float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartForwardDash");
		
		AIceJumper_Character_BP_C_StartForwardDash_Params params {};
		params.Direction = Direction;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateGravityScale
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              GravityScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetAndReplicateGravityScale(float GravityScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateGravityScale");
		
		AIceJumper_Character_BP_C_SetAndReplicateGravityScale_Params params {};
		params.GravityScale = GravityScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetVelocity
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetVelocity(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetVelocity");
		
		AIceJumper_Character_BP_C_SetVelocity_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateMovementMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetAndReplicateMovementMode(EMovementMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateMovementMode");
		
		AIceJumper_Character_BP_C_SetAndReplicateMovementMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateControlRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::SetAndReplicateControlRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateControlRotation");
		
		AIceJumper_Character_BP_C_SetAndReplicateControlRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartSideDash
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::StartSideDash(unsigned char Type, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartSideDash");
		
		AIceJumper_Character_BP_C_StartSideDash_Params params {};
		params.Type = Type;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.CameraControlDashTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::CameraControlDashTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.CameraControlDashTick");
		
		AIceJumper_Character_BP_C_CameraControlDashTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveRight
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ServerInterceptMoveRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveRight");
		
		AIceJumper_Character_BP_C_ServerInterceptMoveRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.StopMovementFreeze
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::StopMovementFreeze()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StopMovementFreeze");
		
		AIceJumper_Character_BP_C_StopMovementFreeze_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartMovementFreeze
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::StartMovementFreeze()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartMovementFreeze");
		
		AIceJumper_Character_BP_C_StartMovementFreeze_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientStopMovementFreeze
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ClientStopMovementFreeze()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientStopMovementFreeze");
		
		AIceJumper_Character_BP_C_ClientStopMovementFreeze_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateClientControlForward
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ClientControlForward                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ReplicateClientControlForward(const struct FVector& ClientControlForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateClientControlForward");
		
		AIceJumper_Character_BP_C_ReplicateClientControlForward_Params params {};
		params.ClientControlForward = ClientControlForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveForward
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ServerInterceptMoveForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveForward");
		
		AIceJumper_Character_BP_C_ServerInterceptMoveForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerHandleStopTargeting
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ServerHandleStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerHandleStopTargeting");
		
		AIceJumper_Character_BP_C_ServerHandleStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientSetPitch
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ClientSetPitch(float Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientSetPitch");
		
		AIceJumper_Character_BP_C_ClientSetPitch_Params params {};
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerSetIsCrosshairOverGround
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsCrosshairOverGround                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ServerSetIsCrosshairOverGround(bool IsCrosshairOverGround)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerSetIsCrosshairOverGround");
		
		AIceJumper_Character_BP_C_ServerSetIsCrosshairOverGround_Params params {};
		params.IsCrosshairOverGround = IsCrosshairOverGround;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientMovementAbilityInterrupted
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ClientMovementAbilityInterrupted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientMovementAbilityInterrupted");
		
		AIceJumper_Character_BP_C_ClientMovementAbilityInterrupted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientDamagedTarget
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ClientDamagedTarget(const struct FVector& HitLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientDamagedTarget");
		
		AIceJumper_Character_BP_C_ClientDamagedTarget_Params params {};
		params.HitLoc = HitLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateLeftDamageFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::DeactivateLeftDamageFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateLeftDamageFX");
		
		AIceJumper_Character_BP_C_DeactivateLeftDamageFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateRightDamageFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::DeactivateRightDamageFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateRightDamageFX");
		
		AIceJumper_Character_BP_C_DeactivateRightDamageFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_EndIceBreathAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::SERVER_EndIceBreathAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_EndIceBreathAttack");
		
		AIceJumper_Character_BP_C_SERVER_EndIceBreathAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::OnIceBreathEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathEnd");
		
		AIceJumper_Character_BP_C_OnIceBreathEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathEnd
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::MultiOnIceBreathEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathEnd");
		
		AIceJumper_Character_BP_C_MultiOnIceBreathEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::IceBreathTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathTick");
		
		AIceJumper_Character_BP_C_IceBreathTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCameraLocationToServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ReplicateCameraLocationToServer(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCameraLocationToServer");
		
		AIceJumper_Character_BP_C_ReplicateCameraLocationToServer_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartForwardDash
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::MULTI_StartForwardDash(const struct FVector& Velocity, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartForwardDash");
		
		AIceJumper_Character_BP_C_MULTI_StartForwardDash_Params params {};
		params.Velocity = Velocity;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetCollision
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::MULTI_SetCollision(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetCollision");
		
		AIceJumper_Character_BP_C_MULTI_SetCollision_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCrosshairTargetToServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CrosshairTarget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ReplicateCrosshairTargetToServer(class APrimalCharacter* CrosshairTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCrosshairTargetToServer");
		
		AIceJumper_Character_BP_C_ReplicateCrosshairTargetToServer_Params params {};
		params.CrosshairTarget = CrosshairTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBallProj
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::AnimNotify_IceBallProj()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBallProj");
		
		AIceJumper_Character_BP_C_AnimNotify_IceBallProj_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::AnimNotify_IceBreathHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathHover");
		
		AIceJumper_Character_BP_C_AnimNotify_IceBreathHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_CheckStamina
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::AnimNotify_CheckStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_CheckStamina");
		
		AIceJumper_Character_BP_C_AnimNotify_CheckStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartSideDash
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::MULTI_StartSideDash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartSideDash");
		
		AIceJumper_Character_BP_C_MULTI_StartSideDash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashInterrupted
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::MULTI_SideDashInterrupted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashInterrupted");
		
		AIceJumper_Character_BP_C_MULTI_SideDashInterrupted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashEnd
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::MULTI_SideDashEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashEnd");
		
		AIceJumper_Character_BP_C_MULTI_SideDashEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::MULTI_StartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartJump");
		
		AIceJumper_Character_BP_C_MULTI_StartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetBreathFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeDilation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::MULTI_SetBreathFX(float TimeDilation, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetBreathFX");
		
		AIceJumper_Character_BP_C_MULTI_SetBreathFX_Params params {};
		params.TimeDilation = TimeDilation;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickSideThrusterVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::TickSideThrusterVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickSideThrusterVFX");
		
		AIceJumper_Character_BP_C_TickSideThrusterVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExtraJumpTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ExtraJumpTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExtraJumpTick");
		
		AIceJumper_Character_BP_C_ExtraJumpTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ResetShortDashType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::ResetShortDashType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ResetShortDashType");
		
		AIceJumper_Character_BP_C_ResetShortDashType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_TargetFrozen
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::MULTI_TargetFrozen(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_TargetFrozen");
		
		AIceJumper_Character_BP_C_MULTI_TargetFrozen_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetVelocity
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::MULTI_SetVelocity(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetVelocity");
		
		AIceJumper_Character_BP_C_MULTI_SetVelocity_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathGround
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::AnimNotify_IceBreathGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathGround");
		
		AIceJumper_Character_BP_C_AnimNotify_IceBreathGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartBoredom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::StartBoredom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartBoredom");
		
		AIceJumper_Character_BP_C_StartBoredom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.FinishBoredom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_Character_BP_C::FinishBoredom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.FinishBoredom");
		
		AIceJumper_Character_BP_C_FinishBoredom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExecuteUbergraph_IceJumper_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_Character_BP_C::ExecuteUbergraph_IceJumper_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExecuteUbergraph_IceJumper_Character_BP");
		
		AIceJumper_Character_BP_C_ExecuteUbergraph_IceJumper_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIceJumper_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIceJumper_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IceJumper_Character_BP.IceJumper_Character_BP_C");
		return ptr;
	}

}


