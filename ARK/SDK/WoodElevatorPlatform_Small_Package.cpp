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
	 * 		Name   -> Function WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWoodElevatorPlatform_Small_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C.UserConstructionScript");
		
		AWoodElevatorPlatform_Small_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C.ExecuteUbergraph_WoodElevatorPlatform_Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorPlatform_Small_C::ExecuteUbergraph_WoodElevatorPlatform_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C.ExecuteUbergraph_WoodElevatorPlatform_Small");
		
		AWoodElevatorPlatform_Small_C_ExecuteUbergraph_WoodElevatorPlatform_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWoodElevatorPlatform_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWoodElevatorPlatform_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C");
		return ptr;
	}

}


