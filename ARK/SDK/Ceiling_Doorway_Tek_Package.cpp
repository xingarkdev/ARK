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
	 * 		Name   -> Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.BPAllowSnappingWith
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            OtherStructure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACeiling_Doorway_Tek_C::BPAllowSnappingWith(class APrimalStructure* OtherStructure, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.BPAllowSnappingWith");
		
		ACeiling_Doorway_Tek_C_BPAllowSnappingWith_Params params {};
		params.OtherStructure = OtherStructure;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACeiling_Doorway_Tek_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.UserConstructionScript");
		
		ACeiling_Doorway_Tek_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.ExecuteUbergraph_Ceiling_Doorway_Tek
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACeiling_Doorway_Tek_C::ExecuteUbergraph_Ceiling_Doorway_Tek(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.ExecuteUbergraph_Ceiling_Doorway_Tek");
		
		ACeiling_Doorway_Tek_C_ExecuteUbergraph_Ceiling_Doorway_Tek_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACeiling_Doorway_Tek_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeiling_Doorway_Tek_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C");
		return ptr;
	}

}


