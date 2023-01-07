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
	 * 		Name   -> Function MinigunMuzzleFlashEmitter.MinigunMuzzleFlashEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMinigunMuzzleFlashEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinigunMuzzleFlashEmitter.MinigunMuzzleFlashEmitter_C.UserConstructionScript");
		
		AMinigunMuzzleFlashEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MinigunMuzzleFlashEmitter.MinigunMuzzleFlashEmitter_C.ExecuteUbergraph_MinigunMuzzleFlashEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMinigunMuzzleFlashEmitter_C::ExecuteUbergraph_MinigunMuzzleFlashEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinigunMuzzleFlashEmitter.MinigunMuzzleFlashEmitter_C.ExecuteUbergraph_MinigunMuzzleFlashEmitter");
		
		AMinigunMuzzleFlashEmitter_C_ExecuteUbergraph_MinigunMuzzleFlashEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMinigunMuzzleFlashEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMinigunMuzzleFlashEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MinigunMuzzleFlashEmitter.MinigunMuzzleFlashEmitter_C");
		return ptr;
	}

}


