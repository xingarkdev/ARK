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
	 * 		Name   -> Function DinoCharacterStatusComponent_BP_Leedsichthys.DinoCharacterStatusComponent_BP_Leedsichthys_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Leedsichthys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoCharacterStatusComponent_BP_Leedsichthys_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Leedsichthys(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Leedsichthys.DinoCharacterStatusComponent_BP_Leedsichthys_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Leedsichthys");
		
		UDinoCharacterStatusComponent_BP_Leedsichthys_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Leedsichthys_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoCharacterStatusComponent_BP_Leedsichthys_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoCharacterStatusComponent_BP_Leedsichthys_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Leedsichthys.DinoCharacterStatusComponent_BP_Leedsichthys_C");
		return ptr;
	}

}


