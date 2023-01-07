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
	 * 		Name   -> Function DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_NoStasisDelete_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C.UserConstructionScript");
		
		ADroppedItemGeneric_NoStasisDelete_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C.ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_NoStasisDelete_C::ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C.ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete");
		
		ADroppedItemGeneric_NoStasisDelete_C_ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItemGeneric_NoStasisDelete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItemGeneric_NoStasisDelete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C");
		return ptr;
	}

}


