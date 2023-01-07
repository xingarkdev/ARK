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
	 * 		Name   -> Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.GetTopSwitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWoodElevatorTopSwitch_C*                    Switch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorPlatform_Base_C::GetTopSwitch(class AWoodElevatorTopSwitch_C** Switch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.GetTopSwitch");
		
		AWoodElevatorPlatform_Base_C_GetTopSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Switch != nullptr)
			*Switch = params.Switch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.BPElevatorStopped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSwitchedDirection                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPrimalStructureElevatorState                      NewDirection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorPlatform_Base_C::BPElevatorStopped(bool bSwitchedDirection, EPrimalStructureElevatorState NewDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.BPElevatorStopped");
		
		AWoodElevatorPlatform_Base_C_BPElevatorStopped_Params params {};
		params.bSwitchedDirection = bSwitchedDirection;
		params.NewDirection = NewDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWoodElevatorPlatform_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.UserConstructionScript");
		
		AWoodElevatorPlatform_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.ExecuteUbergraph_WoodElevatorPlatform_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorPlatform_Base_C::ExecuteUbergraph_WoodElevatorPlatform_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.ExecuteUbergraph_WoodElevatorPlatform_Base");
		
		AWoodElevatorPlatform_Base_C_ExecuteUbergraph_WoodElevatorPlatform_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWoodElevatorPlatform_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWoodElevatorPlatform_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C");
		return ptr;
	}

}


