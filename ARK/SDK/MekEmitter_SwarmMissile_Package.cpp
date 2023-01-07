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
	 * 		Name   -> Function MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMekEmitter_SwarmMissile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C.UserConstructionScript");
		
		AMekEmitter_SwarmMissile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C.ExecuteUbergraph_MekEmitter_SwarmMissile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMekEmitter_SwarmMissile_C::ExecuteUbergraph_MekEmitter_SwarmMissile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C.ExecuteUbergraph_MekEmitter_SwarmMissile");
		
		AMekEmitter_SwarmMissile_C_ExecuteUbergraph_MekEmitter_SwarmMissile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMekEmitter_SwarmMissile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMekEmitter_SwarmMissile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C");
		return ptr;
	}

}


