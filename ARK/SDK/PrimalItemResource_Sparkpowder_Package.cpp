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
	 * 		Name   -> Function PrimalItemResource_Sparkpowder.PrimalItemResource_Sparkpowder_C.ExecuteUbergraph_PrimalItemResource_Sparkpowder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemResource_Sparkpowder_C::ExecuteUbergraph_PrimalItemResource_Sparkpowder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Sparkpowder.PrimalItemResource_Sparkpowder_C.ExecuteUbergraph_PrimalItemResource_Sparkpowder");
		
		UPrimalItemResource_Sparkpowder_C_ExecuteUbergraph_PrimalItemResource_Sparkpowder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemResource_Sparkpowder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemResource_Sparkpowder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Sparkpowder.PrimalItemResource_Sparkpowder_C");
		return ptr;
	}

}


