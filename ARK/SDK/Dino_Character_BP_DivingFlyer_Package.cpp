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
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnDiveCrash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             HitComp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm)
	 */
	void ADino_Character_BP_DivingFlyer_C::OnDiveCrash(class AActor* HitActor, class USceneComponent* HitComp, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnDiveCrash");
		
		ADino_Character_BP_DivingFlyer_C_OnDiveCrash_Params params {};
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
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPForceTurretFastTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADino_Character_BP_DivingFlyer_C::BPForceTurretFastTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPForceTurretFastTargeting");
		
		ADino_Character_BP_DivingFlyer_C_BPForceTurretFastTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReturnDivingFlyerToZeroPitchRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::ReturnDivingFlyerToZeroPitchRotation(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReturnDivingFlyerToZeroPitchRotation");
		
		ADino_Character_BP_DivingFlyer_C_ReturnDivingFlyerToZeroPitchRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReduceDiverStamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              cost                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::ReduceDiverStamina(float cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReduceDiverStamina");
		
		ADino_Character_BP_DivingFlyer_C_ReduceDiverStamina_Params params {};
		params.cost = cost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnStartLandingNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::BP_OnStartLandingNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnStartLandingNotify");
		
		ADino_Character_BP_DivingFlyer_C_BP_OnStartLandingNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::GetDivingVelocityMultRatio(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio");
		
		ADino_Character_BP_DivingFlyer_C_GetDivingVelocityMultRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Max
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              maxVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::GetFlyerDiveVelocityMax(float* maxVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Max");
		
		ADino_Character_BP_DivingFlyer_C_GetFlyerDiveVelocityMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (maxVelocity != nullptr)
			*maxVelocity = params.maxVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::GetFlyerDiveVelocityRatio(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio");
		
		ADino_Character_BP_DivingFlyer_C_GetFlyerDiveVelocityRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::HasDivingMomentum(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum");
		
		ADino_Character_BP_DivingFlyer_C_HasDivingMomentum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UpdateDivingFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::UpdateDivingFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UpdateDivingFX");
		
		ADino_Character_BP_DivingFlyer_C_UpdateDivingFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ResetDivingVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::ResetDivingVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ResetDivingVars");
		
		ADino_Character_BP_DivingFlyer_C_ResetDivingVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Is Diver Moving Forward
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::IsDiverMovingForward(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Is Diver Moving Forward");
		
		ADino_Character_BP_DivingFlyer_C_IsDiverMovingForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetDefaultMaxFlySpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MaxFlySpeed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::GetDefaultMaxFlySpeed(float* MaxFlySpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetDefaultMaxFlySpeed");
		
		ADino_Character_BP_DivingFlyer_C_GetDefaultMaxFlySpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxFlySpeed != nullptr)
			*MaxFlySpeed = params.MaxFlySpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Required VelocityToStart
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              _float_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::GetDivingRequiredVelocityToStart(float* _float_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Required VelocityToStart");
		
		ADino_Character_BP_DivingFlyer_C_GetDivingRequiredVelocityToStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_float_ != nullptr)
			*_float_ = params._float_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasEnoughStaminaToDive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::HasEnoughStaminaToDive(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasEnoughStaminaToDive");
		
		ADino_Character_BP_DivingFlyer_C_HasEnoughStaminaToDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnSetRunning
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsRunning                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::BP_OnSetRunning(bool bNewIsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnSetRunning");
		
		ADino_Character_BP_DivingFlyer_C_BP_OnSetRunning_Params params {};
		params.bNewIsRunning = bNewIsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ADino_Character_BP_DivingFlyer_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_RotationRate");
		
		ADino_Character_BP_DivingFlyer_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ADino_Character_BP_DivingFlyer_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_MaxSpeed");
		
		ADino_Character_BP_DivingFlyer_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifyClearRider");
		
		ADino_Character_BP_DivingFlyer_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.IsDiving
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::IsDiving(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.IsDiving");
		
		ADino_Character_BP_DivingFlyer_C_IsDiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::HasDivingMomentum_Pure(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum_Pure");
		
		ADino_Character_BP_DivingFlyer_C_HasDivingMomentum_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPOnMovementModeChangedNotify");
		
		ADino_Character_BP_DivingFlyer_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::GetFlyerDiveVelocityRatio_Pure(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio_Pure");
		
		ADino_Character_BP_DivingFlyer_C_GetFlyerDiveVelocityRatio_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity MaxPure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              maxVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::GetFlyerDiveVelocityMaxPure(float* maxVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity MaxPure");
		
		ADino_Character_BP_DivingFlyer_C_GetFlyerDiveVelocityMaxPure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (maxVelocity != nullptr)
			*maxVelocity = params.maxVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.CanFlyerDive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::CanFlyerDive(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.CanFlyerDive");
		
		ADino_Character_BP_DivingFlyer_C_CanFlyerDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AllowDiving
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::AllowDiving(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AllowDiving");
		
		ADino_Character_BP_DivingFlyer_C_AllowDiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Tick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::Diving_Tick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Tick");
		
		ADino_Character_BP_DivingFlyer_C_Diving_Tick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Stop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::Diving_Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Stop");
		
		ADino_Character_BP_DivingFlyer_C_Diving_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Start
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::Diving_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Start");
		
		ADino_Character_BP_DivingFlyer_C_Diving_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Set Is Diving
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newDiving                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceSet                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::SetIsDiving(bool newDiving, bool ForceSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Set Is Diving");
		
		ADino_Character_BP_DivingFlyer_C_SetIsDiving_Params params {};
		params.newDiving = newDiving;
		params.ForceSet = ForceSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnRep_bIsDiving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::OnRep_bIsDiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnRep_bIsDiving");
		
		ADino_Character_BP_DivingFlyer_C_OnRep_bIsDiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Interp Diver Mesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::InterpDiverMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Interp Diver Mesh");
		
		ADino_Character_BP_DivingFlyer_C_InterpDiverMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::GetDivingVelocityMultRatio_Pure(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio_Pure");
		
		ADino_Character_BP_DivingFlyer_C_GetDivingVelocityMultRatio_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifySetRider");
		
		ADino_Character_BP_DivingFlyer_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPTimerNonDedicated");
		
		ADino_Character_BP_DivingFlyer_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get DefaultDivingFlyer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ADino_Character_BP_DivingFlyer_C*            Default                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::GetDefaultDivingFlyer(class ADino_Character_BP_DivingFlyer_C** Default)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get DefaultDivingFlyer");
		
		ADino_Character_BP_DivingFlyer_C_GetDefaultDivingFlyer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Default != nullptr)
			*Default = params.Default;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ADino_Character_BP_DivingFlyer_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPModifyFOV");
		
		ADino_Character_BP_DivingFlyer_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveHit
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
	void ADino_Character_BP_DivingFlyer_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveHit");
		
		ADino_Character_BP_DivingFlyer_C_ReceiveHit_Params params {};
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
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasLocallyCarriedPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bLocallyCarried                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::HasLocallyCarriedPlayer(bool* bLocallyCarried)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasLocallyCarriedPlayer");
		
		ADino_Character_BP_DivingFlyer_C_HasLocallyCarriedPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLocallyCarried != nullptr)
			*bLocallyCarried = params.bLocallyCarried;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DebugDiveVals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::DebugDiveVals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DebugDiveVals");
		
		ADino_Character_BP_DivingFlyer_C_DebugDiveVals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetCurrentAcceleration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ADino_Character_BP_DivingFlyer_C::GetCurrentAcceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetCurrentAcceleration");
		
		ADino_Character_BP_DivingFlyer_C_GetCurrentAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UserConstructionScript");
		
		ADino_Character_BP_DivingFlyer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AbortDive
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPlayAbortAnim                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::AbortDive(bool bPlayAbortAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AbortDive");
		
		ADino_Character_BP_DivingFlyer_C_AbortDive_Params params {};
		params.bPlayAbortAnim = bPlayAbortAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DiveBomb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_DivingFlyer_C::DiveBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DiveBomb");
		
		ADino_Character_BP_DivingFlyer_C_DiveBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OwningClientDiveBombCameraShake
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::OwningClientDiveBombCameraShake(float Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OwningClientDiveBombCameraShake");
		
		ADino_Character_BP_DivingFlyer_C_OwningClientDiveBombCameraShake_Params params {};
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Multi_LandFromDive
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    MeshRotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::Multi_LandFromDive(const struct FRotator& MeshRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Multi_LandFromDive");
		
		ADino_Character_BP_DivingFlyer_C_Multi_LandFromDive_Params params {};
		params.MeshRotation = MeshRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Server_SetIsDiving
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newDiving                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::Server_SetIsDiving(bool newDiving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Server_SetIsDiving");
		
		ADino_Character_BP_DivingFlyer_C_Server_SetIsDiving_Params params {};
		params.newDiving = newDiving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveTick");
		
		ADino_Character_BP_DivingFlyer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ExecuteUbergraph_Dino_Character_BP_DivingFlyer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_DivingFlyer_C::ExecuteUbergraph_Dino_Character_BP_DivingFlyer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ExecuteUbergraph_Dino_Character_BP_DivingFlyer");
		
		ADino_Character_BP_DivingFlyer_C_ExecuteUbergraph_Dino_Character_BP_DivingFlyer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_Character_BP_DivingFlyer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_Character_BP_DivingFlyer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C");
		return ptr;
	}

}


