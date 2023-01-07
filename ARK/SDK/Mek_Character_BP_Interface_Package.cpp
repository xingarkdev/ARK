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
	 * 		Name   -> Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekHeat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentHeat                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxHeat                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMek_Character_BP_Interface_C::GetMekHeat(float* CurrentHeat, float* MaxHeat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekHeat");
		
		UMek_Character_BP_Interface_C_GetMekHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentHeat != nullptr)
			*CurrentHeat = params.CurrentHeat;
		if (MaxHeat != nullptr)
			*MaxHeat = params.MaxHeat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentFuel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxFuel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMek_Character_BP_Interface_C::GetMekFuel(float* CurrentFuel, float* MaxFuel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekFuel");
		
		UMek_Character_BP_Interface_C_GetMekFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentFuel != nullptr)
			*CurrentFuel = params.CurrentFuel;
		if (MaxFuel != nullptr)
			*MaxFuel = params.MaxFuel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekHeat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Subtract                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewHeatLevel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMek_Character_BP_Interface_C::ModifyMekHeat(float Delta, bool Subtract, float* NewHeatLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekHeat");
		
		UMek_Character_BP_Interface_C_ModifyMekHeat_Params params {};
		params.Delta = Delta;
		params.Subtract = Subtract;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewHeatLevel != nullptr)
			*NewHeatLevel = params.NewHeatLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Subtract                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewFuelLevel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMek_Character_BP_Interface_C::ModifyMekFuel(float Delta, bool Subtract, float* NewFuelLevel, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekFuel");
		
		UMek_Character_BP_Interface_C_ModifyMekFuel_Params params {};
		params.Delta = Delta;
		params.Subtract = Subtract;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewFuelLevel != nullptr)
			*NewFuelLevel = params.NewFuelLevel;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.SetBackpackMalfunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DisableBackpack                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMek_Character_BP_Interface_C::SetBackpackMalfunction(bool DisableBackpack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.SetBackpackMalfunction");
		
		UMek_Character_BP_Interface_C_SetBackpackMalfunction_Params params {};
		params.DisableBackpack = DisableBackpack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMek_Character_BP_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMek_Character_BP_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mek_Character_BP_Interface.Mek_Character_BP_Interface_C");
		return ptr;
	}

}


