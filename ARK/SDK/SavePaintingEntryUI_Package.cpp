/**
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
	 * 		Name   -> Function SavePaintingEntryUI.SavePaintingEntryUI_C.ExecuteUbergraph_SavePaintingEntryUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USavePaintingEntryUI_C::ExecuteUbergraph_SavePaintingEntryUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SavePaintingEntryUI.SavePaintingEntryUI_C.ExecuteUbergraph_SavePaintingEntryUI");
		
		USavePaintingEntryUI_C_ExecuteUbergraph_SavePaintingEntryUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USavePaintingEntryUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USavePaintingEntryUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SavePaintingEntryUI.SavePaintingEntryUI_C");
		return ptr;
	}

}


