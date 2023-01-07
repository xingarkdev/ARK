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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName AIceKaiju_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");
		
		AIceKaiju_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideHealthBarOffset
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AIceKaiju_Character_BP_C::BPOverrideHealthBarOffset(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideHealthBarOffset");
		
		AIceKaiju_Character_BP_C_BPOverrideHealthBarOffset_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::BPDinoARKDownloadedBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedBegin");
		
		AIceKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetDebugInfoString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FString AIceKaiju_Character_BP_C::BPGetDebugInfoString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetDebugInfoString");
		
		AIceKaiju_Character_BP_C_BPGetDebugInfoString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventRiding
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontCheckDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceKaiju_Character_BP_C::BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventRiding");
		
		AIceKaiju_Character_BP_C_BPPreventRiding_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnDinoCheat");
		
		AIceKaiju_Character_BP_C_BPOnDinoCheat_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBaseOnCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BaseCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceKaiju_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter* BaseCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBaseOnCharacter");
		
		AIceKaiju_Character_BP_C_BPCanBaseOnCharacter_Params params {};
		params.BaseCharacter = BaseCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ActorIsKaiju
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsKaiju                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::ActorIsKaiju(class AActor* Actor, bool* IsKaiju)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ActorIsKaiju");
		
		AIceKaiju_Character_BP_C_ActorIsKaiju_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsKaiju != nullptr)
			*IsKaiju = params.IsKaiju;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::BPDinoARKDownloadedEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedEnd");
		
		AIceKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_UseTamedPhysics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::OnRep_UseTamedPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_UseTamedPhysics");
		
		AIceKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AIceKaiju_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");
		
		AIceKaiju_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterSound
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  SoundIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class USoundBase* AIceKaiju_Character_BP_C::BPOverrideCharacterSound(class USoundBase* SoundIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterSound");
		
		AIceKaiju_Character_BP_C_BPOverrideCharacterSound_Params params {};
		params.SoundIn = SoundIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceKaiju_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanRiderAttack");
		
		AIceKaiju_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HealNodesAndHealthFromLeashing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::HealNodesAndHealthFromLeashing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HealNodesAndHealthFromLeashing");
		
		AIceKaiju_Character_BP_C_HealNodesAndHealthFromLeashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
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
	struct FHitMarkerSettings AIceKaiju_Character_BP_C::BPOverrideDamageCauserHitMarker(class AShooterPlayerController* DamageCauserController, bool bHitFriendlyTarget, float PreDamageHealth, float DamageAmount, struct FDamageEvent* DamageEvent, bool bIsPointDamage, struct FHitResult* PointDamageHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker");
		
		AIceKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.K2_OnMovementModeChanged");
		
		AIceKaiju_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AIceKaiju_Character_BP_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity");
		
		AIceKaiju_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpSpawnInMICs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::InterpSpawnInMICs(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpSpawnInMICs");
		
		AIceKaiju_Character_BP_C_InterpSpawnInMICs_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHealthBarColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector AIceKaiju_Character_BP_C::BPGetHealthBarColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHealthBarColor");
		
		AIceKaiju_Character_BP_C_BPGetHealthBarColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AIceKaiju_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetRiderUnboardLocation");
		
		AIceKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsLocomotionBlocked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::IsLocomotionBlocked(bool* bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsLocomotionBlocked");
		
		AIceKaiju_Character_BP_C_IsLocomotionBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLocked != nullptr)
			*bLocked = params.bLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetMovementMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERootMotionMovementMode                            Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                Montage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::GetMovementMontage(ERootMotionMovementMode Mode, class UAnimMontage** Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetMovementMontage");
		
		AIceKaiju_Character_BP_C_GetMovementMontage_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Montage != nullptr)
			*Montage = params.Montage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpNodeActiveStates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::InterpNodeActiveStates(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpNodeActiveStates");
		
		AIceKaiju_Character_BP_C_InterpNodeActiveStates_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClientUpdateNodeStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::ClientUpdateNodeStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClientUpdateNodeStatus");
		
		AIceKaiju_Character_BP_C_ClientUpdateNodeStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceKaiju_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleUseButtonPress");
		
		AIceKaiju_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPNotifyClearRider");
		
		AIceKaiju_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnAnimPlayedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        StartSectionName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicateToOwner                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseAndServerUpdateMesh                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseOnServer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnAnimPlayedNotify");
		
		AIceKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params params {};
		params.AnimMontage = AnimMontage;
		params.InPlayRate = InPlayRate;
		params.StartSectionName = StartSectionName;
		params.bReplicate = bReplicate;
		params.bReplicateToOwner = bReplicateToOwner;
		params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
		params.bForceTickPoseOnServer = bForceTickPoseOnServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPSetupTamed");
		
		AIceKaiju_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventFirstPerson
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AIceKaiju_Character_BP_C::BPPreventFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventFirstPerson");
		
		AIceKaiju_Character_BP_C_BPPreventFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor AIceKaiju_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetCrosshairColor");
		
		AIceKaiju_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventInputType
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceKaiju_Character_BP_C::BPPreventInputType(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventInputType");
		
		AIceKaiju_Character_BP_C_BPPreventInputType_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetTPVCamOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::SetTPVCamOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetTPVCamOffset");
		
		AIceKaiju_Character_BP_C_SetTPVCamOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlinkDamageNodeInterp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::BlinkDamageNodeInterp(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlinkDamageNodeInterp");
		
		AIceKaiju_Character_BP_C_BlinkDamageNodeInterp_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Delta                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator AIceKaiju_Character_BP_C::BPModifyRootMotionDeltaRotation(struct FRotator* Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation");
		
		AIceKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delta != nullptr)
			*Delta = params.Delta;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaTranslation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::BPModifyRootMotionDeltaTranslation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaTranslation");
		
		AIceKaiju_Character_BP_C_BPModifyRootMotionDeltaTranslation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AIceKaiju_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetGravityZScale");
		
		AIceKaiju_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DealAOECollisionDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::DealAOECollisionDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DealAOECollisionDamage");
		
		AIceKaiju_Character_BP_C_DealAOECollisionDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Init Fur
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::InitFur()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Init Fur");
		
		AIceKaiju_Character_BP_C_InitFur_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InitFurRestDistance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::InitFurRestDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InitFurRestDistance");
		
		AIceKaiju_Character_BP_C_InitFurRestDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetLastTransforms
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::SetLastTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetLastTransforms");
		
		AIceKaiju_Character_BP_C_SetLastTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateFur
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::UpdateFur()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateFur");
		
		AIceKaiju_Character_BP_C_UpdateFur_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SimulateFur
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTransform>                          InSocketTransforms                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FTransform>                          InLastSubstepSocketTransforms                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AIceKaiju_Character_BP_C::SimulateFur(TArray<struct FTransform>* InSocketTransforms, float DeltaTime, TArray<struct FTransform>* InLastSubstepSocketTransforms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SimulateFur");
		
		AIceKaiju_Character_BP_C_SimulateFur_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSocketTransforms != nullptr)
			*InSocketTransforms = params.InSocketTransforms;
		if (InLastSubstepSocketTransforms != nullptr)
			*InLastSubstepSocketTransforms = params.InLastSubstepSocketTransforms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetFurParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTransform>                          InSocketTransforms                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AIceKaiju_Character_BP_C::SetFurParams(TArray<struct FTransform>* InSocketTransforms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetFurParams");
		
		AIceKaiju_Character_BP_C_SetFurParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSocketTransforms != nullptr)
			*InSocketTransforms = params.InSocketTransforms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateNodeDynamicMATs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::CreateNodeDynamicMATs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateNodeDynamicMATs");
		
		AIceKaiju_Character_BP_C_CreateNodeDynamicMATs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Get Launch DirectionForWildLeap
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      CalcActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::GetLaunchDirectionForWildLeap(class AActor* CalcActor, struct FVector* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Get Launch DirectionForWildLeap");
		
		AIceKaiju_Character_BP_C_GetLaunchDirectionForWildLeap_Params params {};
		params.CalcActor = CalcActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AIceKaiju_Character_BP_C::BPHandleOnStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopFire");
		
		AIceKaiju_Character_BP_C_BPHandleOnStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnSetDeath");
		
		AIceKaiju_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.TraceForLeapCollisionDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::TraceForLeapCollisionDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.TraceForLeapCollisionDamage");
		
		AIceKaiju_Character_BP_C_TraceForLeapCollisionDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AngryAOEDmg
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::AngryAOEDmg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AngryAOEDmg");
		
		AIceKaiju_Character_BP_C_AngryAOEDmg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShouldStopJumpRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::ShouldStopJumpRotation(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShouldStopJumpRotation");
		
		AIceKaiju_Character_BP_C_ShouldStopJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchLiquidBomb
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::LaunchLiquidBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchLiquidBomb");
		
		AIceKaiju_Character_BP_C_LaunchLiquidBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LiquidBombTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::LiquidBombTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LiquidBombTrace");
		
		AIceKaiju_Character_BP_C_LiquidBombTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeapTamed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::FinishLeapTamed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeapTamed");
		
		AIceKaiju_Character_BP_C_FinishLeapTamed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetLaunchDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      CalcActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::GetLaunchDirection(class AActor* CalcActor, struct FVector* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetLaunchDirection");
		
		AIceKaiju_Character_BP_C_GetLaunchDirection_Params params {};
		params.CalcActor = CalcActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchAtTracePoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::LaunchAtTracePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchAtTracePoint");
		
		AIceKaiju_Character_BP_C_LaunchAtTracePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShortestAngleDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleCurrent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShortestAngleDistance");
		
		AIceKaiju_Character_BP_C_ShortestAngleDistance_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetClampedLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               LimitLowerPitch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch, struct FVector* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetClampedLookDir");
		
		AIceKaiju_Character_BP_C_GetClampedLookDir_Params params {};
		params.LimitLowerPitch = LimitLowerPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LeapingTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::LeapingTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LeapingTrace");
		
		AIceKaiju_Character_BP_C_LeapingTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteTamedLEap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::ExecuteTamedLEap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteTamedLEap");
		
		AIceKaiju_Character_BP_C_ExecuteTamedLEap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AIceKaiju_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopTargeting");
		
		AIceKaiju_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateLeapTargetVFXLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLoc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    WorldRot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm)
	 * 		struct FVector                                     SurfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::UpdateLeapTargetVFXLocation(bool IsVisible, const struct FVector& WorldLoc, const struct FRotator& WorldRot, const struct FHitResult& HitResult, const struct FVector& SurfaceNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateLeapTargetVFXLocation");
		
		AIceKaiju_Character_BP_C_UpdateLeapTargetVFXLocation_Params params {};
		params.IsVisible = IsVisible;
		params.WorldLoc = WorldLoc;
		params.WorldRot = WorldRot;
		params.HitResult = HitResult;
		params.SurfaceNormal = SurfaceNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Calc Leap TargetTamed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileArc                              Arc                                                        (Parm)
	 * 		float                                              DebugDrawDuration                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FoundValidTarget                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAirTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetNormal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ArcTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm)
	 */
	void AIceKaiju_Character_BP_C::CalcLeapTargetTamed(const struct FProjectileArc& Arc, float DebugDrawDuration, bool* FoundValidTarget, bool* IsAirTarget, struct FVector* Location, struct FRotator* Rotation, struct FVector* TargetNormal, float* ArcTime, struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Calc Leap TargetTamed");
		
		AIceKaiju_Character_BP_C_CalcLeapTargetTamed_Params params {};
		params.Arc = Arc;
		params.DebugDrawDuration = DebugDrawDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundValidTarget != nullptr)
			*FoundValidTarget = params.FoundValidTarget;
		if (IsAirTarget != nullptr)
			*IsAirTarget = params.IsAirTarget;
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
		if (TargetNormal != nullptr)
			*TargetNormal = params.TargetNormal;
		if (ArcTime != nullptr)
			*ArcTime = params.ArcTime;
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetVerticalViewAngle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::GetVerticalViewAngle(float* Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetVerticalViewAngle");
		
		AIceKaiju_Character_BP_C_GetVerticalViewAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Angle != nullptr)
			*Angle = params.Angle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceKaiju_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AIceKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MoveBlocked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AIceKaiju_Character_BP_C::MoveBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MoveBlocked");
		
		AIceKaiju_Character_BP_C_MoveBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BSetupDinoTameable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::BSetupDinoTameable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BSetupDinoTameable");
		
		AIceKaiju_Character_BP_C_BSetupDinoTameable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPClientDoMultiUse");
		
		AIceKaiju_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AIceKaiju_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetMultiUseEntries");
		
		AIceKaiju_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceKaiju_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTryMultiUse");
		
		AIceKaiju_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateIceSpearTargetArray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              NewParam                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class AActor*>                              NewParam1                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AIceKaiju_Character_BP_C::CreateIceSpearTargetArray(TArray<class AActor*>* NewParam, TArray<class AActor*>* NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateIceSpearTargetArray");
		
		AIceKaiju_Character_BP_C_CreateIceSpearTargetArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
		if (NewParam1 != nullptr)
			*NewParam1 = params.NewParam1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetImmuneToDamage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Immune                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::SetImmuneToDamage(bool Immune)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetImmuneToDamage");
		
		AIceKaiju_Character_BP_C_SetImmuneToDamage_Params params {};
		params.Immune = Immune;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartTorpid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::StartTorpid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartTorpid");
		
		AIceKaiju_Character_BP_C_StartTorpid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyChestNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::DestroyChestNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyChestNode");
		
		AIceKaiju_Character_BP_C_DestroyChestNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageChestNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::DamageChestNode(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageChestNode");
		
		AIceKaiju_Character_BP_C_DamageChestNode_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanTargetCorpse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AIceKaiju_Character_BP_C::BPCanTargetCorpse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanTargetCorpse");
		
		AIceKaiju_Character_BP_C_BPCanTargetCorpse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeChestNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::ExposeChestNode(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeChestNode");
		
		AIceKaiju_Character_BP_C_ExposeChestNode_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyRightShoulderNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::DestroyRightShoulderNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyRightShoulderNode");
		
		AIceKaiju_Character_BP_C_DestroyRightShoulderNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RightLegNode Destroyed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::RightLegNodeDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RightLegNode Destroyed");
		
		AIceKaiju_Character_BP_C_RightLegNodeDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HideLegNodes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::HideLegNodes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HideLegNodes");
		
		AIceKaiju_Character_BP_C_HideLegNodes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeLegNodes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RightLeg                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::ExposeLegNodes(bool Hide, bool RightLeg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeLegNodes");
		
		AIceKaiju_Character_BP_C_ExposeLegNodes_Params params {};
		params.Hide = Hide;
		params.RightLeg = RightLeg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDoAttack");
		
		AIceKaiju_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightShoulderNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::DamageRightShoulderNode(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightShoulderNode");
		
		AIceKaiju_Character_BP_C_DamageRightShoulderNode_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightLegNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::DamageRightLegNode(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightLegNode");
		
		AIceKaiju_Character_BP_C_DamageRightLegNode_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AIceKaiju_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustDamage");
		
		AIceKaiju_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AIceKaiju_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AIceKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeapTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::ClearLeapTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeapTarget");
		
		AIceKaiju_Character_BP_C_ClearLeapTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPShouldLimitForwardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AIceKaiju_Character_BP_C::BPShouldLimitForwardDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPShouldLimitForwardDirection");
		
		AIceKaiju_Character_BP_C_BPShouldLimitForwardDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerNonDedicated");
		
		AIceKaiju_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CheckLeapAttackEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::CheckLeapAttackEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CheckLeapAttackEnd");
		
		AIceKaiju_Character_BP_C_CheckLeapAttackEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerServer");
		
		AIceKaiju_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::FinishLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeap");
		
		AIceKaiju_Character_BP_C_FinishLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_bDoingLeap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::OnRep_bDoingLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_bDoingLeap");
		
		AIceKaiju_Character_BP_C_OnRep_bDoingLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartLeap
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::StartLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartLeap");
		
		AIceKaiju_Character_BP_C_StartLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceKaijuShakePlayersOff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::IceKaijuShakePlayersOff(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceKaijuShakePlayersOff");
		
		AIceKaiju_Character_BP_C_IceKaijuShakePlayersOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBeBaseForCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceKaiju_Character_BP_C::BPCanBeBaseForCharacter(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBeBaseForCharacter");
		
		AIceKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AIceKaiju_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustAttackIndex");
		
		AIceKaiju_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Ice Kaiju Perform Attack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIceKaijuAttackList                                Attack                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::IceKaijuPerformAttack(EIceKaijuAttackList Attack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Ice Kaiju Perform Attack");
		
		AIceKaiju_Character_BP_C_IceKaijuPerformAttack_Params params {};
		params.Attack = Attack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIceKaiju_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanAttack");
		
		AIceKaiju_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UserConstructionScript");
		
		AIceKaiju_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CallFunc_StunKaiju
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::CallFunc_StunKaiju()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CallFunc_StunKaiju");
		
		AIceKaiju_Character_BP_C_CallFunc_StunKaiju_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetVar_IKArenaManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ArenaManager                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::SetVar_IKArenaManager(class AActor* ArenaManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetVar_IKArenaManager");
		
		AIceKaiju_Character_BP_C_SetVar_IKArenaManager_Params params {};
		params.ArenaManager = ArenaManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveTick");
		
		AIceKaiju_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetAngry
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAngry                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::SetAngry(bool IsAngry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetAngry");
		
		AIceKaiju_Character_BP_C_SetAngry_Params params {};
		params.IsAngry = IsAngry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MulticastApplyLeapDownForce
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::MulticastApplyLeapDownForce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MulticastApplyLeapDownForce");
		
		AIceKaiju_Character_BP_C_MulticastApplyLeapDownForce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void AIceKaiju_Character_BP_C::BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature");
		
		AIceKaiju_Character_BP_C_BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepResult != nullptr)
			*SweepResult = params.SweepResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.PlayLeapAttackHitFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::PlayLeapAttackHitFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.PlayLeapAttackHitFX");
		
		AIceKaiju_Character_BP_C_PlayLeapAttackHitFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveBeginPlay");
		
		AIceKaiju_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodesWithDelay
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RightLeg                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Rep_ExposeLegNodesWithDelay(bool Hide, float Delay, bool RightLeg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodesWithDelay");
		
		AIceKaiju_Character_BP_C_Rep_ExposeLegNodesWithDelay_Params params {};
		params.Hide = Hide;
		params.Delay = Delay;
		params.RightLeg = RightLeg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodes
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RightLeg                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Rep_ExposeLegNodes(bool Hide, bool RightLeg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodes");
		
		AIceKaiju_Character_BP_C_Rep_ExposeLegNodes_Params params {};
		params.Hide = Hide;
		params.RightLeg = RightLeg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TurnForAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::AnimNotify_TurnForAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TurnForAttack");
		
		AIceKaiju_Character_BP_C_AnimNotify_TurnForAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RotateAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::RotateAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RotateAttack");
		
		AIceKaiju_Character_BP_C_RotateAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_AttackTurnFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::AnimNotify_AttackTurnFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_AttackTurnFinished");
		
		AIceKaiju_Character_BP_C_AnimNotify_AttackTurnFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNodeWithDelay
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Rep_ExposeChestNodeWithDelay(bool Hide, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNodeWithDelay");
		
		AIceKaiju_Character_BP_C_Rep_ExposeChestNodeWithDelay_Params params {};
		params.Hide = Hide;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Rep_ExposeChestNode(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNode");
		
		AIceKaiju_Character_BP_C_Rep_ExposeChestNode_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LeapAttackBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::AnimNotify_LeapAttackBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LeapAttackBegin");
		
		AIceKaiju_Character_BP_C_AnimNotify_LeapAttackBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchIceSpears
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::LaunchIceSpears()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchIceSpears");
		
		AIceKaiju_Character_BP_C_LaunchIceSpears_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FreezeAOE
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::FreezeAOE(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FreezeAOE");
		
		AIceKaiju_Character_BP_C_FreezeAOE_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::DelayedPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedPress");
		
		AIceKaiju_Character_BP_C_DelayedPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LeapInstant                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     MaxDistLeapTraceGroundLoc                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FailedtoFindMaxdistLeapTraceGroundLoc                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool LeapInstant, const struct FVector& MaxDistLeapTraceGroundLoc, bool FailedtoFindMaxdistLeapTraceGroundLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_TraceTargetDir");
		
		AIceKaiju_Character_BP_C_Server_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		params.LeapInstant = LeapInstant;
		params.MaxDistLeapTraceGroundLoc = MaxDistLeapTraceGroundLoc;
		params.FailedtoFindMaxdistLeapTraceGroundLoc = FailedtoFindMaxdistLeapTraceGroundLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     MaxDistLeapTraceGroundLoc                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FailedtoFindMaxdistLeapTraceGroundLoc                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, const struct FVector& MaxDistLeapTraceGroundLoc, bool FailedtoFindMaxdistLeapTraceGroundLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_TraceTargetDir");
		
		AIceKaiju_Character_BP_C_Multi_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		params.MaxDistLeapTraceGroundLoc = MaxDistLeapTraceGroundLoc;
		params.FailedtoFindMaxdistLeapTraceGroundLoc = FailedtoFindMaxdistLeapTraceGroundLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RequestLeapResponse
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHoldingLeap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::RequestLeapResponse(bool IsHoldingLeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RequestLeapResponse");
		
		AIceKaiju_Character_BP_C_RequestLeapResponse_Params params {};
		params.IsHoldingLeap = IsHoldingLeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpReleased");
		
		AIceKaiju_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpPressed");
		
		AIceKaiju_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_SetInput
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PreventInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Multicast_SetInput(bool PreventInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_SetInput");
		
		AIceKaiju_Character_BP_C_Multicast_SetInput_Params params {};
		params.PreventInput = PreventInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ServerDoAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::ServerDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ServerDoAttack");
		
		AIceKaiju_Character_BP_C_ServerDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LaunchBomb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::AnimNotify_LaunchBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LaunchBomb");
		
		AIceKaiju_Character_BP_C_AnimNotify_LaunchBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedClearLeap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::DelayedClearLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedClearLeap");
		
		AIceKaiju_Character_BP_C_DelayedClearLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeap
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::ClearLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeap");
		
		AIceKaiju_Character_BP_C_ClearLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateAllJumpRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::UpdateAllJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateAllJumpRotation");
		
		AIceKaiju_Character_BP_C_UpdateAllJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateJumpRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::UpdateJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateJumpRotation");
		
		AIceKaiju_Character_BP_C_UpdateJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiRestoreInput
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::MultiRestoreInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiRestoreInput");
		
		AIceKaiju_Character_BP_C_MultiRestoreInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TamedLeapDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::AnimNotify_TamedLeapDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TamedLeapDamage");
		
		AIceKaiju_Character_BP_C_AnimNotify_TamedLeapDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_ApplyFreezeFromIceAura
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Multi_ApplyFreezeFromIceAura(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_ApplyFreezeFromIceAura");
		
		AIceKaiju_Character_BP_C_Multi_ApplyFreezeFromIceAura_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceAuraCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::IceAuraCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceAuraCheck");
		
		AIceKaiju_Character_BP_C_IceAuraCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void AIceKaiju_Character_BP_C::BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature");
		
		AIceKaiju_Character_BP_C_BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepResult != nullptr)
			*SweepResult = params.SweepResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiToggleIceAuraVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::MultiToggleIceAuraVFX(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiToggleIceAuraVFX");
		
		AIceKaiju_Character_BP_C_MultiToggleIceAuraVFX_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_EnableIK
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::AnimNotify_EnableIK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_EnableIK");
		
		AIceKaiju_Character_BP_C_AnimNotify_EnableIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsDoneAttacking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::IsDoneAttacking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsDoneAttacking");
		
		AIceKaiju_Character_BP_C_IsDoneAttacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_SetNodeColor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Multi_SetNodeColor(int32_t Node, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_SetNodeColor");
		
		AIceKaiju_Character_BP_C_Multi_SetNodeColor_Params params {};
		params.Node = Node;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_IceKaijuDebugInfo
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::Multicast_IceKaijuDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_IceKaijuDebugInfo");
		
		AIceKaiju_Character_BP_C_Multicast_IceKaijuDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_DrawDebugSphere
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Multicast_DrawDebugSphere(const struct FVector& Loc, const struct FLinearColor& LineColor, float Duration, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_DrawDebugSphere");
		
		AIceKaiju_Character_BP_C_Multicast_DrawDebugSphere_Params params {};
		params.Loc = Loc;
		params.LineColor = LineColor;
		params.Duration = Duration;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightLegNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Multi_InterpRightLegNode(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightLegNode");
		
		AIceKaiju_Character_BP_C_Multi_InterpRightLegNode_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightShoulderNode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Multi_InterpRightShoulderNode(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightShoulderNode");
		
		AIceKaiju_Character_BP_C_Multi_InterpRightShoulderNode_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_SetHoldLeftClick
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Server_SetHoldLeftClick(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_SetHoldLeftClick");
		
		AIceKaiju_Character_BP_C_Server_SetHoldLeftClick_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StunKaiju
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::StunKaiju()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StunKaiju");
		
		AIceKaiju_Character_BP_C_StunKaiju_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.EquipSaddle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::EquipSaddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.EquipSaddle");
		
		AIceKaiju_Character_BP_C_EquipSaddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::Multi_PlayNodeDestroyFX(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_PlayNodeDestroyFX");
		
		AIceKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateSaddlePhysics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::UpdateSaddlePhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateSaddlePhysics");
		
		AIceKaiju_Character_BP_C_UpdateSaddlePhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaiju_Character_BP_C::Multi_DelayedTurnOffHealthRegen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen");
		
		AIceKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteUbergraph_IceKaiju_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaiju_Character_BP_C::ExecuteUbergraph_IceKaiju_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteUbergraph_IceKaiju_Character_BP");
		
		AIceKaiju_Character_BP_C_ExecuteUbergraph_IceKaiju_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIceKaiju_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIceKaiju_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IceKaiju_Character_BP.IceKaiju_Character_BP_C");
		return ptr;
	}

}


