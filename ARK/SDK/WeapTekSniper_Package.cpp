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
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPShouldDealDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TestActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWeapTekSniper_C::BPShouldDealDamage(class AActor* TestActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPShouldDealDamage");
		
		AWeapTekSniper_C_BPShouldDealDamage_Params params {};
		params.TestActor = TestActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.Try Enable XRay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::TryEnableXRay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Try Enable XRay");
		
		AWeapTekSniper_C_TryEnableXRay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.Get Overheat Duration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float AWeapTekSniper_C::GetOverheatDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Get Overheat Duration");
		
		AWeapTekSniper_C_GetOverheatDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPStopPenetratingAtHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  CurrentHit                                                 (Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsEntryHit                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentDistance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentMaxDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWeapTekSniper_C::BPStopPenetratingAtHit(struct FHitResult* CurrentHit, bool bIsEntryHit, float CurrentDistance, float CurrentMaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPStopPenetratingAtHit");
		
		AWeapTekSniper_C_BPStopPenetratingAtHit_Params params {};
		params.bIsEntryHit = bIsEntryHit;
		params.CurrentDistance = CurrentDistance;
		params.CurrentMaxDistance = CurrentMaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentHit != nullptr)
			*CurrentHit = params.CurrentHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPWeaponDealDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ShootDir                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Impulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AWeapTekSniper_C::BPWeaponDealDamage(struct FHitResult* Impact, struct FVector* ShootDir, int32_t DamageAmount, class UClass* DamageType, float Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPWeaponDealDamage");
		
		AWeapTekSniper_C_BPWeaponDealDamage_Params params {};
		params.DamageAmount = DamageAmount;
		params.DamageType = DamageType;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impact != nullptr)
			*Impact = params.Impact;
		if (ShootDir != nullptr)
			*ShootDir = params.ShootDir;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPAdjustAmmoPerShot
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	int32_t AWeapTekSniper_C::BPAdjustAmmoPerShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPAdjustAmmoPerShot");
		
		AWeapTekSniper_C_BPAdjustAmmoPerShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::BPToggleAccessory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessory");
		
		AWeapTekSniper_C_BPToggleAccessory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.AllowTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapTekSniper_C::AllowTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.AllowTargeting");
		
		AWeapTekSniper_C_AllowTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPSpawnImpactEffects
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ShootDir                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsEntryHit                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              WeaponMaxRange                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::BPSpawnImpactEffects(struct FHitResult* Impact, struct FVector* ShootDir, bool bIsEntryHit, float WeaponMaxRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPSpawnImpactEffects");
		
		AWeapTekSniper_C_BPSpawnImpactEffects_Params params {};
		params.bIsEntryHit = bIsEntryHit;
		params.WeaponMaxRange = WeaponMaxRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impact != nullptr)
			*Impact = params.Impact;
		if (ShootDir != nullptr)
			*ShootDir = params.ShootDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPOnScoped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::BPOnScoped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPOnScoped");
		
		AWeapTekSniper_C_BPOnScoped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPAppliedPrimalItemToWeapon
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::BPAppliedPrimalItemToWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPAppliedPrimalItemToWeapon");
		
		AWeapTekSniper_C_BPAppliedPrimalItemToWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.ReceiveDestroyed");
		
		AWeapTekSniper_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.Has Ammo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MinAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWeapTekSniper_C::HasAmmo(int32_t MinAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Has Ammo");
		
		AWeapTekSniper_C_HasAmmo_Params params {};
		params.MinAmount = MinAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessoryFailed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::BPToggleAccessoryFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessoryFailed");
		
		AWeapTekSniper_C_BPToggleAccessoryFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPCanToggleAccessory
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapTekSniper_C::BPCanToggleAccessory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPCanToggleAccessory");
		
		AWeapTekSniper_C_BPCanToggleAccessory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.UpdateMeshOverheat Effect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::UpdateMeshOverheatEffect(class USkeletalMeshComponent* Mesh, float amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.UpdateMeshOverheat Effect");
		
		AWeapTekSniper_C_UpdateMeshOverheatEffect_Params params {};
		params.Mesh = Mesh;
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.Tick X-Ray Sound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::TickXRaySound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Tick X-Ray Sound");
		
		AWeapTekSniper_C_TickXRaySound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.Is X-Ray Active
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::IsXRayActive(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Is X-Ray Active");
		
		AWeapTekSniper_C_IsXRayActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.Show X-Ray Enabled Message
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::ShowXRayEnabledMessage(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Show X-Ray Enabled Message");
		
		AWeapTekSniper_C_ShowXRayEnabledMessage_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.SniperMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor)
	 */
	void AWeapTekSniper_C::SniperMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.SniperMessage");
		
		AWeapTekSniper_C_SniperMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.GetOwnerCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AShooterCharacter*                           AsShooterCharacter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::GetOwnerCharacter(class AShooterCharacter** AsShooterCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.GetOwnerCharacter");
		
		AWeapTekSniper_C_GetOwnerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsShooterCharacter != nullptr)
			*AsShooterCharacter = params.AsShooterCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPWeaponZoom
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bZoomingIn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::BPWeaponZoom(bool bZoomingIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPWeaponZoom");
		
		AWeapTekSniper_C_BPWeaponZoom_Params params {};
		params.bZoomingIn = bZoomingIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapTekSniper_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPWeaponCanFire");
		
		AWeapTekSniper_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.BPFireWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::BPFireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPFireWeapon");
		
		AWeapTekSniper_C_BPFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.ReceiveTick");
		
		AWeapTekSniper_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.GetIs Overheated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bRetOverheated                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::GetIsOverheated(bool* bRetOverheated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.GetIs Overheated");
		
		AWeapTekSniper_C_GetIsOverheated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRetOverheated != nullptr)
			*bRetOverheated = params.bRetOverheated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.UserConstructionScript");
		
		AWeapTekSniper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapTekSniper_C::FadeOutOverheatParticles__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__FinishedFunc");
		
		AWeapTekSniper_C_FadeOutOverheatParticles__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapTekSniper_C::FadeOutOverheatParticles__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__UpdateFunc");
		
		AWeapTekSniper_C_FadeOutOverheatParticles__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.Overheated
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               JustFired                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::Overheated(bool JustFired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Overheated");
		
		AWeapTekSniper_C_Overheated_Params params {};
		params.JustFired = JustFired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.AddHeat
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               JustFired                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::AddHeat(bool JustFired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.AddHeat");
		
		AWeapTekSniper_C_AddHeat_Params params {};
		params.JustFired = JustFired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.NotOverheated
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::NotOverheated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.NotOverheated");
		
		AWeapTekSniper_C_NotOverheated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.SetScoped
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Scoped                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::SetScoped(bool Scoped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.SetScoped");
		
		AWeapTekSniper_C_SetScoped_Params params {};
		params.Scoped = Scoped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.ClearHitPrimalCharacterAlready
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::ClearHitPrimalCharacterAlready()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.ClearHitPrimalCharacterAlready");
		
		AWeapTekSniper_C_ClearHitPrimalCharacterAlready_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.ClearHitPrimalStructureAlready
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekSniper_C::ClearHitPrimalStructureAlready()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.ClearHitPrimalStructureAlready");
		
		AWeapTekSniper_C_ClearHitPrimalStructureAlready_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTekSniper.WeapTekSniper_C.ExecuteUbergraph_WeapTekSniper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTekSniper_C::ExecuteUbergraph_WeapTekSniper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.ExecuteUbergraph_WeapTekSniper");
		
		AWeapTekSniper_C_ExecuteUbergraph_WeapTekSniper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapTekSniper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapTekSniper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekSniper.WeapTekSniper_C");
		return ptr;
	}

}


