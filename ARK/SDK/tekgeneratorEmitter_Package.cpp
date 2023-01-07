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
	 * 		Name   -> Function tekgeneratorEmitter.TekGeneratorEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekGeneratorEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tekgeneratorEmitter.TekGeneratorEmitter_C.UserConstructionScript");
		
		ATekGeneratorEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function tekgeneratorEmitter.TekGeneratorEmitter_C.ExecuteUbergraph_TekGeneratorEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekGeneratorEmitter_C::ExecuteUbergraph_TekGeneratorEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tekgeneratorEmitter.TekGeneratorEmitter_C.ExecuteUbergraph_TekGeneratorEmitter");
		
		ATekGeneratorEmitter_C_ExecuteUbergraph_TekGeneratorEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekGeneratorEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekGeneratorEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass tekgeneratorEmitter.TekGeneratorEmitter_C");
		return ptr;
	}

}


