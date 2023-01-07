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
	 * 		Name   -> Function CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C.ExecuteUbergraph_CryopodInventoryTooltipWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCryopodInventoryTooltipWidget_C::ExecuteUbergraph_CryopodInventoryTooltipWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C.ExecuteUbergraph_CryopodInventoryTooltipWidget");
		
		UCryopodInventoryTooltipWidget_C_ExecuteUbergraph_CryopodInventoryTooltipWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCryopodInventoryTooltipWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCryopodInventoryTooltipWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C");
		return ptr;
	}

}


