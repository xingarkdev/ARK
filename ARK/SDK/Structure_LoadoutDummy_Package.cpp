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
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AStructure_LoadoutDummy_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPServerHandleNetExecCommand");
		
		AStructure_LoadoutDummy_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UpdateInventorySize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_LoadoutDummy_C::UpdateInventorySize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UpdateInventorySize");
		
		AStructure_LoadoutDummy_C_UpdateInventorySize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.GetCurrentlyUsedHotbarSlots
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            OutUsedSlots                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::GetCurrentlyUsedHotbarSlots(int32_t* OutUsedSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.GetCurrentlyUsedHotbarSlots");
		
		AStructure_LoadoutDummy_C_GetCurrentlyUsedHotbarSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUsedSlots != nullptr)
			*OutUsedSlots = params.OutUsedSlots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_CurrentMaxInventoryItems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_LoadoutDummy_C::OnRep_CurrentMaxInventoryItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_CurrentMaxInventoryItems");
		
		AStructure_LoadoutDummy_C_OnRep_CurrentMaxInventoryItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddItemSafe
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   toInventory                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   FromInventory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontStack                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   AnotherFallbackInventory                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 InsertAfterItem                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 OutItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAddedToTarget                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::AddItemSafe(class UPrimalItem* Item, class UPrimalInventoryComponent* toInventory, class UPrimalInventoryComponent* FromInventory, class AShooterCharacter* OwningPlayer, bool bDontStack, class UPrimalInventoryComponent* AnotherFallbackInventory, class UPrimalItem* InsertAfterItem, class UPrimalItem** OutItem, bool* bAddedToTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddItemSafe");
		
		AStructure_LoadoutDummy_C_AddItemSafe_Params params {};
		params.Item = Item;
		params.toInventory = toInventory;
		params.FromInventory = FromInventory;
		params.OwningPlayer = OwningPlayer;
		params.bDontStack = bDontStack;
		params.AnotherFallbackInventory = AnotherFallbackInventory;
		params.InsertAfterItem = InsertAfterItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
		if (bAddedToTarget != nullptr)
			*bAddedToTarget = params.bAddedToTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddAndEquipItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   toInventory                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   FromInventory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::AddAndEquipItem(class UPrimalItem* Item, class UPrimalInventoryComponent* toInventory, class UPrimalInventoryComponent* FromInventory, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddAndEquipItem");
		
		AStructure_LoadoutDummy_C_AddAndEquipItem_Params params {};
		params.Item = Item;
		params.toInventory = toInventory;
		params.FromInventory = FromInventory;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddToOverflowDroppedInventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 newItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::AddToOverflowDroppedInventory(class UPrimalItem* anItem, class UPrimalItem** newItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddToOverflowDroppedInventory");
		
		AStructure_LoadoutDummy_C_AddToOverflowDroppedInventory_Params params {};
		params.anItem = anItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newItem != nullptr)
			*newItem = params.newItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPNotifyInventoryItemChange");
		
		AStructure_LoadoutDummy_C_BPNotifyInventoryItemChange_Params params {};
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
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.IsControllerValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::IsControllerValid(class APlayerController* Controller, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.IsControllerValid");
		
		AStructure_LoadoutDummy_C_IsControllerValid_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetHotbarCurrentHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_LoadoutDummy_C::SetHotbarCurrentHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetHotbarCurrentHealth");
		
		AStructure_LoadoutDummy_C_SetHotbarCurrentHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_LoadoutDummy_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveDestroyed");
		
		AStructure_LoadoutDummy_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPPlacedStructure");
		
		AStructure_LoadoutDummy_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPClientDoMultiUse");
		
		AStructure_LoadoutDummy_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPOnDemolish
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPOnDemolish");
		
		AStructure_LoadoutDummy_C_BPOnDemolish_Params params {};
		params.ForPC = ForPC;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetTextRendererColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_LoadoutDummy_C::SetTextRendererColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetTextRendererColor");
		
		AStructure_LoadoutDummy_C_SetTextRendererColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_HotbarID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_LoadoutDummy_C::OnRep_HotbarID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_HotbarID");
		
		AStructure_LoadoutDummy_C_OnRep_HotbarID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.CreateHotbarStructure
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::CreateHotbarStructure(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.CreateHotbarStructure");
		
		AStructure_LoadoutDummy_C_CreateHotbarStructure_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Everything
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::FillDummyEverything(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Everything");
		
		AStructure_LoadoutDummy_C_FillDummyEverything_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Everything
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::FillCharacterEverything(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Everything");
		
		AStructure_LoadoutDummy_C_FillCharacterEverything_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Inventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::FillDummyInventory(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Inventory");
		
		AStructure_LoadoutDummy_C_FillDummyInventory_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Inventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::FillCharacterInventory(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Inventory");
		
		AStructure_LoadoutDummy_C_FillCharacterInventory_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap Everything
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::SwapEverything(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap Everything");
		
		AStructure_LoadoutDummy_C_SwapEverything_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Inventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIncludingHotbar                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::SwapAllInventory(class APlayerController* PC, bool bIncludingHotbar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Inventory");
		
		AStructure_LoadoutDummy_C_SwapAllInventory_Params params {};
		params.PC = PC;
		params.bIncludingHotbar = bIncludingHotbar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Hotbar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UPrimalItem*>                         CachedCharacterItems                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AStructure_LoadoutDummy_C::SwapAllHotbar(class APlayerController* PC, TArray<class UPrimalItem*>* CachedCharacterItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Hotbar");
		
		AStructure_LoadoutDummy_C_SwapAllHotbar_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CachedCharacterItems != nullptr)
			*CachedCharacterItems = params.CachedCharacterItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Hotbar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::FillDummyHotbar(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Hotbar");
		
		AStructure_LoadoutDummy_C_FillDummyHotbar_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Hotbar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::FillCharacterHotbar(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Hotbar");
		
		AStructure_LoadoutDummy_C_FillCharacterHotbar_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Equipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::FillDummyEquipment(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Equipment");
		
		AStructure_LoadoutDummy_C_FillDummyEquipment_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Equipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::FillCharacterEquipment(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Equipment");
		
		AStructure_LoadoutDummy_C_FillCharacterEquipment_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SwapAllEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::SwapAllEquipment(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SwapAllEquipment");
		
		AStructure_LoadoutDummy_C_SwapAllEquipment_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructure_LoadoutDummy_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPTryMultiUse");
		
		AStructure_LoadoutDummy_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AStructure_LoadoutDummy_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPGetMultiUseEntries");
		
		AStructure_LoadoutDummy_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_LoadoutDummy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UserConstructionScript");
		
		AStructure_LoadoutDummy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveEndPlay");
		
		AStructure_LoadoutDummy_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_LoadoutDummy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveBeginPlay");
		
		AStructure_LoadoutDummy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ExecuteUbergraph_Structure_LoadoutDummy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_LoadoutDummy_C::ExecuteUbergraph_Structure_LoadoutDummy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ExecuteUbergraph_Structure_LoadoutDummy");
		
		AStructure_LoadoutDummy_C_ExecuteUbergraph_Structure_LoadoutDummy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_LoadoutDummy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_LoadoutDummy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_LoadoutDummy.Structure_LoadoutDummy_C");
		return ptr;
	}

}


