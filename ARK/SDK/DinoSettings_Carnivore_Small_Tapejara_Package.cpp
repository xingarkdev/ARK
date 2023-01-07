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
	 * 		Name   -> Function DinoSettings_Carnivore_Small_Tapejara.DinoSettings_Carnivore_Small_Tapejara_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Tapejara
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Carnivore_Small_Tapejara_C::ExecuteUbergraph_DinoSettings_Carnivore_Small_Tapejara(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Small_Tapejara.DinoSettings_Carnivore_Small_Tapejara_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Tapejara");
		
		UDinoSettings_Carnivore_Small_Tapejara_C_ExecuteUbergraph_DinoSettings_Carnivore_Small_Tapejara_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Carnivore_Small_Tapejara_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Carnivore_Small_Tapejara_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore_Small_Tapejara.DinoSettings_Carnivore_Small_Tapejara_C");
		return ptr;
	}

}


