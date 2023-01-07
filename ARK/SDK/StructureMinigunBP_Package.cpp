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
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   InventoryComponent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      CurrentAmmoItemTemplate                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UClass*>                              AmmoItemTemplates                                          (Parm, OutParm, ZeroConstructor)
	 * 		int32_t                                            LowAmmoWarningAmount                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::GetHudData(class UPrimalInventoryComponent** InventoryComponent, class UClass** CurrentAmmoItemTemplate, TArray<class UClass*>* AmmoItemTemplates, int32_t* LowAmmoWarningAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.GetHudData");
		
		AStructureMinigunBP_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryComponent != nullptr)
			*InventoryComponent = params.InventoryComponent;
		if (CurrentAmmoItemTemplate != nullptr)
			*CurrentAmmoItemTemplate = params.CurrentAmmoItemTemplate;
		if (AmmoItemTemplates != nullptr)
			*AmmoItemTemplates = params.AmmoItemTemplates;
		if (LowAmmoWarningAmount != nullptr)
			*LowAmmoWarningAmount = params.LowAmmoWarningAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPGetDamageMultiplier
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AStructureMinigunBP_C::BPGetDamageMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPGetDamageMultiplier");
		
		AStructureMinigunBP_C_BPGetDamageMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.UpdateItemStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 newItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::UpdateItemStats(class UPrimalItem* newItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.UpdateItemStats");
		
		AStructureMinigunBP_C_UpdateItemStats_Params params {};
		params.newItem = newItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPOverrideCantBuildReasonString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CantBuildReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString AStructureMinigunBP_C::BPOverrideCantBuildReasonString(int32_t CantBuildReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPOverrideCantBuildReasonString");
		
		AStructureMinigunBP_C_BPOverrideCantBuildReasonString_Params params {};
		params.CantBuildReason = CantBuildReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPIsAllowedToBuild
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentAllowedReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AStructureMinigunBP_C::BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPIsAllowedToBuild");
		
		AStructureMinigunBP_C_BPIsAllowedToBuild_Params params {};
		params.CurrentAllowedReason = CurrentAllowedReason;
		
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
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.Update Spin Sounds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::UpdateSpinSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Update Spin Sounds");
		
		AStructureMinigunBP_C_UpdateSpinSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPPlacedStructure");
		
		AStructureMinigunBP_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPSetPlayerConstructor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::BPSetPlayerConstructor(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPSetPlayerConstructor");
		
		AStructureMinigunBP_C_BPSetPlayerConstructor_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.PlacementInitialization
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterWeapon*                              constructorWeapon                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::PlacementInitialization(class AShooterWeapon* constructorWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.PlacementInitialization");
		
		AStructureMinigunBP_C_PlacementInitialization_Params params {};
		params.constructorWeapon = constructorWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.PlacementTickActions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ReachedDestination                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::PlacementTickActions(bool* ReachedDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.PlacementTickActions");
		
		AStructureMinigunBP_C_PlacementTickActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReachedDestination != nullptr)
			*ReachedDestination = params.ReachedDestination;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.UpdateCustomItemData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 self2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::UpdateCustomItemData(class UPrimalItem* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.UpdateCustomItemData");
		
		AStructureMinigunBP_C_UpdateCustomItemData_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.UpdateMaterials
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::UpdateMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.UpdateMaterials");
		
		AStructureMinigunBP_C_UpdateMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPFiredWeapon");
		
		AStructureMinigunBP_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPSeatedPlayer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           SeatedChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AtSeatNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::BPSeatedPlayer(class AShooterCharacter* SeatedChar, int32_t AtSeatNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPSeatedPlayer");
		
		AStructureMinigunBP_C_BPSeatedPlayer_Params params {};
		params.SeatedChar = SeatedChar;
		params.AtSeatNumber = AtSeatNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.SwitchMinigunTPVCameraView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::SwitchMinigunTPVCameraView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.SwitchMinigunTPVCameraView");
		
		AStructureMinigunBP_C_SwitchMinigunTPVCameraView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.Is First Person View
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::IsFirstPersonView(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Is First Person View");
		
		AStructureMinigunBP_C_IsFirstPersonView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.Is Client or SinglePlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::IsClientorSinglePlayer(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Is Client or SinglePlayer");
		
		AStructureMinigunBP_C_IsClientorSinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPGetInfoFromConsumedItemForPlacedStructure
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ItemToConsumed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem* ItemToConsumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPGetInfoFromConsumedItemForPlacedStructure");
		
		AStructureMinigunBP_C_BPGetInfoFromConsumedItemForPlacedStructure_Params params {};
		params.ItemToConsumed = ItemToConsumed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPReleasedPlayer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ReleasedChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AtSeatNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::BPReleasedPlayer(class AShooterCharacter* ReleasedChar, int32_t AtSeatNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPReleasedPlayer");
		
		AStructureMinigunBP_C_BPReleasedPlayer_Params params {};
		params.ReleasedChar = ReleasedChar;
		params.AtSeatNumber = AtSeatNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AStructureMinigunBP_C::BPCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPCanFire");
		
		AStructureMinigunBP_C_BPCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AStructureMinigunBP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPGetMultiUseEntries");
		
		AStructureMinigunBP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructureMinigunBP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPTryMultiUse");
		
		AStructureMinigunBP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.UserConstructionScript");
		
		AStructureMinigunBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.ReceiveTick");
		
		AStructureMinigunBP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.TickSpinSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::TickSpinSpeed(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.TickSpinSpeed");
		
		AStructureMinigunBP_C_TickSpinSpeed_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.BPApplyCustomDurabilityOnPickup
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 PickedUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::BPApplyCustomDurabilityOnPickup(class UPrimalItem* PickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPApplyCustomDurabilityOnPickup");
		
		AStructureMinigunBP_C_BPApplyCustomDurabilityOnPickup_Params params {};
		params.PickedUp = PickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.TickTPV
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::TickTPV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.TickTPV");
		
		AStructureMinigunBP_C_TickTPV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.ReceiveBeginPlay");
		
		AStructureMinigunBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.TickOverheat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::TickOverheat(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.TickOverheat");
		
		AStructureMinigunBP_C_TickOverheat_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.Multi_AttachSocket
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::Multi_AttachSocket(class AShooterCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Multi_AttachSocket");
		
		AStructureMinigunBP_C_Multi_AttachSocket_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.Multi_DetachCable
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::Multi_DetachCable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Multi_DetachCable");
		
		AStructureMinigunBP_C_Multi_DetachCable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.CableMat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::CableMat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.CableMat");
		
		AStructureMinigunBP_C_CableMat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.StartPlacement_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           constructor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::StartPlacement_Multicast(class AShooterCharacter* constructor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.StartPlacement_Multicast");
		
		AStructureMinigunBP_C_StartPlacement_Multicast_Params params {};
		params.constructor = constructor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.PlacementAnimationTickEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::PlacementAnimationTickEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.PlacementAnimationTickEvent");
		
		AStructureMinigunBP_C_PlacementAnimationTickEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.NetOnOverheated
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::NetOnOverheated(bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.NetOnOverheated");
		
		AStructureMinigunBP_C_NetOnOverheated_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.StartShellLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::StartShellLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.StartShellLoop");
		
		AStructureMinigunBP_C_StartShellLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.StopShellLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructureMinigunBP_C::StopShellLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.StopShellLoop");
		
		AStructureMinigunBP_C_StopShellLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureMinigunBP.StructureMinigunBP_C.ExecuteUbergraph_StructureMinigunBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureMinigunBP_C::ExecuteUbergraph_StructureMinigunBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.ExecuteUbergraph_StructureMinigunBP");
		
		AStructureMinigunBP_C_ExecuteUbergraph_StructureMinigunBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureMinigunBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureMinigunBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureMinigunBP.StructureMinigunBP_C");
		return ptr;
	}

}


