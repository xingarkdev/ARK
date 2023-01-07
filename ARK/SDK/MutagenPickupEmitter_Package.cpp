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
	 * 		Name   -> Function MutagenPickupEmitter.MutagenPickupEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMutagenPickupEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutagenPickupEmitter.MutagenPickupEmitter_C.UserConstructionScript");
		
		AMutagenPickupEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MutagenPickupEmitter.MutagenPickupEmitter_C.ExecuteUbergraph_MutagenPickupEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMutagenPickupEmitter_C::ExecuteUbergraph_MutagenPickupEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutagenPickupEmitter.MutagenPickupEmitter_C.ExecuteUbergraph_MutagenPickupEmitter");
		
		AMutagenPickupEmitter_C_ExecuteUbergraph_MutagenPickupEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMutagenPickupEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMutagenPickupEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MutagenPickupEmitter.MutagenPickupEmitter_C");
		return ptr;
	}

}


