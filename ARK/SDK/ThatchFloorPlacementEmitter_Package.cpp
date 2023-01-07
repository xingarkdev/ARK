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
	 * 		Name   -> Function ThatchFloorPlacementEmitter.ThatchFloorPlacementEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThatchFloorPlacementEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThatchFloorPlacementEmitter.ThatchFloorPlacementEmitter_C.UserConstructionScript");
		
		AThatchFloorPlacementEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ThatchFloorPlacementEmitter.ThatchFloorPlacementEmitter_C.ExecuteUbergraph_ThatchFloorPlacementEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThatchFloorPlacementEmitter_C::ExecuteUbergraph_ThatchFloorPlacementEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThatchFloorPlacementEmitter.ThatchFloorPlacementEmitter_C.ExecuteUbergraph_ThatchFloorPlacementEmitter");
		
		AThatchFloorPlacementEmitter_C_ExecuteUbergraph_ThatchFloorPlacementEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThatchFloorPlacementEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThatchFloorPlacementEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ThatchFloorPlacementEmitter.ThatchFloorPlacementEmitter_C");
		return ptr;
	}

}


