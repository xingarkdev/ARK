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
	 * 		Name   -> Function MuzzleFlashEmitter.MuzzleFlashEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMuzzleFlashEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitter.MuzzleFlashEmitter_C.UserConstructionScript");
		
		AMuzzleFlashEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MuzzleFlashEmitter.MuzzleFlashEmitter_C.ExecuteUbergraph_MuzzleFlashEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMuzzleFlashEmitter_C::ExecuteUbergraph_MuzzleFlashEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitter.MuzzleFlashEmitter_C.ExecuteUbergraph_MuzzleFlashEmitter");
		
		AMuzzleFlashEmitter_C_ExecuteUbergraph_MuzzleFlashEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMuzzleFlashEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMuzzleFlashEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MuzzleFlashEmitter.MuzzleFlashEmitter_C");
		return ptr;
	}

}


