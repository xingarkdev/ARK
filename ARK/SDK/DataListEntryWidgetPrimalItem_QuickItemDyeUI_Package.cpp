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
	 * 		Name   -> Function DataListEntryWidgetPrimalItem_QuickItemDyeUI.DataListEntryWidgetPrimalItem_QuickItemDyeUI_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItemDyeUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItemDyeUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem_QuickItemDyeUI.DataListEntryWidgetPrimalItem_QuickItemDyeUI_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItemDyeUI");
		
		UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItemDyeUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_QuickItemDyeUI.DataListEntryWidgetPrimalItem_QuickItemDyeUI_C");
		return ptr;
	}

}


