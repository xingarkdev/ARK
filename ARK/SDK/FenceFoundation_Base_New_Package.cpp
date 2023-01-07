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
	 * 		Name   -> Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.NewFunction_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenceFoundation_Base_New_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.NewFunction_1");
		
		AFenceFoundation_Base_New_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenceFoundation_Base_New_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.UserConstructionScript");
		
		AFenceFoundation_Base_New_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.ExecuteUbergraph_FenceFoundation_Base_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenceFoundation_Base_New_C::ExecuteUbergraph_FenceFoundation_Base_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.ExecuteUbergraph_FenceFoundation_Base_New");
		
		AFenceFoundation_Base_New_C_ExecuteUbergraph_FenceFoundation_Base_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFenceFoundation_Base_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFenceFoundation_Base_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FenceFoundation_Base_New.FenceFoundation_Base_New_C");
		return ptr;
	}

}


