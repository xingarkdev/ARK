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
	 * 		Name   -> Function Tek_Ramp_PlacementEmitter.Tek_Ramp_PlacementEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATek_Ramp_PlacementEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tek_Ramp_PlacementEmitter.Tek_Ramp_PlacementEmitter_C.UserConstructionScript");
		
		ATek_Ramp_PlacementEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Tek_Ramp_PlacementEmitter.Tek_Ramp_PlacementEmitter_C.ExecuteUbergraph_Tek_Ramp_PlacementEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATek_Ramp_PlacementEmitter_C::ExecuteUbergraph_Tek_Ramp_PlacementEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tek_Ramp_PlacementEmitter.Tek_Ramp_PlacementEmitter_C.ExecuteUbergraph_Tek_Ramp_PlacementEmitter");
		
		ATek_Ramp_PlacementEmitter_C_ExecuteUbergraph_Tek_Ramp_PlacementEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATek_Ramp_PlacementEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATek_Ramp_PlacementEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tek_Ramp_PlacementEmitter.Tek_Ramp_PlacementEmitter_C");
		return ptr;
	}

}


