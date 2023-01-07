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
	 * 		Name   -> Function DinoDropInventoryComponent_Kaiju_Ice.DinoDropInventoryComponent_Kaiju_Ice_C.ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Ice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Kaiju_Ice_C::ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Ice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Kaiju_Ice.DinoDropInventoryComponent_Kaiju_Ice_C.ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Ice");
		
		UDinoDropInventoryComponent_Kaiju_Ice_C_ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Ice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Kaiju_Ice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Kaiju_Ice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Kaiju_Ice.DinoDropInventoryComponent_Kaiju_Ice_C");
		return ptr;
	}

}


