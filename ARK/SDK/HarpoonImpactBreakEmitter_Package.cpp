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
	 * 		Name   -> Function HarpoonImpactBreakEmitter.HarpoonImpactBreakEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHarpoonImpactBreakEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HarpoonImpactBreakEmitter.HarpoonImpactBreakEmitter_C.UserConstructionScript");
		
		AHarpoonImpactBreakEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function HarpoonImpactBreakEmitter.HarpoonImpactBreakEmitter_C.ExecuteUbergraph_HarpoonImpactBreakEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHarpoonImpactBreakEmitter_C::ExecuteUbergraph_HarpoonImpactBreakEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HarpoonImpactBreakEmitter.HarpoonImpactBreakEmitter_C.ExecuteUbergraph_HarpoonImpactBreakEmitter");
		
		AHarpoonImpactBreakEmitter_C_ExecuteUbergraph_HarpoonImpactBreakEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHarpoonImpactBreakEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHarpoonImpactBreakEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HarpoonImpactBreakEmitter.HarpoonImpactBreakEmitter_C");
		return ptr;
	}

}


