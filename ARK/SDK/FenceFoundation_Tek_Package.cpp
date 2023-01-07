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
	 * 		Name   -> Function FenceFoundation_Tek.FenceFoundation_Tek_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenceFoundation_Tek_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FenceFoundation_Tek.FenceFoundation_Tek_C.UserConstructionScript");
		
		AFenceFoundation_Tek_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FenceFoundation_Tek.FenceFoundation_Tek_C.ExecuteUbergraph_FenceFoundation_Tek
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenceFoundation_Tek_C::ExecuteUbergraph_FenceFoundation_Tek(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FenceFoundation_Tek.FenceFoundation_Tek_C.ExecuteUbergraph_FenceFoundation_Tek");
		
		AFenceFoundation_Tek_C_ExecuteUbergraph_FenceFoundation_Tek_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFenceFoundation_Tek_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFenceFoundation_Tek_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FenceFoundation_Tek.FenceFoundation_Tek_C");
		return ptr;
	}

}


