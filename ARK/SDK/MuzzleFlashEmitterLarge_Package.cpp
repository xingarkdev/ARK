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
	 * 		Name   -> Function MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMuzzleFlashEmitterLarge_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C.UserConstructionScript");
		
		AMuzzleFlashEmitterLarge_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C.ExecuteUbergraph_MuzzleFlashEmitterLarge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMuzzleFlashEmitterLarge_C::ExecuteUbergraph_MuzzleFlashEmitterLarge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C.ExecuteUbergraph_MuzzleFlashEmitterLarge");
		
		AMuzzleFlashEmitterLarge_C_ExecuteUbergraph_MuzzleFlashEmitterLarge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMuzzleFlashEmitterLarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMuzzleFlashEmitterLarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C");
		return ptr;
	}

}


