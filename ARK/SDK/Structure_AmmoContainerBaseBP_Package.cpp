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
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyAmmoBoxReloadedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ReloadedStructure                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_AmmoContainerBaseBP_C::BPNotifyAmmoBoxReloadedStructure(class APrimalStructure* ReloadedStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyAmmoBoxReloadedStructure");
		
		AStructure_AmmoContainerBaseBP_C_BPNotifyAmmoBoxReloadedStructure_Params params {};
		params.ReloadedStructure = ReloadedStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.OnRep_bVisualRadiusIsActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_AmmoContainerBaseBP_C::OnRep_bVisualRadiusIsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.OnRep_bVisualRadiusIsActive");
		
		AStructure_AmmoContainerBaseBP_C_OnRep_bVisualRadiusIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AStructure_AmmoContainerBaseBP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseEntries");
		
		AStructure_AmmoContainerBaseBP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_AmmoContainerBaseBP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPClientDoMultiUse");
		
		AStructure_AmmoContainerBaseBP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseCenterText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutCenterText                                              (Parm, OutParm, ZeroConstructor)
	 * 		struct FLinearColor                                OutCenterTextColor                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructure_AmmoContainerBaseBP_C::BPGetMultiUseCenterText(class APlayerController* ForPC, int32_t UseIndex, class FString* OutCenterText, struct FLinearColor* OutCenterTextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseCenterText");
		
		AStructure_AmmoContainerBaseBP_C_BPGetMultiUseCenterText_Params params {};
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
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructure_AmmoContainerBaseBP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPTryMultiUse");
		
		AStructure_AmmoContainerBaseBP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetAmmoBoxReloadPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AStructure_AmmoContainerBaseBP_C::BPGetAmmoBoxReloadPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetAmmoBoxReloadPercent");
		
		AStructure_AmmoContainerBaseBP_C_BPGetAmmoBoxReloadPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_AmmoContainerBaseBP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyInventoryItemChange");
		
		AStructure_AmmoContainerBaseBP_C_BPNotifyInventoryItemChange_Params params {};
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
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoTypeVisuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_AmmoContainerBaseBP_C::UpdateAmmoTypeVisuals(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoTypeVisuals");
		
		AStructure_AmmoContainerBaseBP_C_UpdateAmmoTypeVisuals_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.CheckNearbyPlayers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_AmmoContainerBaseBP_C::CheckNearbyPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.CheckNearbyPlayers");
		
		AStructure_AmmoContainerBaseBP_C_CheckNearbyPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPOverrideCantBuildReasonString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CantBuildReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString AStructure_AmmoContainerBaseBP_C::BPOverrideCantBuildReasonString(int32_t CantBuildReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPOverrideCantBuildReasonString");
		
		AStructure_AmmoContainerBaseBP_C_BPOverrideCantBuildReasonString_Params params {};
		params.CantBuildReason = CantBuildReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPIsAllowedToBuild
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentAllowedReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AStructure_AmmoContainerBaseBP_C::BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPIsAllowedToBuild");
		
		AStructure_AmmoContainerBaseBP_C_BPIsAllowedToBuild_Params params {};
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
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoChanges
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_AmmoContainerBaseBP_C::UpdateAmmoChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoChanges");
		
		AStructure_AmmoContainerBaseBP_C_UpdateAmmoChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ChangeInAmmo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumChange                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_AmmoContainerBaseBP_C::ChangeInAmmo(int32_t NumChange, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ChangeInAmmo");
		
		AStructure_AmmoContainerBaseBP_C_ChangeInAmmo_Params params {};
		params.NumChange = NumChange;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetQuantityOfItemWithoutCheckingInventory
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemToCheckFor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AStructure_AmmoContainerBaseBP_C::BPGetQuantityOfItemWithoutCheckingInventory(class UClass* ItemToCheckFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetQuantityOfItemWithoutCheckingInventory");
		
		AStructure_AmmoContainerBaseBP_C_BPGetQuantityOfItemWithoutCheckingInventory_Params params {};
		params.ItemToCheckFor = ItemToCheckFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_AmmoContainerBaseBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UserConstructionScript");
		
		AStructure_AmmoContainerBaseBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_AmmoContainerBaseBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ReceiveBeginPlay");
		
		AStructure_AmmoContainerBaseBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multicast_UpdateAmmoVisuals
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_AmmoContainerBaseBP_C::Multicast_UpdateAmmoVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multicast_UpdateAmmoVisuals");
		
		AStructure_AmmoContainerBaseBP_C_Multicast_UpdateAmmoVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.FullRecheckInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_AmmoContainerBaseBP_C::FullRecheckInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.FullRecheckInventory");
		
		AStructure_AmmoContainerBaseBP_C_FullRecheckInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multi_PlayReloadParticle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ReloadedStructure                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_AmmoContainerBaseBP_C::Multi_PlayReloadParticle(class APrimalStructure* ReloadedStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multi_PlayReloadParticle");
		
		AStructure_AmmoContainerBaseBP_C_Multi_PlayReloadParticle_Params params {};
		params.ReloadedStructure = ReloadedStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.PlayReloadParticle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ReloadedStructure                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_AmmoContainerBaseBP_C::PlayReloadParticle(class APrimalStructure* ReloadedStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.PlayReloadParticle");
		
		AStructure_AmmoContainerBaseBP_C_PlayReloadParticle_Params params {};
		params.ReloadedStructure = ReloadedStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ExecuteUbergraph_Structure_AmmoContainerBaseBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_AmmoContainerBaseBP_C::ExecuteUbergraph_Structure_AmmoContainerBaseBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ExecuteUbergraph_Structure_AmmoContainerBaseBP");
		
		AStructure_AmmoContainerBaseBP_C_ExecuteUbergraph_Structure_AmmoContainerBaseBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_AmmoContainerBaseBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_AmmoContainerBaseBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C");
		return ptr;
	}

}


