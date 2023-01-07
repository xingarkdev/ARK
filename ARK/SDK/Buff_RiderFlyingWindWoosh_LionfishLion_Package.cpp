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
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_RiderFlyingWindWoosh_LionfishLion_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.AllowPostProcessEffect");
		
		ABuff_RiderFlyingWindWoosh_LionfishLion_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.GetBuffPostprocessIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_RiderFlyingWindWoosh_LionfishLion_C::GetBuffPostprocessIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.GetBuffPostprocessIntensity");
		
		ABuff_RiderFlyingWindWoosh_LionfishLion_C_GetBuffPostprocessIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RiderFlyingWindWoosh_LionfishLion_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.BuffTickClient");
		
		ABuff_RiderFlyingWindWoosh_LionfishLion_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_RiderFlyingWindWoosh_LionfishLion_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.UserConstructionScript");
		
		ABuff_RiderFlyingWindWoosh_LionfishLion_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_LionfishLion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_RiderFlyingWindWoosh_LionfishLion_C::ExecuteUbergraph_Buff_RiderFlyingWindWoosh_LionfishLion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_LionfishLion");
		
		ABuff_RiderFlyingWindWoosh_LionfishLion_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_LionfishLion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_RiderFlyingWindWoosh_LionfishLion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_RiderFlyingWindWoosh_LionfishLion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C");
		return ptr;
	}

}


