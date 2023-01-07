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
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AZipline_Anchor_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.BPAdjustDamage");
		
		AZipline_Anchor_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.Get Closest Point on Line Non Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LineStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LineEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     closestPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::GetClosestPointonLineNonPure(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, struct FVector* closestPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.Get Closest Point on Line Non Pure");
		
		AZipline_Anchor_C_GetClosestPointonLineNonPure_Params params {};
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
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
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info NonPure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DownDirection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AZipline_Anchor_C*                           UpperAnchor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AZipline_Anchor_C*                           LowerAnchor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     UpperCableAttachLoc                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LowerCableAttachLoc                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::GetZiplineInfoNonPure(struct FVector* DownDirection, class AZipline_Anchor_C** UpperAnchor, class AZipline_Anchor_C** LowerAnchor, struct FVector* UpperCableAttachLoc, struct FVector* LowerCableAttachLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info NonPure");
		
		AZipline_Anchor_C_GetZiplineInfoNonPure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DownDirection != nullptr)
			*DownDirection = params.DownDirection;
		if (UpperAnchor != nullptr)
			*UpperAnchor = params.UpperAnchor;
		if (LowerAnchor != nullptr)
			*LowerAnchor = params.LowerAnchor;
		if (UpperCableAttachLoc != nullptr)
			*UpperCableAttachLoc = params.UpperCableAttachLoc;
		if (LowerCableAttachLoc != nullptr)
			*LowerCableAttachLoc = params.LowerCableAttachLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Buff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      Buff                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::GetZiplineBuff(class AController* Controller, class UClass** Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Buff");
		
		AZipline_Anchor_C_GetZiplineBuff_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buff != nullptr)
			*Buff = params.Buff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchorClient
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AZipline_Anchor_C::InitLinkedAnchorClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchorClient");
		
		AZipline_Anchor_C_InitLinkedAnchorClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AZipline_Anchor_C::InitLinkedAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchor");
		
		AZipline_Anchor_C_InitLinkedAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.CreateCable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AZipline_Anchor_C::CreateCable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.CreateCable");
		
		AZipline_Anchor_C_CreateCable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.AllowManualMultiUseActivation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AZipline_Anchor_C::AllowManualMultiUseActivation(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.AllowManualMultiUseActivation");
		
		AZipline_Anchor_C_AllowManualMultiUseActivation_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.IsUpperAnchorPoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AZipline_Anchor_C::IsUpperAnchorPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.IsUpperAnchorPoint");
		
		AZipline_Anchor_C_IsUpperAnchorPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.HasLineOfSight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PrimalCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasLineOfSight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::HasLineOfSight(class APrimalCharacter* PrimalCharacter, const struct FVector& StartPoint, bool* HasLineOfSight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.HasLineOfSight");
		
		AZipline_Anchor_C_HasLineOfSight_Params params {};
		params.PrimalCharacter = PrimalCharacter;
		params.StartPoint = StartPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasLineOfSight != nullptr)
			*HasLineOfSight = params.HasLineOfSight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.CheckForHarness
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::CheckForHarness(class APlayerController* Controller, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.CheckForHarness");
		
		AZipline_Anchor_C_CheckForHarness_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.SpawnBreakEmitter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AZipline_Anchor_C::SpawnBreakEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.SpawnBreakEmitter");
		
		AZipline_Anchor_C_SpawnBreakEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.GetBuffInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      ZiplineBuff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AttachOffset                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FWeaponAnim                                 AttachAnims                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             HandleMeshComp                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Motorized                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StartEndOffset                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HideWeaponEnabled                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxActivationDistance                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::GetBuffInfo(class UClass* ZiplineBuff, float* AttachOffset, struct FWeaponAnim* AttachAnims, class USceneComponent** HandleMeshComp, bool* Motorized, float* StartEndOffset, bool* HideWeaponEnabled, float* MaxActivationDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.GetBuffInfo");
		
		AZipline_Anchor_C_GetBuffInfo_Params params {};
		params.ZiplineBuff = ZiplineBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachOffset != nullptr)
			*AttachOffset = params.AttachOffset;
		if (AttachAnims != nullptr)
			*AttachAnims = params.AttachAnims;
		if (HandleMeshComp != nullptr)
			*HandleMeshComp = params.HandleMeshComp;
		if (Motorized != nullptr)
			*Motorized = params.Motorized;
		if (StartEndOffset != nullptr)
			*StartEndOffset = params.StartEndOffset;
		if (HideWeaponEnabled != nullptr)
			*HideWeaponEnabled = params.HideWeaponEnabled;
		if (MaxActivationDistance != nullptr)
			*MaxActivationDistance = params.MaxActivationDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     DownDirection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AZipline_Anchor_C*                           UpperAnchor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AZipline_Anchor_C*                           LowerAnchor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     UpperCableAttachLoc                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LowerCableAttachLoc                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::GetZiplineInfo(struct FVector* DownDirection, class AZipline_Anchor_C** UpperAnchor, class AZipline_Anchor_C** LowerAnchor, struct FVector* UpperCableAttachLoc, struct FVector* LowerCableAttachLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info");
		
		AZipline_Anchor_C_GetZiplineInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DownDirection != nullptr)
			*DownDirection = params.DownDirection;
		if (UpperAnchor != nullptr)
			*UpperAnchor = params.UpperAnchor;
		if (LowerAnchor != nullptr)
			*LowerAnchor = params.LowerAnchor;
		if (UpperCableAttachLoc != nullptr)
			*UpperCableAttachLoc = params.UpperCableAttachLoc;
		if (LowerCableAttachLoc != nullptr)
			*LowerCableAttachLoc = params.LowerCableAttachLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.IsZiplineBlocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            primalChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StartEndOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AttachOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OverrideStartLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              overrideFindLocationDistance                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     overrideFindLocationDirection                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DontUseLineOfSightCheck                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm)
	 * 		bool                                               HitReturn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::IsZiplineBlocked(class APrimalCharacter* primalChar, float StartEndOffset, float AttachOffset, const struct FVector& OverrideStartLocation, float overrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool DontUseLineOfSightCheck, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.IsZiplineBlocked");
		
		AZipline_Anchor_C_IsZiplineBlocked_Params params {};
		params.primalChar = primalChar;
		params.StartEndOffset = StartEndOffset;
		params.AttachOffset = AttachOffset;
		params.OverrideStartLocation = OverrideStartLocation;
		params.overrideFindLocationDistance = overrideFindLocationDistance;
		params.overrideFindLocationDirection = overrideFindLocationDirection;
		params.DontUseLineOfSightCheck = DontUseLineOfSightCheck;
		
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
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AZipline_Anchor_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.ReceiveDestroyed");
		
		AZipline_Anchor_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.GetClosestPointOnLine
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     LineStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LineEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     closestPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::GetClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, struct FVector* closestPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.GetClosestPointOnLine");
		
		AZipline_Anchor_C_GetClosestPointOnLine_Params params {};
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
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
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.RideZipline
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ZiplineBuff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::RideZipline(class APlayerController* PC, class UClass* ZiplineBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.RideZipline");
		
		AZipline_Anchor_C_RideZipline_Params params {};
		params.PC = PC;
		params.ZiplineBuff = ZiplineBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AZipline_Anchor_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.BPTryMultiUse");
		
		AZipline_Anchor_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AZipline_Anchor_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.BPGetMultiUseEntries");
		
		AZipline_Anchor_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AZipline_Anchor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.UserConstructionScript");
		
		AZipline_Anchor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AZipline_Anchor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.ReceiveBeginPlay");
		
		AZipline_Anchor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Zipline_Anchor.Zipline_Anchor_C.ExecuteUbergraph_Zipline_Anchor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AZipline_Anchor_C::ExecuteUbergraph_Zipline_Anchor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.ExecuteUbergraph_Zipline_Anchor");
		
		AZipline_Anchor_C_ExecuteUbergraph_Zipline_Anchor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AZipline_Anchor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AZipline_Anchor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_Anchor.Zipline_Anchor_C");
		return ptr;
	}

}


