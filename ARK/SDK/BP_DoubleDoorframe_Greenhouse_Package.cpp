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
	 * 		Name   -> Function BP_DoubleDoorframe_Greenhouse.BP_DoubleDoorframe_Greenhouse_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DoubleDoorframe_Greenhouse_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DoubleDoorframe_Greenhouse.BP_DoubleDoorframe_Greenhouse_C.UserConstructionScript");
		
		ABP_DoubleDoorframe_Greenhouse_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_DoubleDoorframe_Greenhouse.BP_DoubleDoorframe_Greenhouse_C.ExecuteUbergraph_BP_DoubleDoorframe_Greenhouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DoubleDoorframe_Greenhouse_C::ExecuteUbergraph_BP_DoubleDoorframe_Greenhouse(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DoubleDoorframe_Greenhouse.BP_DoubleDoorframe_Greenhouse_C.ExecuteUbergraph_BP_DoubleDoorframe_Greenhouse");
		
		ABP_DoubleDoorframe_Greenhouse_C_ExecuteUbergraph_BP_DoubleDoorframe_Greenhouse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DoubleDoorframe_Greenhouse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DoubleDoorframe_Greenhouse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DoubleDoorframe_Greenhouse.BP_DoubleDoorframe_Greenhouse_C");
		return ptr;
	}

}


