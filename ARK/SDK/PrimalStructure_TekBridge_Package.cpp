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
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Assign Platform Materials
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::AssignPlatformMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Assign Platform Materials");
		
		APrimalStructure_TekBridge_C_AssignPlatformMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPRefreshedStructureColors
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::BPRefreshedStructureColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPRefreshedStructureColors");
		
		APrimalStructure_TekBridge_C_BPRefreshedStructureColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.SetupSnaps
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::SetupSnaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.SetupSnaps");
		
		APrimalStructure_TekBridge_C_SetupSnaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::BPPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlayDying");
		
		APrimalStructure_TekBridge_C_BPPlayDying_Params params {};
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
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideTargetLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     attackPos                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector APrimalStructure_TekBridge_C::BPOverrideTargetLocation(struct FVector* attackPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideTargetLocation");
		
		APrimalStructure_TekBridge_C_BPOverrideTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (attackPos != nullptr)
			*attackPos = params.attackPos;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.CalculatePlacementRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlacementData                              PlacementData                                              (Parm, OutParm, ReferenceParm)
	 */
	struct FRotator APrimalStructure_TekBridge_C::CalculatePlacementRotation(class AController* PC, struct FPlacementData* PlacementData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.CalculatePlacementRotation");
		
		APrimalStructure_TekBridge_C_CalculatePlacementRotation_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlacementData != nullptr)
			*PlacementData = params.PlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverridePlacementRotation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ViewPos                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ViewRot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator APrimalStructure_TekBridge_C::BPOverridePlacementRotation(const struct FVector& ViewPos, const struct FRotator& ViewRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverridePlacementRotation");
		
		APrimalStructure_TekBridge_C_BPOverridePlacementRotation_Params params {};
		params.ViewPos = ViewPos;
		params.ViewRot = ViewRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPIsAllowedToBuildEx
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentAllowedReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFinalPlacement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bChoosingRotation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t APrimalStructure_TekBridge_C::BPIsAllowedToBuildEx(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason, class APlayerController* PC, bool bFinalPlacement, bool bChoosingRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPIsAllowedToBuildEx");
		
		APrimalStructure_TekBridge_C_BPIsAllowedToBuildEx_Params params {};
		params.CurrentAllowedReason = CurrentAllowedReason;
		params.PC = PC;
		params.bFinalPlacement = bFinalPlacement;
		params.bChoosingRotation = bChoosingRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlacementData != nullptr)
			*OutPlacementData = params.OutPlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestForEnemyStructures
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           Placer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TooClose                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::TestForEnemyStructures(const struct FVector& Location, class APlayerController* Placer, bool* TooClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestForEnemyStructures");
		
		APrimalStructure_TekBridge_C_TestForEnemyStructures_Params params {};
		params.Location = Location;
		params.Placer = Placer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TooClose != nullptr)
			*TooClose = params.TooClose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPreventUsingAsFloorForStructure
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              theOutPlacementData                                        (Parm, OutParm, ReferenceParm)
	 * 		class APrimalStructure*                            StructureToPlaceOnMe                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APrimalStructure_TekBridge_C::BPPreventUsingAsFloorForStructure(struct FPlacementData* theOutPlacementData, class APrimalStructure* StructureToPlaceOnMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPreventUsingAsFloorForStructure");
		
		APrimalStructure_TekBridge_C_BPPreventUsingAsFloorForStructure_Params params {};
		params.StructureToPlaceOnMe = StructureToPlaceOnMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (theOutPlacementData != nullptr)
			*theOutPlacementData = params.theOutPlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPConsumeUsePinCode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      FromKeypadActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            appledPinCode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsActivating                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APrimalStructure_TekBridge_C::BPConsumeUsePinCode(class AActor* FromKeypadActor, class APlayerController* ForPC, int32_t appledPinCode, bool bIsActivating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPConsumeUsePinCode");
		
		APrimalStructure_TekBridge_C_BPConsumeUsePinCode_Params params {};
		params.FromKeypadActor = FromKeypadActor;
		params.ForPC = ForPC;
		params.appledPinCode = appledPinCode;
		params.bIsActivating = bIsActivating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPCanBeActivated
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool APrimalStructure_TekBridge_C::BPCanBeActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPCanBeActivated");
		
		APrimalStructure_TekBridge_C_BPCanBeActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::BPContainerDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerDeactivated");
		
		APrimalStructure_TekBridge_C_BPContainerDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::BPContainerActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerActivated");
		
		APrimalStructure_TekBridge_C_BPContainerActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.DeactivationComplete
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::DeactivationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.DeactivationComplete");
		
		APrimalStructure_TekBridge_C_DeactivationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientMaterialUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::ClientMaterialUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientMaterialUpdate");
		
		APrimalStructure_TekBridge_C_ClientMaterialUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientCompleteActivation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::ClientCompleteActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientCompleteActivation");
		
		APrimalStructure_TekBridge_C_ClientCompleteActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ReceiveBeginPlay");
		
		APrimalStructure_TekBridge_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UpdateVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UpdateVisibility");
		
		APrimalStructure_TekBridge_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideUILocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector APrimalStructure_TekBridge_C::BPOverrideUILocation(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideUILocation");
		
		APrimalStructure_TekBridge_C_BPOverrideUILocation_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideSnappedFromTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ParentStructure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ParentSnapFromIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ParentSnapFromName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     UnsnappedPlacementPos                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    UnsnappedPlacementRot                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SnappedPlacementPos                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    SnappedPlacementRot                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SnapToIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SnapToName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            bForceInvalidateSnap                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APrimalStructure_TekBridge_C::BPOverrideSnappedFromTransform(class APrimalStructure* ParentStructure, int32_t ParentSnapFromIndex, const class FName& ParentSnapFromName, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int32_t SnapToIndex, const class FName& SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int32_t* bForceInvalidateSnap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideSnappedFromTransform");
		
		APrimalStructure_TekBridge_C_BPOverrideSnappedFromTransform_Params params {};
		params.ParentStructure = ParentStructure;
		params.ParentSnapFromIndex = ParentSnapFromIndex;
		params.ParentSnapFromName = ParentSnapFromName;
		params.UnsnappedPlacementPos = UnsnappedPlacementPos;
		params.UnsnappedPlacementRot = UnsnappedPlacementRot;
		params.SnappedPlacementPos = SnappedPlacementPos;
		params.SnappedPlacementRot = SnappedPlacementRot;
		params.SnapToIndex = SnapToIndex;
		params.SnapToName = SnapToName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (OutRotation != nullptr)
			*OutRotation = params.OutRotation;
		if (bForceInvalidateSnap != nullptr)
			*bForceInvalidateSnap = params.bForceInvalidateSnap;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushBlockers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BlockingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartPos                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::PushBlockers(class APrimalCharacter* BlockingCharacter, const struct FVector& StartPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushBlockers");
		
		APrimalStructure_TekBridge_C_PushBlockers_Params params {};
		params.BlockingCharacter = BlockingCharacter;
		params.StartPos = StartPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::OnRep_Activating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activating");
		
		APrimalStructure_TekBridge_C_OnRep_Activating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TryActivate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ActivateBridge                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::TryActivate(bool ActivateBridge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TryActivate");
		
		APrimalStructure_TekBridge_C_TryActivate_Params params {};
		params.ActivateBridge = ActivateBridge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Activate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ActivateBridge                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::Activate(bool ActivateBridge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Activate");
		
		APrimalStructure_TekBridge_C_Activate_Params params {};
		params.ActivateBridge = ActivateBridge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> APrimalStructure_TekBridge_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPGetMultiUseEntries");
		
		APrimalStructure_TekBridge_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APrimalStructure_TekBridge_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPTryMultiUse");
		
		APrimalStructure_TekBridge_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.IsBlocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CheckLanding                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::IsBlocked(const struct FVector& Start, const struct FRotator& Rotation, const struct FVector& End, bool CheckLanding, bool* bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.IsBlocked");
		
		APrimalStructure_TekBridge_C_IsBlocked_Params params {};
		params.Start = Start;
		params.Rotation = Rotation;
		params.End = End;
		params.CheckLanding = CheckLanding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLocked != nullptr)
			*bLocked = params.bLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::OnRep_Activated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activated");
		
		APrimalStructure_TekBridge_C_OnRep_Activated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_LandingPosition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::OnRep_LandingPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_LandingPosition");
		
		APrimalStructure_TekBridge_C_OnRep_LandingPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PreviewLanding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::PreviewLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PreviewLanding");
		
		APrimalStructure_TekBridge_C_PreviewLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestExtension
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Extension                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            SnapTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ChoosingRotation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Good                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Placement                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::TestExtension(const struct FVector& Start, const struct FRotator& Rotation, int32_t Extension, class APrimalStructure* SnapTarget, bool ChoosingRotation, bool* Good, struct FVector* Placement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestExtension");
		
		APrimalStructure_TekBridge_C_TestExtension_Params params {};
		params.Start = Start;
		params.Rotation = Rotation;
		params.Extension = Extension;
		params.SnapTarget = SnapTarget;
		params.ChoosingRotation = ChoosingRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Good != nullptr)
			*Good = params.Good;
		if (Placement != nullptr)
			*Placement = params.Placement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlacedStructure");
		
		APrimalStructure_TekBridge_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPBeginPreview
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::BPBeginPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPBeginPreview");
		
		APrimalStructure_TekBridge_C_BPBeginPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExtendBridge
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::ExtendBridge(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExtendBridge");
		
		APrimalStructure_TekBridge_C_ExtendBridge_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UserConstructionScript");
		
		APrimalStructure_TekBridge_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::ActivationTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationTick");
		
		APrimalStructure_TekBridge_C_ActivationTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushImpact
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::PushImpact(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushImpact");
		
		APrimalStructure_TekBridge_C_PushImpact_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::ActivationFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationFailed");
		
		APrimalStructure_TekBridge_C_ActivationFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientIsPlaced
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::ClientIsPlaced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientIsPlaced");
		
		APrimalStructure_TekBridge_C_ClientIsPlaced_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.MaterialUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrimalStructure_TekBridge_C::MaterialUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.MaterialUpdate");
		
		APrimalStructure_TekBridge_C_MaterialUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExecuteUbergraph_PrimalStructure_TekBridge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrimalStructure_TekBridge_C::ExecuteUbergraph_PrimalStructure_TekBridge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExecuteUbergraph_PrimalStructure_TekBridge");
		
		APrimalStructure_TekBridge_C_ExecuteUbergraph_PrimalStructure_TekBridge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrimalStructure_TekBridge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimalStructure_TekBridge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalStructure_TekBridge.PrimalStructure_TekBridge_C");
		return ptr;
	}

}


