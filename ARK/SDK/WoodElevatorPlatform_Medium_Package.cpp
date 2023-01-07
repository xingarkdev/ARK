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
	 * 		Name   -> Function WoodElevatorPlatform_Medium.WoodElevatorPlatform_Medium_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWoodElevatorPlatform_Medium_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Medium.WoodElevatorPlatform_Medium_C.UserConstructionScript");
		
		AWoodElevatorPlatform_Medium_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorPlatform_Medium.WoodElevatorPlatform_Medium_C.ExecuteUbergraph_WoodElevatorPlatform_Medium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorPlatform_Medium_C::ExecuteUbergraph_WoodElevatorPlatform_Medium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Medium.WoodElevatorPlatform_Medium_C.ExecuteUbergraph_WoodElevatorPlatform_Medium");
		
		AWoodElevatorPlatform_Medium_C_ExecuteUbergraph_WoodElevatorPlatform_Medium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWoodElevatorPlatform_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWoodElevatorPlatform_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodElevatorPlatform_Medium.WoodElevatorPlatform_Medium_C");
		return ptr;
	}

}


