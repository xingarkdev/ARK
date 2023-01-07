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
	 * 		Name   -> Function ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExplosionEmitter_ScoutLauncher_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C.UserConstructionScript");
		
		AExplosionEmitter_ScoutLauncher_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C.ExecuteUbergraph_ExplosionEmitter_ScoutLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExplosionEmitter_ScoutLauncher_C::ExecuteUbergraph_ExplosionEmitter_ScoutLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C.ExecuteUbergraph_ExplosionEmitter_ScoutLauncher");
		
		AExplosionEmitter_ScoutLauncher_C_ExecuteUbergraph_ExplosionEmitter_ScoutLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExplosionEmitter_ScoutLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplosionEmitter_ScoutLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C");
		return ptr;
	}

}


