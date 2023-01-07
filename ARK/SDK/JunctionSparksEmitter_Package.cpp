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
	 * 		Name   -> Function JunctionSparksEmitter.JunctionSparksEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AJunctionSparksEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JunctionSparksEmitter.JunctionSparksEmitter_C.UserConstructionScript");
		
		AJunctionSparksEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function JunctionSparksEmitter.JunctionSparksEmitter_C.ExecuteUbergraph_JunctionSparksEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AJunctionSparksEmitter_C::ExecuteUbergraph_JunctionSparksEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JunctionSparksEmitter.JunctionSparksEmitter_C.ExecuteUbergraph_JunctionSparksEmitter");
		
		AJunctionSparksEmitter_C_ExecuteUbergraph_JunctionSparksEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AJunctionSparksEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJunctionSparksEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass JunctionSparksEmitter.JunctionSparksEmitter_C");
		return ptr;
	}

}


