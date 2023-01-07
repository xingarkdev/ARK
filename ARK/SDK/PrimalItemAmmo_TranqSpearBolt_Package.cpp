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
	 * 		Name   -> Function PrimalItemAmmo_TranqSpearBolt.PrimalItemAmmo_TranqSpearBolt_C.ExecuteUbergraph_PrimalItemAmmo_TranqSpearBolt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemAmmo_TranqSpearBolt_C::ExecuteUbergraph_PrimalItemAmmo_TranqSpearBolt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_TranqSpearBolt.PrimalItemAmmo_TranqSpearBolt_C.ExecuteUbergraph_PrimalItemAmmo_TranqSpearBolt");
		
		UPrimalItemAmmo_TranqSpearBolt_C_ExecuteUbergraph_PrimalItemAmmo_TranqSpearBolt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemAmmo_TranqSpearBolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemAmmo_TranqSpearBolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_TranqSpearBolt.PrimalItemAmmo_TranqSpearBolt_C");
		return ptr;
	}

}


