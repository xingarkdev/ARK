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
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPInstigatorUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::BPInstigatorUnpossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPInstigatorUnpossessed");
		
		ABuff_Zipline_CaveWolf_C_BPInstigatorUnpossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineFaceUpDirection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FacingUpDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::SetZiplineFaceUpDirection(bool FacingUpDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineFaceUpDirection");
		
		ABuff_Zipline_CaveWolf_C_SetZiplineFaceUpDirection_Params params {};
		params.FacingUpDirection = FacingUpDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Get Distance to Anchor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               GetLower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::GetDistancetoAnchor(bool GetLower, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Get Distance to Anchor");
		
		ABuff_Zipline_CaveWolf_C_GetDistancetoAnchor_Params params {};
		params.GetLower = GetLower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineSliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::SetZiplineSliding(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineSliding");
		
		ABuff_Zipline_CaveWolf_C_SetZiplineSliding_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachDelayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::PlayAttachDelayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachDelayed");
		
		ABuff_Zipline_CaveWolf_C_PlayAttachDelayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetAttachedCharacterTransform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::SetAttachedCharacterTransform(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetAttachedCharacterTransform");
		
		ABuff_Zipline_CaveWolf_C_SetAttachedCharacterTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::PlayAttachAnimation(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachAnimation");
		
		ABuff_Zipline_CaveWolf_C_PlayAttachAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityMotorized
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::CalcZiplineVelocityMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityMotorized");
		
		ABuff_Zipline_CaveWolf_C_CalcZiplineVelocityMotorized_Params params {};
		params.InVelocity = InVelocity;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVelocity != nullptr)
			*OutVelocity = params.OutVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ReceiveBeginPlay");
		
		ABuff_Zipline_CaveWolf_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.GetAttachOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AttachOffset                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::GetAttachOffset(struct FVector* AttachOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.GetAttachOffset");
		
		ABuff_Zipline_CaveWolf_C_GetAttachOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachOffset != nullptr)
			*AttachOffset = params.AttachOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Play Detach Animation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::PlayDetachAnimation(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Play Detach Animation");
		
		ABuff_Zipline_CaveWolf_C_PlayDetachAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.IsStillColliding
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::IsStillColliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.IsStillColliding");
		
		ABuff_Zipline_CaveWolf_C_IsStillColliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CanZiplineFlip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::CanZiplineFlip(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CanZiplineFlip");
		
		ABuff_Zipline_CaveWolf_C_CanZiplineFlip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::ResetCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetCamera");
		
		ABuff_Zipline_CaveWolf_C_ResetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HandleCollision
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_Zipline_CaveWolf_C::HandleCollision(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HandleCollision");
		
		ABuff_Zipline_CaveWolf_C_HandleCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HitZiplineEndStop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMovementComponent*                          MovementComp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::HitZiplineEndStop(class UMovementComponent* MovementComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HitZiplineEndStop");
		
		ABuff_Zipline_CaveWolf_C_HitZiplineEndStop_Params params {};
		params.MovementComp = MovementComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplinePreservedStartVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::CalcZiplinePreservedStartVelocity(const struct FVector& InVelocity, struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplinePreservedStartVelocity");
		
		ABuff_Zipline_CaveWolf_C_CalcZiplinePreservedStartVelocity_Params params {};
		params.InVelocity = InVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::SetZiplineRunningSpeedAndAcceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration");
		
		ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetZiplineSpeedAndAcceleration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::ResetZiplineSpeedAndAcceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetZiplineSpeedAndAcceleration");
		
		ABuff_Zipline_CaveWolf_C_ResetZiplineSpeedAndAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.End Move Along Zipline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AddImpulse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::EndMoveAlongZipline(bool AddImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.End Move Along Zipline");
		
		ABuff_Zipline_CaveWolf_C_EndMoveAlongZipline_Params params {};
		params.AddImpulse = AddImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityNonMotorized
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::CalcZiplineVelocityNonMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityNonMotorized");
		
		ABuff_Zipline_CaveWolf_C_CalcZiplineVelocityNonMotorized_Params params {};
		params.InVelocity = InVelocity;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVelocity != nullptr)
			*OutVelocity = params.OutVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::UpdateFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFX");
		
		ABuff_Zipline_CaveWolf_C_UpdateFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ProcessMotorInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::ProcessMotorInput(float A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ProcessMotorInput");
		
		ABuff_Zipline_CaveWolf_C_ProcessMotorInput_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.JumpImpulse
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::JumpImpulse(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.JumpImpulse");
		
		ABuff_Zipline_CaveWolf_C_JumpImpulse_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateActorZiplineOffset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::UpdateActorZiplineOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateActorZiplineOffset");
		
		ABuff_Zipline_CaveWolf_C_UpdateActorZiplineOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.TickMoveAlongZipline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::TickMoveAlongZipline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.TickMoveAlongZipline");
		
		ABuff_Zipline_CaveWolf_C_TickMoveAlongZipline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetHurtAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hanging                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::SetHurtAnim(bool Hanging, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetHurtAnim");
		
		ABuff_Zipline_CaveWolf_C_SetHurtAnim_Params params {};
		params.Hanging = Hanging;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AttachToZipline
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::AttachToZipline(const struct FVector& StartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AttachToZipline");
		
		ABuff_Zipline_CaveWolf_C_AttachToZipline_Params params {};
		params.StartLocation = StartLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BuffTickClient");
		
		ABuff_Zipline_CaveWolf_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFPVCameraAndMeshPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::UpdateFPVCameraAndMeshPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFPVCameraAndMeshPosition");
		
		ABuff_Zipline_CaveWolf_C_UpdateFPVCameraAndMeshPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_Zipline_CaveWolf_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPOverrideCharacterNewFallVelocity");
		
		ABuff_Zipline_CaveWolf_C_BPOverrideCharacterNewFallVelocity_Params params {};
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
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Zipline_CaveWolf_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPCheckPreventInput");
		
		ABuff_Zipline_CaveWolf_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayTurnAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                override                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::PlayTurnAnimation(class UAnimMontage* override, float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayTurnAnimation");
		
		ABuff_Zipline_CaveWolf_C_PlayTurnAnimation_Params params {};
		params.override = override;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineControlRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::SetZiplineControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineControlRotation");
		
		ABuff_Zipline_CaveWolf_C_SetZiplineControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RotationNearlyEqual
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    RotA                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    rotB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ErrorTolerance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::RotationNearlyEqual(const struct FRotator& RotA, const struct FRotator& rotB, float ErrorTolerance, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RotationNearlyEqual");
		
		ABuff_Zipline_CaveWolf_C_RotationNearlyEqual_Params params {};
		params.RotA = RotA;
		params.rotB = rotB;
		params.ErrorTolerance = ErrorTolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPDeactivated");
		
		ABuff_Zipline_CaveWolf_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPSetupForInstigator");
		
		ABuff_Zipline_CaveWolf_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetMeshPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::ResetMeshPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetMeshPosition");
		
		ABuff_Zipline_CaveWolf_C_ResetMeshPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InterpolateCharacterMeshToLine
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::InterpolateCharacterMeshToLine(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InterpolateCharacterMeshToLine");
		
		ABuff_Zipline_CaveWolf_C_InterpolateCharacterMeshToLine_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UserConstructionScript");
		
		ABuff_Zipline_CaveWolf_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_121
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_Run_K2Node_InputActionEvent_121()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_121");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_Run_K2Node_InputActionEvent_121_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_120
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_Run_K2Node_InputActionEvent_120()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_120");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_Run_K2Node_InputActionEvent_120_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Jump_K2Node_InputActionEvent_119
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_Jump_K2Node_InputActionEvent_119()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Jump_K2Node_InputActionEvent_119");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_Jump_K2Node_InputActionEvent_119_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Use_K2Node_InputActionEvent_118
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_Use_K2Node_InputActionEvent_118()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Use_K2Node_InputActionEvent_118");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_Use_K2Node_InputActionEvent_118_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Crouch_K2Node_InputActionEvent_117
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_Crouch_K2Node_InputActionEvent_117()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Crouch_K2Node_InputActionEvent_117");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_Crouch_K2Node_InputActionEvent_117_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_116
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_116()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_116");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_116_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_115
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_115()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_115");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_115_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51");
		
		ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::FlipOnZipline_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_Multicast");
		
		ABuff_Zipline_CaveWolf_C_FlipOnZipline_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::FlipOnZipline_RunOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_RunOnServer");
		
		ABuff_Zipline_CaveWolf_C_FlipOnZipline_RunOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetIsTurning
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::SetIsTurning(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetIsTurning");
		
		ABuff_Zipline_CaveWolf_C_SetIsTurning_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoZiplineTurn_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::DoZiplineTurn_RunOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoZiplineTurn_RunOnServer");
		
		ABuff_Zipline_CaveWolf_C_DoZiplineTurn_RunOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RunPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::RunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RunPressed");
		
		ABuff_Zipline_CaveWolf_C_RunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::SetZiplineRunningSpeedAndAcceleration_Multicast(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_Multicast");
		
		ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_Multicast_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::SetZiplineRunningSpeedAndAcceleration_RunOnServer(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer");
		
		ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_RunOnServer_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetRunning_RunOnClient
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::SetRunning_RunOnClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetRunning_RunOnClient");
		
		ABuff_Zipline_CaveWolf_C_SetRunning_RunOnClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoNothing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::DoNothing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoNothing");
		
		ABuff_Zipline_CaveWolf_C_DoNothing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetSliding_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::SetSliding_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetSliding_Multicast");
		
		ABuff_Zipline_CaveWolf_C_SetSliding_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AI_SetZiplineRunning_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_CaveWolf_C::AI_SetZiplineRunning_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AI_SetZiplineRunning_Multicast");
		
		ABuff_Zipline_CaveWolf_C_AI_SetZiplineRunning_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ExecuteUbergraph_Buff_Zipline_CaveWolf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_CaveWolf_C::ExecuteUbergraph_Buff_Zipline_CaveWolf(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ExecuteUbergraph_Buff_Zipline_CaveWolf");
		
		ABuff_Zipline_CaveWolf_C_ExecuteUbergraph_Buff_Zipline_CaveWolf_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Zipline_CaveWolf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Zipline_CaveWolf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C");
		return ptr;
	}

}


