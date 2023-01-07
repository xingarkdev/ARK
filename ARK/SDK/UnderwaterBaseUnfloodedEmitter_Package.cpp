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
	 * 		Name   -> Function UnderwaterBaseUnfloodedEmitter.UnderwaterBaseUnfloodedEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwaterBaseUnfloodedEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnderwaterBaseUnfloodedEmitter.UnderwaterBaseUnfloodedEmitter_C.UserConstructionScript");
		
		AUnderwaterBaseUnfloodedEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function UnderwaterBaseUnfloodedEmitter.UnderwaterBaseUnfloodedEmitter_C.ExecuteUbergraph_UnderwaterBaseUnfloodedEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUnderwaterBaseUnfloodedEmitter_C::ExecuteUbergraph_UnderwaterBaseUnfloodedEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnderwaterBaseUnfloodedEmitter.UnderwaterBaseUnfloodedEmitter_C.ExecuteUbergraph_UnderwaterBaseUnfloodedEmitter");
		
		AUnderwaterBaseUnfloodedEmitter_C_ExecuteUbergraph_UnderwaterBaseUnfloodedEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnderwaterBaseUnfloodedEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnderwaterBaseUnfloodedEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UnderwaterBaseUnfloodedEmitter.UnderwaterBaseUnfloodedEmitter_C");
		return ptr;
	}

}


