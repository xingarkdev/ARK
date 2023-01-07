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
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineFaceUpDirection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FaceUpDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetZiplineFaceUpDirection(bool FaceUpDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineFaceUpDirection");
		
		ABuff_Zipline_DinoBase_C_SetZiplineFaceUpDirection_Params params {};
		params.FaceUpDirection = FaceUpDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetDistanceToAnchor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               GetLower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::GetDistanceToAnchor(bool GetLower, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetDistanceToAnchor");
		
		ABuff_Zipline_DinoBase_C_GetDistanceToAnchor_Params params {};
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
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CanZiplineFlip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::CanZiplineFlip(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CanZiplineFlip");
		
		ABuff_Zipline_DinoBase_C_CanZiplineFlip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetZiplineSpeedAndAcceleration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::ResetZiplineSpeedAndAcceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetZiplineSpeedAndAcceleration");
		
		ABuff_Zipline_DinoBase_C_ResetZiplineSpeedAndAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineSliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetZiplineSliding(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineSliding");
		
		ABuff_Zipline_DinoBase_C_SetZiplineSliding_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::SetZiplineRunningSpeedAndAcceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration");
		
		ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RotationNearlyEqual
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    RotA                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    rotB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ErrorTolerance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::RotationNearlyEqual(const struct FRotator& RotA, const struct FRotator& rotB, float ErrorTolerance, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RotationNearlyEqual");
		
		ABuff_Zipline_DinoBase_C_RotationNearlyEqual_Params params {};
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
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ReceiveBeginPlay");
		
		ABuff_Zipline_DinoBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateActorZiplineOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::UpdateActorZiplineOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateActorZiplineOffset");
		
		ABuff_Zipline_DinoBase_C_UpdateActorZiplineOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetHurtAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hanging                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetHurtAnim(bool Hanging, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetHurtAnim");
		
		ABuff_Zipline_DinoBase_C_SetHurtAnim_Params params {};
		params.Hanging = Hanging;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPInstigatorUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::BPInstigatorUnpossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPInstigatorUnpossessed");
		
		ABuff_Zipline_DinoBase_C_BPInstigatorUnpossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickServer");
		
		ABuff_Zipline_DinoBase_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Get Zipline Start and End Point NonPure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NoOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Start                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::GetZiplineStartandEndPointNonPure(bool NoOffset, struct FVector* Start, struct FVector* End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Get Zipline Start and End Point NonPure");
		
		ABuff_Zipline_DinoBase_C_GetZiplineStartandEndPointNonPure_Params params {};
		params.NoOffset = NoOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Start != nullptr)
			*Start = params.Start;
		if (End != nullptr)
			*End = params.End;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetAttachedCharacterTransform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetAttachedCharacterTransform(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetAttachedCharacterTransform");
		
		ABuff_Zipline_DinoBase_C_SetAttachedCharacterTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetupLocalClient
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetupLocalClient(class AActor* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetupLocalClient");
		
		ABuff_Zipline_DinoBase_C_SetupLocalClient_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Deactivate Local Client
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::DeactivateLocalClient(class AActor* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Deactivate Local Client");
		
		ABuff_Zipline_DinoBase_C_DeactivateLocalClient_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsStillColliding
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::IsStillColliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsStillColliding");
		
		ABuff_Zipline_DinoBase_C_IsStillColliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HandleCollision
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_Zipline_DinoBase_C::HandleCollision(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HandleCollision");
		
		ABuff_Zipline_DinoBase_C_HandleCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HitZiplineEndStop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMovementComponent*                          MovementComp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::HitZiplineEndStop(class UMovementComponent* MovementComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HitZiplineEndStop");
		
		ABuff_Zipline_DinoBase_C_HitZiplineEndStop_Params params {};
		params.MovementComp = MovementComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplinePreservedStartVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::CalcZiplinePreservedStartVelocity(const struct FVector& InVelocity, struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplinePreservedStartVelocity");
		
		ABuff_Zipline_DinoBase_C_CalcZiplinePreservedStartVelocity_Params params {};
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
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityMotorized
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::CalcZiplineVelocityMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityMotorized");
		
		ABuff_Zipline_DinoBase_C_CalcZiplineVelocityMotorized_Params params {};
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
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityNonMotorized
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::CalcZiplineVelocityNonMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityNonMotorized");
		
		ABuff_Zipline_DinoBase_C_CalcZiplineVelocityNonMotorized_Params params {};
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
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ProcessMotorInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::ProcessMotorInput(float A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ProcessMotorInput");
		
		ABuff_Zipline_DinoBase_C_ProcessMotorInput_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsZiplineStateBlockedOrStopped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_Zipline_DinoBase_C::IsZiplineStateBlockedOrStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsZiplineStateBlockedOrStopped");
		
		ABuff_Zipline_DinoBase_C_IsZiplineStateBlockedOrStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsAnimBlockingZiplineMovement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::IsAnimBlockingZiplineMovement(bool* bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsAnimBlockingZiplineMovement");
		
		ABuff_Zipline_DinoBase_C_IsAnimBlockingZiplineMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLocked != nullptr)
			*bLocked = params.bLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPIsCharacterHardAttached
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Zipline_DinoBase_C::BPIsCharacterHardAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPIsCharacterHardAttached");
		
		ABuff_Zipline_DinoBase_C_BPIsCharacterHardAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPNonDedicatedPlayerPostAnimUpdate
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::BPNonDedicatedPlayerPostAnimUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPNonDedicatedPlayerPostAnimUpdate");
		
		ABuff_Zipline_DinoBase_C_BPNonDedicatedPlayerPostAnimUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCharacterDetach
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::BPCharacterDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCharacterDetach");
		
		ABuff_Zipline_DinoBase_C_BPCharacterDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineControlRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::SetZiplineControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineControlRotation");
		
		ABuff_Zipline_DinoBase_C_SetZiplineControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayTurnAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                override                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::PlayTurnAnimation(class UAnimMontage* override, float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayTurnAnimation");
		
		ABuff_Zipline_DinoBase_C_PlayTurnAnimation_Params params {};
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
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_Zipline_DinoBase_C::BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffAdjustDamage");
		
		ABuff_Zipline_DinoBase_C_BuffAdjustDamage_Params params {};
		params.Damage = Damage;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.TheDamgeType = TheDamgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVCameraAndMeshPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::UpdateFPVCameraAndMeshPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVCameraAndMeshPosition");
		
		ABuff_Zipline_DinoBase_C_UpdateFPVCameraAndMeshPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetFPVViewLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     viewLoc                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::GetFPVViewLocation(struct FVector* viewLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetFPVViewLocation");
		
		ABuff_Zipline_DinoBase_C_GetFPVViewLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (viewLoc != nullptr)
			*viewLoc = params.viewLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateHandleMeshLocationAndRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::UpdateHandleMeshLocationAndRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateHandleMeshLocationAndRotation");
		
		ABuff_Zipline_DinoBase_C_UpdateHandleMeshLocationAndRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVAnims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::UpdateFPVAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVAnims");
		
		ABuff_Zipline_DinoBase_C_UpdateFPVAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.VectorNearlyEqual
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ErrorTolerance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     inVec                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     InVec2                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Zipline_DinoBase_C::VectorNearlyEqual(float ErrorTolerance, const struct FVector& inVec, const struct FVector& InVec2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.VectorNearlyEqual");
		
		ABuff_Zipline_DinoBase_C_VectorNearlyEqual_Params params {};
		params.ErrorTolerance = ErrorTolerance;
		params.inVec = inVec;
		params.InVec2 = InVec2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::ResetCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetCamera");
		
		ABuff_Zipline_DinoBase_C_ResetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::UpdateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateCamera");
		
		ABuff_Zipline_DinoBase_C_UpdateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetFOV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::ResetFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetFOV");
		
		ABuff_Zipline_DinoBase_C_ResetFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFOV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::UpdateFOV(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFOV");
		
		ABuff_Zipline_DinoBase_C_UpdateFOV_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetMeshPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::ResetMeshPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetMeshPosition");
		
		ABuff_Zipline_DinoBase_C_ResetMeshPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.JumpImpulse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::JumpImpulse(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.JumpImpulse");
		
		ABuff_Zipline_DinoBase_C_JumpImpulse_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InterpolateCharacterMeshToLine
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::InterpolateCharacterMeshToLine(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InterpolateCharacterMeshToLine");
		
		ABuff_Zipline_DinoBase_C_InterpolateCharacterMeshToLine_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetZiplineStartAndEndPoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               NoOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Start                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::GetZiplineStartAndEndPoint(bool NoOffset, struct FVector* Start, struct FVector* End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetZiplineStartAndEndPoint");
		
		ABuff_Zipline_DinoBase_C_GetZiplineStartAndEndPoint_Params params {};
		params.NoOffset = NoOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Start != nullptr)
			*Start = params.Start;
		if (End != nullptr)
			*End = params.End;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineMaxVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Accleration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              maxVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::CalculateZiplineMaxVelocity(float Accleration, float Length, float* maxVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineMaxVelocity");
		
		ABuff_Zipline_DinoBase_C_CalculateZiplineMaxVelocity_Params params {};
		params.Accleration = Accleration;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (maxVelocity != nullptr)
			*maxVelocity = params.maxVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineAcceleration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     StartPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndPoint                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Acceleration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::CalculateZiplineAcceleration(const struct FVector& StartPoint, const struct FVector& EndPoint, float* Acceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineAcceleration");
		
		ABuff_Zipline_DinoBase_C_CalculateZiplineAcceleration_Params params {};
		params.StartPoint = StartPoint;
		params.EndPoint = EndPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Acceleration != nullptr)
			*Acceleration = params.Acceleration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Play Detach Animation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::PlayDetachAnimation(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Play Detach Animation");
		
		ABuff_Zipline_DinoBase_C_PlayDetachAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::PlayAttachAnimation(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachAnimation");
		
		ABuff_Zipline_DinoBase_C_PlayAttachAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentDistanceOnLinePercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ABuff_Zipline_DinoBase_C::GetCurrentDistanceOnLinePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentDistanceOnLinePercent");
		
		ABuff_Zipline_DinoBase_C_GetCurrentDistanceOnLinePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetStartEndOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ReturnPercent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_Zipline_DinoBase_C::GetStartEndOffset(bool ReturnPercent, class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetStartEndOffset");
		
		ABuff_Zipline_DinoBase_C_GetStartEndOffset_Params params {};
		params.ReturnPercent = ReturnPercent;
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentSpeedPercentageFromMax
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ABuff_Zipline_DinoBase_C::GetCurrentSpeedPercentageFromMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentSpeedPercentageFromMax");
		
		ABuff_Zipline_DinoBase_C_GetCurrentSpeedPercentageFromMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ZiplineMotorState                                NewMotorState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetMotorState(E_ZiplineMotorState NewMotorState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState");
		
		ABuff_Zipline_DinoBase_C_SetMotorState_Params params {};
		params.NewMotorState = NewMotorState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetClosestPointOnLine
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LineStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LineEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::GetClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Location, struct FVector* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetClosestPointOnLine");
		
		ABuff_Zipline_DinoBase_C_GetClosestPointOnLine_Params params {};
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Zipline_DinoBase_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCheckPreventInput");
		
		ABuff_Zipline_DinoBase_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateMeshAttachment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::UpdateMeshAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateMeshAttachment");
		
		ABuff_Zipline_DinoBase_C_UpdateMeshAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::UpdateFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFX");
		
		ABuff_Zipline_DinoBase_C_UpdateFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickClient");
		
		ABuff_Zipline_DinoBase_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetAttachOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     AttachOffset                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::GetAttachOffset(struct FVector* AttachOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetAttachOffset");
		
		ABuff_Zipline_DinoBase_C_GetAttachOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachOffset != nullptr)
			*AttachOffset = params.AttachOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPSetupForInstigator");
		
		ABuff_Zipline_DinoBase_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPDeactivated");
		
		ABuff_Zipline_DinoBase_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_Zipline_DinoBase_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPOverrideCharacterNewFallVelocity");
		
		ABuff_Zipline_DinoBase_C_BPOverrideCharacterNewFallVelocity_Params params {};
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
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AttachToZipline
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::AttachToZipline(const struct FVector& StartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AttachToZipline");
		
		ABuff_Zipline_DinoBase_C_AttachToZipline_Params params {};
		params.StartLocation = StartLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.End Move Along Zipline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AddImpulse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::EndMoveAlongZipline(bool AddImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.End Move Along Zipline");
		
		ABuff_Zipline_DinoBase_C_EndMoveAlongZipline_Params params {};
		params.AddImpulse = AddImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.TickMoveAlongZipline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::TickMoveAlongZipline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.TickMoveAlongZipline");
		
		ABuff_Zipline_DinoBase_C_TickMoveAlongZipline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StartMoveAlongZipline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AZipline_Anchor_C*                           UpperZiplineAnchor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AZipline_Anchor_C*                           LowerZiplineAnchor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::StartMoveAlongZipline(const struct FVector& StartLocation, class AZipline_Anchor_C* UpperZiplineAnchor, class AZipline_Anchor_C* LowerZiplineAnchor, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StartMoveAlongZipline");
		
		ABuff_Zipline_DinoBase_C_StartMoveAlongZipline_Params params {};
		params.StartLocation = StartLocation;
		params.UpperZiplineAnchor = UpperZiplineAnchor;
		params.LowerZiplineAnchor = LowerZiplineAnchor;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UserConstructionScript");
		
		ABuff_Zipline_DinoBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_114
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::InpActEvt_Run_K2Node_InputActionEvent_114()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_114");
		
		ABuff_Zipline_DinoBase_C_InpActEvt_Run_K2Node_InputActionEvent_114_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_113
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::InpActEvt_Run_K2Node_InputActionEvent_113()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_113");
		
		ABuff_Zipline_DinoBase_C_InpActEvt_Run_K2Node_InputActionEvent_113_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Jump_K2Node_InputActionEvent_112
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::InpActEvt_Jump_K2Node_InputActionEvent_112()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Jump_K2Node_InputActionEvent_112");
		
		ABuff_Zipline_DinoBase_C_InpActEvt_Jump_K2Node_InputActionEvent_112_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Crouch_K2Node_InputActionEvent_111
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::InpActEvt_Crouch_K2Node_InputActionEvent_111()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Crouch_K2Node_InputActionEvent_111");
		
		ABuff_Zipline_DinoBase_C_InpActEvt_Crouch_K2Node_InputActionEvent_111_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_110
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_110()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_110");
		
		ABuff_Zipline_DinoBase_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_110_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_50
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_50()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_50");
		
		ABuff_Zipline_DinoBase_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_50_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_49
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_49()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_49");
		
		ABuff_Zipline_DinoBase_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_49_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_109
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_109()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_109");
		
		ABuff_Zipline_DinoBase_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_109_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.EndMoveAlongZipline_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AddImpulse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::EndMoveAlongZipline_RunOnServer(bool AddImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.EndMoveAlongZipline_RunOnServer");
		
		ABuff_Zipline_DinoBase_C_EndMoveAlongZipline_RunOnServer_Params params {};
		params.AddImpulse = AddImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87");
		
		ABuff_Zipline_DinoBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ZiplineMotorState                                NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetMotorState_RunOnServer(E_ZiplineMotorState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState_RunOnServer");
		
		ABuff_Zipline_DinoBase_C_SetMotorState_RunOnServer_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BindToHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::BindToHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BindToHit");
		
		ABuff_Zipline_DinoBase_C_BindToHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayCameraShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::PlayCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayCameraShake");
		
		ABuff_Zipline_DinoBase_C_PlayCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachDelayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::PlayAttachDelayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachDelayed");
		
		ABuff_Zipline_DinoBase_C_PlayAttachDelayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StopMoving_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::StopMoving_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StopMoving_Multicast");
		
		ABuff_Zipline_DinoBase_C_StopMoving_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.OnComponentHit_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_Zipline_DinoBase_C::OnComponentHit_Event(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.OnComponentHit_Event");
		
		ABuff_Zipline_DinoBase_C_OnComponentHit_Event_Params params {};
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
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetInitialVelocity
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetInitialVelocity(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetInitialVelocity");
		
		ABuff_Zipline_DinoBase_C_SetInitialVelocity_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SecondJumpImpulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::SecondJumpImpulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SecondJumpImpulse");
		
		ABuff_Zipline_DinoBase_C_SecondJumpImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        attachedDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::FlipOnZipline_Multicast(bool Fast, class APrimalDinoCharacter* attachedDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_Multicast");
		
		ABuff_Zipline_DinoBase_C_FlipOnZipline_Multicast_Params params {};
		params.Fast = Fast;
		params.attachedDino = attachedDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::FlipOnZipline_RunOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_RunOnServer");
		
		ABuff_Zipline_DinoBase_C_FlipOnZipline_RunOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetIsTurning
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetIsTurning(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetIsTurning");
		
		ABuff_Zipline_DinoBase_C_SetIsTurning_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.DoZiplineTurn_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::DoZiplineTurn_RunOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.DoZiplineTurn_RunOnServer");
		
		ABuff_Zipline_DinoBase_C_DoZiplineTurn_RunOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RunPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::RunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RunPressed");
		
		ABuff_Zipline_DinoBase_C_RunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetZiplineRunningSpeedAndAcceleration_Multicast(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_Multicast");
		
		ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_Multicast_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::SetZiplineRunningSpeedAndAcceleration_RunOnServer(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer");
		
		ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_RunOnServer_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetRunning_RunOnClient
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::SetRunning_RunOnClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetRunning_RunOnClient");
		
		ABuff_Zipline_DinoBase_C_SetRunning_RunOnClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetSliding_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::SetSliding_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetSliding_Multicast");
		
		ABuff_Zipline_DinoBase_C_SetSliding_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AI_SetZiplineRunning_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::AI_SetZiplineRunning_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AI_SetZiplineRunning_Multicast");
		
		ABuff_Zipline_DinoBase_C_AI_SetZiplineRunning_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetFinishedDetach
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_DinoBase_C::SetFinishedDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetFinishedDetach");
		
		ABuff_Zipline_DinoBase_C_SetFinishedDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ExecuteUbergraph_Buff_Zipline_DinoBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_DinoBase_C::ExecuteUbergraph_Buff_Zipline_DinoBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ExecuteUbergraph_Buff_Zipline_DinoBase");
		
		ABuff_Zipline_DinoBase_C_ExecuteUbergraph_Buff_Zipline_DinoBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Zipline_DinoBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Zipline_DinoBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C");
		return ptr;
	}

}


