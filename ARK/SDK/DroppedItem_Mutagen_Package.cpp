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
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.SpawnItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Manager                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      SpawnedItem                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItem_Mutagen_C::SpawnItem(class AActor* Manager, class AActor** SpawnedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.SpawnItem");
		
		ADroppedItem_Mutagen_C_SpawnItem_Params params {};
		params.Manager = Manager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedItem != nullptr)
			*SpawnedItem = params.SpawnedItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UnlockExplorerNote
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItem_Mutagen_C::UnlockExplorerNote(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UnlockExplorerNote");
		
		ADroppedItem_Mutagen_C_UnlockExplorerNote_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADroppedItem_Mutagen_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPTryMultiUse");
		
		ADroppedItem_Mutagen_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ADroppedItem_Mutagen_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPGetMultiUseEntries");
		
		ADroppedItem_Mutagen_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPOnItemPickedUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ByPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 InventoryItem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItem_Mutagen_C::BPOnItemPickedUp(class APlayerController* ByPC, class UPrimalItem* InventoryItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPOnItemPickedUp");
		
		ADroppedItem_Mutagen_C_BPOnItemPickedUp_Params params {};
		params.ByPC = ByPC;
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_Mutagen_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveBeginPlay");
		
		ADroppedItem_Mutagen_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_Mutagen_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveDestroyed");
		
		ADroppedItem_Mutagen_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_Mutagen_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UserConstructionScript");
		
		ADroppedItem_Mutagen_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.itemPickedUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           ByPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItem_Mutagen_C::itemPickedUp(class AActor* Item, class APlayerController* ByPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.itemPickedUp");
		
		ADroppedItem_Mutagen_C_itemPickedUp_Params params {};
		params.Item = Item;
		params.ByPC = ByPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.AdjustableSpawnDelayChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_Mutagen_C::AdjustableSpawnDelayChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.AdjustableSpawnDelayChanged");
		
		ADroppedItem_Mutagen_C_AdjustableSpawnDelayChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.CheckForFallThrough
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItem_Mutagen_C::CheckForFallThrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.CheckForFallThrough");
		
		ADroppedItem_Mutagen_C_CheckForFallThrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ExecuteUbergraph_DroppedItem_Mutagen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItem_Mutagen_C::ExecuteUbergraph_DroppedItem_Mutagen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ExecuteUbergraph_DroppedItem_Mutagen");
		
		ADroppedItem_Mutagen_C_ExecuteUbergraph_DroppedItem_Mutagen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItem_Mutagen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItem_Mutagen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItem_Mutagen.DroppedItem_Mutagen_C");
		return ptr;
	}

}


