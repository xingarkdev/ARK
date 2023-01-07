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
	 * 		Name   -> Function MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMekEmitter_SwarmExplosion_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C.UserConstructionScript");
		
		AMekEmitter_SwarmExplosion_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C.ExecuteUbergraph_MekEmitter_SwarmExplosion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMekEmitter_SwarmExplosion_C::ExecuteUbergraph_MekEmitter_SwarmExplosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C.ExecuteUbergraph_MekEmitter_SwarmExplosion");
		
		AMekEmitter_SwarmExplosion_C_ExecuteUbergraph_MekEmitter_SwarmExplosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMekEmitter_SwarmExplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMekEmitter_SwarmExplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C");
		return ptr;
	}

}


