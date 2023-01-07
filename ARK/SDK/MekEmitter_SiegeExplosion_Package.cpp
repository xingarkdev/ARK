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
	 * 		Name   -> Function MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMekEmitter_SiegeExplosion_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C.UserConstructionScript");
		
		AMekEmitter_SiegeExplosion_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C.ExecuteUbergraph_MekEmitter_SiegeExplosion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMekEmitter_SiegeExplosion_C::ExecuteUbergraph_MekEmitter_SiegeExplosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C.ExecuteUbergraph_MekEmitter_SiegeExplosion");
		
		AMekEmitter_SiegeExplosion_C_ExecuteUbergraph_MekEmitter_SiegeExplosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMekEmitter_SiegeExplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMekEmitter_SiegeExplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C");
		return ptr;
	}

}


