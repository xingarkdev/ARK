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
	 * 		Name   -> Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DinoTekHelmet_RockDrake_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.BuffTickClient");
		
		ABuff_DinoTekHelmet_RockDrake_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.GetSocketClampDelta
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              OutSocketClampDelta                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DinoTekHelmet_RockDrake_C::GetSocketClampDelta(float* OutSocketClampDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.GetSocketClampDelta");
		
		ABuff_DinoTekHelmet_RockDrake_C_GetSocketClampDelta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSocketClampDelta != nullptr)
			*OutSocketClampDelta = params.OutSocketClampDelta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DinoTekHelmet_RockDrake_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.UserConstructionScript");
		
		ABuff_DinoTekHelmet_RockDrake_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DinoTekHelmet_RockDrake_C::ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake");
		
		ABuff_DinoTekHelmet_RockDrake_C_ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DinoTekHelmet_RockDrake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DinoTekHelmet_RockDrake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C");
		return ptr;
	}

}


