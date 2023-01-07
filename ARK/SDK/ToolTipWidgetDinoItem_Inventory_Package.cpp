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
	 * 		Name   -> Function ToolTipWidgetDinoItem_Inventory.ToolTipWidgetDinoItem_Inventory_C.ExecuteUbergraph_ToolTipWidgetDinoItem_Inventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UToolTipWidgetDinoItem_Inventory_C::ExecuteUbergraph_ToolTipWidgetDinoItem_Inventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTipWidgetDinoItem_Inventory.ToolTipWidgetDinoItem_Inventory_C.ExecuteUbergraph_ToolTipWidgetDinoItem_Inventory");
		
		UToolTipWidgetDinoItem_Inventory_C_ExecuteUbergraph_ToolTipWidgetDinoItem_Inventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTipWidgetDinoItem_Inventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetDinoItem_Inventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetDinoItem_Inventory.ToolTipWidgetDinoItem_Inventory_C");
		return ptr;
	}

}


