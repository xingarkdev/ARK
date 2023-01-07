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
	 * 		Name   -> Function Floor_Wood_SM_New.Floor_Wood_SM_New_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFloor_Wood_SM_New_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Floor_Wood_SM_New.Floor_Wood_SM_New_C.UserConstructionScript");
		
		AFloor_Wood_SM_New_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Floor_Wood_SM_New.Floor_Wood_SM_New_C.ExecuteUbergraph_Floor_Wood_SM_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFloor_Wood_SM_New_C::ExecuteUbergraph_Floor_Wood_SM_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Floor_Wood_SM_New.Floor_Wood_SM_New_C.ExecuteUbergraph_Floor_Wood_SM_New");
		
		AFloor_Wood_SM_New_C_ExecuteUbergraph_Floor_Wood_SM_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFloor_Wood_SM_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFloor_Wood_SM_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Floor_Wood_SM_New.Floor_Wood_SM_New_C");
		return ptr;
	}

}


