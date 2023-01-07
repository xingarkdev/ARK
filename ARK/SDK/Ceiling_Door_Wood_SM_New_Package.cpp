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
	 * 		Name   -> Function Ceiling_Door_Wood_SM_New.Ceiling_Door_Wood_SM_New_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACeiling_Door_Wood_SM_New_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Door_Wood_SM_New.Ceiling_Door_Wood_SM_New_C.UserConstructionScript");
		
		ACeiling_Door_Wood_SM_New_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Ceiling_Door_Wood_SM_New.Ceiling_Door_Wood_SM_New_C.ExecuteUbergraph_Ceiling_Door_Wood_SM_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACeiling_Door_Wood_SM_New_C::ExecuteUbergraph_Ceiling_Door_Wood_SM_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ceiling_Door_Wood_SM_New.Ceiling_Door_Wood_SM_New_C.ExecuteUbergraph_Ceiling_Door_Wood_SM_New");
		
		ACeiling_Door_Wood_SM_New_C_ExecuteUbergraph_Ceiling_Door_Wood_SM_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACeiling_Door_Wood_SM_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeiling_Door_Wood_SM_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Door_Wood_SM_New.Ceiling_Door_Wood_SM_New_C");
		return ptr;
	}

}


