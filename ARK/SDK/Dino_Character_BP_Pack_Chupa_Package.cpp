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
	 * 		Name   -> Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.OnRep_isUnderground
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_Chupa_C::OnRep_isUnderground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.OnRep_isUnderground");
		
		ADino_Character_BP_Pack_Chupa_C_OnRep_isUnderground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.OnChargeEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_Chupa_C::OnChargeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.OnChargeEvent");
		
		ADino_Character_BP_Pack_Chupa_C_OnChargeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.UseCringeForTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              cringeTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Pack_Chupa_C::UseCringeForTime(float cringeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.UseCringeForTime");
		
		ADino_Character_BP_Pack_Chupa_C_UseCringeForTime_Params params {};
		params.cringeTime = cringeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_Chupa_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.UserConstructionScript");
		
		ADino_Character_BP_Pack_Chupa_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.ExecuteUbergraph_Dino_Character_BP_Pack_Chupa
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Pack_Chupa_C::ExecuteUbergraph_Dino_Character_BP_Pack_Chupa(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C.ExecuteUbergraph_Dino_Character_BP_Pack_Chupa");
		
		ADino_Character_BP_Pack_Chupa_C_ExecuteUbergraph_Dino_Character_BP_Pack_Chupa_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_Character_BP_Pack_Chupa_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_Character_BP_Pack_Chupa_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C");
		return ptr;
	}

}


