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
	 * 		Name   -> Function FireArrowTekBowImpactEmitter.FireArrowTekBowImpactEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFireArrowTekBowImpactEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FireArrowTekBowImpactEmitter.FireArrowTekBowImpactEmitter_C.UserConstructionScript");
		
		AFireArrowTekBowImpactEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FireArrowTekBowImpactEmitter.FireArrowTekBowImpactEmitter_C.ExecuteUbergraph_FireArrowTekBowImpactEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFireArrowTekBowImpactEmitter_C::ExecuteUbergraph_FireArrowTekBowImpactEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FireArrowTekBowImpactEmitter.FireArrowTekBowImpactEmitter_C.ExecuteUbergraph_FireArrowTekBowImpactEmitter");
		
		AFireArrowTekBowImpactEmitter_C_ExecuteUbergraph_FireArrowTekBowImpactEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFireArrowTekBowImpactEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFireArrowTekBowImpactEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FireArrowTekBowImpactEmitter.FireArrowTekBowImpactEmitter_C");
		return ptr;
	}

}


