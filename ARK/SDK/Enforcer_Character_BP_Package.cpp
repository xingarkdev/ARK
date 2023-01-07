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
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Shortly After Detaching Prevent Reattach
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::ShortlyAfterDetachingPreventReattach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Shortly After Detaching Prevent Reattach");
		
		AEnforcer_Character_BP_C_ShortlyAfterDetachingPreventReattach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Shortly After Jumping From A Non Climbing State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::ShortlyAfterJumpingFromANonClimbingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Shortly After Jumping From A Non Climbing State");
		
		AEnforcer_Character_BP_C_ShortlyAfterJumpingFromANonClimbingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Disable Wall Detach Input Shortly After Attach Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::DisableWallDetachInputShortlyAfterAttachInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Disable Wall Detach Input Shortly After Attach Input");
		
		AEnforcer_Character_BP_C_DisableWallDetachInputShortlyAfterAttachInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.CanEnforcerRunSeek
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::CanEnforcerRunSeek(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.CanEnforcerRunSeek");
		
		AEnforcer_Character_BP_C_CanEnforcerRunSeek_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.UpdateEnforcerSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::UpdateEnforcerSeeking(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.UpdateEnforcerSeeking");
		
		AEnforcer_Character_BP_C_UpdateEnforcerSeeking_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Client Tick Update Climber TPV_Camera Offset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::ClientTickUpdateClimberTPV_CameraOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Client Tick Update Climber TPV_Camera Offset");
		
		AEnforcer_Character_BP_C_ClientTickUpdateClimberTPV_CameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsHostileTekShield
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsShield                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::IsHostileTekShield(class AActor* Actor, bool* IsShield)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsHostileTekShield");
		
		AEnforcer_Character_BP_C_IsHostileTekShield_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsShield != nullptr)
			*IsShield = params.IsShield;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ProjectileArcSweep
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileArc                              Arc                                                        (Parm)
	 * 		struct FRotator                                    CapsuleRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CapsuleRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CapsuleHalfHeight                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxArcLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		ECollisionChannel                                  CollisionChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDrawDebug                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DebugDrawDuration                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm)
	 * 		struct FVector                                     EndLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EndArcTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AEnforcer_Character_BP_C::ProjectileArcSweep(const struct FProjectileArc& Arc, const struct FRotator& CapsuleRotation, float CapsuleRadius, float CapsuleHalfHeight, float MaxArcLength, TArray<class AActor*>* ActorsToIgnore, ECollisionChannel CollisionChannel, bool bDrawDebug, float DebugDrawDuration, struct FHitResult* HitResult, struct FVector* EndLocation, float* EndArcTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ProjectileArcSweep");
		
		AEnforcer_Character_BP_C_ProjectileArcSweep_Params params {};
		params.Arc = Arc;
		params.CapsuleRotation = CapsuleRotation;
		params.CapsuleRadius = CapsuleRadius;
		params.CapsuleHalfHeight = CapsuleHalfHeight;
		params.MaxArcLength = MaxArcLength;
		params.CollisionChannel = CollisionChannel;
		params.bDrawDebug = bDrawDebug;
		params.DebugDrawDuration = DebugDrawDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToIgnore != nullptr)
			*ActorsToIgnore = params.ActorsToIgnore;
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
		if (EndLocation != nullptr)
			*EndLocation = params.EndLocation;
		if (EndArcTime != nullptr)
			*EndArcTime = params.EndArcTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::CanNonControlledClimberNotClimbingOverrideTransformInterpolation(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation");
		
		AEnforcer_Character_BP_C_CanNonControlledClimberNotClimbingOverrideTransformInterpolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnRefreshColorization
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AEnforcer_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnRefreshColorization");
		
		AEnforcer_Character_BP_C_BPOnRefreshColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnLethalDamage
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventDeath                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::BPOnLethalDamage(float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnLethalDamage");
		
		AEnforcer_Character_BP_C_BPOnLethalDamage_Params params {};
		params.KillingDamage = KillingDamage;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		if (bPreventDeath != nullptr)
			*bPreventDeath = params.bPreventDeath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveAnyDamage");
		
		AEnforcer_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnRep_WildAlertEnabled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::OnRep_WildAlertEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnRep_WildAlertEnabled");
		
		AEnforcer_Character_BP_C_OnRep_WildAlertEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetRiderVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetRiderVisibility(class AShooterCharacter* Rider, bool* IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetRiderVisibility");
		
		AEnforcer_Character_BP_C_GetRiderVisibility_Params params {};
		params.Rider = Rider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetRiderVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::SetRiderVisibility(class AShooterCharacter* Rider, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetRiderVisibility");
		
		AEnforcer_Character_BP_C_SetRiderVisibility_Params params {};
		params.Rider = Rider;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OverrideNumCooldowns                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::SetupBlinkCooldowns(int32_t OverrideNumCooldowns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns");
		
		AEnforcer_Character_BP_C_SetupBlinkCooldowns_Params params {};
		params.OverrideNumCooldowns = OverrideNumCooldowns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyLevelUp");
		
		AEnforcer_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.On ClimberAttached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::OnClimberAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.On ClimberAttached");
		
		AEnforcer_Character_BP_C_OnClimberAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPUnstasis");
		
		AEnforcer_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::BlueprintPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintPlayDying");
		
		AEnforcer_Character_BP_C_BlueprintPlayDying_Params params {};
		params.KillingDamage = KillingDamage;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifySetRider");
		
		AEnforcer_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.StopClimbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               resetRestoreToSeeking                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               skipDetach                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::StopClimbing(bool resetRestoreToSeeking, bool skipDetach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.StopClimbing");
		
		AEnforcer_Character_BP_C_StopClimbing_Params params {};
		params.resetRestoreToSeeking = resetRestoreToSeeking;
		params.skipDetach = skipDetach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AEnforcer_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetRiderUnboardLocation");
		
		AEnforcer_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AEnforcer_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_PreventMovementMode");
		
		AEnforcer_Character_BP_C_BP_PreventMovementMode_Params params {};
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
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.HasEnoughStaminaToBlink
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AEnforcer_Character_BP_C::HasEnoughStaminaToBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.HasEnoughStaminaToBlink");
		
		AEnforcer_Character_BP_C_HasEnoughStaminaToBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.SweepTestBlinkClimbPoint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    TargetRot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DebugDrawTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::SweepTestBlinkClimbPoint(const struct FVector& Location, const struct FVector& Normal, const struct FRotator& TargetRot, float DebugDrawTime, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.SweepTestBlinkClimbPoint");
		
		AEnforcer_Character_BP_C_SweepTestBlinkClimbPoint_Params params {};
		params.Location = Location;
		params.Normal = Normal;
		params.TargetRot = TargetRot;
		params.DebugDrawTime = DebugDrawTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsSurfaceNormalClimbable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     SurfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldClimb                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::IsSurfaceNormalClimbable(const struct FVector& SurfaceNormal, bool* ShouldClimb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsSurfaceNormalClimbable");
		
		AEnforcer_Character_BP_C_IsSurfaceNormalClimbable_Params params {};
		params.SurfaceNormal = SurfaceNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldClimb != nullptr)
			*ShouldClimb = params.ShouldClimb;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCustomSurfaceTraceDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TraceIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              customDistance                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetCustomSurfaceTraceDistance(int32_t TraceIndex, float* customDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCustomSurfaceTraceDistance");
		
		AEnforcer_Character_BP_C_GetCustomSurfaceTraceDistance_Params params {};
		params.TraceIndex = TraceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (customDistance != nullptr)
			*customDistance = params.customDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsNormalClimbable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAverageNormal                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::IsNormalClimbable(const struct FVector& Normal, bool isAverageNormal, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsNormalClimbable");
		
		AEnforcer_Character_BP_C_IsNormalClimbable_Params params {};
		params.Normal = Normal;
		params.isAverageNormal = isAverageNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::ClimbingIK_SetNewBlendspaceAxes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes");
		
		AEnforcer_Character_BP_C_ClimbingIK_SetNewBlendspaceAxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   axes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front");
		
		AEnforcer_Character_BP_C_GetClimbingIK_BlendspaceAxes_Front_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (axes != nullptr)
			*axes = params.axes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	float AEnforcer_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");
		
		AEnforcer_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetDesiredMoveDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetDesiredMoveDirection(struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetDesiredMoveDirection");
		
		AEnforcer_Character_BP_C_GetDesiredMoveDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlinkCooldownToString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             LastUsedTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Cooldown                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ReadyString                                                (Parm, ZeroConstructor)
	 * 		class FString                                      returnvalue                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AEnforcer_Character_BP_C::BlinkCooldownToString(double LastUsedTime, float Cooldown, const class FString& ReadyString, class FString* returnvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlinkCooldownToString");
		
		AEnforcer_Character_BP_C_BlinkCooldownToString_Params params {};
		params.LastUsedTime = LastUsedTime;
		params.Cooldown = Cooldown;
		params.ReadyString = ReadyString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnvalue != nullptr)
			*returnvalue = params.returnvalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGrabDebugSnapshot
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<struct FBlueprintVisualLogEntry> AEnforcer_Character_BP_C::BPGrabDebugSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGrabDebugSnapshot");
		
		AEnforcer_Character_BP_C_BPGrabDebugSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldownNonPure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnCooldown                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::IsBlinkOnCooldownNonPure(bool* OnCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldownNonPure");
		
		AEnforcer_Character_BP_C_IsBlinkOnCooldownNonPure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OnCooldown != nullptr)
			*OnCooldown = params.OnCooldown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoCheat");
		
		AEnforcer_Character_BP_C_BPOnDinoCheat_Params params {};
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
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get CurrentClimbingVelocityMax
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetCurrentClimbingVelocityMax(float* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get CurrentClimbingVelocityMax");
		
		AEnforcer_Character_BP_C_GetCurrentClimbingVelocityMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.UseBlinkCooldown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TestOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::UseBlinkCooldown(bool TestOnly, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.UseBlinkCooldown");
		
		AEnforcer_Character_BP_C_UseBlinkCooldown_Params params {};
		params.TestOnly = TestOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               OnCooldown                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FirstAvailableCooldown                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::IsBlinkOnCooldown(bool* OnCooldown, int32_t* FirstAvailableCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldown");
		
		AEnforcer_Character_BP_C_IsBlinkOnCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OnCooldown != nullptr)
			*OnCooldown = params.OnCooldown;
		if (FirstAvailableCooldown != nullptr)
			*FirstAvailableCooldown = params.FirstAvailableCooldown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AEnforcer_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDElements");
		
		AEnforcer_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyClearRider");
		
		AEnforcer_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Blink Ramp Delay Status
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               InDelay                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetBlinkRampDelayStatus(bool* InDelay, float* Time, float* Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Blink Ramp Delay Status");
		
		AEnforcer_Character_BP_C_GetBlinkRampDelayStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDelay != nullptr)
			*InDelay = params.InDelay;
		if (Time != nullptr)
			*Time = params.Time;
		if (Alpha != nullptr)
			*Alpha = params.Alpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Controller Latency
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Ping                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetControllerLatency(float* Ping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Controller Latency");
		
		AEnforcer_Character_BP_C_GetControllerLatency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ping != nullptr)
			*Ping = params.Ping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientStartBlink
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::ClientStartBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientStartBlink");
		
		AEnforcer_Character_BP_C_ClientStartBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AEnforcer_Character_BP_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPModifyFOV");
		
		AEnforcer_Character_BP_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.K2_OnMovementModeChanged");
		
		AEnforcer_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingMoveDirFromRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     moveDir                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetClimbingMoveDirFromRotation(const struct FRotator& Rotation, struct FVector* moveDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingMoveDirFromRotation");
		
		AEnforcer_Character_BP_C_GetClimbingMoveDirFromRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (moveDir != nullptr)
			*moveDir = params.moveDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Can Receive Climbing Input Strafe
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               returnvalue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::CanReceiveClimbingInputStrafe(bool* returnvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Can Receive Climbing Input Strafe");
		
		AEnforcer_Character_BP_C_CanReceiveClimbingInputStrafe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnvalue != nullptr)
			*returnvalue = params.returnvalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveBeginPlay");
		
		AEnforcer_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkInProgress
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               InBlinkDelay                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBlinking                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::IsBlinkInProgress(bool* InBlinkDelay, bool* IsBlinking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkInProgress");
		
		AEnforcer_Character_BP_C_IsBlinkInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InBlinkDelay != nullptr)
			*InBlinkDelay = params.InBlinkDelay;
		if (IsBlinking != nullptr)
			*IsBlinking = params.IsBlinking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Check For Prevent Stop Climbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       traceHitsArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            numValidHits                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            numTraces                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               allowClimbing                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::CheckForPreventStopClimbing(TArray<bool>* traceHitsArray, int32_t numValidHits, int32_t numTraces, bool* allowClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Check For Prevent Stop Climbing");
		
		AEnforcer_Character_BP_C_CheckForPreventStopClimbing_Params params {};
		params.numValidHits = numValidHits;
		params.numTraces = numTraces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceHitsArray != nullptr)
			*traceHitsArray = params.traceHitsArray;
		if (allowClimbing != nullptr)
			*allowClimbing = params.allowClimbing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCurrentCameraLoc
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetCurrentCameraLoc(struct FVector* Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCurrentCameraLoc");
		
		AEnforcer_Character_BP_C_GetCurrentCameraLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOverrideCameraViewTarget
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
	void AEnforcer_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOverrideCameraViewTarget");
		
		AEnforcer_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientSetBlinkStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BlinkInProgress                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::ClientSetBlinkStatus(bool BlinkInProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientSetBlinkStatus");
		
		AEnforcer_Character_BP_C_ClientSetBlinkStatus_Params params {};
		params.BlinkInProgress = BlinkInProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.CalcBlinkTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileArc                              Arc                                                        (Parm)
	 * 		bool                                               ForVFX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DebugDrawDuration                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FoundValidTarget                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAirTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsClimbTarget                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetNormal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ArcTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm)
	 */
	void AEnforcer_Character_BP_C::CalcBlinkTarget(const struct FProjectileArc& Arc, bool ForVFX, float DebugDrawDuration, bool* FoundValidTarget, bool* IsAirTarget, bool* IsClimbTarget, struct FVector* Location, struct FRotator* Rotation, struct FVector* TargetNormal, float* ArcTime, struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.CalcBlinkTarget");
		
		AEnforcer_Character_BP_C_CalcBlinkTarget_Params params {};
		params.Arc = Arc;
		params.ForVFX = ForVFX;
		params.DebugDrawDuration = DebugDrawDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundValidTarget != nullptr)
			*FoundValidTarget = params.FoundValidTarget;
		if (IsAirTarget != nullptr)
			*IsAirTarget = params.IsAirTarget;
		if (IsClimbTarget != nullptr)
			*IsClimbTarget = params.IsClimbTarget;
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
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Update Blink Target VFX Location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsInvalid                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    WorldRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm)
	 * 		struct FVector                                     SurfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::UpdateBlinkTargetVFXLocation(bool IsVisible, bool IsInvalid, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, const struct FHitResult& HitResult, const struct FVector& SurfaceNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Update Blink Target VFX Location");
		
		AEnforcer_Character_BP_C_UpdateBlinkTargetVFXLocation_Params params {};
		params.IsVisible = IsVisible;
		params.IsInvalid = IsInvalid;
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
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AEnforcer_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AEnforcer_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEnforcer_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleOnStopTargeting");
		
		AEnforcer_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Vertical View Angle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::GetVerticalViewAngle(float* Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Vertical View Angle");
		
		AEnforcer_Character_BP_C_GetVerticalViewAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Angle != nullptr)
			*Angle = params.Angle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveTick");
		
		AEnforcer_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.Do Blink
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BlinkLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    BlinkRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StartClimbing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OrigLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OrigRotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::DoBlink(const struct FVector& BlinkLocation, const struct FRotator& BlinkRotation, bool StartClimbing, bool* Success, struct FVector* OrigLocation, struct FRotator* OrigRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.Do Blink");
		
		AEnforcer_Character_BP_C_DoBlink_Params params {};
		params.BlinkLocation = BlinkLocation;
		params.BlinkRotation = BlinkRotation;
		params.StartClimbing = StartClimbing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (OrigLocation != nullptr)
			*OrigLocation = params.OrigLocation;
		if (OrigRotation != nullptr)
			*OrigRotation = params.OrigRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AEnforcer_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintCanRiderAttack");
		
		AEnforcer_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.UserConstructionScript");
		
		AEnforcer_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestBlink
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BlinkStartLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BlinkDirection                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RequestedDestination                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    RequestedRotation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ClientVerticalViewAngle                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::ServerRequestBlink(const struct FVector& BlinkStartLocation, const struct FVector& BlinkDirection, const struct FVector& RequestedDestination, const struct FRotator& RequestedRotation, float ClientVerticalViewAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestBlink");
		
		AEnforcer_Character_BP_C_ServerRequestBlink_Params params {};
		params.BlinkStartLocation = BlinkStartLocation;
		params.BlinkDirection = BlinkDirection;
		params.RequestedDestination = RequestedDestination;
		params.RequestedRotation = RequestedRotation;
		params.ClientVerticalViewAngle = ClientVerticalViewAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastOnBlinkCompleted
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OrigLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OrigRotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BlinkLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    BlinkRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               startedClimbing                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::MulticastOnBlinkCompleted(const struct FVector& OrigLocation, const struct FRotator& OrigRotation, const struct FVector& BlinkLocation, const struct FRotator& BlinkRotation, bool startedClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastOnBlinkCompleted");
		
		AEnforcer_Character_BP_C_MulticastOnBlinkCompleted_Params params {};
		params.OrigLocation = OrigLocation;
		params.OrigRotation = OrigRotation;
		params.BlinkLocation = BlinkLocation;
		params.BlinkRotation = BlinkRotation;
		params.startedClimbing = startedClimbing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastBlinkAcknowledged
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::MulticastBlinkAcknowledged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastBlinkAcknowledged");
		
		AEnforcer_Character_BP_C_MulticastBlinkAcknowledged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpPressed");
		
		AEnforcer_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpReleased");
		
		AEnforcer_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerUpdateMoveDir
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Forward                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::ServerUpdateMoveDir(float Forward, float Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerUpdateMoveDir");
		
		AEnforcer_Character_BP_C_ServerUpdateMoveDir_Params params {};
		params.Forward = Forward;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.UpdateMoveDir
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::UpdateMoveDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.UpdateMoveDir");
		
		AEnforcer_Character_BP_C_UpdateMoveDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.DrawDebugDirection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ArrowSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::DrawDebugDirection(const struct FVector& Direction, float ArrowSize, const struct FLinearColor& Color, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.DrawDebugDirection");
		
		AEnforcer_Character_BP_C_DrawDebugDirection_Params params {};
		params.Direction = Direction;
		params.ArrowSize = ArrowSize;
		params.Color = Color;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientDrawDebugDirection
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ArrowSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::ClientDrawDebugDirection(const struct FVector& Direction, float ArrowSize, const struct FLinearColor& Color, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientDrawDebugDirection");
		
		AEnforcer_Character_BP_C_ClientDrawDebugDirection_Params params {};
		params.Direction = Direction;
		params.ArrowSize = ArrowSize;
		params.Color = Color;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiBlinkFailed
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::MultiBlinkFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiBlinkFailed");
		
		AEnforcer_Character_BP_C_MultiBlinkFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimbDetach
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::MultiOnClimbDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimbDetach");
		
		AEnforcer_Character_BP_C_MultiOnClimbDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastUpdateDesiredMoveDirection
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Dir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::MulticastUpdateDesiredMoveDirection(const struct FVector& Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastUpdateDesiredMoveDirection");
		
		AEnforcer_Character_BP_C_MulticastUpdateDesiredMoveDirection_Params params {};
		params.Dir = Dir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnBlastAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::OnBlastAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnBlastAttack");
		
		AEnforcer_Character_BP_C_OnBlastAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientOnBlastAttack
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::ClientOnBlastAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientOnBlastAttack");
		
		AEnforcer_Character_BP_C_ClientOnBlastAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestClimbDetatchWithJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::ServerRequestClimbDetatchWithJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestClimbDetatchWithJump");
		
		AEnforcer_Character_BP_C_ServerRequestClimbDetatchWithJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnWalkableGroundFoundWhileClimbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::OnWalkableGroundFoundWhileClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnWalkableGroundFoundWhileClimbing");
		
		AEnforcer_Character_BP_C_OnWalkableGroundFoundWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.FixBlinkMaterials
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::FixBlinkMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.FixBlinkMaterials");
		
		AEnforcer_Character_BP_C_FixBlinkMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiSetBlinkValue
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Forwards                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCheatOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::MultiSetBlinkValue(bool Forwards, float Alpha, bool IsCheatOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiSetBlinkValue");
		
		AEnforcer_Character_BP_C_MultiSetBlinkValue_Params params {};
		params.Forwards = Forwards;
		params.Alpha = Alpha;
		params.IsCheatOverride = IsCheatOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimberAttached
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::MultiOnClimberAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimberAttached");
		
		AEnforcer_Character_BP_C_MultiOnClimberAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientUpdateBlinkCooldownTimes
	 * 		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<double>                                     CooldownTimes                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AEnforcer_Character_BP_C::ClientUpdateBlinkCooldownTimes(TArray<double>* CooldownTimes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientUpdateBlinkCooldownTimes");
		
		AEnforcer_Character_BP_C_ClientUpdateBlinkCooldownTimes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CooldownTimes != nullptr)
			*CooldownTimes = params.CooldownTimes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns_Initial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnforcer_Character_BP_C::SetupBlinkCooldowns_Initial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns_Initial");
		
		AEnforcer_Character_BP_C_SetupBlinkCooldowns_Initial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoStartled
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                StartledAnimPlayed                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromAIController                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::BPOnDinoStartled(class UAnimMontage* StartledAnimPlayed, bool bFromAIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoStartled");
		
		AEnforcer_Character_BP_C_BPOnDinoStartled_Params params {};
		params.StartledAnimPlayed = StartledAnimPlayed;
		params.bFromAIController = bFromAIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_Character_BP.Enforcer_Character_BP_C.ExecuteUbergraph_Enforcer_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEnforcer_Character_BP_C::ExecuteUbergraph_Enforcer_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_Character_BP.Enforcer_Character_BP_C.ExecuteUbergraph_Enforcer_Character_BP");
		
		AEnforcer_Character_BP_C_ExecuteUbergraph_Enforcer_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEnforcer_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEnforcer_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Enforcer_Character_BP.Enforcer_Character_BP_C");
		return ptr;
	}

}


