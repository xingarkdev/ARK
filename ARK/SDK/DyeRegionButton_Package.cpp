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
	 * 		Name   -> Function DyeRegionButton.DyeRegionButton_C.ExecuteUbergraph_DyeRegionButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDyeRegionButton_C::ExecuteUbergraph_DyeRegionButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DyeRegionButton.DyeRegionButton_C.ExecuteUbergraph_DyeRegionButton");
		
		UDyeRegionButton_C_ExecuteUbergraph_DyeRegionButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDyeRegionButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDyeRegionButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DyeRegionButton.DyeRegionButton_C");
		return ptr;
	}

}


