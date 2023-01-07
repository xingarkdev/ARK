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
	 * 		Name   -> Function TekBowArrowImpactBreakEmitter.TekBowArrowImpactBreakEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekBowArrowImpactBreakEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekBowArrowImpactBreakEmitter.TekBowArrowImpactBreakEmitter_C.UserConstructionScript");
		
		ATekBowArrowImpactBreakEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekBowArrowImpactBreakEmitter.TekBowArrowImpactBreakEmitter_C.ExecuteUbergraph_TekBowArrowImpactBreakEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekBowArrowImpactBreakEmitter_C::ExecuteUbergraph_TekBowArrowImpactBreakEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekBowArrowImpactBreakEmitter.TekBowArrowImpactBreakEmitter_C.ExecuteUbergraph_TekBowArrowImpactBreakEmitter");
		
		ATekBowArrowImpactBreakEmitter_C_ExecuteUbergraph_TekBowArrowImpactBreakEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekBowArrowImpactBreakEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekBowArrowImpactBreakEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekBowArrowImpactBreakEmitter.TekBowArrowImpactBreakEmitter_C");
		return ptr;
	}

}


