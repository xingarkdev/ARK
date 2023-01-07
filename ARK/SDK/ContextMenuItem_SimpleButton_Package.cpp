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
	 * 		Name   -> Function ContextMenuItem_SimpleButton.ContextMenuItem_SimpleButton_C.ExecuteUbergraph_ContextMenuItem_SimpleButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContextMenuItem_SimpleButton_C::ExecuteUbergraph_ContextMenuItem_SimpleButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuItem_SimpleButton.ContextMenuItem_SimpleButton_C.ExecuteUbergraph_ContextMenuItem_SimpleButton");
		
		UContextMenuItem_SimpleButton_C_ExecuteUbergraph_ContextMenuItem_SimpleButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextMenuItem_SimpleButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextMenuItem_SimpleButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenuItem_SimpleButton.ContextMenuItem_SimpleButton_C");
		return ptr;
	}

}


