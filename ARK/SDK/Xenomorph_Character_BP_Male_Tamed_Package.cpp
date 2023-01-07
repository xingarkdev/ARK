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
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifySetRider");
		
		AXenomorph_Character_BP_Male_Tamed_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPTimerNonDedicated");
		
		AXenomorph_Character_BP_Male_Tamed_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPCharacterSleeped");
		
		AXenomorph_Character_BP_Male_Tamed_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPOnMovementModeChangedNotify");
		
		AXenomorph_Character_BP_Male_Tamed_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifyClearRider");
		
		AXenomorph_Character_BP_Male_Tamed_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server Stop Jump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::ServerStopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server Stop Jump");
		
		AXenomorph_Character_BP_Male_Tamed_C_ServerStopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPDoAttack");
		
		AXenomorph_Character_BP_Male_Tamed_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetLaunchDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      CalcActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AXenomorph_Character_BP_Male_Tamed_C::GetLaunchDirection(class AActor* CalcActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetLaunchDirection");
		
		AXenomorph_Character_BP_Male_Tamed_C_GetLaunchDirection_Params params {};
		params.CalcActor = CalcActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.LaunchAtTracePoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::LaunchAtTracePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.LaunchAtTracePoint");
		
		AXenomorph_Character_BP_Male_Tamed_C_LaunchAtTracePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Process Launch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::ProcessLaunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Process Launch");
		
		AXenomorph_Character_BP_Male_Tamed_C_ProcessLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ProcessJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::ProcessJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ProcessJump");
		
		AXenomorph_Character_BP_Male_Tamed_C_ProcessJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Jump Trace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::JumpTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Jump Trace");
		
		AXenomorph_Character_BP_Male_Tamed_C_JumpTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShouldStopJumpRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               returnvalue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::ShouldStopJumpRotation(bool* returnvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShouldStopJumpRotation");
		
		AXenomorph_Character_BP_Male_Tamed_C_ShouldStopJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnvalue != nullptr)
			*returnvalue = params.returnvalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShortestAngleDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleCurrent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShortestAngleDistance");
		
		AXenomorph_Character_BP_Male_Tamed_C_ShortestAngleDistance_Params params {};
		params.AngleCurrent = AngleCurrent;
		params.AngleTarget = AngleTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Difference != nullptr)
			*Difference = params.Difference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetClampedLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               LimitLowerPitch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AXenomorph_Character_BP_Male_Tamed_C::GetClampedLookDir(bool LimitLowerPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetClampedLookDir");
		
		AXenomorph_Character_BP_Male_Tamed_C_GetClampedLookDir_Params params {};
		params.LimitLowerPitch = LimitLowerPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UserConstructionScript");
		
		AXenomorph_Character_BP_Male_Tamed_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpPressed");
		
		AXenomorph_Character_BP_Male_Tamed_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpReleased");
		
		AXenomorph_Character_BP_Male_Tamed_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::DelayedPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedPress");
		
		AXenomorph_Character_BP_Male_Tamed_C_DelayedPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Request Jump Response
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHoldingJump                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::RequestJumpResponse(bool isHoldingJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Request Jump Response");
		
		AXenomorph_Character_BP_Male_Tamed_C_RequestJumpResponse_Params params {};
		params.isHoldingJump = isHoldingJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_SetPreventMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewPreventMovement                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::Multi_SetPreventMovement(bool NewPreventMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_SetPreventMovement");
		
		AXenomorph_Character_BP_Male_Tamed_C_Multi_SetPreventMovement_Params params {};
		params.NewPreventMovement = NewPreventMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedClearJumping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::DelayedClearJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedClearJumping");
		
		AXenomorph_Character_BP_Male_Tamed_C_DelayedClearJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               JumpInstant                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server_TraceTargetDir");
		
		AXenomorph_Character_BP_Male_Tamed_C_Server_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		params.JumpInstant = JumpInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.StartJumpIdle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::StartJumpIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.StartJumpIdle");
		
		AXenomorph_Character_BP_Male_Tamed_C_StartJumpIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ClearJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceImmediateClear                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::ClearJump(bool ForceImmediateClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ClearJump");
		
		AXenomorph_Character_BP_Male_Tamed_C_ClearJump_Params params {};
		params.ForceImmediateClear = ForceImmediateClear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_TraceTargetDir");
		
		AXenomorph_Character_BP_Male_Tamed_C_Multi_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateAllJumpRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::UpdateAllJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateAllJumpRotation");
		
		AXenomorph_Character_BP_Male_Tamed_C_UpdateAllJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateJumpRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::UpdateJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateJumpRotation");
		
		AXenomorph_Character_BP_Male_Tamed_C_UpdateJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.AnimNotify_JumpStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::AnimNotify_JumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.AnimNotify_JumpStart");
		
		AXenomorph_Character_BP_Male_Tamed_C_AnimNotify_JumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ServerArrestMovement
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::ServerArrestMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ServerArrestMovement");
		
		AXenomorph_Character_BP_Male_Tamed_C_ServerArrestMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ResetArrestMovement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::ResetArrestMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ResetArrestMovement");
		
		AXenomorph_Character_BP_Male_Tamed_C_ResetArrestMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Tamed_C::ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed");
		
		AXenomorph_Character_BP_Male_Tamed_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AXenomorph_Character_BP_Male_Tamed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AXenomorph_Character_BP_Male_Tamed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C");
		return ptr;
	}

}


