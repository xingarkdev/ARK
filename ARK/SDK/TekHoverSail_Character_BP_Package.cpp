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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCameraRotationFinal
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InCurrentFinalRot                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ATekHoverSail_Character_BP_C::BPCameraRotationFinal(class APrimalCharacter* viewingCharacter, struct FRotator* InCurrentFinalRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCameraRotationFinal");
		
		ATekHoverSail_Character_BP_C_BPCameraRotationFinal_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCurrentFinalRot != nullptr)
			*InCurrentFinalRot = params.InCurrentFinalRot;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Clear Trick Hint Text
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClearTrickHintText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Clear Trick Hint Text");
		
		ATekHoverSail_Character_BP_C_ClearTrickHintText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Hint Text
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::AddTrickHintText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Hint Text");
		
		ATekHoverSail_Character_BP_C_AddTrickHintText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnRefreshColorization
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ATekHoverSail_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnRefreshColorization");
		
		ATekHoverSail_Character_BP_C_BPOnRefreshColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Trick Button - direction variant
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClientHoldsTrickButtondirectionvariant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Trick Button - direction variant");
		
		ATekHoverSail_Character_BP_C_ClientHoldsTrickButtondirectionvariant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BPOverrideFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFPVViewLocation");
		
		ATekHoverSail_Character_BP_C_BPOverrideFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSail_Character_BP_C::BPGetFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetFPVViewLocation");
		
		ATekHoverSail_Character_BP_C_BPGetFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ClearTrickActivationText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClearTrickActivationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ClearTrickActivationText");
		
		ATekHoverSail_Character_BP_C_ClearTrickActivationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Activation Text
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::AddTrickActivationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Activation Text");
		
		ATekHoverSail_Character_BP_C_AddTrickActivationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetAccumulatedTricks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ResetAccumulatedTricks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetAccumulatedTricks");
		
		ATekHoverSail_Character_BP_C_ResetAccumulatedTricks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add To Accumulated Trick
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TrickIndexToAdd                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::AddToAccumulatedTrick(int32_t TrickIndexToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add To Accumulated Trick");
		
		ATekHoverSail_Character_BP_C_AddToAccumulatedTrick_Params params {};
		params.TrickIndexToAdd = TrickIndexToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleThrusterSFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::HandleThrusterSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleThrusterSFX");
		
		ATekHoverSail_Character_BP_C_HandleThrusterSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DeactivateGroundFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::DeactivateGroundFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DeactivateGroundFX");
		
		ATekHoverSail_Character_BP_C_DeactivateGroundFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleCrouch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasReleased                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::HandleCrouch(bool bWasReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleCrouch");
		
		ATekHoverSail_Character_BP_C_HandleCrouch_Params params {};
		params.bWasReleased = bWasReleased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetTotalFuelUnits
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetTotalFuelUnits(int32_t* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetTotalFuelUnits");
		
		ATekHoverSail_Character_BP_C_GetTotalFuelUnits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.try refill from inventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::tryrefillfrominventory(class UPrimalInventoryComponent* InputPin, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.try refill from inventory");
		
		ATekHoverSail_Character_BP_C_tryrefillfrominventory_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearPassenger");
		
		ATekHoverSail_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delaymount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Delaymount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delaymount");
		
		ATekHoverSail_Character_BP_C_Delaymount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPHandleUseButtonPress");
		
		ATekHoverSail_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is FPV
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::isFPV(class AShooterCharacter* InputPin, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is FPV");
		
		ATekHoverSail_Character_BP_C_isFPV_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.spawn collision sparks vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     hitnorm                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     hitlocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              impactstrength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::spawncollisionsparksvfx(const struct FVector& hitnorm, const struct FVector& hitlocation, float impactstrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.spawn collision sparks vfx");
		
		ATekHoverSail_Character_BP_C_spawncollisionsparksvfx_Params params {};
		params.hitnorm = hitnorm;
		params.hitlocation = hitlocation;
		params.impactstrength = impactstrength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Restricted Sparks Spawn Rate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::RestrictedSparksSpawnRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Restricted Sparks Spawn Rate");
		
		ATekHoverSail_Character_BP_C_RestrictedSparksSpawnRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Sail Open Socket Location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::AttachPlayerToSailOpenSocketLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Sail Open Socket Location");
		
		ATekHoverSail_Character_BP_C_AttachPlayerToSailOpenSocketLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Sail Open Socket Location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::LerpToSailOpenSocketLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Sail Open Socket Location");
		
		ATekHoverSail_Character_BP_C_LerpToSailOpenSocketLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Weapon Out Location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::LerpToWeaponOutLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Weapon Out Location");
		
		ATekHoverSail_Character_BP_C_LerpToWeaponOutLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Weapon Out Location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::AttachPlayerToWeaponOutLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Weapon Out Location");
		
		ATekHoverSail_Character_BP_C_AttachPlayerToWeaponOutLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyAddPassenger");
		
		ATekHoverSail_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Halt Hoversail
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClientHaltHoversail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Halt Hoversail");
		
		ATekHoverSail_Character_BP_C_ClientHaltHoversail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy if item reference is gone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::destroyifitemreferenceisgone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy if item reference is gone");
		
		ATekHoverSail_Character_BP_C_destroyifitemreferenceisgone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Duration After Drifting To Have Increased Speed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::DurationAfterDriftingToHaveIncreasedSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Duration After Drifting To Have Increased Speed");
		
		ATekHoverSail_Character_BP_C_DurationAfterDriftingToHaveIncreasedSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy itself
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::destroyitself()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy itself");
		
		ATekHoverSail_Character_BP_C_destroyitself_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTriggerStasisEvent");
		
		ATekHoverSail_Character_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Trick Score Display Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::TrickScoreDisplayTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Trick Score Display Timer");
		
		ATekHoverSail_Character_BP_C_TrickScoreDisplayTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BoostBonusDisplayTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::BoostBonusDisplayTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BoostBonusDisplayTimer");
		
		ATekHoverSail_Character_BP_C_BoostBonusDisplayTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Shortly After Clearing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ShortlyAfterClearing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Shortly After Clearing");
		
		ATekHoverSail_Character_BP_C_ShortlyAfterClearing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Time After Drift To Retain Velocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::TimeAfterDriftToRetainVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Time After Drift To Retain Velocity");
		
		ATekHoverSail_Character_BP_C_TimeAfterDriftToRetainVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is player holding drift
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATekHoverSail_Character_BP_C::isplayerholdingdrift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is player holding drift");
		
		ATekHoverSail_Character_BP_C_isplayerholdingdrift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses Held Drift Button
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClientPressesHeldDriftButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses Held Drift Button");
		
		ATekHoverSail_Character_BP_C_ClientPressesHeldDriftButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases Held Drift Button
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClientReleasesHeldDriftButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases Held Drift Button");
		
		ATekHoverSail_Character_BP_C_ClientReleasesHeldDriftButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.set up everything for detecting tricks in the air
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::setupeverythingfordetectingtricksintheair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.set up everything for detecting tricks in the air");
		
		ATekHoverSail_Character_BP_C_setupeverythingfordetectingtricksintheair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed 360 in air
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Completed360inair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed 360 in air");
		
		ATekHoverSail_Character_BP_C_Completed360inair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed Held Trick for Bonus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::CompletedHeldTrickforBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed Held Trick for Bonus");
		
		ATekHoverSail_Character_BP_C_CompletedHeldTrickforBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed One Shot Trick For Bonus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::CompletedOneShotTrickForBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed One Shot Trick For Bonus");
		
		ATekHoverSail_Character_BP_C_CompletedOneShotTrickForBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Shortly After Drift Boost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::IsShortlyAfterDriftBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Shortly After Drift Boost");
		
		ATekHoverSail_Character_BP_C_IsShortlyAfterDriftBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Can Request Drift Boost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::CanRequestDriftBoost(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Can Request Drift Boost");
		
		ATekHoverSail_Character_BP_C_CanRequestDriftBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request drift boost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Requestdriftboost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request drift boost");
		
		ATekHoverSail_Character_BP_C_Requestdriftboost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request Boost After Drift
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::RequestBoostAfterDrift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request Boost After Drift");
		
		ATekHoverSail_Character_BP_C_RequestBoostAfterDrift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Allowed Time After Stopping Drift To Be Able To Boost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::AllowedTimeAfterStoppingDriftToBeAbleToBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Allowed Time After Stopping Drift To Be Able To Boost");
		
		ATekHoverSail_Character_BP_C_AllowedTimeAfterStoppingDriftToBeAbleToBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases trick button
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::clientreleasestrickbutton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases trick button");
		
		ATekHoverSail_Character_BP_C_clientreleasestrickbutton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client holds trick button
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::clientholdstrickbutton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client holds trick button");
		
		ATekHoverSail_Character_BP_C_clientholdstrickbutton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases camera button
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClientReleasescamerabutton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases camera button");
		
		ATekHoverSail_Character_BP_C_ClientReleasescamerabutton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds camera button
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClientHoldscamerabutton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds camera button");
		
		ATekHoverSail_Character_BP_C_ClientHoldscamerabutton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses FreeSpin Button
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClientPressesFreeSpinButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses FreeSpin Button");
		
		ATekHoverSail_Character_BP_C_ClientPressesFreeSpinButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases FreeSpin Button
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClientReleasesFreeSpinButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases FreeSpin Button");
		
		ATekHoverSail_Character_BP_C_ClientReleasesFreeSpinButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases spin button
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::clientreleasesspinbutton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases spin button");
		
		ATekHoverSail_Character_BP_C_clientreleasesspinbutton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Spin Button
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ClientHoldsSpinButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Spin Button");
		
		ATekHoverSail_Character_BP_C_ClientHoldsSpinButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveTick");
		
		ATekHoverSail_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Player Currently Holding And Able To Aerial Boost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATekHoverSail_Character_BP_C::IsPlayerCurrentlyHoldingAndAbleToAerialBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Player Currently Holding And Able To Aerial Boost");
		
		ATekHoverSail_Character_BP_C_IsPlayerCurrentlyHoldingAndAbleToAerialBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delay Before Starting To Recharge Boost In Air
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::DelayBeforeStartingToRechargeBoostInAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delay Before Starting To Recharge Boost In Air");
		
		ATekHoverSail_Character_BP_C_DelayBeforeStartingToRechargeBoostInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Aerial Boost Drain
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::AerialBoostDrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Aerial Boost Drain");
		
		ATekHoverSail_Character_BP_C_AerialBoostDrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Recharge Aerial Boost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::RechargeAerialBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Recharge Aerial Boost");
		
		ATekHoverSail_Character_BP_C_RechargeAerialBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ATekHoverSail_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active_Not pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSail_Character_BP_C::IsAerialBoostingActive_Notpure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active_Not pure");
		
		ATekHoverSail_Character_BP_C_IsAerialBoostingActive_Notpure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is cliff diving
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSail_Character_BP_C::iscliffdiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is cliff diving");
		
		ATekHoverSail_Character_BP_C_iscliffdiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Near Ground not pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSail_Character_BP_C::IsNearGroundnotpure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Near Ground not pure");
		
		ATekHoverSail_Character_BP_C_IsNearGroundnotpure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideCameraViewTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CurrentCameraMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DesiredCameraLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DesiredCameraRotation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DesiredFOV                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraRotation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraFOV                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CameraFOV                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideCameraViewTarget");
		
		ATekHoverSail_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
		params.CurrentCameraMode = CurrentCameraMode;
		params.DesiredCameraLocation = DesiredCameraLocation;
		params.DesiredCameraRotation = DesiredCameraRotation;
		params.DesiredFOV = DesiredFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverrideCameraLocation != nullptr)
			*bOverrideCameraLocation = params.bOverrideCameraLocation;
		if (CameraLocation != nullptr)
			*CameraLocation = params.CameraLocation;
		if (bOverrideCameraRotation != nullptr)
			*bOverrideCameraRotation = params.bOverrideCameraRotation;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
		if (bOverrideCameraFOV != nullptr)
			*bOverrideCameraFOV = params.bOverrideCameraFOV;
		if (CameraFOV != nullptr)
			*CameraFOV = params.CameraFOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can boost forward on landing trick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               HasLandedTrick                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::canboostforwardonlandingtrick(bool* HasLandedTrick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can boost forward on landing trick");
		
		ATekHoverSail_Character_BP_C_canboostforwardonlandingtrick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasLandedTrick != nullptr)
			*HasLandedTrick = params.HasLandedTrick;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can request full boost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::canrequestfullboost(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can request full boost");
		
		ATekHoverSail_Character_BP_C_canrequestfullboost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekHoverSail_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetGravityZScale");
		
		ATekHoverSail_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finished Putting Sail Down
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::FinishedPuttingSailDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finished Putting Sail Down");
		
		ATekHoverSail_Character_BP_C_FinishedPuttingSailDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATekHoverSail_Character_BP_C::IsAerialBoostingActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active");
		
		ATekHoverSail_Character_BP_C_IsAerialBoostingActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can aerial boost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATekHoverSail_Character_BP_C::canaerialboost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can aerial boost");
		
		ATekHoverSail_Character_BP_C_canaerialboost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Aerial Charge Meter Amount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ATekHoverSail_Character_BP_C::GetAerialChargeMeterAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Aerial Charge Meter Amount");
		
		ATekHoverSail_Character_BP_C_GetAerialChargeMeterAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.finished aerial boost timer completely
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::finishedaerialboosttimercompletely()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.finished aerial boost timer completely");
		
		ATekHoverSail_Character_BP_C_finishedaerialboosttimercompletely_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.reset aerial boost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ignoretimeconstraint                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::resetaerialboost(bool ignoretimeconstraint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.reset aerial boost");
		
		ATekHoverSail_Character_BP_C_resetaerialboost_Params params {};
		params.ignoretimeconstraint = ignoretimeconstraint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finish Aerial Boost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::FinishAerialBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finish Aerial Boost");
		
		ATekHoverSail_Character_BP_C_FinishAerialBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.begin aerial boosting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::beginaerialboosting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.begin aerial boosting");
		
		ATekHoverSail_Character_BP_C_beginaerialboosting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Release Holding Tricks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ReleaseHoldingTricks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Release Holding Tricks");
		
		ATekHoverSail_Character_BP_C_ReleaseHoldingTricks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.request full boost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::requestfullboost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.request full boost");
		
		ATekHoverSail_Character_BP_C_requestfullboost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.does skiff want to run
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               wantstorun                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::doesskiffwanttorun(bool* wantstorun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.does skiff want to run");
		
		ATekHoverSail_Character_BP_C_doesskiffwanttorun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (wantstorun != nullptr)
			*wantstorun = params.wantstorun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ThrottledTick");
		
		ATekHoverSail_Character_BP_C_ThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is near ground
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATekHoverSail_Character_BP_C::isnearground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is near ground");
		
		ATekHoverSail_Character_BP_C_isnearground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Forward
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ResetHoldForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Forward");
		
		ATekHoverSail_Character_BP_C_ResetHoldForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Right
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ResetHoldRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Right");
		
		ATekHoverSail_Character_BP_C_ResetHoldRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.RidingTick");
		
		ATekHoverSail_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderSocket
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FName ATekHoverSail_Character_BP_C::BPGetRiderSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderSocket");
		
		ATekHoverSail_Character_BP_C_BPGetRiderSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearRider");
		
		ATekHoverSail_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.EnableTurnToFaceRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSail_Character_BP_C::EnableTurnToFaceRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.EnableTurnToFaceRotation");
		
		ATekHoverSail_Character_BP_C_EnableTurnToFaceRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ModifySkiffHorizontalInputs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewInput                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::ModifySkiffHorizontalInputs(const struct FVector& Input, struct FVector* NewInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ModifySkiffHorizontalInputs");
		
		ATekHoverSail_Character_BP_C_ModifySkiffHorizontalInputs_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewInput != nullptr)
			*NewInput = params.NewInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetCurrentHoverFloorZ
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bUseAverage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bValidFloor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FloorZ                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetCurrentHoverFloorZ(bool bUseAverage, bool* bValidFloor, float* FloorZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetCurrentHoverFloorZ");
		
		ATekHoverSail_Character_BP_C_GetCurrentHoverFloorZ_Params params {};
		params.bUseAverage = bUseAverage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidFloor != nullptr)
			*bValidFloor = params.bValidFloor;
		if (FloorZ != nullptr)
			*FloorZ = params.FloorZ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio_PURE
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bAdjustWithMax                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetHoverSlopeDeltaRatio_PURE(bool bAdjustWithMax, float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio_PURE");
		
		ATekHoverSail_Character_BP_C_GetHoverSlopeDeltaRatio_PURE_Params params {};
		params.bAdjustWithMax = bAdjustWithMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAdjustWithMax                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetHoverSlopeDeltaRatio(bool bAdjustWithMax, float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio");
		
		ATekHoverSail_Character_BP_C_GetHoverSlopeDeltaRatio_Params params {};
		params.bAdjustWithMax = bAdjustWithMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoHoverSlopeCheck
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::DoHoverSlopeCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoHoverSlopeCheck");
		
		ATekHoverSail_Character_BP_C_DoHoverSlopeCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanCryo");
		
		ATekHoverSail_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairModeCooldownActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPost                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RemainingTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::IsSkiffRepairModeCooldownActive(bool* bResult, bool* bIsPost, float* RemainingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairModeCooldownActive");
		
		ATekHoverSail_Character_BP_C_IsSkiffRepairModeCooldownActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
		if (bIsPost != nullptr)
			*bIsPost = params.bIsPost;
		if (RemainingTime != nullptr)
			*RemainingTime = params.RemainingTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairDisabledFromDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RemainingTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::IsSkiffRepairDisabledFromDamage(bool* bResult, float* RemainingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairDisabledFromDamage");
		
		ATekHoverSail_Character_BP_C_IsSkiffRepairDisabledFromDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
		if (RemainingTime != nullptr)
			*RemainingTime = params.RemainingTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAcknowledgeServerCorrection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeStamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewVel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         NewBase                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NewBaseBoneName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHasBase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBaseRelativePosition                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      ServerMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BPAcknowledgeServerCorrection(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAcknowledgeServerCorrection");
		
		ATekHoverSail_Character_BP_C_BPAcknowledgeServerCorrection_Params params {};
		params.TimeStamp = TimeStamp;
		params.NewLoc = NewLoc;
		params.NewVel = NewVel;
		params.NewBase = NewBase;
		params.NewBaseBoneName = NewBaseBoneName;
		params.bHasBase = bHasBase;
		params.bBaseRelativePosition = bBaseRelativePosition;
		params.ServerMovementMode = ServerMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStopJump
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSail_Character_BP_C::BPOnStopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStopJump");
		
		ATekHoverSail_Character_BP_C_BPOnStopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSail_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStartJump");
		
		ATekHoverSail_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyToggleHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHudHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPNotifyToggleHUD(bool bHudHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyToggleHUD");
		
		ATekHoverSail_Character_BP_C_BPNotifyToggleHUD_Params params {};
		params.bHudHidden = bHudHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CalculateTotalAlternateFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TotalAltFuel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::CalculateTotalAlternateFuel(float* TotalAltFuel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CalculateTotalAlternateFuel");
		
		ATekHoverSail_Character_BP_C_CalculateTotalAlternateFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalAltFuel != nullptr)
			*TotalAltFuel = params.TotalAltFuel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetRepairModeHudMessage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, OutParm, ZeroConstructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetRepairModeHudMessage(class FString* Message, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetRepairModeHudMessage");
		
		ATekHoverSail_Character_BP_C_GetRepairModeHudMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Message != nullptr)
			*Message = params.Message;
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageDamageFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Tick_ManageDamageFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageDamageFX");
		
		ATekHoverSail_Character_BP_C_Tick_ManageDamageFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetCachedLandedRootRotationOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::NetSetCachedLandedRootRotationOffset(const struct FRotator& NewOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetCachedLandedRootRotationOffset");
		
		ATekHoverSail_Character_BP_C_NetSetCachedLandedRootRotationOffset_Params params {};
		params.NewOffset = NewOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnRemovedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RemovedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BP_OnBasedPawnRemovedNotify(class AActor* RemovedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnRemovedNotify");
		
		ATekHoverSail_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params params {};
		params.RemovedActor = RemovedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnAddedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AddedActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BP_OnBasedPawnAddedNotify(class AActor* AddedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnAddedNotify");
		
		ATekHoverSail_Character_BP_C_BP_OnBasedPawnAddedNotify_Params params {};
		params.AddedActor = AddedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetFuelConversionRateForClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ForClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetFuelConversionRateForClass(class UClass* ForClass, float* Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetFuelConversionRateForClass");
		
		ATekHoverSail_Character_BP_C_GetFuelConversionRateForClass_Params params {};
		params.ForClass = ForClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rate != nullptr)
			*Rate = params.Rate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffRepairModeStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::OnSkiffRepairModeStateChanged(bool bNewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffRepairModeStateChanged");
		
		ATekHoverSail_Character_BP_C_OnSkiffRepairModeStateChanged_Params params {};
		params.bNewState = bNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffRepairModeActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::NetSetSkiffRepairModeActive(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffRepairModeActive");
		
		ATekHoverSail_Character_BP_C_NetSetSkiffRepairModeActive_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffUseRepairMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::CanSkiffUseRepairMode(bool bForStart, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffUseRepairMode");
		
		ATekHoverSail_Character_BP_C_CanSkiffUseRepairMode_Params params {};
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTryMultiUse");
		
		ATekHoverSail_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Repair Mode Hud Message_PURE
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, OutParm, ZeroConstructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetRepairModeHudMessage_PURE(class FString* Message, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Repair Mode Hud Message_PURE");
		
		ATekHoverSail_Character_BP_C_GetRepairModeHudMessage_PURE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Message != nullptr)
			*Message = params.Message;
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintDrawFloatingHUD");
		
		ATekHoverSail_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ATekHoverSail_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetMultiUseEntries");
		
		ATekHoverSail_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageAutoRepair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Tick_ManageAutoRepair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageAutoRepair");
		
		ATekHoverSail_Character_BP_C_Tick_ManageAutoRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_ForceAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BuffClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BP_ForceAllowAddBuff(class UClass* BuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_ForceAllowAddBuff");
		
		ATekHoverSail_Character_BP_C_BP_ForceAllowAddBuff_Params params {};
		params.BuffClass = BuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BlueprintPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintPlayDying");
		
		ATekHoverSail_Character_BP_C_BlueprintPlayDying_Params params {};
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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ATekHoverSail_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPServerHandleNetExecCommand");
		
		ATekHoverSail_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ConsumeFuel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MulticastFuel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::ConsumeFuel(float amount, bool MulticastFuel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ConsumeFuel");
		
		ATekHoverSail_Character_BP_C_ConsumeFuel_Params params {};
		params.amount = amount;
		params.MulticastFuel = MulticastFuel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasEnoughFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RequiredFuel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::HasEnoughFuel(float RequiredFuel, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasEnoughFuel");
		
		ATekHoverSail_Character_BP_C_HasEnoughFuel_Params params {};
		params.RequiredFuel = RequiredFuel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.TryRefillCurrentFuelUnit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::TryRefillCurrentFuelUnit(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.TryRefillCurrentFuelUnit");
		
		ATekHoverSail_Character_BP_C_TryRefillCurrentFuelUnit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasAnyFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentFuel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::HasAnyFuel(bool* bResult, float* CurrentFuel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasAnyFuel");
		
		ATekHoverSail_Character_BP_C_HasAnyFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
		if (CurrentFuel != nullptr)
			*CurrentFuel = params.CurrentFuel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPInventoryItemDropped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InventoryItemObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPInventoryItemDropped(class UObject* InventoryItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPInventoryItemDropped");
		
		ATekHoverSail_Character_BP_C_BPInventoryItemDropped_Params params {};
		params.InventoryItemObject = InventoryItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyInventoryItemChange");
		
		ATekHoverSail_Character_BP_C_BPNotifyInventoryItemChange_Params params {};
		params.bIsItemAdd = bIsItemAdd;
		params.theItem = theItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffInventoryUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 UpdatedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::OnSkiffInventoryUpdated(class UPrimalItem* UpdatedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffInventoryUpdated");
		
		ATekHoverSail_Character_BP_C_OnSkiffInventoryUpdated_Params params {};
		params.UpdatedItem = UpdatedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPSetupTamed");
		
		ATekHoverSail_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DisableLevelUps
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::DisableLevelUps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DisableLevelUps");
		
		ATekHoverSail_Character_BP_C_DisableLevelUps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BSetupDinoTameable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::BSetupDinoTameable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BSetupDinoTameable");
		
		ATekHoverSail_Character_BP_C_BSetupDinoTameable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ShowDropDinoIndicator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Tick_ShowDropDinoIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ShowDropDinoIndicator");
		
		ATekHoverSail_Character_BP_C_Tick_ShowDropDinoIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffAcceleration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetSkiffAcceleration(struct FVector* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffAcceleration");
		
		ATekHoverSail_Character_BP_C_GetSkiffAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsValidHoverTraceHit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ForHit                                                     (Parm, OutParm, ReferenceParm)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::IsValidHoverTraceHit(struct FHitResult* ForHit, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsValidHoverTraceHit");
		
		ATekHoverSail_Character_BP_C_IsValidHoverTraceHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForHit != nullptr)
			*ForHit = params.ForHit;
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRunning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::IsSkiffRunning(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRunning");
		
		ATekHoverSail_Character_BP_C_IsSkiffRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnSetRunning
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsRunning                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BP_OnSetRunning(bool bNewIsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnSetRunning");
		
		ATekHoverSail_Character_BP_C_BP_OnSetRunning_Params params {};
		params.bNewIsRunning = bNewIsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnReceiveSkiff2dMovementInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InputAxisVal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShouldIntercept                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::OnReceiveSkiff2dMovementInput(float InputAxisVal, bool bRight, bool* bShouldIntercept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnReceiveSkiff2dMovementInput");
		
		ATekHoverSail_Character_BP_C_OnReceiveSkiff2dMovementInput_Params params {};
		params.InputAxisVal = InputAxisVal;
		params.bRight = bRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldIntercept != nullptr)
			*bShouldIntercept = params.bShouldIntercept;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanBeBaseForCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BPCanBeBaseForCharacter(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanBeBaseForCharacter");
		
		ATekHoverSail_Character_BP_C_BPCanBeBaseForCharacter_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSail_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardDirection");
		
		ATekHoverSail_Character_BP_C_BPGetRiderUnboardDirection_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSail_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardLocation");
		
		ATekHoverSail_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanHover
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::CanHover(bool bForStart, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanHover");
		
		ATekHoverSail_Character_BP_C_CanHover_Params params {};
		params.bForStart = bForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnTamedOrderReceived
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnTamedOrderReceived");
		
		ATekHoverSail_Character_BP_C_BP_OnTamedOrderReceived_Params params {};
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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.WantsToFlyUp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::WantsToFlyUp(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.WantsToFlyUp");
		
		ATekHoverSail_Character_BP_C_WantsToFlyUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_CheckSkiffInputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Tick_CheckSkiffInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_CheckSkiffInputs");
		
		ATekHoverSail_Character_BP_C_Tick_CheckSkiffInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSyncedFuelAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::UpdateSyncedFuelAmount(bool* bWasChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSyncedFuelAmount");
		
		ATekHoverSail_Character_BP_C_UpdateSyncedFuelAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bWasChanged != nullptr)
			*bWasChanged = params.bWasChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffBlockersTraceIgnoreActors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              IgnoreActors                                               (Parm, OutParm, ZeroConstructor)
	 */
	void ATekHoverSail_Character_BP_C::GetSkiffBlockersTraceIgnoreActors(TArray<class AActor*>* IgnoreActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffBlockersTraceIgnoreActors");
		
		ATekHoverSail_Character_BP_C_GetSkiffBlockersTraceIgnoreActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IgnoreActors != nullptr)
			*IgnoreActors = params.IgnoreActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageSkiffCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Tick_ManageSkiffCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageSkiffCamera");
		
		ATekHoverSail_Character_BP_C_Tick_ManageSkiffCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsPhysicsVolumeLava
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APhysicsVolume*                              CheckVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLava                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::IsPhysicsVolumeLava(class APhysicsVolume* CheckVolume, bool* bIsLava)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsPhysicsVolumeLava");
		
		ATekHoverSail_Character_BP_C_IsPhysicsVolumeLava_Params params {};
		params.CheckVolume = CheckVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLava != nullptr)
			*bIsLava = params.bIsLava;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffTryToTrulyLand
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WithFlyingVelocity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::CanSkiffTryToTrulyLand(const struct FVector& WithFlyingVelocity, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffTryToTrulyLand");
		
		ATekHoverSail_Character_BP_C_CanSkiffTryToTrulyLand_Params params {};
		params.WithFlyingVelocity = WithFlyingVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandFailed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ReasonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BP_OnStartLandFailed(int32_t ReasonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandFailed");
		
		ATekHoverSail_Character_BP_C_BP_OnStartLandFailed_Params params {};
		params.ReasonIndex = ReasonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetSkiffInputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ResetSkiffInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetSkiffInputs");
		
		ATekHoverSail_Character_BP_C_ResetSkiffInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetEnvironmentalParticleTraceDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ForSocketName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              traceDist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetEnvironmentalParticleTraceDistance(const class FName& ForSocketName, float* traceDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetEnvironmentalParticleTraceDistance");
		
		ATekHoverSail_Character_BP_C_GetEnvironmentalParticleTraceDistance_Params params {};
		params.ForSocketName = ForSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceDist != nullptr)
			*traceDist = params.traceDist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveDestroyed");
		
		ATekHoverSail_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageHoverGroundFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Tick_ManageHoverGroundFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageHoverGroundFX");
		
		ATekHoverSail_Character_BP_C_Tick_ManageHoverGroundFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffFailedTakeoff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::OnSkiffFailedTakeoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffFailedTakeoff");
		
		ATekHoverSail_Character_BP_C_OnSkiffFailedTakeoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTargetHoverHeight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::SetTargetHoverHeight(float NewHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTargetHoverHeight");
		
		ATekHoverSail_Character_BP_C_SetTargetHoverHeight_Params params {};
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSkiffHoverState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::UpdateSkiffHoverState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSkiffHoverState");
		
		ATekHoverSail_Character_BP_C_UpdateSkiffHoverState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffHoverStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffHoverState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_HoverSkiffHoverState                             PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::OnSkiffHoverStateChanged(E_HoverSkiffHoverState NewState, E_HoverSkiffHoverState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffHoverStateChanged");
		
		ATekHoverSail_Character_BP_C_OnSkiffHoverStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffHoverState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffHoverState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::NetSetSkiffHoverState(E_HoverSkiffHoverState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffHoverState");
		
		ATekHoverSail_Character_BP_C_NetSetSkiffHoverState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekHoverSail_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ATekHoverSail_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetMinHoverHeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MinHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::GetMinHoverHeight(float* MinHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetMinHoverHeight");
		
		ATekHoverSail_Character_BP_C_GetMinHoverHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinHeight != nullptr)
			*MinHeight = params.MinHeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffChangingHoverHeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::IsSkiffChangingHoverHeight(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffChangingHoverHeight");
		
		ATekHoverSail_Character_BP_C_IsSkiffChangingHoverHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_CanFly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSail_Character_BP_C::BP_CanFly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_CanFly");
		
		ATekHoverSail_Character_BP_C_BP_CanFly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageFuel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Tick_ManageFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageFuel");
		
		ATekHoverSail_Character_BP_C_Tick_ManageFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ATekHoverSail_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetHUDElements");
		
		ATekHoverSail_Character_BP_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveAnyDamage");
		
		ATekHoverSail_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OverrideTerminalVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekHoverSail_Character_BP_C::BP_OverrideTerminalVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OverrideTerminalVelocity");
		
		ATekHoverSail_Character_BP_C_BP_OverrideTerminalVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.KillSkiff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::KillSkiff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.KillSkiff");
		
		ATekHoverSail_Character_BP_C_KillSkiff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffCrash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromImpact                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::OnSkiffCrash(bool bFromImpact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffCrash");
		
		ATekHoverSail_Character_BP_C_OnSkiffCrash_Params params {};
		params.bFromImpact = bFromImpact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_PreventMovementMode");
		
		ATekHoverSail_Character_BP_C_BP_PreventMovementMode_Params params {};
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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_Crashing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Tick_Crashing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_Crashing");
		
		ATekHoverSail_Character_BP_C_Tick_Crashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffStartedCrashing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::OnSkiffStartedCrashing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffStartedCrashing");
		
		ATekHoverSail_Character_BP_C_OnSkiffStartedCrashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ATekHoverSail_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAdjustDamage");
		
		ATekHoverSail_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifySetRider");
		
		ATekHoverSail_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateOwningClientReplicatedInputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::UpdateOwningClientReplicatedInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateOwningClientReplicatedInputs");
		
		ATekHoverSail_Character_BP_C_UpdateOwningClientReplicatedInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetSkiffMovementInputAxisValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Newval                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::SetSkiffMovementInputAxisValue(int32_t Axis, float Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetSkiffMovementInputAxisValue");
		
		ATekHoverSail_Character_BP_C_SetSkiffMovementInputAxisValue_Params params {};
		params.Axis = Axis;
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveRight");
		
		ATekHoverSail_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveForward");
		
		ATekHoverSail_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyRightDirectionInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     directionInput                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSail_Character_BP_C::BPModifyRightDirectionInput(struct FVector* directionInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyRightDirectionInput");
		
		ATekHoverSail_Character_BP_C_BPModifyRightDirectionInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (directionInput != nullptr)
			*directionInput = params.directionInput;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitRightDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSail_Character_BP_C::BPShouldLimitRightDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitRightDirection");
		
		ATekHoverSail_Character_BP_C_BPShouldLimitRightDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_AllowWalkableSlopeOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ForComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BP_AllowWalkableSlopeOverride(class UPrimitiveComponent* ForComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_AllowWalkableSlopeOverride");
		
		ATekHoverSail_Character_BP_C_BP_AllowWalkableSlopeOverride_Params params {};
		params.ForComponent = ForComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnMovementModeChangedNotify");
		
		ATekHoverSail_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffSetFlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFly                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::OnSkiffSetFlight(bool bFly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffSetFlight");
		
		ATekHoverSail_Character_BP_C_OnSkiffSetFlight_Params params {};
		params.bFly = bFly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnSetFlight
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFly                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPOnSetFlight(bool bFly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnSetFlight");
		
		ATekHoverSail_Character_BP_C_BPOnSetFlight_Params params {};
		params.bFly = bFly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	void ATekHoverSail_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveHit");
		
		ATekHoverSail_Character_BP_C_ReceiveHit_Params params {};
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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoSkiffHoverTraces
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForceTraces                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::DoSkiffHoverTraces(bool bForceTraces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoSkiffHoverTraces");
		
		ATekHoverSail_Character_BP_C_DoSkiffHoverTraces_Params params {};
		params.bForceTraces = bForceTraces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ATekHoverSail_Character_BP_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnLanded");
		
		ATekHoverSail_Character_BP_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffLandingStageChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLanding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::OnSkiffLandingStageChanged(bool bLanding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffLandingStageChanged");
		
		ATekHoverSail_Character_BP_C_OnSkiffLandingStageChanged_Params params {};
		params.bLanding = bLanding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandingNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::BP_OnStartLandingNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandingNotify");
		
		ATekHoverSail_Character_BP_C_BP_OnStartLandingNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSendInputRPC
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::CanSendInputRPC(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSendInputRPC");
		
		ATekHoverSail_Character_BP_C_CanSendInputRPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetOverrideCameraInterpSpeed");
		
		ATekHoverSail_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params {};
		params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
		params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVCameraSpeedInterpolationMultiplier != nullptr)
			*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
		if (TPVOffsetInterpSpeed != nullptr)
			*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekHoverSail_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		ATekHoverSail_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFlyingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSail_Character_BP_C::BPOverrideFlyingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFlyingVelocity");
		
		ATekHoverSail_Character_BP_C_BPOverrideFlyingVelocity_Params params {};
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
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekHoverSail_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyDesiredRotation");
		
		ATekHoverSail_Character_BP_C_BPModifyDesiredRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDesiredRotation != nullptr)
			*InDesiredRotation = params.InDesiredRotation;
		if (OutDesiredRotation != nullptr)
			*OutDesiredRotation = params.OutDesiredRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetForceSkiffDescend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::SetForceSkiffDescend(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetForceSkiffDescend");
		
		ATekHoverSail_Character_BP_C_SetForceSkiffDescend_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.StopHovering
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::StopHovering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.StopHovering");
		
		ATekHoverSail_Character_BP_C_StopHovering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTimerIntervals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::SetTimerIntervals(bool Fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTimerIntervals");
		
		ATekHoverSail_Character_BP_C_SetTimerIntervals_Params params {};
		params.Fast = Fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitForwardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekHoverSail_Character_BP_C::BPShouldLimitForwardDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitForwardDirection");
		
		ATekHoverSail_Character_BP_C_BPShouldLimitForwardDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyForwardDirectionInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     directionInput                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekHoverSail_Character_BP_C::BPModifyForwardDirectionInput(struct FVector* directionInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyForwardDirectionInput");
		
		ATekHoverSail_Character_BP_C_BPModifyForwardDirectionInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (directionInput != nullptr)
			*directionInput = params.directionInput;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerServer");
		
		ATekHoverSail_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerNonDedicated");
		
		ATekHoverSail_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UserConstructionScript");
		
		ATekHoverSail_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::wobbletimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__FinishedFunc");
		
		ATekHoverSail_Character_BP_C_wobbletimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::wobbletimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__UpdateFunc");
		
		ATekHoverSail_Character_BP_C_wobbletimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__FinishedFunc");
		
		ATekHoverSail_Character_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__UpdateFunc");
		
		ATekHoverSail_Character_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__FinishedFunc");
		
		ATekHoverSail_Character_BP_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__UpdateFunc");
		
		ATekHoverSail_Character_BP_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__FinishedFunc");
		
		ATekHoverSail_Character_BP_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__UpdateFunc");
		
		ATekHoverSail_Character_BP_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ATekHoverSail_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.InterceptInputEvent");
		
		ATekHoverSail_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_RequestBraking
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Server_RequestBraking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_RequestBraking");
		
		ATekHoverSail_Character_BP_C_Server_RequestBraking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveBeginPlay");
		
		ATekHoverSail_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPUnstasis");
		
		ATekHoverSail_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnStartSkiffLanding
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLanding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Multi_OnStartSkiffLanding(bool bLanding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnStartSkiffLanding");
		
		ATekHoverSail_Character_BP_C_Multi_OnStartSkiffLanding_Params params {};
		params.bLanding = bLanding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffSetFlight
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFly                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Multi_OnSkiffSetFlight(bool bFly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffSetFlight");
		
		ATekHoverSail_Character_BP_C_Multi_OnSkiffSetFlight_Params params {};
		params.bFly = bFly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncMovementInputs
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MoveInputs                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Server_SyncMovementInputs(const struct FVector& MoveInputs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncMovementInputs");
		
		ATekHoverSail_Character_BP_C_Server_SyncMovementInputs_Params params {};
		params.MoveInputs = MoveInputs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnFireInputPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Server_OnFireInputPressed(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnFireInputPressed");
		
		ATekHoverSail_Character_BP_C_Server_OnFireInputPressed_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnTargetingInputPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Server_OnTargetingInputPressed(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnTargetingInputPressed");
		
		ATekHoverSail_Character_BP_C_Server_OnTargetingInputPressed_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffStartedCrashing
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Multi_OnSkiffStartedCrashing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffStartedCrashing");
		
		ATekHoverSail_Character_BP_C_Multi_OnSkiffStartedCrashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffCrash
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromImpact                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Multi_OnSkiffCrash(bool bFromImpact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffCrash");
		
		ATekHoverSail_Character_BP_C_Multi_OnSkiffCrash_Params params {};
		params.bFromImpact = bFromImpact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DestroySkiff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::DestroySkiff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DestroySkiff");
		
		ATekHoverSail_Character_BP_C_DestroySkiff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CrashTimeout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::CrashTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CrashTimeout");
		
		ATekHoverSail_Character_BP_C_CrashTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffHoverStateChanged
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffHoverState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_HoverSkiffHoverState                             PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Multi_OnSkiffHoverStateChanged(E_HoverSkiffHoverState NewState, E_HoverSkiffHoverState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffHoverStateChanged");
		
		ATekHoverSail_Character_BP_C_Multi_OnSkiffHoverStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffHoverState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_HoverSkiffHoverState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Server_SetSkiffHoverState(E_HoverSkiffHoverState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffHoverState");
		
		ATekHoverSail_Character_BP_C_Server_SetSkiffHoverState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffFailedTakeoff
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Multi_OnSkiffFailedTakeoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffFailedTakeoff");
		
		ATekHoverSail_Character_BP_C_Multi_OnSkiffFailedTakeoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffRepairModeStateChanged
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Multi_OnSkiffRepairModeStateChanged(bool bNewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffRepairModeStateChanged");
		
		ATekHoverSail_Character_BP_C_Multi_OnSkiffRepairModeStateChanged_Params params {};
		params.bNewState = bNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_SyncFuelPercent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Multi_SyncFuelPercent(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_SyncFuelPercent");
		
		ATekHoverSail_Character_BP_C_Multi_SyncFuelPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffFlight
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewFlight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Server_SetSkiffFlight(bool NewFlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffFlight");
		
		ATekHoverSail_Character_BP_C_Server_SetSkiffFlight_Params params {};
		params.NewFlight = NewFlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_StartSkiffLanding
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Server_StartSkiffLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_StartSkiffLanding");
		
		ATekHoverSail_Character_BP_C_Server_StartSkiffLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi close sail
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::multiclosesail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi close sail");
		
		ATekHoverSail_Character_BP_C_multiclosesail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi open sail
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::multiopensail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi open sail");
		
		ATekHoverSail_Character_BP_C_multiopensail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.full boosted multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::fullboostedmulticast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.full boosted multicast");
		
		ATekHoverSail_Character_BP_C_fullboostedmulticast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.open sail
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isopen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::opensail(bool isopen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.open sail");
		
		ATekHoverSail_Character_BP_C_opensail_Params params {};
		params.isopen = isopen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::wobble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble");
		
		ATekHoverSail_Character_BP_C_wobble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.resync anim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::resyncanim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.resync anim");
		
		ATekHoverSail_Character_BP_C_resyncanim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncAim
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimingDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::Server_SyncAim(const struct FVector& AimingDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncAim");
		
		ATekHoverSail_Character_BP_C_Server_SyncAim_Params params {};
		params.AimingDirection = AimingDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Successfully Lands A Trick
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::SuccessfullyLandsATrick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Successfully Lands A Trick");
		
		ATekHoverSail_Character_BP_C_SuccessfullyLandsATrick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.play camera impact on ground
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::playcameraimpactonground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.play camera impact on ground");
		
		ATekHoverSail_Character_BP_C_playcameraimpactonground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on start aerial boost
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::onstartaerialboost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on start aerial boost");
		
		ATekHoverSail_Character_BP_C_onstartaerialboost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ServerSyncMovementValues
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              syncedright                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              SyncedFwd                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::ServerSyncMovementValues(float syncedright, float SyncedFwd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ServerSyncMovementValues");
		
		ATekHoverSail_Character_BP_C_ServerSyncMovementValues_Params params {};
		params.syncedright = syncedright;
		params.SyncedFwd = SyncedFwd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on recharge aerial boost
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::onrechargeaerialboost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on recharge aerial boost");
		
		ATekHoverSail_Character_BP_C_onrechargeaerialboost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on delay before recharge aerial boost
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::ondelaybeforerechargeaerialboost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on delay before recharge aerial boost");
		
		ATekHoverSail_Character_BP_C_ondelaybeforerechargeaerialboost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Drift Boosted Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     boostdirection                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               forwardboost                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::DriftBoostedMulticast(const struct FVector& boostdirection, bool forwardboost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Drift Boosted Multicast");
		
		ATekHoverSail_Character_BP_C_DriftBoostedMulticast_Params params {};
		params.boostdirection = boostdirection;
		params.forwardboost = forwardboost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast completed trick in air
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Multicastcompletedtrickinair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast completed trick in air");
		
		ATekHoverSail_Character_BP_C_Multicastcompletedtrickinair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.PUBLIC: Add Aerial Boost Charge Percentage Amount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::PUBLICAddAerialBoostChargePercentageAmount(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.PUBLIC: Add Aerial Boost Charge Percentage Amount");
		
		ATekHoverSail_Character_BP_C_PUBLICAddAerialBoostChargePercentageAmount_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multicast add aerial boost charge
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::multicastaddaerialboostcharge(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multicast add aerial boost charge");
		
		ATekHoverSail_Character_BP_C_multicastaddaerialboostcharge_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to riding socket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::lerptoridingsocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to riding socket");
		
		ATekHoverSail_Character_BP_C_lerptoridingsocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to riding socket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::stoplerptoridingsocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to riding socket");
		
		ATekHoverSail_Character_BP_C_stoplerptoridingsocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to open sail socket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::lerptoopensailsocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to open sail socket");
		
		ATekHoverSail_Character_BP_C_lerptoopensailsocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to open sail socket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::stoplerptoopensailsocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to open sail socket");
		
		ATekHoverSail_Character_BP_C_stoplerptoopensailsocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.dismount
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::dismount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.dismount");
		
		ATekHoverSail_Character_BP_C_dismount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast_RefreshColors
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::Multicast_RefreshColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast_RefreshColors");
		
		ATekHoverSail_Character_BP_C_Multicast_RefreshColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.MultiTrickActivationText
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_BP_C::MultiTrickActivationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.MultiTrickActivationText");
		
		ATekHoverSail_Character_BP_C_MultiTrickActivationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ExecuteUbergraph_TekHoverSail_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekHoverSail_Character_BP_C::ExecuteUbergraph_TekHoverSail_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ExecuteUbergraph_TekHoverSail_Character_BP");
		
		ATekHoverSail_Character_BP_C_ExecuteUbergraph_TekHoverSail_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekHoverSail_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekHoverSail_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekHoverSail_Character_BP.TekHoverSail_Character_BP_C");
		return ptr;
	}

}


