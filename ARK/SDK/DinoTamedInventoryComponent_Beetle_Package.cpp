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
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CraftItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemToCraftIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::CraftItem(int32_t ItemToCraftIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CraftItem");
		
		UDinoTamedInventoryComponent_Beetle_C_CraftItem_Params params {};
		params.ItemToCraftIndex = ItemToCraftIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInventoryRefresh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::BPInventoryRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInventoryRefresh");
		
		UDinoTamedInventoryComponent_Beetle_C_BPInventoryRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInitializeInventory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::BPInitializeInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInitializeInventory");
		
		UDinoTamedInventoryComponent_Beetle_C_BPInitializeInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CheckIfAnythingNewCanBeCrafted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::CheckIfAnythingNewCanBeCrafted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CheckIfAnythingNewCanBeCrafted");
		
		UDinoTamedInventoryComponent_Beetle_C_CheckIfAnythingNewCanBeCrafted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.Initial Set Crafting Times
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::InitialSetCraftingTimes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.Initial Set Crafting Times");
		
		UDinoTamedInventoryComponent_Beetle_C_InitialSetCraftingTimes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.TryToCraft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::TryToCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.TryToCraft");
		
		UDinoTamedInventoryComponent_Beetle_C_TryToCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.UnsetAll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::UnsetAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.UnsetAll");
		
		UDinoTamedInventoryComponent_Beetle_C_UnsetAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.HasEnoughResources
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IndexClassToCheck                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               hasEnough                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumberOfTimesCanCraft                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::HasEnoughResources(int32_t IndexClassToCheck, bool* hasEnough, int32_t* NumberOfTimesCanCraft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.HasEnoughResources");
		
		UDinoTamedInventoryComponent_Beetle_C_HasEnoughResources_Params params {};
		params.IndexClassToCheck = IndexClassToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasEnough != nullptr)
			*hasEnough = params.hasEnough;
		if (NumberOfTimesCanCraft != nullptr)
			*NumberOfTimesCanCraft = params.NumberOfTimesCanCraft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.RemoveUncraftable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::RemoveUncraftable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.RemoveUncraftable");
		
		UDinoTamedInventoryComponent_Beetle_C_RemoveUncraftable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemAdded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemAdded");
		
		UDinoTamedInventoryComponent_Beetle_C_BPNotifyItemAdded_Params params {};
		params.anItem = anItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemRemoved
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::BPNotifyItemRemoved(class UPrimalItem* anItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemRemoved");
		
		UDinoTamedInventoryComponent_Beetle_C_BPNotifyItemRemoved_Params params {};
		params.anItem = anItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Beetle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_Beetle_C::ExecuteUbergraph_DinoTamedInventoryComponent_Beetle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Beetle");
		
		UDinoTamedInventoryComponent_Beetle_C_ExecuteUbergraph_DinoTamedInventoryComponent_Beetle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Beetle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Beetle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C");
		return ptr;
	}

}


