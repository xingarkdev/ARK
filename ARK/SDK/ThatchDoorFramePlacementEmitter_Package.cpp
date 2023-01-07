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
	 * 		Name   -> Function ThatchDoorFramePlacementEmitter.ThatchDoorFramePlacementEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThatchDoorFramePlacementEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThatchDoorFramePlacementEmitter.ThatchDoorFramePlacementEmitter_C.UserConstructionScript");
		
		AThatchDoorFramePlacementEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ThatchDoorFramePlacementEmitter.ThatchDoorFramePlacementEmitter_C.ExecuteUbergraph_ThatchDoorFramePlacementEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThatchDoorFramePlacementEmitter_C::ExecuteUbergraph_ThatchDoorFramePlacementEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThatchDoorFramePlacementEmitter.ThatchDoorFramePlacementEmitter_C.ExecuteUbergraph_ThatchDoorFramePlacementEmitter");
		
		AThatchDoorFramePlacementEmitter_C_ExecuteUbergraph_ThatchDoorFramePlacementEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThatchDoorFramePlacementEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThatchDoorFramePlacementEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ThatchDoorFramePlacementEmitter.ThatchDoorFramePlacementEmitter_C");
		return ptr;
	}

}


