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
	 * 		Name   -> Function UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwaterBaseDestroyEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C.UserConstructionScript");
		
		AUnderwaterBaseDestroyEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C.ExecuteUbergraph_UnderwaterBaseDestroyEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUnderwaterBaseDestroyEmitter_C::ExecuteUbergraph_UnderwaterBaseDestroyEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C.ExecuteUbergraph_UnderwaterBaseDestroyEmitter");
		
		AUnderwaterBaseDestroyEmitter_C_ExecuteUbergraph_UnderwaterBaseDestroyEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnderwaterBaseDestroyEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnderwaterBaseDestroyEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C");
		return ptr;
	}

}


