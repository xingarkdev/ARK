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
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AScout_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPCanCryo");
		
		AScout_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPOnRefreshColorization
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AScout_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPOnRefreshColorization");
		
		AScout_Character_BP_C_BPOnRefreshColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AScout_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_PreventMovementMode");
		
		AScout_Character_BP_C_BP_PreventMovementMode_Params params {};
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
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ServerIsFiringItemInInventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               retVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ServerIsFiringItemInInventory(bool* retVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerIsFiringItemInInventory");
		
		AScout_Character_BP_C_ServerIsFiringItemInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retVal != nullptr)
			*retVal = params.retVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ServerIsUsingTrackerBeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ServerIsUsingTrackerBeam(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerIsUsingTrackerBeam");
		
		AScout_Character_BP_C_ServerIsUsingTrackerBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.OnCheckMek
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::OnCheckMek()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.OnCheckMek");
		
		AScout_Character_BP_C_OnCheckMek_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BP_InterceptTurnInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AScout_Character_BP_C::BP_InterceptTurnInput(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_InterceptTurnInput");
		
		AScout_Character_BP_C_BP_InterceptTurnInput_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Set StatsFromItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      Stats                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AScout_Character_BP_C::SetStatsFromItem(TArray<float>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Set StatsFromItem");
		
		AScout_Character_BP_C_SetStatsFromItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.SetupScoutDisconnect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DelayTimeSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::SetupScoutDisconnect(float DelayTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetupScoutDisconnect");
		
		AScout_Character_BP_C_SetupScoutDisconnect_Params params {};
		params.DelayTimeSeconds = DelayTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.DestroyScout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::DestroyScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.DestroyScout");
		
		AScout_Character_BP_C_DestroyScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPModifyAimOffsetTargetLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimTargetLocation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector AScout_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPModifyAimOffsetTargetLocation");
		
		AScout_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimTargetLocation != nullptr)
			*AimTargetLocation = params.AimTargetLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClearExpiredDinoAIData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClearExpiredDinoAIData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClearExpiredDinoAIData");
		
		AScout_Character_BP_C_ClearExpiredDinoAIData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.SetIsFleeingForDino
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFleeing                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::SetIsFleeingForDino(class APrimalDinoCharacter* Dino, bool IsFleeing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetIsFleeingForDino");
		
		AScout_Character_BP_C_SetIsFleeingForDino_Params params {};
		params.Dino = Dino;
		params.IsFleeing = IsFleeing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Is Dino Fleeing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFleeing                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::IsDinoFleeing(class APrimalDinoCharacter* Dino, bool* IsFleeing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Is Dino Fleeing");
		
		AScout_Character_BP_C_IsDinoFleeing_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFleeing != nullptr)
			*IsFleeing = params.IsFleeing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideStencilAllianceForTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetDino                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	EStencilAlliance AScout_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter* TargetDino, class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideStencilAllianceForTarget");
		
		AScout_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params {};
		params.TargetDino = TargetDino;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPShouldCancelDoAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AScout_Character_BP_C::BPShouldCancelDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPShouldCancelDoAttack");
		
		AScout_Character_BP_C_BPShouldCancelDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.OnRep_LowStamina
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::OnRep_LowStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.OnRep_LowStamina");
		
		AScout_Character_BP_C_OnRep_LowStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.IsDashing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::IsDashing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.IsDashing");
		
		AScout_Character_BP_C_IsDashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AScout_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPGetHUDElements");
		
		AScout_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReceiveTick");
		
		AScout_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ScoutIsFirstPerson
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               retVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ScoutIsFirstPerson(bool* retVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ScoutIsFirstPerson");
		
		AScout_Character_BP_C_ScoutIsFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retVal != nullptr)
			*retVal = params.retVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.InitBeamVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::InitBeamVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InitBeamVFX");
		
		AScout_Character_BP_C_InitBeamVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.EndBeam VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::EndBeamVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.EndBeam VFX");
		
		AScout_Character_BP_C_EndBeamVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.SetBeamValidTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::SetBeamValidTarget(bool Value, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetBeamValidTarget");
		
		AScout_Character_BP_C_SetBeamValidTarget_Params params {};
		params.Value = Value;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPHandleOnStopFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AScout_Character_BP_C::BPHandleOnStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPHandleOnStopFire");
		
		AScout_Character_BP_C_BPHandleOnStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Update Target Impact VFX_Implementation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::UpdateTargetImpactVFX_Implementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Update Target Impact VFX_Implementation");
		
		AScout_Character_BP_C_UpdateTargetImpactVFX_Implementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Update Beam VFX Implementation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::UpdateBeamVFXImplementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Update Beam VFX Implementation");
		
		AScout_Character_BP_C_UpdateBeamVFXImplementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.SetTargetImpactMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ImpactDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::SetTargetImpactMaterial(float ImpactDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetTargetImpactMaterial");
		
		AScout_Character_BP_C_SetTargetImpactMaterial_Params params {};
		params.ImpactDistance = ImpactDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPPreventStasis
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AScout_Character_BP_C::BPPreventStasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPPreventStasis");
		
		AScout_Character_BP_C_BPPreventStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AScout_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPHandleUseButtonPress");
		
		AScout_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.IsScoutFirst Person
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::IsScoutFirstPerson(bool* IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.IsScoutFirst Person");
		
		AScout_Character_BP_C_IsScoutFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFirstPerson != nullptr)
			*IsFirstPerson = params.IsFirstPerson;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.SetFirstPersonMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::SetFirstPersonMaterial(bool IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetFirstPersonMaterial");
		
		AScout_Character_BP_C_SetFirstPersonMaterial_Params params {};
		params.IsFirstPerson = IsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.IsServerOrSinglePlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::IsServerOrSinglePlayer(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.IsServerOrSinglePlayer");
		
		AScout_Character_BP_C_IsServerOrSinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.IsClientOrSinglePlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::IsClientOrSinglePlayer(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.IsClientOrSinglePlayer");
		
		AScout_Character_BP_C_IsClientOrSinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Tracker Missed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::TrackerMissed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Tracker Missed");
		
		AScout_Character_BP_C_TrackerMissed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Update Scout Vision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::UpdateScoutVision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Update Scout Vision");
		
		AScout_Character_BP_C_UpdateScoutVision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AScout_Character_BP_C::BPOverrideFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideFPVViewLocation");
		
		AScout_Character_BP_C_BPOverrideFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPGetFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AScout_Character_BP_C::BPGetFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPGetFPVViewLocation");
		
		AScout_Character_BP_C_BPGetFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.PrivateTracker Missed
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::PrivateTrackerMissed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.PrivateTracker Missed");
		
		AScout_Character_BP_C_PrivateTrackerMissed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Dash
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Impulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::Dash(const struct FVector& Direction, float Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Dash");
		
		AScout_Character_BP_C_Dash_Params params {};
		params.Direction = Direction;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AScout_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		AScout_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AScout_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		AScout_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AScout_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BlueprintCanAttack");
		
		AScout_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ServerIs Tracked Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsTrackedTarget                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ServerIsTrackedTarget(class AActor* Target, bool* IsTrackedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerIs Tracked Target");
		
		AScout_Character_BP_C_ServerIsTrackedTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrackedTarget != nullptr)
			*IsTrackedTarget = params.IsTrackedTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Tracker Hit Character
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            HitCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ApplyTracker                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ValidTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::TrackerHitCharacter(class APrimalCharacter* HitCharacter, bool ApplyTracker, bool* ValidTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Tracker Hit Character");
		
		AScout_Character_BP_C_TrackerHitCharacter_Params params {};
		params.HitCharacter = HitCharacter;
		params.ApplyTracker = ApplyTracker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidTarget != nullptr)
			*ValidTarget = params.ValidTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AScout_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPAdjustDamage");
		
		AScout_Character_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_OnSetDeath");
		
		AScout_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AScout_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AScout_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Release Possessing Survivor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ReleasePossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Release Possessing Survivor");
		
		AScout_Character_BP_C_ReleasePossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.GetPossessedByPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::GetPossessedByPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.GetPossessedByPlayer");
		
		AScout_Character_BP_C_GetPossessedByPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.Spawned From Projectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ShooterPlayerController                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PossessDelay                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 FiringItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::SpawnedFromProjectile(class AShooterPlayerController* ShooterPlayerController, float PossessDelay, class UPrimalItem* FiringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Spawned From Projectile");
		
		AScout_Character_BP_C_SpawnedFromProjectile_Params params {};
		params.ShooterPlayerController = ShooterPlayerController;
		params.PossessDelay = PossessDelay;
		params.FiringItem = FiringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BPIsValidUnStasisCaster
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AScout_Character_BP_C::BPIsValidUnStasisCaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPIsValidUnStasisCaster");
		
		AScout_Character_BP_C_BPIsValidUnStasisCaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.UserConstructionScript");
		
		AScout_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_132
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScout_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_132()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_132");
		
		AScout_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_132_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_131
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScout_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_131()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_131");
		
		AScout_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_131_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_130
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScout_Character_BP_C::InpActEvt_Jump_K2Node_InputActionEvent_130()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_130");
		
		AScout_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_130_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_129
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScout_Character_BP_C::InpActEvt_Jump_K2Node_InputActionEvent_129()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_129");
		
		AScout_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_129_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_128
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScout_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_128()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_128");
		
		AScout_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_128_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_127
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScout_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_127()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_127");
		
		AScout_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_127_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.CrouchTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::CrouchTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.CrouchTick");
		
		AScout_Character_BP_C_CrouchTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.JumpTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::JumpTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.JumpTick");
		
		AScout_Character_BP_C_JumpTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.StopPossessingPlayerMovement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::StopPossessingPlayerMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.StopPossessingPlayerMovement");
		
		AScout_Character_BP_C_StopPossessingPlayerMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSelfMoved                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AScout_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReceiveHit");
		
		AScout_Character_BP_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.CheckMek
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::CheckMek()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.CheckMek");
		
		AScout_Character_BP_C_CheckMek_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::AnimNotify_RepairHandLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandLeft");
		
		AScout_Character_BP_C_AnimNotify_RepairHandLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandRight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::AnimNotify_RepairHandRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandRight");
		
		AScout_Character_BP_C_AnimNotify_RepairHandRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ReplicateInputVector
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InputVector                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ReplicateInputVector(const struct FVector& InputVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReplicateInputVector");
		
		AScout_Character_BP_C_ReplicateInputVector_Params params {};
		params.InputVector = InputVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReplairMek
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Mek                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::MULTI_ReplairMek(class APrimalDinoCharacter* Mek)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReplairMek");
		
		AScout_Character_BP_C_MULTI_ReplairMek_Params params {};
		params.Mek = Mek;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.SERVER_SetScoutTargeting
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Targeting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::SERVER_SetScoutTargeting(bool Targeting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SERVER_SetScoutTargeting");
		
		AScout_Character_BP_C_SERVER_SetScoutTargeting_Params params {};
		params.Targeting = Targeting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDestroy
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ReleasePossessingSurvivorAndDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDestroy");
		
		AScout_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.RechargeShield
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::RechargeShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.RechargeShield");
		
		AScout_Character_BP_C_RechargeShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientActivateAlertMode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientActivateAlertMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientActivateAlertMode");
		
		AScout_Character_BP_C_ClientActivateAlertMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutDamaged
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm)
	 */
	void AScout_Character_BP_C::ClientScoutDamaged(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutDamaged");
		
		AScout_Character_BP_C_ClientScoutDamaged_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientTickShieldDamageVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientTickShieldDamageVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientTickShieldDamageVFX");
		
		AScout_Character_BP_C_ClientTickShieldDamageVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientRechargeShield
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientRechargeShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientRechargeShield");
		
		AScout_Character_BP_C_ClientRechargeShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReceiveBeginPlay");
		
		AScout_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.SpawnEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::SpawnEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SpawnEnd");
		
		AScout_Character_BP_C_SpawnEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReceiveEndPlay");
		
		AScout_Character_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.TriggerDisconnectFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::TriggerDisconnectFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.TriggerDisconnectFX");
		
		AScout_Character_BP_C_TriggerDisconnectFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ScoutDied
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ScoutDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ScoutDied");
		
		AScout_Character_BP_C_ScoutDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.PossessedByPlayer
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::PossessedByPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.PossessedByPlayer");
		
		AScout_Character_BP_C_PossessedByPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReleasePossessingSurvivor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::MULTI_ReleasePossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReleasePossessingSurvivor");
		
		AScout_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ServerDashAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ServerDashAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerDashAttack");
		
		AScout_Character_BP_C_ServerDashAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.VerifyPossessingSurvivor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::VerifyPossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.VerifyPossessingSurvivor");
		
		AScout_Character_BP_C_VerifyPossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ReleasePossessingSurvivorAndDelayedDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy");
		
		AScout_Character_BP_C_ReleasePossessingSurvivorAndDelayedDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.DelayedDestroyActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::DelayedDestroyActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.DelayedDestroyActor");
		
		AScout_Character_BP_C_DelayedDestroyActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientTrackerMissed
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientTrackerMissed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientTrackerMissed");
		
		AScout_Character_BP_C_ClientTrackerMissed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpPressed");
		
		AScout_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpReleased");
		
		AScout_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.CheckConsumeResource
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::CheckConsumeResource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.CheckConsumeResource");
		
		AScout_Character_BP_C_CheckConsumeResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientConsumeResource
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientConsumeResource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientConsumeResource");
		
		AScout_Character_BP_C_ClientConsumeResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.TickThrusterVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::TickThrusterVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.TickThrusterVFX");
		
		AScout_Character_BP_C_TickThrusterVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientTickAlertMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientTickAlertMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientTickAlertMode");
		
		AScout_Character_BP_C_ClientTickAlertMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientDeactivateAlertMode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientDeactivateAlertMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientDeactivateAlertMode");
		
		AScout_Character_BP_C_ClientDeactivateAlertMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientRanOutOfStamina
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientRanOutOfStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientRanOutOfStamina");
		
		AScout_Character_BP_C_ClientRanOutOfStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutRangeCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientScoutRangeCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutRangeCheck");
		
		AScout_Character_BP_C_ClientScoutRangeCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.CheckSubmerged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::CheckSubmerged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.CheckSubmerged");
		
		AScout_Character_BP_C_CheckSubmerged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientDashTick
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientDashTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientDashTick");
		
		AScout_Character_BP_C_ClientDashTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientDashEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientDashEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientDashEnd");
		
		AScout_Character_BP_C_ClientDashEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientInitTrackerBeamFX
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BeamDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ValidTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ClientInitTrackerBeamFX(float BeamDistance, bool ValidTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientInitTrackerBeamFX");
		
		AScout_Character_BP_C_ClientInitTrackerBeamFX_Params params {};
		params.BeamDistance = BeamDistance;
		params.ValidTarget = ValidTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.UpdateTargetImpactVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::UpdateTargetImpactVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.UpdateTargetImpactVFX");
		
		AScout_Character_BP_C_UpdateTargetImpactVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.UpdateBeamVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::UpdateBeamVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.UpdateBeamVFX");
		
		AScout_Character_BP_C_UpdateBeamVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.StartImpactVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::StartImpactVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.StartImpactVFX");
		
		AScout_Character_BP_C_StartImpactVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ServerHandleOnStopFire
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ServerHandleOnStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerHandleOnStopFire");
		
		AScout_Character_BP_C_ServerHandleOnStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientEndTrackerBeamFX
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ValidTargets                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ImpactDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ClientEndTrackerBeamFX(bool ValidTargets, float ImpactDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientEndTrackerBeamFX");
		
		AScout_Character_BP_C_ClientEndTrackerBeamFX_Params params {};
		params.ValidTargets = ValidTargets;
		params.ImpactDistance = ImpactDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ApplyStaminaCost
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ApplyStaminaCost(float amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ApplyStaminaCost");
		
		AScout_Character_BP_C_ApplyStaminaCost_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.StaminaDrain
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::StaminaDrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.StaminaDrain");
		
		AScout_Character_BP_C_StaminaDrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientLowStamina
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientLowStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientLowStamina");
		
		AScout_Character_BP_C_ClientLowStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ReleasePossessingSurvivorAndLongDelayedDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy");
		
		AScout_Character_BP_C_ReleasePossessingSurvivorAndLongDelayedDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.TickStaminaMeter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::TickStaminaMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.TickStaminaMeter");
		
		AScout_Character_BP_C_TickStaminaMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAIStrafing
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::MULTI_InitAIStrafing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAIStrafing");
		
		AScout_Character_BP_C_MULTI_InitAIStrafing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAINonStrafing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::MULTI_InitAINonStrafing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAINonStrafing");
		
		AScout_Character_BP_C_MULTI_InitAINonStrafing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetAimingAtScout
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::MULTI_AITargetAimingAtScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetAimingAtScout");
		
		AScout_Character_BP_C_MULTI_AITargetAimingAtScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetNoLongerAimingAtScout
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::MULTI_AITargetNoLongerAimingAtScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetNoLongerAimingAtScout");
		
		AScout_Character_BP_C_MULTI_AITargetNoLongerAimingAtScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientCheckClearExpiredDinoData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::ClientCheckClearExpiredDinoData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientCheckClearExpiredDinoData");
		
		AScout_Character_BP_C_ClientCheckClearExpiredDinoData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.DisableAI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::DisableAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.DisableAI");
		
		AScout_Character_BP_C_DisableAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SpawnedFromProjectile
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::MULTI_SpawnedFromProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SpawnedFromProjectile");
		
		AScout_Character_BP_C_MULTI_SpawnedFromProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::DelayedReleasePossessingSurvivorAndDelayedDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy");
		
		AScout_Character_BP_C_DelayedReleasePossessingSurvivorAndDelayedDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.UpdateScoutVisionBuff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::UpdateScoutVisionBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.UpdateScoutVisionBuff");
		
		AScout_Character_BP_C_UpdateScoutVisionBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.RequestRecallScout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::RequestRecallScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.RequestRecallScout");
		
		AScout_Character_BP_C_RequestRecallScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ClientHitTerrain
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ImpactNormal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ClientHitTerrain(const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientHitTerrain");
		
		AScout_Character_BP_C_ClientHitTerrain_Params params {};
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SetStatsFromItem
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      Stats                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AScout_Character_BP_C::MULTI_SetStatsFromItem(TArray<float>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SetStatsFromItem");
		
		AScout_Character_BP_C_MULTI_SetStatsFromItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.OWNINGCLIENT_TrackerHitCharacter
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AScout_Character_BP_C::OWNINGCLIENT_TrackerHitCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.OWNINGCLIENT_TrackerHitCharacter");
		
		AScout_Character_BP_C_OWNINGCLIENT_TrackerHitCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Scout_Character_BP.Scout_Character_BP_C.ExecuteUbergraph_Scout_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScout_Character_BP_C::ExecuteUbergraph_Scout_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ExecuteUbergraph_Scout_Character_BP");
		
		AScout_Character_BP_C_ExecuteUbergraph_Scout_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScout_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScout_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scout_Character_BP.Scout_Character_BP_C");
		return ptr;
	}

}


