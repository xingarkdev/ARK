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
	 * 		Name   -> Function CannonMuzzleFlashEmitter.CannonMuzzleFlashEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACannonMuzzleFlashEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CannonMuzzleFlashEmitter.CannonMuzzleFlashEmitter_C.UserConstructionScript");
		
		ACannonMuzzleFlashEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CannonMuzzleFlashEmitter.CannonMuzzleFlashEmitter_C.ExecuteUbergraph_CannonMuzzleFlashEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACannonMuzzleFlashEmitter_C::ExecuteUbergraph_CannonMuzzleFlashEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CannonMuzzleFlashEmitter.CannonMuzzleFlashEmitter_C.ExecuteUbergraph_CannonMuzzleFlashEmitter");
		
		ACannonMuzzleFlashEmitter_C_ExecuteUbergraph_CannonMuzzleFlashEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACannonMuzzleFlashEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACannonMuzzleFlashEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CannonMuzzleFlashEmitter.CannonMuzzleFlashEmitter_C");
		return ptr;
	}

}


