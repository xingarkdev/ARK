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
	 * 		Name   -> Function DataListEntryWidgetPrimalItemHairStyle.DataListEntryWidgetPrimalItemHairStyle_C.ExecuteUbergraph_DataListEntryWidgetPrimalItemHairStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEntryWidgetPrimalItemHairStyle_C::ExecuteUbergraph_DataListEntryWidgetPrimalItemHairStyle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItemHairStyle.DataListEntryWidgetPrimalItemHairStyle_C.ExecuteUbergraph_DataListEntryWidgetPrimalItemHairStyle");
		
		UDataListEntryWidgetPrimalItemHairStyle_C_ExecuteUbergraph_DataListEntryWidgetPrimalItemHairStyle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetPrimalItemHairStyle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetPrimalItemHairStyle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItemHairStyle.DataListEntryWidgetPrimalItemHairStyle_C");
		return ptr;
	}

}


