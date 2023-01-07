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
	 * 		Name   -> Function Impacts_ArrowNet.Impacts_ArrowNet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AImpacts_ArrowNet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Impacts_ArrowNet.Impacts_ArrowNet_C.UserConstructionScript");
		
		AImpacts_ArrowNet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Impacts_ArrowNet.Impacts_ArrowNet_C.ExecuteUbergraph_Impacts_ArrowNet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AImpacts_ArrowNet_C::ExecuteUbergraph_Impacts_ArrowNet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Impacts_ArrowNet.Impacts_ArrowNet_C.ExecuteUbergraph_Impacts_ArrowNet");
		
		AImpacts_ArrowNet_C_ExecuteUbergraph_Impacts_ArrowNet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AImpacts_ArrowNet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AImpacts_ArrowNet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Impacts_ArrowNet.Impacts_ArrowNet_C");
		return ptr;
	}

}


