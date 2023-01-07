﻿/**
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
	 * 		Name   -> Function StorageBox_Fabricator.StorageBox_Fabricator_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStorageBox_Fabricator_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_Fabricator.StorageBox_Fabricator_C.UserConstructionScript");
		
		AStorageBox_Fabricator_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StorageBox_Fabricator.StorageBox_Fabricator_C.ExecuteUbergraph_StorageBox_Fabricator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStorageBox_Fabricator_C::ExecuteUbergraph_StorageBox_Fabricator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StorageBox_Fabricator.StorageBox_Fabricator_C.ExecuteUbergraph_StorageBox_Fabricator");
		
		AStorageBox_Fabricator_C_ExecuteUbergraph_StorageBox_Fabricator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStorageBox_Fabricator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStorageBox_Fabricator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_Fabricator.StorageBox_Fabricator_C");
		return ptr;
	}

}


