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
	 * 		Name   -> Function PrimalItemStructure_MetalSign.PrimalItemStructure_MetalSign_C.ExecuteUbergraph_PrimalItemStructure_MetalSign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_MetalSign_C::ExecuteUbergraph_PrimalItemStructure_MetalSign(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalSign.PrimalItemStructure_MetalSign_C.ExecuteUbergraph_PrimalItemStructure_MetalSign");
		
		UPrimalItemStructure_MetalSign_C_ExecuteUbergraph_PrimalItemStructure_MetalSign_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_MetalSign_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_MetalSign_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalSign.PrimalItemStructure_MetalSign_C");
		return ptr;
	}

}


