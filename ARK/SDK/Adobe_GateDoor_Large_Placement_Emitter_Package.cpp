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
	 * 		Name   -> Function Adobe_GateDoor_Large_Placement_Emitter.Adobe_GateDoor_Large_Placement_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAdobe_GateDoor_Large_Placement_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adobe_GateDoor_Large_Placement_Emitter.Adobe_GateDoor_Large_Placement_Emitter_C.UserConstructionScript");
		
		AAdobe_GateDoor_Large_Placement_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Adobe_GateDoor_Large_Placement_Emitter.Adobe_GateDoor_Large_Placement_Emitter_C.ExecuteUbergraph_Adobe_GateDoor_Large_Placement_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAdobe_GateDoor_Large_Placement_Emitter_C::ExecuteUbergraph_Adobe_GateDoor_Large_Placement_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adobe_GateDoor_Large_Placement_Emitter.Adobe_GateDoor_Large_Placement_Emitter_C.ExecuteUbergraph_Adobe_GateDoor_Large_Placement_Emitter");
		
		AAdobe_GateDoor_Large_Placement_Emitter_C_ExecuteUbergraph_Adobe_GateDoor_Large_Placement_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAdobe_GateDoor_Large_Placement_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAdobe_GateDoor_Large_Placement_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Adobe_GateDoor_Large_Placement_Emitter.Adobe_GateDoor_Large_Placement_Emitter_C");
		return ptr;
	}

}


