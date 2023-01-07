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
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Get Zipline Buff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_Zipline_DinoBase_C*                    ZiplineBuff                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::GetZiplineBuff(class ABuff_Zipline_DinoBase_C** ZiplineBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Get Zipline Buff");
		
		ADinoCharacter_BP_Zipline_C_GetZiplineBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZiplineBuff != nullptr)
			*ZiplineBuff = params.ZiplineBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.OnOrderedMoveToOrFollow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               moveTo                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::OnOrderedMoveToOrFollow(bool moveTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.OnOrderedMoveToOrFollow");
		
		ADinoCharacter_BP_Zipline_C_OnOrderedMoveToOrFollow_Params params {};
		params.moveTo = moveTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnTamedProcessOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnTamedProcessOrder");
		
		ADinoCharacter_BP_Zipline_C_BPOnTamedProcessOrder_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintOverrideWantsToRun
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInputWantsToRun                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinoCharacter_BP_Zipline_C::BlueprintOverrideWantsToRun(bool bInputWantsToRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintOverrideWantsToRun");
		
		ADinoCharacter_BP_Zipline_C_BlueprintOverrideWantsToRun_Params params {};
		params.bInputWantsToRun = bInputWantsToRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOverrideMoveToOrder
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MoveToLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           OrderingPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinoCharacter_BP_Zipline_C::BPOverrideMoveToOrder(const struct FVector& MoveToLocation, class AShooterCharacter* OrderingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOverrideMoveToOrder");
		
		ADinoCharacter_BP_Zipline_C_BPOverrideMoveToOrder_Params params {};
		params.MoveToLocation = MoveToLocation;
		params.OrderingPlayer = OrderingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateNonDediActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::UpdateNonDediActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateNonDediActive");
		
		ADinoCharacter_BP_Zipline_C_UpdateNonDediActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Update Non Dedi Limits
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::UpdateNonDediLimits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Update Non Dedi Limits");
		
		ADinoCharacter_BP_Zipline_C_UpdateNonDediLimits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::UpdateCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateCrosshair");
		
		ADinoCharacter_BP_Zipline_C_UpdateCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifySetRider");
		
		ADinoCharacter_BP_Zipline_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerServer");
		
		ADinoCharacter_BP_Zipline_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SoftSetTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::SoftSetTransform(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SoftSetTransform");
		
		ADinoCharacter_BP_Zipline_C_SoftSetTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateTPViewOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::UpdateTPViewOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateTPViewOffset");
		
		ADinoCharacter_BP_Zipline_C_UpdateTPViewOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetMeshRelativeTransformPure
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  Result                                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::GetTargetMeshRelativeTransformPure(struct FTransform* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetMeshRelativeTransformPure");
		
		ADinoCharacter_BP_Zipline_C_GetTargetMeshRelativeTransformPure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.InterpMeshRelativeTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::InterpMeshRelativeTransform(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.InterpMeshRelativeTransform");
		
		ADinoCharacter_BP_Zipline_C_InterpMeshRelativeTransform_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetedZipline
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           TargetedZipline                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::GetTargetedZipline(class AZipline_Anchor_C** TargetedZipline, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetedZipline");
		
		ADinoCharacter_BP_Zipline_C_GetTargetedZipline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetedZipline != nullptr)
			*TargetedZipline = params.TargetedZipline;
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineNonDediLogic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::ZiplineNonDediLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineNonDediLogic");
		
		ADinoCharacter_BP_Zipline_C_ZiplineNonDediLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetNonDediTimerTickEveryFrame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TickEveryFrame                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::SetNonDediTimerTickEveryFrame(bool TickEveryFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetNonDediTimerTickEveryFrame");
		
		ADinoCharacter_BP_Zipline_C_SetNonDediTimerTickEveryFrame_Params params {};
		params.TickEveryFrame = TickEveryFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestLocationToPointFromArray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             LocationsToTest                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ClosestLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::GetClosestLocationToPointFromArray(TArray<struct FVector>* LocationsToTest, const struct FVector& Point, struct FVector* ClosestLocation, int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestLocationToPointFromArray");
		
		ADinoCharacter_BP_Zipline_C_GetClosestLocationToPointFromArray_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationsToTest != nullptr)
			*LocationsToTest = params.LocationsToTest;
		if (ClosestLocation != nullptr)
			*ClosestLocation = params.ClosestLocation;
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetServerTimerTickEveryFrame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TickEveryFrame                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::SetServerTimerTickEveryFrame(bool TickEveryFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetServerTimerTickEveryFrame");
		
		ADinoCharacter_BP_Zipline_C_SetServerTimerTickEveryFrame_Params params {};
		params.TickEveryFrame = TickEveryFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.CreateZiplineBuffAndStartRiding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           Anchor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::CreateZiplineBuffAndStartRiding(class AZipline_Anchor_C* Anchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.CreateZiplineBuffAndStartRiding");
		
		ADinoCharacter_BP_Zipline_C_CreateZiplineBuffAndStartRiding_Params params {};
		params.Anchor = Anchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.IsTargetZiplineBlocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AZipline_Anchor_C*                           Anchor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm)
	 * 		bool                                               HitReturn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::IsTargetZiplineBlocked(const struct FVector& Location, class AZipline_Anchor_C* Anchor, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.IsTargetZiplineBlocked");
		
		ADinoCharacter_BP_Zipline_C_IsTargetZiplineBlocked_Params params {};
		params.Location = Location;
		params.Anchor = Anchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
		if (HitReturn != nullptr)
			*HitReturn = params.HitReturn;
		if (StartLocation != nullptr)
			*StartLocation = params.StartLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestPointOnLine
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     closestPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::GetClosestPointOnLine(const struct FVector& A, const struct FVector& B, const struct FVector& Point, struct FVector* closestPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestPointOnLine");
		
		ADinoCharacter_BP_Zipline_C_GetClosestPointOnLine_Params params {};
		params.A = A;
		params.B = B;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (closestPoint != nullptr)
			*closestPoint = params.closestPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachingToZipline
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           overrideAnchor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OverrideStartLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              overrideFindLocationDistance                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     overrideFindLocationDirection                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::TryAttachingToZipline(class AZipline_Anchor_C* overrideAnchor, const struct FVector& OverrideStartLocation, float overrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachingToZipline");
		
		ADinoCharacter_BP_Zipline_C_TryAttachingToZipline_Params params {};
		params.overrideAnchor = overrideAnchor;
		params.OverrideStartLocation = OverrideStartLocation;
		params.overrideFindLocationDistance = overrideFindLocationDistance;
		params.overrideFindLocationDirection = overrideFindLocationDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinoCharacter_BP_Zipline_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnStartJump");
		
		ADinoCharacter_BP_Zipline_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifyClearRider");
		
		ADinoCharacter_BP_Zipline_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerNonDedicated");
		
		ADinoCharacter_BP_Zipline_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Is Dino Submerged
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinoCharacter_BP_Zipline_C::IsDinoSubmerged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Is Dino Submerged");
		
		ADinoCharacter_BP_Zipline_C_IsDinoSubmerged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UserConstructionScript");
		
		ADinoCharacter_BP_Zipline_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintAnimNotifyCustomEvent");
		
		ADinoCharacter_BP_Zipline_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachToZipline_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::TryAttachToZipline_RunOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachToZipline_RunOnServer");
		
		ADinoCharacter_BP_Zipline_C_TryAttachToZipline_RunOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.StartZiplineJumping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::StartZiplineJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.StartZiplineJumping");
		
		ADinoCharacter_BP_Zipline_C_StartZiplineJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           ZiplineAnchor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_RunOnServer");
		
		ADinoCharacter_BP_Zipline_C_AttachToZipline_RunOnServer_Params params {};
		params.ZiplineAnchor = ZiplineAnchor;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AZipline_Anchor_C*                           ZiplineAnchor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::AttachToZipline_Multicast(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_Multicast");
		
		ADinoCharacter_BP_Zipline_C_AttachToZipline_Multicast_Params params {};
		params.ZiplineAnchor = ZiplineAnchor;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_RunOnServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::ResetZiplineJumping_RunOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_RunOnServer");
		
		ADinoCharacter_BP_Zipline_C_ResetZiplineJumping_RunOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::ResetZiplineJumping_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_Multicast");
		
		ADinoCharacter_BP_Zipline_C_ResetZiplineJumping_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineTargetingTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::ZiplineTargetingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineTargetingTimer");
		
		ADinoCharacter_BP_Zipline_C_ZiplineTargetingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetInitialVelocity_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::SetInitialVelocity_Multicast(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetInitialVelocity_Multicast");
		
		ADinoCharacter_BP_Zipline_C_SetInitialVelocity_Multicast_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Multi_SoftSetTransform
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (Parm, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::Multi_SoftSetTransform(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Multi_SoftSetTransform");
		
		ADinoCharacter_BP_Zipline_C_Multi_SoftSetTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DoZiplineTurn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::DoZiplineTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DoZiplineTurn");
		
		ADinoCharacter_BP_Zipline_C_DoZiplineTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.PreZiplineTurn_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoCharacter_BP_Zipline_C::PreZiplineTurn_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.PreZiplineTurn_Multicast");
		
		ADinoCharacter_BP_Zipline_C_PreZiplineTurn_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugSphere_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::DebugSphere_Multicast(const struct FVector& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugSphere_Multicast");
		
		ADinoCharacter_BP_Zipline_C_DebugSphere_Multicast_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugArrow_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewParam1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewParam3                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::DebugArrow_Multicast(const struct FVector& NewParam, const struct FVector& NewParam1, float NewParam3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugArrow_Multicast");
		
		ADinoCharacter_BP_Zipline_C_DebugArrow_Multicast_Params params {};
		params.NewParam = NewParam;
		params.NewParam1 = NewParam1;
		params.NewParam3 = NewParam3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ExecuteUbergraph_DinoCharacter_BP_Zipline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoCharacter_BP_Zipline_C::ExecuteUbergraph_DinoCharacter_BP_Zipline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ExecuteUbergraph_DinoCharacter_BP_Zipline");
		
		ADinoCharacter_BP_Zipline_C_ExecuteUbergraph_DinoCharacter_BP_Zipline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADinoCharacter_BP_Zipline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADinoCharacter_BP_Zipline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C");
		return ptr;
	}

}


