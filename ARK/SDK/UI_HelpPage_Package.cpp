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
	 * 		Name   -> Function UI_HelpPage.UI_HelpPage_C.ExecuteUbergraph_UI_HelpPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HelpPage_C::ExecuteUbergraph_UI_HelpPage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HelpPage.UI_HelpPage_C.ExecuteUbergraph_UI_HelpPage");
		
		UUI_HelpPage_C_ExecuteUbergraph_UI_HelpPage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HelpPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HelpPage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HelpPage.UI_HelpPage_C");
		return ptr;
	}

}


