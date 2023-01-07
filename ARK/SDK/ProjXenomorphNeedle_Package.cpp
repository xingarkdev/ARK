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
	 * 		Name   -> Function ProjXenomorphNeedle.ProjXenomorphNeedle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjXenomorphNeedle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjXenomorphNeedle.ProjXenomorphNeedle_C.UserConstructionScript");
		
		AProjXenomorphNeedle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjXenomorphNeedle.ProjXenomorphNeedle_C.ExecuteUbergraph_ProjXenomorphNeedle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjXenomorphNeedle_C::ExecuteUbergraph_ProjXenomorphNeedle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjXenomorphNeedle.ProjXenomorphNeedle_C.ExecuteUbergraph_ProjXenomorphNeedle");
		
		AProjXenomorphNeedle_C_ExecuteUbergraph_ProjXenomorphNeedle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjXenomorphNeedle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjXenomorphNeedle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjXenomorphNeedle.ProjXenomorphNeedle_C");
		return ptr;
	}

}


