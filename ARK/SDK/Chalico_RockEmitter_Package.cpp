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
	 * 		Name   -> Function Chalico_RockEmitter.Chalico_RockEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChalico_RockEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chalico_RockEmitter.Chalico_RockEmitter_C.UserConstructionScript");
		
		AChalico_RockEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Chalico_RockEmitter.Chalico_RockEmitter_C.ExecuteUbergraph_Chalico_RockEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChalico_RockEmitter_C::ExecuteUbergraph_Chalico_RockEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chalico_RockEmitter.Chalico_RockEmitter_C.ExecuteUbergraph_Chalico_RockEmitter");
		
		AChalico_RockEmitter_C_ExecuteUbergraph_Chalico_RockEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChalico_RockEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChalico_RockEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Chalico_RockEmitter.Chalico_RockEmitter_C");
		return ptr;
	}

}


