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
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.GetStructureChainStarts
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalStructure*>                    AllStructures                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class APrimalStructure*>                    OutStartStructures                                         (Parm, OutParm, ZeroConstructor)
	 */
	void AStorageBox_TekGenerator_C::GetStructureChainStarts(TArray<class APrimalStructure*>* AllStructures, TArray<class APrimalStructure*>* OutStartStructures)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.GetStructureChainStarts");
		
		AStorageBox_TekGenerator_C_GetStructureChainStarts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllStructures != nullptr)
			*AllStructures = params.AllStructures;
		if (OutStartStructures != nullptr)
			*OutStartStructures = params.OutStartStructures;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveDestroyed");
		
		AStorageBox_TekGenerator_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.PowerGeneratorBuiltNearbyPoweredStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureItemContainer*               PoweredStructure                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_TekGenerator_C::PowerGeneratorBuiltNearbyPoweredStructure(class APrimalStructureItemContainer* PoweredStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.PowerGeneratorBuiltNearbyPoweredStructure");
		
		AStorageBox_TekGenerator_C_PowerGeneratorBuiltNearbyPoweredStructure_Params params {};
		params.PoweredStructure = PoweredStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPChangedActorTeam
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::BPChangedActorTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPChangedActorTeam");
		
		AStorageBox_TekGenerator_C_BPChangedActorTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.RefreshPoweredStructures
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::RefreshPoweredStructures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.RefreshPoweredStructures");
		
		AStorageBox_TekGenerator_C_RefreshPoweredStructures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveBeginPlay");
		
		AStorageBox_TekGenerator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.CheckChargeEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::CheckChargeEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.CheckChargeEffect");
		
		AStorageBox_TekGenerator_C_CheckChargeEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.OnRep_PowerUpCompletionTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::OnRep_PowerUpCompletionTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.OnRep_PowerUpCompletionTime");
		
		AStorageBox_TekGenerator_C_OnRep_PowerUpCompletionTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_TekGenerator_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPClientDoMultiUse");
		
		AStorageBox_TekGenerator_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BlueprintDrawHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_TekGenerator_C::BlueprintDrawHUD(class AShooterHUD* HUD, float CenterX, float CenterY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BlueprintDrawHUD");
		
		AStorageBox_TekGenerator_C_BlueprintDrawHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPRefreshedStructureColors
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::BPRefreshedStructureColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPRefreshedStructureColors");
		
		AStorageBox_TekGenerator_C_BPRefreshedStructureColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetFuelConsumptionMultiplier
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AStorageBox_TekGenerator_C::BPGetFuelConsumptionMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetFuelConsumptionMultiplier");
		
		AStorageBox_TekGenerator_C_BPGetFuelConsumptionMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPCanBeActivatedByPlayer
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStorageBox_TekGenerator_C::BPCanBeActivatedByPlayer(class AShooterPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPCanBeActivatedByPlayer");
		
		AStorageBox_TekGenerator_C_BPCanBeActivatedByPlayer_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPOverrideAllowStructureAccess
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsAccessAllowed                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForInventoryOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStorageBox_TekGenerator_C::BPOverrideAllowStructureAccess(class AShooterPlayerController* ForPC, bool bIsAccessAllowed, bool bForInventoryOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPOverrideAllowStructureAccess");
		
		AStorageBox_TekGenerator_C_BPOverrideAllowStructureAccess_Params params {};
		params.ForPC = ForPC;
		params.bIsAccessAllowed = bIsAccessAllowed;
		params.bForInventoryOnly = bForInventoryOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.GetDesiredRadiusMultiplier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            IncrementAmount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutRadiusMultiplier                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_TekGenerator_C::GetDesiredRadiusMultiplier(int32_t IncrementAmount, float* OutRadiusMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.GetDesiredRadiusMultiplier");
		
		AStorageBox_TekGenerator_C_GetDesiredRadiusMultiplier_Params params {};
		params.IncrementAmount = IncrementAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRadiusMultiplier != nullptr)
			*OutRadiusMultiplier = params.OutRadiusMultiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStorageBox_TekGenerator_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPTryMultiUse");
		
		AStorageBox_TekGenerator_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AStorageBox_TekGenerator_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetMultiUseEntries");
		
		AStorageBox_TekGenerator_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::BPPostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostInitializeComponents");
		
		AStorageBox_TekGenerator_C_BPPostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostSetStructureCollisionChannels
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::BPPostSetStructureCollisionChannels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostSetStructureCollisionChannels");
		
		AStorageBox_TekGenerator_C_BPPostSetStructureCollisionChannels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.SetShieldActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_TekGenerator_C::SetShieldActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.SetShieldActive");
		
		AStorageBox_TekGenerator_C_SetShieldActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::BPContainerDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerDeactivated");
		
		AStorageBox_TekGenerator_C_BPContainerDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::BPContainerActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerActivated");
		
		AStorageBox_TekGenerator_C_BPContainerActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UserConstructionScript");
		
		AStorageBox_TekGenerator_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetRefreshRadiusScale
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewUserRadiusValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_TekGenerator_C::NetRefreshRadiusScale(int32_t NewUserRadiusValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetRefreshRadiusScale");
		
		AStorageBox_TekGenerator_C_NetRefreshRadiusScale_Params params {};
		params.NewUserRadiusValue = NewUserRadiusValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldInterp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::UpdateShieldInterp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldInterp");
		
		AStorageBox_TekGenerator_C_UpdateShieldInterp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldOpacity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::UpdateShieldOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldOpacity");
		
		AStorageBox_TekGenerator_C_UpdateShieldOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.FinishPowerUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::FinishPowerUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.FinishPowerUp");
		
		AStorageBox_TekGenerator_C_FinishPowerUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoRefreshPoweredStructures
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::DoRefreshPoweredStructures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoRefreshPoweredStructures");
		
		AStorageBox_TekGenerator_C_DoRefreshPoweredStructures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetSetForceDisplayRadius
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newForceDisplayRadius                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_TekGenerator_C::NetSetForceDisplayRadius(bool newForceDisplayRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetSetForceDisplayRadius");
		
		AStorageBox_TekGenerator_C_NetSetForceDisplayRadius_Params params {};
		params.newForceDisplayRadius = newForceDisplayRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoNetPulseRadius
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_TekGenerator_C::DoNetPulseRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoNetPulseRadius");
		
		AStorageBox_TekGenerator_C_DoNetPulseRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ExecuteUbergraph_StorageBox_TekGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_TekGenerator_C::ExecuteUbergraph_StorageBox_TekGenerator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ExecuteUbergraph_StorageBox_TekGenerator");
		
		AStorageBox_TekGenerator_C_ExecuteUbergraph_StorageBox_TekGenerator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStorageBox_TekGenerator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStorageBox_TekGenerator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_TekGenerator.StorageBox_TekGenerator_C");
		return ptr;
	}

}


