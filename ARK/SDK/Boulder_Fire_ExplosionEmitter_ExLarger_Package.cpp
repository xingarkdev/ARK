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
	 * 		Name   -> Function Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABoulder_Fire_ExplosionEmitter_ExLarger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C.UserConstructionScript");
		
		ABoulder_Fire_ExplosionEmitter_ExLarger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C.ExecuteUbergraph_Boulder_Fire_ExplosionEmitter_ExLarger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABoulder_Fire_ExplosionEmitter_ExLarger_C::ExecuteUbergraph_Boulder_Fire_ExplosionEmitter_ExLarger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C.ExecuteUbergraph_Boulder_Fire_ExplosionEmitter_ExLarger");
		
		ABoulder_Fire_ExplosionEmitter_ExLarger_C_ExecuteUbergraph_Boulder_Fire_ExplosionEmitter_ExLarger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABoulder_Fire_ExplosionEmitter_ExLarger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABoulder_Fire_ExplosionEmitter_ExLarger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C");
		return ptr;
	}

}


