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
	 * 		Name   -> Function TekBowFlameArrow_TrailEmitter.TekBowFlameArrow_TrailEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekBowFlameArrow_TrailEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekBowFlameArrow_TrailEmitter.TekBowFlameArrow_TrailEmitter_C.UserConstructionScript");
		
		ATekBowFlameArrow_TrailEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekBowFlameArrow_TrailEmitter.TekBowFlameArrow_TrailEmitter_C.ExecuteUbergraph_TekBowFlameArrow_TrailEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekBowFlameArrow_TrailEmitter_C::ExecuteUbergraph_TekBowFlameArrow_TrailEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekBowFlameArrow_TrailEmitter.TekBowFlameArrow_TrailEmitter_C.ExecuteUbergraph_TekBowFlameArrow_TrailEmitter");
		
		ATekBowFlameArrow_TrailEmitter_C_ExecuteUbergraph_TekBowFlameArrow_TrailEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekBowFlameArrow_TrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekBowFlameArrow_TrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekBowFlameArrow_TrailEmitter.TekBowFlameArrow_TrailEmitter_C");
		return ptr;
	}

}


