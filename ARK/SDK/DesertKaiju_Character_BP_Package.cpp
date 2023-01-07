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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.HaveLineOfSightTo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      LosCheckTarget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::HaveLineOfSightTo(class AActor* LosCheckTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.HaveLineOfSightTo");
		
		ADesertKaiju_Character_BP_C_HaveLineOfSightTo_Params params {};
		params.LosCheckTarget = LosCheckTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOnDinoCheat");
		
		ADesertKaiju_Character_BP_C_BPOnDinoCheat_Params params {};
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPPreventRiding
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontCheckDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPPreventRiding");
		
		ADesertKaiju_Character_BP_C_BPPreventRiding_Params params {};
		params.ByPawn = ByPawn;
		params.bDontCheckDistance = bDontCheckDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetDebugInfoString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FString ADesertKaiju_Character_BP_C::BPGetDebugInfoString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetDebugInfoString");
		
		ADesertKaiju_Character_BP_C_BPGetDebugInfoString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::BPDinoARKDownloadedBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedBegin");
		
		ADesertKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBaseOnCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BaseCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter* BaseCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBaseOnCharacter");
		
		ADesertKaiju_Character_BP_C_BPCanBaseOnCharacter_Params params {};
		params.BaseCharacter = BaseCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActorIsKaiju
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::ActorIsKaiju(class AActor* Actor, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActorIsKaiju");
		
		ADesertKaiju_Character_BP_C_ActorIsKaiju_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::BPDinoARKDownloadedEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedEnd");
		
		ADesertKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_UseTamedPhysics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::OnRep_UseTamedPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_UseTamedPhysics");
		
		ADesertKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    DamageCauserController                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHitFriendlyTarget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PreDamageHealth                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointDamageHitResult                                       (Parm, OutParm, ReferenceParm)
	 */
	struct FHitMarkerSettings ADesertKaiju_Character_BP_C::BPOverrideDamageCauserHitMarker(class AShooterPlayerController* DamageCauserController, bool bHitFriendlyTarget, float PreDamageHealth, float DamageAmount, struct FDamageEvent* DamageEvent, bool bIsPointDamage, struct FHitResult* PointDamageHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker");
		
		ADesertKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params params {};
		params.DamageCauserController = DamageCauserController;
		params.bHitFriendlyTarget = bHitFriendlyTarget;
		params.PreDamageHealth = PreDamageHealth;
		params.DamageAmount = DamageAmount;
		params.bIsPointDamage = bIsPointDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		if (PointDamageHitResult != nullptr)
			*PointDamageHitResult = params.PointDamageHitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InterpSpawnInMICs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::InterpSpawnInMICs(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InterpSpawnInMICs");
		
		ADesertKaiju_Character_BP_C_InterpSpawnInMICs_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Prevent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::PreventLocomotion_1(bool* Prevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion_1");
		
		ADesertKaiju_Character_BP_C_PreventLocomotion_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prevent != nullptr)
			*Prevent = params.Prevent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.MaybeStunDesertKaiju
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::MaybeStunDesertKaiju(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.MaybeStunDesertKaiju");
		
		ADesertKaiju_Character_BP_C_MaybeStunDesertKaiju_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StunKaiju
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::StunKaiju()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StunKaiju");
		
		ADesertKaiju_Character_BP_C_StunKaiju_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ADesertKaiju_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetRiderUnboardLocation");
		
		ADesertKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CreateNodeDynamicMICs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::CreateNodeDynamicMICs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CreateNodeDynamicMICs");
		
		ADesertKaiju_Character_BP_C_CreateNodeDynamicMICs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ClientUpdateNodeStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::ClientUpdateNodeStatus(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ClientUpdateNodeStatus");
		
		ADesertKaiju_Character_BP_C_ClientUpdateNodeStatus_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Client_ReplicateNodeStatusOnBegin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::Client_ReplicateNodeStatusOnBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Client_ReplicateNodeStatusOnBegin");
		
		ADesertKaiju_Character_BP_C_Client_ReplicateNodeStatusOnBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_PreventMovementMode");
		
		ADesertKaiju_Character_BP_C_BP_PreventMovementMode_Params params {};
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.K2_OnMovementModeChanged");
		
		ADesertKaiju_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Get Kaiju Transform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  ActualTransform                                            (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::GetKaijuTransform(struct FTransform* ActualTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Get Kaiju Transform");
		
		ADesertKaiju_Character_BP_C_GetKaijuTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActualTransform != nullptr)
			*ActualTransform = params.ActualTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPSetupTamed");
		
		ADesertKaiju_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TickLightningTargetVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::TickLightningTargetVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TickLightningTargetVFX");
		
		ADesertKaiju_Character_BP_C_TickLightningTargetVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateLightningTargetVFXLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    WorldRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm)
	 * 		struct FVector                                     SurfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::UpdateLightningTargetVFXLocation(bool IsVisible, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, const struct FHitResult& HitResult, const struct FVector& SurfaceNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateLightningTargetVFXLocation");
		
		ADesertKaiju_Character_BP_C_UpdateLightningTargetVFXLocation_Params params {};
		params.IsVisible = IsVisible;
		params.WorldLocation = WorldLocation;
		params.WorldRotation = WorldRotation;
		params.HitResult = HitResult;
		params.SurfaceNormal = SurfaceNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindClosestSocketName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CompareLoc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ClosestSocket                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::FindClosestSocketName(const struct FVector& CompareLoc, class FName* ClosestSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindClosestSocketName");
		
		ADesertKaiju_Character_BP_C_FindClosestSocketName_Params params {};
		params.CompareLoc = CompareLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestSocket != nullptr)
			*ClosestSocket = params.ClosestSocket;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlinkDamageNodeInterp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::BlinkDamageNodeInterp(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlinkDamageNodeInterp");
		
		ADesertKaiju_Character_BP_C_BlinkDamageNodeInterp_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnSetDeath");
		
		ADesertKaiju_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockCheckForRespawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::TamedFlockCheckForRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockCheckForRespawn");
		
		ADesertKaiju_Character_BP_C_TamedFlockCheckForRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPLimitPlayerRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InViewRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ADesertKaiju_Character_BP_C::BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPLimitPlayerRotation");
		
		ADesertKaiju_Character_BP_C_BPLimitPlayerRotation_Params params {};
		params.viewingCharacter = viewingCharacter;
		params.InViewRotation = InViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed");
		
		ADesertKaiju_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params {};
		params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
		params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVCameraSpeedInterpolationMultiplier != nullptr)
			*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
		if (TPVOffsetInterpSpeed != nullptr)
			*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideCameraViewTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CurrentCameraMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DesiredCameraLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DesiredCameraRotation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DesiredFOV                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraRotation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraFOV                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CameraFOV                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideCameraViewTarget");
		
		ADesertKaiju_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
		params.CurrentCameraMode = CurrentCameraMode;
		params.DesiredCameraLocation = DesiredCameraLocation;
		params.DesiredCameraRotation = DesiredCameraRotation;
		params.DesiredFOV = DesiredFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverrideCameraLocation != nullptr)
			*bOverrideCameraLocation = params.bOverrideCameraLocation;
		if (CameraLocation != nullptr)
			*CameraLocation = params.CameraLocation;
		if (bOverrideCameraRotation != nullptr)
			*bOverrideCameraRotation = params.bOverrideCameraRotation;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
		if (bOverrideCameraFOV != nullptr)
			*bOverrideCameraFOV = params.bOverrideCameraFOV;
		if (CameraFOV != nullptr)
			*CameraFOV = params.CameraFOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ADesertKaiju_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustAttackIndex");
		
		ADesertKaiju_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockScan for Enemies
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::TamedFlockScanforEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockScan for Enemies");
		
		ADesertKaiju_Character_BP_C_TamedFlockScanforEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Tamed Flocks Distance to Kaiju Check
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::TamedFlocksDistancetoKaijuCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Tamed Flocks Distance to Kaiju Check");
		
		ADesertKaiju_Character_BP_C_TamedFlocksDistancetoKaijuCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.WildFlocks Distance to Kaiju Check
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::WildFlocksDistancetoKaijuCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.WildFlocks Distance to Kaiju Check");
		
		ADesertKaiju_Character_BP_C_WildFlocksDistancetoKaijuCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FlockCommandTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FlockOne                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::FlockCommandTrace(bool FlockOne)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FlockCommandTrace");
		
		ADesertKaiju_Character_BP_C_FlockCommandTrace_Params params {};
		params.FlockOne = FlockOne;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ADesertKaiju_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetHUDElements");
		
		ADesertKaiju_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.RecallTamedFlocks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::RecallTamedFlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.RecallTamedFlocks");
		
		ADesertKaiju_Character_BP_C_RecallTamedFlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLightningAoEField
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ExplosionLoc                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnKaiju                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Prevent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::PreventLightningAoEField(const struct FVector& ExplosionLoc, bool OnKaiju, bool* Prevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLightningAoEField");
		
		ADesertKaiju_Character_BP_C_PreventLightningAoEField_Params params {};
		params.ExplosionLoc = ExplosionLoc;
		params.OnKaiju = OnKaiju;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prevent != nullptr)
			*Prevent = params.Prevent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindHUDOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USceneComponent*                             HoldSocket                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ADesertKaiju_Character_BP_C::FindHUDOffset(class USceneComponent* HoldSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindHUDOffset");
		
		ADesertKaiju_Character_BP_C_FindHUDOffset_Params params {};
		params.HoldSocket = HoldSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyFauxNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LFin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::DestroyFauxNode(bool LFin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyFauxNode");
		
		ADesertKaiju_Character_BP_C_DestroyFauxNode_Params params {};
		params.LFin = LFin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageFauxNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LeftNode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::DamageFauxNode(float Damage, bool LeftNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageFauxNode");
		
		ADesertKaiju_Character_BP_C_DamageFauxNode_Params params {};
		params.Damage = Damage;
		params.LeftNode = LeftNode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RWingNodeHealth
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::OnRep_RWingNodeHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RWingNodeHealth");
		
		ADesertKaiju_Character_BP_C_OnRep_RWingNodeHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDoAttack");
		
		ADesertKaiju_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Prevent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::PreventLocomotion(bool* Prevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion");
		
		ADesertKaiju_Character_BP_C_PreventLocomotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prevent != nullptr)
			*Prevent = params.Prevent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Update Locomotion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::UpdateLocomotion(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Update Locomotion");
		
		ADesertKaiju_Character_BP_C_UpdateLocomotion_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RiderControlFlockMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::OnRep_RiderControlFlockMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RiderControlFlockMode");
		
		ADesertKaiju_Character_BP_C_OnRep_RiderControlFlockMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanAttack");
		
		ADesertKaiju_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanRiderAttack");
		
		ADesertKaiju_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ADesertKaiju_Character_BP_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnLanded");
		
		ADesertKaiju_Character_BP_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerServer");
		
		ADesertKaiju_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnGroundFlock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FirstFlock                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::SpawnGroundFlock(bool FirstFlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnGroundFlock");
		
		ADesertKaiju_Character_BP_C_SpawnGroundFlock_Params params {};
		params.FirstFlock = FirstFlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ADesertKaiju_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ADesertKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
		params.AttackIndex = AttackIndex;
		params.OriginalDamageAmount = OriginalDamageAmount;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamageType != nullptr)
			*OutDamageType = params.OutDamageType;
		if (OutDamageImpulse != nullptr)
			*OutDamageImpulse = params.OutDamageImpulse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ShortestAngleDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleCurrent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ShortestAngleDistance");
		
		ADesertKaiju_Character_BP_C_ShortestAngleDistance_Params params {};
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.GetLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::GetLookDir(struct FVector* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.GetLookDir");
		
		ADesertKaiju_Character_BP_C_GetLookDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.LightningTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FireLightning                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ValidTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLoc                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SuccessFiredLightning                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::LightningTrace(bool FireLightning, bool* ValidTarget, struct FVector* HitLoc, bool* HitActor, struct FVector* HitNormal, bool* SuccessFiredLightning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.LightningTrace");
		
		ADesertKaiju_Character_BP_C_LightningTrace_Params params {};
		params.FireLightning = FireLightning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidTarget != nullptr)
			*ValidTarget = params.ValidTarget;
		if (HitLoc != nullptr)
			*HitLoc = params.HitLoc;
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
		if (HitNormal != nullptr)
			*HitNormal = params.HitNormal;
		if (SuccessFiredLightning != nullptr)
			*SuccessFiredLightning = params.SuccessFiredLightning;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerNonDedicated");
		
		ADesertKaiju_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADesertKaiju_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleOnStopTargeting");
		
		ADesertKaiju_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ADesertKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPNotifyClearPassenger");
		
		ADesertKaiju_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanTakePassenger
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PassengerSeatIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForcePassenger                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowFlyersAndWaterDinos                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BPCanTakePassenger(class APrimalCharacter* Character, int32_t PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanTakePassenger");
		
		ADesertKaiju_Character_BP_C_BPCanTakePassenger_Params params {};
		params.Character = Character;
		params.PassengerSeatIndex = PassengerSeatIndex;
		params.bForcePassenger = bForcePassenger;
		params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAllowCarryCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            checkCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter* checkCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAllowCarryCharacter");
		
		ADesertKaiju_Character_BP_C_BPAllowCarryCharacter_Params params {};
		params.checkCharacter = checkCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ADesertKaiju_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetMultiUseEntries");
		
		ADesertKaiju_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTryMultiUse");
		
		ADesertKaiju_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StartTorpid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::StartTorpid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StartTorpid");
		
		ADesertKaiju_Character_BP_C_StartTorpid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyControlNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDesertKaiju_ControlNodes                          Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::DestroyControlNode(EDesertKaiju_ControlNodes Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyControlNode");
		
		ADesertKaiju_Character_BP_C_DestroyControlNode_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageControlNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDesertKaiju_ControlNodes                          ControlNode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LightningStrike                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::DamageControlNode(EDesertKaiju_ControlNodes ControlNode, float Damage, bool LightningStrike)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageControlNode");
		
		ADesertKaiju_Character_BP_C_DamageControlNode_Params params {};
		params.ControlNode = ControlNode;
		params.Damage = Damage;
		params.LightningStrike = LightningStrike;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ADesertKaiju_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustDamage");
		
		ADesertKaiju_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DealLightningStrikeExplosionDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ExplosionLoc                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnKaiju                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::DealLightningStrikeExplosionDamage(const struct FVector& ExplosionLoc, bool OnKaiju, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DealLightningStrikeExplosionDamage");
		
		ADesertKaiju_Character_BP_C_DealLightningStrikeExplosionDamage_Params params {};
		params.ExplosionLoc = ExplosionLoc;
		params.OnKaiju = OnKaiju;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnBasedFlock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FirstFlock                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::SpawnBasedFlock(bool FirstFlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnBasedFlock");
		
		ADesertKaiju_Character_BP_C_SpawnBasedFlock_Params params {};
		params.FirstFlock = FirstFlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBeBaseForCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_Character_BP_C::BPCanBeBaseForCharacter(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBeBaseForCharacter");
		
		ADesertKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UserConstructionScript");
		
		ADesertKaiju_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_134
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_134()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_134");
		
		ADesertKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_134_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_133
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_133()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_133");
		
		ADesertKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_133_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CallFunc_StunKaiju
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::CallFunc_StunKaiju()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CallFunc_StunKaiju");
		
		ADesertKaiju_Character_BP_C_CallFunc_StunKaiju_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SetVar_DKArenaManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ArenaManager                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::SetVar_DKArenaManager(class AActor* ArenaManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SetVar_DKArenaManager");
		
		ADesertKaiju_Character_BP_C_SetVar_DKArenaManager_Params params {};
		params.ArenaManager = ArenaManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveBeginPlay");
		
		ADesertKaiju_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SummonLightning
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LightningLoc                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseRelative                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::SummonLightning(class AActor* Target, const struct FVector& LightningLoc, bool UseRelative, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SummonLightning");
		
		ADesertKaiju_Character_BP_C_SummonLightning_Params params {};
		params.Target = Target;
		params.LightningLoc = LightningLoc;
		params.UseRelative = UseRelative;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Mutli_ExposeNodes
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDesertKaiju_ControlNodes                          Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Expose                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Mutli_ExposeNodes(EDesertKaiju_ControlNodes Node, bool Expose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Mutli_ExposeNodes");
		
		ADesertKaiju_Character_BP_C_Mutli_ExposeNodes_Params params {};
		params.Node = Node;
		params.Expose = Expose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNodeColor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Activated                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DamageNode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_SetNodeColor(int32_t Node, bool Activated, float Alpha, bool DamageNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNodeColor");
		
		ADesertKaiju_Character_BP_C_Multi_SetNodeColor_Params params {};
		params.Node = Node;
		params.Activated = Activated;
		params.Alpha = Alpha;
		params.DamageNode = DamageNode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActivateNode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDesertKaiju_ControlNodes                          ControlNode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::ActivateNode(EDesertKaiju_ControlNodes ControlNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActivateNode");
		
		ADesertKaiju_Character_BP_C_ActivateNode_Params params {};
		params.ControlNode = ControlNode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DeactivateNode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDesertKaiju_ControlNodes                          ControlNode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::DeactivateNode(EDesertKaiju_ControlNodes ControlNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DeactivateNode");
		
		ADesertKaiju_Character_BP_C_DeactivateNode_Params params {};
		params.ControlNode = ControlNode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_RightClickLightning
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::CtS_RightClickLightning(const struct FVector& Loc, class AActor* Actor, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_RightClickLightning");
		
		ADesertKaiju_Character_BP_C_CtS_RightClickLightning_Params params {};
		params.Loc = Loc;
		params.Actor = Actor;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FireRiderLightning
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::FireRiderLightning(const struct FVector& Loc, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FireRiderLightning");
		
		ADesertKaiju_Character_BP_C_FireRiderLightning_Params params {};
		params.Loc = Loc;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveTick");
		
		ADesertKaiju_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_LWingNode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::Deactivate_LWingNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_LWingNode");
		
		ADesertKaiju_Character_BP_C_Deactivate_LWingNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_RWingNode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::Deactivate_RWingNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_RWingNode");
		
		ADesertKaiju_Character_BP_C_Deactivate_RWingNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_CentralNode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::Deactivate_CentralNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_CentralNode");
		
		ADesertKaiju_Character_BP_C_Deactivate_CentralNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_SetRiderControlFlockMode
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::CtS_SetRiderControlFlockMode(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_SetRiderControlFlockMode");
		
		ADesertKaiju_Character_BP_C_CtS_SetRiderControlFlockMode_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_ExposeFauxNodes
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LFin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Expose                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_ExposeFauxNodes(bool LFin, bool Expose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_ExposeFauxNodes");
		
		ADesertKaiju_Character_BP_C_Multi_ExposeFauxNodes_Params params {};
		params.LFin = LFin;
		params.Expose = Expose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFauxNodeColor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LFin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_SetFauxNodeColor(bool LFin, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFauxNodeColor");
		
		ADesertKaiju_Character_BP_C_Multi_SetFauxNodeColor_Params params {};
		params.LFin = LFin;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ADesertKaiju_Character_BP_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature");
		
		ADesertKaiju_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
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
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayRollingEffects
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotator                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_PlayRollingEffects(const struct FRotator& Rotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayRollingEffects");
		
		ADesertKaiju_Character_BP_C_Multi_PlayRollingEffects_Params params {};
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_Test
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::Multi_Test()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_Test");
		
		ADesertKaiju_Character_BP_C_Multi_Test_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnJumpPressed");
		
		ADesertKaiju_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_SpawnTamedFlocks
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::Server_SpawnTamedFlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_SpawnTamedFlocks");
		
		ADesertKaiju_Character_BP_C_Server_SpawnTamedFlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_RecallFlocks
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::Server_RecallFlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_RecallFlocks");
		
		ADesertKaiju_Character_BP_C_Server_RecallFlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_ForceTamedFlockTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FlockOne                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Server_ForceTamedFlockTarget(class AActor* Target, bool FlockOne)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_ForceTamedFlockTarget");
		
		ADesertKaiju_Character_BP_C_Server_ForceTamedFlockTarget_Params params {};
		params.Target = Target;
		params.FlockOne = FlockOne;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_UpdateRiderLightningStrikeCharges
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Server_UpdateRiderLightningStrikeCharges(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_UpdateRiderLightningStrikeCharges");
		
		ADesertKaiju_Character_BP_C_Server_UpdateRiderLightningStrikeCharges_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger1DelayedSetInterpSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Passenger1DelayedSetInterpSpeed(class APrimalCharacter* Passenger, bool UseOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger1DelayedSetInterpSpeed");
		
		ADesertKaiju_Character_BP_C_Passenger1DelayedSetInterpSpeed_Params params {};
		params.Passenger = Passenger;
		params.UseOverride = UseOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger2DelayedSetInterpSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Passenger2DelayedSetInterpSpeed(class APrimalCharacter* Passenger, bool UseOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger2DelayedSetInterpSpeed");
		
		ADesertKaiju_Character_BP_C_Passenger2DelayedSetInterpSpeed_Params params {};
		params.Passenger = Passenger;
		params.UseOverride = UseOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger3DelayedSetInterpSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Passenger3DelayedSetInterpSpeed(class APrimalCharacter* Passenger, bool UseOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger3DelayedSetInterpSpeed");
		
		ADesertKaiju_Character_BP_C_Passenger3DelayedSetInterpSpeed_Params params {};
		params.Passenger = Passenger;
		params.UseOverride = UseOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger4DelayedSetInterpSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Passenger4DelayedSetInterpSpeed(class APrimalCharacter* Passenger, bool UseOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger4DelayedSetInterpSpeed");
		
		ADesertKaiju_Character_BP_C_Passenger4DelayedSetInterpSpeed_Params params {};
		params.Passenger = Passenger;
		params.UseOverride = UseOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpLeftNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_InterpLeftNode(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpLeftNode");
		
		ADesertKaiju_Character_BP_C_Multi_InterpLeftNode_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpRightNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_InterpRightNode(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpRightNode");
		
		ADesertKaiju_Character_BP_C_Multi_InterpRightNode_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_CenterRightNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_CenterRightNode(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_CenterRightNode");
		
		ADesertKaiju_Character_BP_C_Multi_CenterRightNode_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_AttachLightningAOE
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             Parent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_AttachLightningAOE(class USceneComponent* Loc, class USceneComponent* Parent, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_AttachLightningAOE");
		
		ADesertKaiju_Character_BP_C_Multi_AttachLightningAOE_Params params {};
		params.Loc = Loc;
		params.Parent = Parent;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnLightningAOE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ExplosionLoc                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnKaiju                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotator                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::SpawnLightningAOE(const struct FVector& ExplosionLoc, bool OnKaiju, const struct FRotator& Rotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnLightningAOE");
		
		ADesertKaiju_Character_BP_C_SpawnLightningAOE_Params params {};
		params.ExplosionLoc = ExplosionLoc;
		params.OnKaiju = OnKaiju;
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastLightningRechargeTime
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_SetLastLightningRechargeTime(double Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastLightningRechargeTime");
		
		ADesertKaiju_Character_BP_C_Multi_SetLastLightningRechargeTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastTimeStoppedTargeting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::Multi_SetLastTimeStoppedTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastTimeStoppedTargeting");
		
		ADesertKaiju_Character_BP_C_Multi_SetLastTimeStoppedTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetTemplate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_SetTemplate(class APrimalBuff* Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetTemplate");
		
		ADesertKaiju_Character_BP_C_Multi_SetTemplate_Params params {};
		params.Buff = Buff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFullbodyBlendStrength
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_SetFullbodyBlendStrength(float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFullbodyBlendStrength");
		
		ADesertKaiju_Character_BP_C_Multi_SetFullbodyBlendStrength_Params params {};
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.multi_drawnode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::multi_drawnode(const struct FVector& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.multi_drawnode");
		
		ADesertKaiju_Character_BP_C_multi_drawnode_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetCollisionProf
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ColProfName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDesertKaiju_ControlNodes                          Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_SetCollisionProf(const class FName& ColProfName, EDesertKaiju_ControlNodes Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetCollisionProf");
		
		ADesertKaiju_Character_BP_C_Multi_SetCollisionProf_Params params {};
		params.ColProfName = ColProfName;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffCorruptionNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_DelayedTurnOffCorruptionNode(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffCorruptionNode");
		
		ADesertKaiju_Character_BP_C_Multi_DelayedTurnOffCorruptionNode_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PlayStun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::PlayStun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PlayStun");
		
		ADesertKaiju_Character_BP_C_PlayStun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.EquipSaddle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::EquipSaddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.EquipSaddle");
		
		ADesertKaiju_Character_BP_C_EquipSaddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_PlayNodeDestroyFX(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayNodeDestroyFX");
		
		ADesertKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNewFlySpeed
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::Multi_SetNewFlySpeed(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNewFlySpeed");
		
		ADesertKaiju_Character_BP_C_Multi_SetNewFlySpeed_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateSaddlePhysics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::UpdateSaddlePhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateSaddlePhysics");
		
		ADesertKaiju_Character_BP_C_UpdateSaddlePhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_Character_BP_C::Multi_DelayedTurnOffHealthRegen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen");
		
		ADesertKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ExecuteUbergraph_DesertKaiju_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_Character_BP_C::ExecuteUbergraph_DesertKaiju_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ExecuteUbergraph_DesertKaiju_Character_BP");
		
		ADesertKaiju_Character_BP_C_ExecuteUbergraph_DesertKaiju_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADesertKaiju_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADesertKaiju_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DesertKaiju_Character_BP.DesertKaiju_Character_BP_C");
		return ptr;
	}

}


