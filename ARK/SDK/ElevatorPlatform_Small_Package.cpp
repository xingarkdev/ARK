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
	 * 		Name   -> Function ElevatorPlatform_Small.ElevatorPlatform_Small_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AElevatorPlatform_Small_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Small.ElevatorPlatform_Small_C.UserConstructionScript");
		
		AElevatorPlatform_Small_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ElevatorPlatform_Small.ElevatorPlatform_Small_C.ExecuteUbergraph_ElevatorPlatform_Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElevatorPlatform_Small_C::ExecuteUbergraph_ElevatorPlatform_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Small.ElevatorPlatform_Small_C.ExecuteUbergraph_ElevatorPlatform_Small");
		
		AElevatorPlatform_Small_C_ExecuteUbergraph_ElevatorPlatform_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElevatorPlatform_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElevatorPlatform_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElevatorPlatform_Small.ElevatorPlatform_Small_C");
		return ptr;
	}

}


