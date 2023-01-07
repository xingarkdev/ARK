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
	 * 		Name   -> Function Gate_Stone_Large.Gate_Stone_Large_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGate_Stone_Large_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gate_Stone_Large.Gate_Stone_Large_C.UserConstructionScript");
		
		AGate_Stone_Large_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Gate_Stone_Large.Gate_Stone_Large_C.ExecuteUbergraph_Gate_Stone_Large
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGate_Stone_Large_C::ExecuteUbergraph_Gate_Stone_Large(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gate_Stone_Large.Gate_Stone_Large_C.ExecuteUbergraph_Gate_Stone_Large");
		
		AGate_Stone_Large_C_ExecuteUbergraph_Gate_Stone_Large_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGate_Stone_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGate_Stone_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gate_Stone_Large.Gate_Stone_Large_C");
		return ptr;
	}

}


