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
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnRep_bToggleUnstasis
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::OnRep_bToggleUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnRep_bToggleUnstasis");
		
		AVenusFlyTrap_BP_C_OnRep_bToggleUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventCharacterBasing
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         BasedOnComponent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AVenusFlyTrap_BP_C::BPPreventCharacterBasing(class AActor* OtherActor, class UPrimitiveComponent* BasedOnComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventCharacterBasing");
		
		AVenusFlyTrap_BP_C_BPPreventCharacterBasing_Params params {};
		params.OtherActor = OtherActor;
		params.BasedOnComponent = BasedOnComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ValidLOSTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               retValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::ValidLOSTarget(class AActor* Target, bool* retValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ValidLOSTarget");
		
		AVenusFlyTrap_BP_C_ValidLOSTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retValid != nullptr)
			*retValid = params.retValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.get anim index
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            AnimIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::getanimindex(int32_t* AnimIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.get anim index");
		
		AVenusFlyTrap_BP_C_getanimindex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimIndex != nullptr)
			*AnimIndex = params.AnimIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Can Target WakeSelf
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bValidTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::CanTargetWakeSelf(class APrimalCharacter* Character, bool* bValidTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Can Target WakeSelf");
		
		AVenusFlyTrap_BP_C_CanTargetWakeSelf_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidTarget != nullptr)
			*bValidTarget = params.bValidTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHitEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPath                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DamageLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::BPHitEffect(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, class UPrimitiveComponent* HitComponent, const struct FVector& DamageLoc, const struct FRotator& HitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHitEffect");
		
		AVenusFlyTrap_BP_C_BPHitEffect_Params params {};
		params.DamageTaken = DamageTaken;
		params.PawnInstigator = PawnInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsLocalPath = bIsLocalPath;
		params.HitComponent = HitComponent;
		params.DamageLoc = DamageLoc;
		params.HitNormal = HitNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EffectiveRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    ActualRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::EffectiveRotation(struct FRotator* ActualRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EffectiveRotation");
		
		AVenusFlyTrap_BP_C_EffectiveRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActualRotation != nullptr)
			*ActualRotation = params.ActualRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetTargetAimAtLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::GetTargetAimAtLocation(class APrimalCharacter* Target, struct FVector* TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetTargetAimAtLocation");
		
		AVenusFlyTrap_BP_C_GetTargetAimAtLocation_Params params {};
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
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetAimOffsets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YawSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::GetAimOffsets(float DeltaTime, float* YawSpeed, struct FRotator* Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetAimOffsets");
		
		AVenusFlyTrap_BP_C_GetAimOffsets_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (YawSpeed != nullptr)
			*YawSpeed = params.YawSpeed;
		if (Rot != nullptr)
			*Rot = params.Rot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetIsDead
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsDead                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromDamage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::SetIsDead(bool bNewIsDead, bool bFromDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetIsDead");
		
		AVenusFlyTrap_BP_C_SetIsDead_Params params {};
		params.bNewIsDead = bNewIsDead;
		params.bFromDamage = bFromDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRevive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanRevive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::CanRevive(bool* bCanRevive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRevive");
		
		AVenusFlyTrap_BP_C_CanRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanRevive != nullptr)
			*bCanRevive = params.bCanRevive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUpdatedHealth
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDoReplication                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::BPUpdatedHealth(bool bDoReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUpdatedHealth");
		
		AVenusFlyTrap_BP_C_BPUpdatedHealth_Params params {};
		params.bDoReplication = bDoReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AVenusFlyTrap_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPAdjustDamage");
		
		AVenusFlyTrap_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPImpactEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitRes                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     ShootDirection                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool AVenusFlyTrap_BP_C::BPImpactEffect(struct FHitResult* HitRes, struct FVector* ShootDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPImpactEffect");
		
		AVenusFlyTrap_BP_C_BPImpactEffect_Params params {};
		
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
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPReleasedPlayer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ReleasedChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AtSeatNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::BPReleasedPlayer(class AShooterCharacter* ReleasedChar, int32_t AtSeatNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPReleasedPlayer");
		
		AVenusFlyTrap_BP_C_BPReleasedPlayer_Params params {};
		params.ReleasedChar = ReleasedChar;
		params.AtSeatNumber = AtSeatNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventReleaseSeatingStructure
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ForSitter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AVenusFlyTrap_BP_C::BPPreventReleaseSeatingStructure(class AShooterCharacter* ForSitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventReleaseSeatingStructure");
		
		AVenusFlyTrap_BP_C_BPPreventReleaseSeatingStructure_Params params {};
		params.ForSitter = ForSitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPSeatedPlayer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           SeatedChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AtSeatNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::BPSeatedPlayer(class AShooterCharacter* SeatedChar, int32_t AtSeatNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPSeatedPlayer");
		
		AVenusFlyTrap_BP_C_BPSeatedPlayer_Params params {};
		params.SeatedChar = SeatedChar;
		params.AtSeatNumber = AtSeatNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanAttack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanAttack                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::CanAttack(bool* bCanAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanAttack");
		
		AVenusFlyTrap_BP_C_CanAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanAttack != nullptr)
			*bCanAttack = params.bCanAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRotate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanRotate                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::CanRotate(bool* bCanRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRotate");
		
		AVenusFlyTrap_BP_C_CanRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanRotate != nullptr)
			*bCanRotate = params.bCanRotate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AVenusFlyTrap_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.IsActorValidTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::IsActorValidTarget(class APrimalCharacter* Target, bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.IsActorValidTarget");
		
		AVenusFlyTrap_BP_C_IsActorValidTarget_Params params {};
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
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.FindBestTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::FindBestTarget(class APrimalCharacter** Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.FindBestTarget");
		
		AVenusFlyTrap_BP_C_FindBestTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPTriggerStasisEvent");
		
		AVenusFlyTrap_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnSleep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSleeping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromBeginPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::OnSleep(bool bIsSleeping, bool bFromBeginPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnSleep");
		
		AVenusFlyTrap_BP_C_OnSleep_Params params {};
		params.bIsSleeping = bIsSleeping;
		params.bFromBeginPlay = bFromBeginPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetSleeping
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSleeping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::SetSleeping(bool bIsSleeping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetSleeping");
		
		AVenusFlyTrap_BP_C_SetSleeping_Params params {};
		params.bIsSleeping = bIsSleeping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUnstasis");
		
		AVenusFlyTrap_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHandleStructureEnabled
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::BPHandleStructureEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHandleStructureEnabled");
		
		AVenusFlyTrap_BP_C_BPHandleStructureEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.UserConstructionScript");
		
		AVenusFlyTrap_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::Timeline_Dissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__FinishedFunc");
		
		AVenusFlyTrap_BP_C_Timeline_Dissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::Timeline_Dissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__UpdateFunc");
		
		AVenusFlyTrap_BP_C_Timeline_Dissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ReceiveBeginPlay");
		
		AVenusFlyTrap_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void AVenusFlyTrap_BP_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature");
		
		AVenusFlyTrap_BP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SetSleeping
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewSleepingState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::Multi_SetSleeping(bool bNewSleepingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SetSleeping");
		
		AVenusFlyTrap_BP_C_Multi_SetSleeping_Params params {};
		params.bNewSleepingState = bNewSleepingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ClientTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::ClientTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ClientTick");
		
		AVenusFlyTrap_BP_C_ClientTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ServerTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::ServerTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ServerTick");
		
		AVenusFlyTrap_BP_C_ServerTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.StartTimers
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::StartTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.StartTimers");
		
		AVenusFlyTrap_BP_C_StartTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_DoAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::Multi_DoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_DoAttack");
		
		AVenusFlyTrap_BP_C_Multi_DoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.DoAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::DoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.DoAttack");
		
		AVenusFlyTrap_BP_C_DoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::PlayAnimMontage(class UAnimMontage* MontageToPlay, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage");
		
		AVenusFlyTrap_BP_C_PlayAnimMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SwallowDino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        PrimalDino                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::SwallowDino(class APrimalDinoCharacter* PrimalDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SwallowDino");
		
		AVenusFlyTrap_BP_C_SwallowDino_Params params {};
		params.PrimalDino = PrimalDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFlinch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::PlayFlinch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFlinch");
		
		AVenusFlyTrap_BP_C_PlayFlinch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage_Multi
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::PlayAnimMontage_Multi(class UAnimMontage* MontageToPlay, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage_Multi");
		
		AVenusFlyTrap_BP_C_PlayAnimMontage_Multi_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Server_StartDying
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::Server_StartDying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Server_StartDying");
		
		AVenusFlyTrap_BP_C_Server_StartDying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_StartDying
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::Multi_StartDying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_StartDying");
		
		AVenusFlyTrap_BP_C_Multi_StartDying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EventNextTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::EventNextTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EventNextTick");
		
		AVenusFlyTrap_BP_C_EventNextTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SleepCheckTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::SleepCheckTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SleepCheckTick");
		
		AVenusFlyTrap_BP_C_SleepCheckTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFailedGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::PlayFailedGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFailedGrab");
		
		AVenusFlyTrap_BP_C_PlayFailedGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::SeatCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatCharacter");
		
		AVenusFlyTrap_BP_C_SeatCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatNextTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::SeatNextTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatNextTick");
		
		AVenusFlyTrap_BP_C_SeatNextTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SwallowParticle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::Multi_SwallowParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SwallowParticle");
		
		AVenusFlyTrap_BP_C_Multi_SwallowParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.LateDismountCatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVenusFlyTrap_BP_C::LateDismountCatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.LateDismountCatch");
		
		AVenusFlyTrap_BP_C_LateDismountCatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ExecuteUbergraph_VenusFlyTrap_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVenusFlyTrap_BP_C::ExecuteUbergraph_VenusFlyTrap_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ExecuteUbergraph_VenusFlyTrap_BP");
		
		AVenusFlyTrap_BP_C_ExecuteUbergraph_VenusFlyTrap_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVenusFlyTrap_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVenusFlyTrap_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VenusFlyTrap_BP.VenusFlyTrap_BP_C");
		return ptr;
	}

}


