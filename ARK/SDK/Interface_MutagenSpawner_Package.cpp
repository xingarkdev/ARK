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
	 * 		Name   -> Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.AdjustableSpawnDelayChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInterface_MutagenSpawner_C::AdjustableSpawnDelayChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.AdjustableSpawnDelayChanged");
		
		UInterface_MutagenSpawner_C_AdjustableSpawnDelayChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.itemPickedUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           ByPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_MutagenSpawner_C::itemPickedUp(class AActor* Item, class APlayerController* ByPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.itemPickedUp");
		
		UInterface_MutagenSpawner_C_itemPickedUp_Params params {};
		params.Item = Item;
		params.ByPC = ByPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.SpawnItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Manager                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      SpawnedItem                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_MutagenSpawner_C::SpawnItem(class AActor* Manager, class AActor** SpawnedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.SpawnItem");
		
		UInterface_MutagenSpawner_C_SpawnItem_Params params {};
		params.Manager = Manager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedItem != nullptr)
			*SpawnedItem = params.SpawnedItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterface_MutagenSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterface_MutagenSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Interface_MutagenSpawner.Interface_MutagenSpawner_C");
		return ptr;
	}

}


