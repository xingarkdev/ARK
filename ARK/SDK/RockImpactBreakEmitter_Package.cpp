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
	 * 		Name   -> Function RockImpactBreakEmitter.RockImpactBreakEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockImpactBreakEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockImpactBreakEmitter.RockImpactBreakEmitter_C.UserConstructionScript");
		
		ARockImpactBreakEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockImpactBreakEmitter.RockImpactBreakEmitter_C.ExecuteUbergraph_RockImpactBreakEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockImpactBreakEmitter_C::ExecuteUbergraph_RockImpactBreakEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockImpactBreakEmitter.RockImpactBreakEmitter_C.ExecuteUbergraph_RockImpactBreakEmitter");
		
		ARockImpactBreakEmitter_C_ExecuteUbergraph_RockImpactBreakEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARockImpactBreakEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARockImpactBreakEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RockImpactBreakEmitter.RockImpactBreakEmitter_C");
		return ptr;
	}

}


