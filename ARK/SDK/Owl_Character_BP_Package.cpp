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
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t AOwl_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		AOwl_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AOwl_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPOnStartJump");
		
		AOwl_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.RidingTick");
		
		AOwl_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AOwl_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AOwl_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.IsOnOrNearGround
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               returnvalue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::IsOnOrNearGround(bool* returnvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.IsOnOrNearGround");
		
		AOwl_Character_BP_C_IsOnOrNearGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnvalue != nullptr)
			*returnvalue = params.returnvalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.SetupIceCrashState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ApplyOneShotEncapsulate                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CalculatedImpactRadius                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::SetupIceCrashState(bool Enabled, bool ApplyOneShotEncapsulate, float* CalculatedImpactRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.SetupIceCrashState");
		
		AOwl_Character_BP_C_SetupIceCrashState_Params params {};
		params.Enabled = Enabled;
		params.ApplyOneShotEncapsulate = ApplyOneShotEncapsulate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CalculatedImpactRadius != nullptr)
			*CalculatedImpactRadius = params.CalculatedImpactRadius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.GetPredatorVisionStaminaDrainPerSecond
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              returnvalue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::GetPredatorVisionStaminaDrainPerSecond(float* returnvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.GetPredatorVisionStaminaDrainPerSecond");
		
		AOwl_Character_BP_C_GetPredatorVisionStaminaDrainPerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnvalue != nullptr)
			*returnvalue = params.returnvalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.StopEncapsulateAnims
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoppedAnim                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::StopEncapsulateAnims(bool* StoppedAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.StopEncapsulateAnims");
		
		AOwl_Character_BP_C_StopEncapsulateAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StoppedAnim != nullptr)
			*StoppedAnim = params.StoppedAnim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.DiveBomb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::DiveBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.DiveBomb");
		
		AOwl_Character_BP_C_DiveBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.DoIceBombAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::DoIceBombAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.DoIceBombAttack");
		
		AOwl_Character_BP_C_DoIceBombAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.OnDiveCrash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             HitComp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm)
	 */
	void AOwl_Character_BP_C::OnDiveCrash(class AActor* HitActor, class USceneComponent* HitComp, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.OnDiveCrash");
		
		AOwl_Character_BP_C_OnDiveCrash_Params params {};
		params.HitActor = HitActor;
		params.HitComp = HitComp;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingTrailParticles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    Particles                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::UpdateDivingTrailParticles(class UParticleSystemComponent* Particles, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingTrailParticles");
		
		AOwl_Character_BP_C_UpdateDivingTrailParticles_Params params {};
		params.Particles = Particles;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::UpdateDivingFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingFX");
		
		AOwl_Character_BP_C_UpdateDivingFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.GetEncapsulateStaminaDrainPerSecond
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              returnvalue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::GetEncapsulateStaminaDrainPerSecond(float* returnvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.GetEncapsulateStaminaDrainPerSecond");
		
		AOwl_Character_BP_C_GetEncapsulateStaminaDrainPerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnvalue != nullptr)
			*returnvalue = params.returnvalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.BPOnStaminaDrained
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::BPOnStaminaDrained()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPOnStaminaDrained");
		
		AOwl_Character_BP_C_BPOnStaminaDrained_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AOwl_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AOwl_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPHandleOnStopTargeting");
		
		AOwl_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.SetupEncapsulateState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::SetupEncapsulateState(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.SetupEncapsulateState");
		
		AOwl_Character_BP_C_SetupEncapsulateState_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AOwl_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BP_PreventMovementMode");
		
		AOwl_Character_BP_C_BP_PreventMovementMode_Params params {};
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
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.IsPredatorVisionEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::IsPredatorVisionEnabled(bool* IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.IsPredatorVisionEnabled");
		
		AOwl_Character_BP_C_IsPredatorVisionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnabled != nullptr)
			*IsEnabled = params.IsEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.RemovePredatorVisionBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::RemovePredatorVisionBuff(class AShooterCharacter* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.RemovePredatorVisionBuff");
		
		AOwl_Character_BP_C_RemovePredatorVisionBuff_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.SetupPredatorVisionBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::SetupPredatorVisionBuff(class AShooterCharacter* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.SetupPredatorVisionBuff");
		
		AOwl_Character_BP_C_SetupPredatorVisionBuff_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AOwl_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BlueprintCanRiderAttack");
		
		AOwl_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.BPNotifyClearRider");
		
		AOwl_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.UserConstructionScript");
		
		AOwl_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestPredatorVision
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::ServerRequestPredatorVision(bool SetEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestPredatorVision");
		
		AOwl_Character_BP_C_ServerRequestPredatorVision_Params params {};
		params.SetEnabled = SetEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.ClientDoPredatorVision
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::ClientDoPredatorVision(bool SetEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ClientDoPredatorVision");
		
		AOwl_Character_BP_C_ClientDoPredatorVision_Params params {};
		params.SetEnabled = SetEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStartEncapsulate
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::ServerRequestStartEncapsulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStartEncapsulate");
		
		AOwl_Character_BP_C_ServerRequestStartEncapsulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.MulticastStartEncapsulate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FromIceCrash                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::MulticastStartEncapsulate(bool FromIceCrash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.MulticastStartEncapsulate");
		
		AOwl_Character_BP_C_MulticastStartEncapsulate_Params params {};
		params.FromIceCrash = FromIceCrash;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.MulticastStopEncapsulate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::MulticastStopEncapsulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.MulticastStopEncapsulate");
		
		AOwl_Character_BP_C_MulticastStopEncapsulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStopEncapsulate
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::ServerRequestStopEncapsulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStopEncapsulate");
		
		AOwl_Character_BP_C_ServerRequestStopEncapsulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.Start Encapsulate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::StartEncapsulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.Start Encapsulate");
		
		AOwl_Character_BP_C_StartEncapsulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.Stop Encapsulate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::StopEncapsulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.Stop Encapsulate");
		
		AOwl_Character_BP_C_StopEncapsulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_EncapsulateStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::OnAnimCustomEvent_EncapsulateStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_EncapsulateStart");
		
		AOwl_Character_BP_C_OnAnimCustomEvent_EncapsulateStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.MulticastOnIceBombImpact
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::MulticastOnIceBombImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.MulticastOnIceBombImpact");
		
		AOwl_Character_BP_C_MulticastOnIceBombImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.OnIceCrashHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HitValidTarget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitWater                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::OnIceCrashHit(bool HitValidTarget, bool HitWater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.OnIceCrashHit");
		
		AOwl_Character_BP_C_OnIceCrashHit_Params params {};
		params.HitValidTarget = HitValidTarget;
		params.HitWater = HitWater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.StartIceCrash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::StartIceCrash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.StartIceCrash");
		
		AOwl_Character_BP_C_StartIceCrash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_IceCrashStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::OnAnimCustomEvent_IceCrashStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_IceCrashStart");
		
		AOwl_Character_BP_C_OnAnimCustomEvent_IceCrashStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestCancelIceCrash
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_C::ServerRequestCancelIceCrash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestCancelIceCrash");
		
		AOwl_Character_BP_C_ServerRequestCancelIceCrash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.MulticastIceCrashHit
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              EffectRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::MulticastIceCrashHit(float EffectRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.MulticastIceCrashHit");
		
		AOwl_Character_BP_C_MulticastIceCrashHit_Params params {};
		params.EffectRadius = EffectRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.ServerSetTargeting
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::ServerSetTargeting(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ServerSetTargeting");
		
		AOwl_Character_BP_C_ServerSetTargeting_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Owl_Character_BP.Owl_Character_BP_C.ExecuteUbergraph_Owl_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_C::ExecuteUbergraph_Owl_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP.Owl_Character_BP_C.ExecuteUbergraph_Owl_Character_BP");
		
		AOwl_Character_BP_C_ExecuteUbergraph_Owl_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOwl_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOwl_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Owl_Character_BP.Owl_Character_BP_C");
		return ptr;
	}

}


