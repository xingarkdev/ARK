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
	 * 		Name   -> Function LanceDismountedEmitter.LanceDismountedEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALanceDismountedEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanceDismountedEmitter.LanceDismountedEmitter_C.UserConstructionScript");
		
		ALanceDismountedEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function LanceDismountedEmitter.LanceDismountedEmitter_C.ExecuteUbergraph_LanceDismountedEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALanceDismountedEmitter_C::ExecuteUbergraph_LanceDismountedEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanceDismountedEmitter.LanceDismountedEmitter_C.ExecuteUbergraph_LanceDismountedEmitter");
		
		ALanceDismountedEmitter_C_ExecuteUbergraph_LanceDismountedEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALanceDismountedEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALanceDismountedEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LanceDismountedEmitter.LanceDismountedEmitter_C");
		return ptr;
	}

}


