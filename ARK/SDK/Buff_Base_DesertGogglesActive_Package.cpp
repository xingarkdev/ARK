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
	 * 		Name   -> Function Buff_Base_DesertGogglesActive.Buff_Base_DesertGogglesActive_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Base_DesertGogglesActive_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_DesertGogglesActive.Buff_Base_DesertGogglesActive_C.UserConstructionScript");
		
		ABuff_Base_DesertGogglesActive_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Base_DesertGogglesActive.Buff_Base_DesertGogglesActive_C.ExecuteUbergraph_Buff_Base_DesertGogglesActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Base_DesertGogglesActive_C::ExecuteUbergraph_Buff_Base_DesertGogglesActive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_DesertGogglesActive.Buff_Base_DesertGogglesActive_C.ExecuteUbergraph_Buff_Base_DesertGogglesActive");
		
		ABuff_Base_DesertGogglesActive_C_ExecuteUbergraph_Buff_Base_DesertGogglesActive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Base_DesertGogglesActive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Base_DesertGogglesActive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_DesertGogglesActive.Buff_Base_DesertGogglesActive_C");
		return ptr;
	}

}


