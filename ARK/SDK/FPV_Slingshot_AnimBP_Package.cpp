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
	 * 		Name   -> Function FPV_Slingshot_AnimBP.FPV_Slingshot_AnimBP_C.ExecuteUbergraph_FPV_Slingshot_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPV_Slingshot_AnimBP_C::ExecuteUbergraph_FPV_Slingshot_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPV_Slingshot_AnimBP.FPV_Slingshot_AnimBP_C.ExecuteUbergraph_FPV_Slingshot_AnimBP");
		
		UFPV_Slingshot_AnimBP_C_ExecuteUbergraph_FPV_Slingshot_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPV_Slingshot_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPV_Slingshot_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Slingshot_AnimBP.FPV_Slingshot_AnimBP_C");
		return ptr;
	}

}


