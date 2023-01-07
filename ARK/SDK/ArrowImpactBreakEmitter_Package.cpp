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
	 * 		Name   -> Function ArrowImpactBreakEmitter.ArrowImpactBreakEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AArrowImpactBreakEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrowImpactBreakEmitter.ArrowImpactBreakEmitter_C.UserConstructionScript");
		
		AArrowImpactBreakEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ArrowImpactBreakEmitter.ArrowImpactBreakEmitter_C.ExecuteUbergraph_ArrowImpactBreakEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArrowImpactBreakEmitter_C::ExecuteUbergraph_ArrowImpactBreakEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrowImpactBreakEmitter.ArrowImpactBreakEmitter_C.ExecuteUbergraph_ArrowImpactBreakEmitter");
		
		AArrowImpactBreakEmitter_C_ExecuteUbergraph_ArrowImpactBreakEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArrowImpactBreakEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArrowImpactBreakEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArrowImpactBreakEmitter.ArrowImpactBreakEmitter_C");
		return ptr;
	}

}


