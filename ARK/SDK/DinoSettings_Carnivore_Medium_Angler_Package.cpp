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
	 * 		Name   -> Function DinoSettings_Carnivore_Medium_Angler.DinoSettings_Carnivore_Medium_Angler_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_Angler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Carnivore_Medium_Angler_C::ExecuteUbergraph_DinoSettings_Carnivore_Medium_Angler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Medium_Angler.DinoSettings_Carnivore_Medium_Angler_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_Angler");
		
		UDinoSettings_Carnivore_Medium_Angler_C_ExecuteUbergraph_DinoSettings_Carnivore_Medium_Angler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Carnivore_Medium_Angler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Carnivore_Medium_Angler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore_Medium_Angler.DinoSettings_Carnivore_Medium_Angler_C");
		return ptr;
	}

}


