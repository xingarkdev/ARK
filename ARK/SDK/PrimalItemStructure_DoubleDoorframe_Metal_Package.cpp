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
	 * 		Name   -> Function PrimalItemStructure_DoubleDoorframe_Metal.PrimalItemStructure_DoubleDoorframe_Metal_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Metal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_DoubleDoorframe_Metal_C::ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Metal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_DoubleDoorframe_Metal.PrimalItemStructure_DoubleDoorframe_Metal_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Metal");
		
		UPrimalItemStructure_DoubleDoorframe_Metal_C_ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Metal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_DoubleDoorframe_Metal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_DoubleDoorframe_Metal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoorframe_Metal.PrimalItemStructure_DoubleDoorframe_Metal_C");
		return ptr;
	}

}


