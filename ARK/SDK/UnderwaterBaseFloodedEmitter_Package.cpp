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
	 * 		Name   -> Function UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwaterBaseFloodedEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C.UserConstructionScript");
		
		AUnderwaterBaseFloodedEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C.ExecuteUbergraph_UnderwaterBaseFloodedEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUnderwaterBaseFloodedEmitter_C::ExecuteUbergraph_UnderwaterBaseFloodedEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C.ExecuteUbergraph_UnderwaterBaseFloodedEmitter");
		
		AUnderwaterBaseFloodedEmitter_C_ExecuteUbergraph_UnderwaterBaseFloodedEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnderwaterBaseFloodedEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnderwaterBaseFloodedEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C");
		return ptr;
	}

}


