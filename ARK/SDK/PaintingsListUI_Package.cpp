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
	 * 		Name   -> Function PaintingsListUI.PaintingsListUI_C.ExecuteUbergraph_PaintingsListUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPaintingsListUI_C::ExecuteUbergraph_PaintingsListUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintingsListUI.PaintingsListUI_C.ExecuteUbergraph_PaintingsListUI");
		
		UPaintingsListUI_C_ExecuteUbergraph_PaintingsListUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaintingsListUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaintingsListUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PaintingsListUI.PaintingsListUI_C");
		return ptr;
	}

}


