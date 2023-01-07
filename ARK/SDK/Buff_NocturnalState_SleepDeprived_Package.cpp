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
	 * 		Name   -> Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_NocturnalState_SleepDeprived_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.BuffTickServer");
		
		ABuff_NocturnalState_SleepDeprived_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.GetHUDProgressBarPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_NocturnalState_SleepDeprived_C::GetHUDProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.GetHUDProgressBarPercent");
		
		ABuff_NocturnalState_SleepDeprived_C_GetHUDProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_NocturnalState_SleepDeprived_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.UserConstructionScript");
		
		ABuff_NocturnalState_SleepDeprived_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.ExecuteUbergraph_Buff_NocturnalState_SleepDeprived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_NocturnalState_SleepDeprived_C::ExecuteUbergraph_Buff_NocturnalState_SleepDeprived(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.ExecuteUbergraph_Buff_NocturnalState_SleepDeprived");
		
		ABuff_NocturnalState_SleepDeprived_C_ExecuteUbergraph_Buff_NocturnalState_SleepDeprived_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_NocturnalState_SleepDeprived_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_NocturnalState_SleepDeprived_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C");
		return ptr;
	}

}


