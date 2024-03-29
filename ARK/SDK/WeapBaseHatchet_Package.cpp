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
	 * 		Name   -> Function WeapBaseHatchet.WeapBaseHatchet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapBaseHatchet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBaseHatchet.WeapBaseHatchet_C.UserConstructionScript");
		
		AWeapBaseHatchet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapBaseHatchet.WeapBaseHatchet_C.ExecuteUbergraph_WeapBaseHatchet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapBaseHatchet_C::ExecuteUbergraph_WeapBaseHatchet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBaseHatchet.WeapBaseHatchet_C.ExecuteUbergraph_WeapBaseHatchet");
		
		AWeapBaseHatchet_C_ExecuteUbergraph_WeapBaseHatchet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapBaseHatchet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapBaseHatchet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapBaseHatchet.WeapBaseHatchet_C");
		return ptr;
	}

}


