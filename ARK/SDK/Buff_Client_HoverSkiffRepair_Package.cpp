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
	 * 		Name   -> Function Buff_Client_HoverSkiffRepair.Buff_Client_HoverSkiffRepair_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Client_HoverSkiffRepair_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Client_HoverSkiffRepair.Buff_Client_HoverSkiffRepair_C.UserConstructionScript");
		
		ABuff_Client_HoverSkiffRepair_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Client_HoverSkiffRepair.Buff_Client_HoverSkiffRepair_C.ExecuteUbergraph_Buff_Client_HoverSkiffRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Client_HoverSkiffRepair_C::ExecuteUbergraph_Buff_Client_HoverSkiffRepair(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Client_HoverSkiffRepair.Buff_Client_HoverSkiffRepair_C.ExecuteUbergraph_Buff_Client_HoverSkiffRepair");
		
		ABuff_Client_HoverSkiffRepair_C_ExecuteUbergraph_Buff_Client_HoverSkiffRepair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Client_HoverSkiffRepair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Client_HoverSkiffRepair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Client_HoverSkiffRepair.Buff_Client_HoverSkiffRepair_C");
		return ptr;
	}

}


