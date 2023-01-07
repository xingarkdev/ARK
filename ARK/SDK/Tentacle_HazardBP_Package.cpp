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
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedAnimRate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::OnRep_AdjustedAnimRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedAnimRate");
		
		ATentacle_HazardBP_C_OnRep_AdjustedAnimRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnDeathVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::SpawnDeathVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnDeathVFX");
		
		ATentacle_HazardBP_C_SpawnDeathVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnAttackTentacleSpawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::OnAttackTentacleSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnAttackTentacleSpawned");
		
		ATentacle_HazardBP_C_OnAttackTentacleSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsHurtAnimPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AnimIsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::GetIsHurtAnimPlaying(bool* AnimIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsHurtAnimPlaying");
		
		ATentacle_HazardBP_C_GetIsHurtAnimPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimIsPlaying != nullptr)
			*AnimIsPlaying = params.AnimIsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCharToGrabFromTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::GetCharToGrabFromTarget(class APrimalCharacter** Char)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCharToGrabFromTarget");
		
		ATentacle_HazardBP_C_GetCharToGrabFromTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Char != nullptr)
			*Char = params.Char;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AnimTypeIndex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::OnRep_AnimTypeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AnimTypeIndex");
		
		ATentacle_HazardBP_C_OnRep_AnimTypeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateTentaclesAnims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::UpdateTentaclesAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateTentaclesAnims");
		
		ATentacle_HazardBP_C_UpdateTentaclesAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetraction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewIsRetracted                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::UpdateRetraction(bool NewIsRetracted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetraction");
		
		ATentacle_HazardBP_C_UpdateRetraction_Params params {};
		params.NewIsRetracted = NewIsRetracted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.ForceTargetChar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::ForceTargetChar(class APrimalCharacter* Char)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ForceTargetChar");
		
		ATentacle_HazardBP_C_ForceTargetChar_Params params {};
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsHalfRetracted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::OnRep_bIsHalfRetracted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsHalfRetracted");
		
		ATentacle_HazardBP_C_OnRep_bIsHalfRetracted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetractedCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRetracted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::UpdateRetractedCollision(bool IsRetracted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetractedCollision");
		
		ATentacle_HazardBP_C_UpdateRetractedCollision_Params params {};
		params.IsRetracted = IsRetracted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReleaseGrabbedChar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::ReleaseGrabbedChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReleaseGrabbedChar");
		
		ATentacle_HazardBP_C_ReleaseGrabbedChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanTargetValidActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::CanTargetValidActor(class APrimalCharacter* Target, bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanTargetValidActor");
		
		ATentacle_HazardBP_C_CanTargetValidActor_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPDied
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::BPDied(float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPDied");
		
		ATentacle_HazardBP_C_BPDied_Params params {};
		params.KillingDamage = KillingDamage;
		params.Killer = Killer;
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
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleFromAttack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::SpawnTentacleFromAttack(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleFromAttack");
		
		ATentacle_HazardBP_C_SpawnTentacleFromAttack_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnedTentacleTimedDeath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::SpawnedTentacleTimedDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnedTentacleTimedDeath");
		
		ATentacle_HazardBP_C_SpawnedTentacleTimedDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsInOutAnimPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AnimIsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::GetIsInOutAnimPlaying(bool* AnimIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsInOutAnimPlaying");
		
		ATentacle_HazardBP_C_GetIsInOutAnimPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimIsPlaying != nullptr)
			*AnimIsPlaying = params.AnimIsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsUnderground
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::OnRep_bIsUnderground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsUnderground");
		
		ATentacle_HazardBP_C_OnRep_bIsUnderground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetEffectiveRot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::SetEffectiveRot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetEffectiveRot");
		
		ATentacle_HazardBP_C_SetEffectiveRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetServerTargetRot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::SetServerTargetRot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetServerTargetRot");
		
		ATentacle_HazardBP_C_SetServerTargetRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeAnimVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::RandomizeAnimVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeAnimVars");
		
		ATentacle_HazardBP_C_RandomizeAnimVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCanGrabTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanGrab                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::GetCanGrabTarget(class APrimalCharacter* Char, bool* CanGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCanGrabTarget");
		
		ATentacle_HazardBP_C_GetCanGrabTarget_Params params {};
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanGrab != nullptr)
			*CanGrab = params.CanGrab;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.ShouldApplyKBToChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldApply                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::ShouldApplyKBToChar(class APrimalCharacter* Char, bool* ShouldApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ShouldApplyKBToChar");
		
		ATentacle_HazardBP_C_ShouldApplyKBToChar_Params params {};
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldApply != nullptr)
			*ShouldApply = params.ShouldApply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetAttackCDVariance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::SetAttackCDVariance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetAttackCDVariance");
		
		ATentacle_HazardBP_C_SetAttackCDVariance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsAttackAnimPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AnimIsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::GetIsAttackAnimPlaying(bool* AnimIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsAttackAnimPlaying");
		
		ATentacle_HazardBP_C_GetIsAttackAnimPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimIsPlaying != nullptr)
			*AnimIsPlaying = params.AnimIsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeTentacleScale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::RandomizeTentacleScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeTentacleScale");
		
		ATentacle_HazardBP_C_RandomizeTentacleScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedServerScale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::OnRep_AdjustedServerScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedServerScale");
		
		ATentacle_HazardBP_C_OnRep_AdjustedServerScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.ResizeTentacle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::ResizeTentacle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ResizeTentacle");
		
		ATentacle_HazardBP_C_ResizeTentacle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.ManualOverlapCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FoundTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::ManualOverlapCheck(bool* FoundTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ManualOverlapCheck");
		
		ATentacle_HazardBP_C_ManualOverlapCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundTarget != nullptr)
			*FoundTarget = params.FoundTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.find or create dynamic materials
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInstanceDynamic*>            dynamicmaterials                                           (Parm, OutParm, ZeroConstructor)
	 */
	void ATentacle_HazardBP_C::findorcreatedynamicmaterials(TArray<class UMaterialInstanceDynamic*>* dynamicmaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.find or create dynamic materials");
		
		ATentacle_HazardBP_C_findorcreatedynamicmaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dynamicmaterials != nullptr)
			*dynamicmaterials = params.dynamicmaterials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Find Valid Spawn Location
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             OutLocations                                               (Parm, OutParm, ZeroConstructor)
	 */
	void ATentacle_HazardBP_C::FindValidSpawnLocation(class AActor* Target, TArray<struct FVector>* OutLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Find Valid Spawn Location");
		
		ATentacle_HazardBP_C_FindValidSpawnLocation_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocations != nullptr)
			*OutLocations = params.OutLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Ranged Attack target
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::RangedAttacktarget(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Ranged Attack target");
		
		ATentacle_HazardBP_C_RangedAttacktarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPGetAggroDinoOnDamageSettings
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                AggroDinoClassesCustomTags                                 (Parm, OutParm, ZeroConstructor)
	 * 		float                                              AggroDinoClassesRange                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::BPGetAggroDinoOnDamageSettings(TArray<class FName>* AggroDinoClassesCustomTags, float* AggroDinoClassesRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPGetAggroDinoOnDamageSettings");
		
		ATentacle_HazardBP_C_BPGetAggroDinoOnDamageSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AggroDinoClassesCustomTags != nullptr)
			*AggroDinoClassesCustomTags = params.AggroDinoClassesCustomTags;
		if (AggroDinoClassesRange != nullptr)
			*AggroDinoClassesRange = params.AggroDinoClassesRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.attackTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            attackTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::attackTarget(class APrimalCharacter* attackTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.attackTarget");
		
		ATentacle_HazardBP_C_attackTarget_Params params {};
		params.attackTarget = attackTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.EffectiveRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    ActualRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::EffectiveRotation(struct FRotator* ActualRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.EffectiveRotation");
		
		ATentacle_HazardBP_C_EffectiveRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActualRotation != nullptr)
			*ActualRotation = params.ActualRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetTargetAimAtLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::GetTargetAimAtLocation(class APrimalCharacter* Target, struct FVector* TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetTargetAimAtLocation");
		
		ATentacle_HazardBP_C_GetTargetAimAtLocation_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetIsDead
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsDead                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::SetIsDead(bool bNewIsDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetIsDead");
		
		ATentacle_HazardBP_C_SetIsDead_Params params {};
		params.bNewIsDead = bNewIsDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanRevive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanRevive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::CanRevive(bool* bCanRevive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanRevive");
		
		ATentacle_HazardBP_C_CanRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanRevive != nullptr)
			*bCanRevive = params.bCanRevive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUpdatedHealth
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDoReplication                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::BPUpdatedHealth(bool bDoReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUpdatedHealth");
		
		ATentacle_HazardBP_C_BPUpdatedHealth_Params params {};
		params.bDoReplication = bDoReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ATentacle_HazardBP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPAdjustDamage");
		
		ATentacle_HazardBP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPImpactEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitRes                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ShootDirection                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool ATentacle_HazardBP_C::BPImpactEffect(struct FHitResult* HitRes, struct FVector* ShootDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPImpactEffect");
		
		ATentacle_HazardBP_C_BPImpactEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitRes != nullptr)
			*HitRes = params.HitRes;
		if (ShootDirection != nullptr)
			*ShootDirection = params.ShootDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPReleasedPlayer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ReleasedChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AtSeatNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::BPReleasedPlayer(class AShooterCharacter* ReleasedChar, int32_t AtSeatNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPReleasedPlayer");
		
		ATentacle_HazardBP_C_BPReleasedPlayer_Params params {};
		params.ReleasedChar = ReleasedChar;
		params.AtSeatNumber = AtSeatNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPPreventReleaseSeatingStructure
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ForSitter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATentacle_HazardBP_C::BPPreventReleaseSeatingStructure(class AShooterCharacter* ForSitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPPreventReleaseSeatingStructure");
		
		ATentacle_HazardBP_C_BPPreventReleaseSeatingStructure_Params params {};
		params.ForSitter = ForSitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPSeatedPlayer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           SeatedChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AtSeatNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::BPSeatedPlayer(class AShooterCharacter* SeatedChar, int32_t AtSeatNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPSeatedPlayer");
		
		ATentacle_HazardBP_C_BPSeatedPlayer_Params params {};
		params.SeatedChar = SeatedChar;
		params.AtSeatNumber = AtSeatNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanAttack                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::CanAttack(bool* bCanAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanAttack");
		
		ATentacle_HazardBP_C_CanAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanAttack != nullptr)
			*bCanAttack = params.bCanAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BlueprintAnimNotifyCustomEvent");
		
		ATentacle_HazardBP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.IsActorValidTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanTarget                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::IsActorValidTarget(class APrimalCharacter* Target, bool* bCanTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.IsActorValidTarget");
		
		ATentacle_HazardBP_C_IsActorValidTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanTarget != nullptr)
			*bCanTarget = params.bCanTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.FindBestTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::FindBestTarget(class APrimalCharacter** Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.FindBestTarget");
		
		ATentacle_HazardBP_C_FindBestTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPTriggerStasisEvent");
		
		ATentacle_HazardBP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateDediMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::UpdateDediMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateDediMesh");
		
		ATentacle_HazardBP_C_UpdateDediMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetSleeping
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSleeping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::SetSleeping(bool IsSleeping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetSleeping");
		
		ATentacle_HazardBP_C_SetSleeping_Params params {};
		params.IsSleeping = IsSleeping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUnstasis");
		
		ATentacle_HazardBP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.UserConstructionScript");
		
		ATentacle_HazardBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::Timeline_Dissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__FinishedFunc");
		
		ATentacle_HazardBP_C_Timeline_Dissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::Timeline_Dissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__UpdateFunc");
		
		ATentacle_HazardBP_C_Timeline_Dissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReceiveBeginPlay");
		
		ATentacle_HazardBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void ATentacle_HazardBP_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature");
		
		ATentacle_HazardBP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.ServerTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::ServerTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ServerTick");
		
		ATentacle_HazardBP_C_ServerTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.StartTimers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::StartTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.StartTimers");
		
		ATentacle_HazardBP_C_StartTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DoAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                SelectedAttack                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::Multi_DoAttack(class UAnimMontage* SelectedAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DoAttack");
		
		ATentacle_HazardBP_C_Multi_DoAttack_Params params {};
		params.SelectedAttack = SelectedAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                SelectedAttack                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::DoAttack(class UAnimMontage* SelectedAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoAttack");
		
		ATentacle_HazardBP_C_DoAttack_Params params {};
		params.SelectedAttack = SelectedAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::PlayAnimMontage(class UAnimMontage* MontageToPlay, float PlayRate, float BlendIn, float BlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage");
		
		ATentacle_HazardBP_C_PlayAnimMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.PlayRate = PlayRate;
		params.BlendIn = BlendIn;
		params.BlendOut = BlendOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage_Multi
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::PlayAnimMontage_Multi(class UAnimMontage* MontageToPlay, float PlayRate, float BlendIn, float BlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage_Multi");
		
		ATentacle_HazardBP_C_PlayAnimMontage_Multi_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.PlayRate = PlayRate;
		params.BlendIn = BlendIn;
		params.BlendOut = BlendOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Server_StartDying
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::Server_StartDying(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Server_StartDying");
		
		ATentacle_HazardBP_C_Server_StartDying_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_StartDying
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::Multi_StartDying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_StartDying");
		
		ATentacle_HazardBP_C_Multi_StartDying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.EventNextTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::EventNextTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.EventNextTick");
		
		ATentacle_HazardBP_C_EventNextTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.CheckRevive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::CheckRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.CheckRevive");
		
		ATentacle_HazardBP_C_CheckRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_Revive
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::Multi_Revive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_Revive");
		
		ATentacle_HazardBP_C_Multi_Revive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature");
		
		ATentacle_HazardBP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoRangedAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::DoRangedAttack(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoRangedAttack");
		
		ATentacle_HazardBP_C_DoRangedAttack_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangedAttack
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::Multi_RangedAttack(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangedAttack");
		
		ATentacle_HazardBP_C_Multi_RangedAttack_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DeleteActor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::Multi_DeleteActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DeleteActor");
		
		ATentacle_HazardBP_C_Multi_DeleteActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::SpawnTentacleAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleAttack");
		
		ATentacle_HazardBP_C_SpawnTentacleAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangeAttackMuzzleFXEmitter
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::Multi_RangeAttackMuzzleFXEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangeAttackMuzzleFXEmitter");
		
		ATentacle_HazardBP_C_Multi_RangeAttackMuzzleFXEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.MultiMaterialChange
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MaterialToChange                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::MultiMaterialChange(class UPrimitiveComponent* MaterialToChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.MultiMaterialChange");
		
		ATentacle_HazardBP_C_MultiMaterialChange_Params params {};
		params.MaterialToChange = MaterialToChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopDissolve
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::StopDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopDissolve");
		
		ATentacle_HazardBP_C_StopDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.ClearDissolve
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::ClearDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ClearDissolve");
		
		ATentacle_HazardBP_C_ClearDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.FullDissolve
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_C::FullDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.FullDissolve");
		
		ATentacle_HazardBP_C_FullDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopMontage_Multi
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToStop                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendOutTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::StopMontage_Multi(class UAnimMontage* MontageToStop, float BlendOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopMontage_Multi");
		
		ATentacle_HazardBP_C_StopMontage_Multi_Params params {};
		params.MontageToStop = MontageToStop;
		params.BlendOutTime = BlendOutTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.DelayForceTargetChar
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::DelayForceTargetChar(class APrimalCharacter* Char, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.DelayForceTargetChar");
		
		ATentacle_HazardBP_C_DelayForceTargetChar_Params params {};
		params.Char = Char;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetRetractionWithDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewIsRetracted                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::SetRetractionWithDelay(bool NewIsRetracted, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetRetractionWithDelay");
		
		ATentacle_HazardBP_C_SetRetractionWithDelay_Params params {};
		params.NewIsRetracted = NewIsRetracted;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.ExecuteUbergraph_Tentacle_HazardBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::ExecuteUbergraph_Tentacle_HazardBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.ExecuteUbergraph_Tentacle_HazardBP");
		
		ATentacle_HazardBP_C_ExecuteUbergraph_Tentacle_HazardBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnTentacleDied__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ForTentacle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_C::OnTentacleDied__DelegateSignature(class APrimalStructure* ForTentacle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnTentacleDied__DelegateSignature");
		
		ATentacle_HazardBP_C_OnTentacleDied__DelegateSignature_Params params {};
		params.ForTentacle = ForTentacle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATentacle_HazardBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATentacle_HazardBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tentacle_HazardBP.Tentacle_HazardBP_C");
		return ptr;
	}

}


