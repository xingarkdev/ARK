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
	 * 		Name   -> Function EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEmitterImpact_TekExplosive_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C.UserConstructionScript");
		
		AEmitterImpact_TekExplosive_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C.ExecuteUbergraph_EmitterImpact_TekExplosive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEmitterImpact_TekExplosive_C::ExecuteUbergraph_EmitterImpact_TekExplosive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C.ExecuteUbergraph_EmitterImpact_TekExplosive");
		
		AEmitterImpact_TekExplosive_C_ExecuteUbergraph_EmitterImpact_TekExplosive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmitterImpact_TekExplosive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmitterImpact_TekExplosive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C");
		return ptr;
	}

}


