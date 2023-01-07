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
	 * 		Name   -> Function EggIncubator.EggIncubator_C.IsEggItemAllowed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAllowed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.IsEggItemAllowed");
		
		AEggIncubator_C_IsEggItemAllowed_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAllowed != nullptr)
			*IsAllowed = params.IsAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.GetItemDisplaySlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ForItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InSlot                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SlotFound                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::GetItemDisplaySlot(class UPrimalItem* ForItem, int32_t* InSlot, bool* SlotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetItemDisplaySlot");
		
		AEggIncubator_C_GetItemDisplaySlot_Params params {};
		params.ForItem = ForItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSlot != nullptr)
			*InSlot = params.InSlot;
		if (SlotFound != nullptr)
			*SlotFound = params.SlotFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ClientDisplayGestationMonitorEffectAdded
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  AtLocation                                                 (Parm, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::ClientDisplayGestationMonitorEffectAdded(const struct FTransform& AtLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientDisplayGestationMonitorEffectAdded");
		
		AEggIncubator_C_ClientDisplayGestationMonitorEffectAdded_Params params {};
		params.AtLocation = AtLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.BPNotifyPowerChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::BPNotifyPowerChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPNotifyPowerChanged");
		
		AEggIncubator_C_BPNotifyPowerChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.SetIncubatorMaterialValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::SetIncubatorMaterialValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.SetIncubatorMaterialValues");
		
		AEggIncubator_C_SetIncubatorMaterialValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.UpdateWarmingLights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::UpdateWarmingLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UpdateWarmingLights");
		
		AEggIncubator_C_UpdateWarmingLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.GetWarmingLightForSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ForSlotIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystemComponent*                    WarmingLightComponent                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::GetWarmingLightForSlot(int32_t ForSlotIndex, class UParticleSystemComponent** WarmingLightComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetWarmingLightForSlot");
		
		AEggIncubator_C_GetWarmingLightForSlot_Params params {};
		params.ForSlotIndex = ForSlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WarmingLightComponent != nullptr)
			*WarmingLightComponent = params.WarmingLightComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.DestroyEggDisplay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemID1                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemID2                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::DestroyEggDisplay(int32_t ItemID1, int32_t ItemID2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.DestroyEggDisplay");
		
		AEggIncubator_C_DestroyEggDisplay_Params params {};
		params.ItemID1 = ItemID1;
		params.ItemID2 = ItemID2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.CanEggIncubateInTemp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanIncubate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::CanEggIncubateInTemp(class UPrimalItemConsumable_Egg_C* eggItem, bool* bCanIncubate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.CanEggIncubateInTemp");
		
		AEggIncubator_C_CanEggIncubateInTemp_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanIncubate != nullptr)
			*bCanIncubate = params.bCanIncubate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.UpdateIndoorsStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::UpdateIndoorsStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UpdateIndoorsStatus");
		
		AEggIncubator_C_UpdateIndoorsStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.CalculateIncubationInsulation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::CalculateIncubationInsulation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.CalculateIncubationInsulation");
		
		AEggIncubator_C_CalculateIncubationInsulation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.CanEggBeHatched
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHatchable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::CanEggBeHatched(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsHatchable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.CanEggBeHatched");
		
		AEggIncubator_C_CanEggBeHatched_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsHatchable != nullptr)
			*IsHatchable = params.IsHatchable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.TrySpawnEggToWorld
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EggWasSpawned                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::TrySpawnEggToWorld(class UPrimalItemConsumable_Egg_C* eggItem, bool* EggWasSpawned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.TrySpawnEggToWorld");
		
		AEggIncubator_C_TrySpawnEggToWorld_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EggWasSpawned != nullptr)
			*EggWasSpawned = params.EggWasSpawned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::ThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ThrottledTick");
		
		AEggIncubator_C_ThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ServerSyncEggDisplay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::ServerSyncEggDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ServerSyncEggDisplay");
		
		AEggIncubator_C_ServerSyncEggDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.GetTempBonusRawPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              EggTempLowerBound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EggTempUpperBound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BoostPercent                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::GetTempBonusRawPercent(float EggTempLowerBound, float EggTempUpperBound, float* BoostPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetTempBonusRawPercent");
		
		AEggIncubator_C_GetTempBonusRawPercent_Params params {};
		params.EggTempLowerBound = EggTempLowerBound;
		params.EggTempUpperBound = EggTempUpperBound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoostPercent != nullptr)
			*BoostPercent = params.BoostPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.SetIncubatorCustomDatasForEgg
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::SetIncubatorCustomDatasForEgg(class UPrimalItemConsumable_Egg_C* eggItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.SetIncubatorCustomDatasForEgg");
		
		AEggIncubator_C_SetIncubatorCustomDatasForEgg_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AEggIncubator_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPServerHandleNetExecCommand");
		
		AEggIncubator_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ClientRemoveFertilizedEgg
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::ClientRemoveFertilizedEgg(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientRemoveFertilizedEgg");
		
		AEggIncubator_C_ClientRemoveFertilizedEgg_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ClientAddFertilizedEgg
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUnreplicatedEggData                        ManuallyReplicatedEggData                                  (Parm, OutParm, ReferenceParm)
	 * 		struct FItemNetInfo                                ItemNetInfo                                                (Parm, OutParm, ReferenceParm)
	 */
	void AEggIncubator_C::ClientAddFertilizedEgg(int32_t SlotIndex, struct FUnreplicatedEggData* ManuallyReplicatedEggData, struct FItemNetInfo* ItemNetInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientAddFertilizedEgg");
		
		AEggIncubator_C_ClientAddFertilizedEgg_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ManuallyReplicatedEggData != nullptr)
			*ManuallyReplicatedEggData = params.ManuallyReplicatedEggData;
		if (ItemNetInfo != nullptr)
			*ItemNetInfo = params.ItemNetInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.SetupEggSlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::SetupEggSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.SetupEggSlots");
		
		AEggIncubator_C_SetupEggSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.RefreshEggDisplays
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::RefreshEggDisplays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.RefreshEggDisplays");
		
		AEggIncubator_C_RefreshEggDisplays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.CheckIsFertilizedEgg
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFertilized                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::CheckIsFertilizedEgg(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsFertilized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.CheckIsFertilizedEgg");
		
		AEggIncubator_C_CheckIsFertilizedEgg_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFertilized != nullptr)
			*IsFertilized = params.IsFertilized;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.GetSlotIndexForEggItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SlotIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::GetSlotIndexForEggItem(class UPrimalItemConsumable_Egg_C* eggItem, int32_t* SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetSlotIndexForEggItem");
		
		AEggIncubator_C_GetSlotIndexForEggItem_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotIndex != nullptr)
			*SlotIndex = params.SlotIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.GetFirstAvailableEggSlotIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            EggSlotIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::GetFirstAvailableEggSlotIndex(int32_t* EggSlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetFirstAvailableEggSlotIndex");
		
		AEggIncubator_C_GetFirstAvailableEggSlotIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EggSlotIndex != nullptr)
			*EggSlotIndex = params.EggSlotIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.BPPostInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::BPPostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPPostInitializeComponents");
		
		AEggIncubator_C_BPPostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ServerRemoveFertilizedEgg
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::ServerRemoveFertilizedEgg(class UPrimalItemConsumable_Egg_C* eggItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ServerRemoveFertilizedEgg");
		
		AEggIncubator_C_ServerRemoveFertilizedEgg_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ServerAddFertilizedEgg
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemConsumable_Egg_C*                 eggItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::ServerAddFertilizedEgg(class UPrimalItemConsumable_Egg_C* eggItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ServerAddFertilizedEgg");
		
		AEggIncubator_C_ServerAddFertilizedEgg_Params params {};
		params.eggItem = eggItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AEggIncubator_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPTryMultiUse");
		
		AEggIncubator_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function EggIncubator.EggIncubator_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPClientDoMultiUse");
		
		AEggIncubator_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.AddTempControlEntries
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AEggIncubator_C::AddTempControlEntries(TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.AddTempControlEntries");
		
		AEggIncubator_C_AddTempControlEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AEggIncubator_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPGetMultiUseEntries");
		
		AEggIncubator_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function EggIncubator.EggIncubator_C.BPGetMultiUseCenterText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutCenterText                                              (Parm, OutParm, ZeroConstructor)
	 * 		struct FLinearColor                                OutCenterTextColor                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AEggIncubator_C::BPGetMultiUseCenterText(class APlayerController* ForPC, int32_t UseIndex, class FString* OutCenterText, struct FLinearColor* OutCenterTextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPGetMultiUseCenterText");
		
		AEggIncubator_C_BPGetMultiUseCenterText_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCenterText != nullptr)
			*OutCenterText = params.OutCenterText;
		if (OutCenterTextColor != nullptr)
			*OutCenterTextColor = params.OutCenterTextColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.GetTempControlBonus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              EggTempLowerBound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EggTempUpperBound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TempControlBonusMultiplier                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::GetTempControlBonus(float EggTempLowerBound, float EggTempUpperBound, float* TempControlBonusMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetTempControlBonus");
		
		AEggIncubator_C_GetTempControlBonus_Params params {};
		params.EggTempLowerBound = EggTempLowerBound;
		params.EggTempUpperBound = EggTempUpperBound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TempControlBonusMultiplier != nullptr)
			*TempControlBonusMultiplier = params.TempControlBonusMultiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.UpdateIncubation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::UpdateIncubation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UpdateIncubation");
		
		AEggIncubator_C_UpdateIncubation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.UpdateCachedHatchSpeedMultiplier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::UpdateCachedHatchSpeedMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UpdateCachedHatchSpeedMultiplier");
		
		AEggIncubator_C_UpdateCachedHatchSpeedMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UserConstructionScript");
		
		AEggIncubator_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ClientNotifyAddedEgg
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUnreplicatedEggData                        ManuallyReplicatedEggData                                  (Parm)
	 * 		struct FItemNetInfo                                ItemNetInfo                                                (Parm)
	 */
	void AEggIncubator_C::ClientNotifyAddedEgg(int32_t SlotIndex, const struct FUnreplicatedEggData& ManuallyReplicatedEggData, const struct FItemNetInfo& ItemNetInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientNotifyAddedEgg");
		
		AEggIncubator_C_ClientNotifyAddedEgg_Params params {};
		params.SlotIndex = SlotIndex;
		params.ManuallyReplicatedEggData = ManuallyReplicatedEggData;
		params.ItemNetInfo = ItemNetInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ClientNotifyRemovedEgg
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::ClientNotifyRemovedEgg(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientNotifyRemovedEgg");
		
		AEggIncubator_C_ClientNotifyRemovedEgg_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ReceiveBeginPlay");
		
		AEggIncubator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.MC_DestroyEggVFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemID1                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemID2                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::MC_DestroyEggVFX(int32_t ItemID1, int32_t ItemID2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.MC_DestroyEggVFX");
		
		AEggIncubator_C_MC_DestroyEggVFX_Params params {};
		params.ItemID1 = ItemID1;
		params.ItemID2 = ItemID2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPUnstasis");
		
		AEggIncubator_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.MC_UpdateWarmingLighhts
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::MC_UpdateWarmingLighhts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.MC_UpdateWarmingLighhts");
		
		AEggIncubator_C_MC_UpdateWarmingLighhts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.MC_NotifyPowerChanged
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AEggIncubator_C::MC_NotifyPowerChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.MC_NotifyPowerChanged");
		
		AEggIncubator_C_MC_NotifyPowerChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EggIncubator.EggIncubator_C.ExecuteUbergraph_EggIncubator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEggIncubator_C::ExecuteUbergraph_EggIncubator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ExecuteUbergraph_EggIncubator");
		
		AEggIncubator_C_ExecuteUbergraph_EggIncubator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEggIncubator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEggIncubator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EggIncubator.EggIncubator_C");
		return ptr;
	}

}


