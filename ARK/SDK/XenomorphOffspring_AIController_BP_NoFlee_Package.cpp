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
	 * 		Name   -> Function XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorphOffspring_AIController_BP_NoFlee_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C.UserConstructionScript");
		
		AXenomorphOffspring_AIController_BP_NoFlee_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C.ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorphOffspring_AIController_BP_NoFlee_C::ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C.ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee");
		
		AXenomorphOffspring_AIController_BP_NoFlee_C_ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AXenomorphOffspring_AIController_BP_NoFlee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AXenomorphOffspring_AIController_BP_NoFlee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C");
		return ptr;
	}

}


