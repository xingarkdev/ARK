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
	 * 		Name   -> Function ElevatorPlatform_Base.ElevatorPlatform_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AElevatorPlatform_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Base.ElevatorPlatform_Base_C.UserConstructionScript");
		
		AElevatorPlatform_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ElevatorPlatform_Base.ElevatorPlatform_Base_C.ExecuteUbergraph_ElevatorPlatform_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElevatorPlatform_Base_C::ExecuteUbergraph_ElevatorPlatform_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Base.ElevatorPlatform_Base_C.ExecuteUbergraph_ElevatorPlatform_Base");
		
		AElevatorPlatform_Base_C_ExecuteUbergraph_ElevatorPlatform_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElevatorPlatform_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElevatorPlatform_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElevatorPlatform_Base.ElevatorPlatform_Base_C");
		return ptr;
	}

}


