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
	 * 		Name   -> Function GasBags_Interface.GasBags_Interface_C.ModifyInflationValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DeltaIsPercent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Subtract                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewInflationPercent                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGasBags_Interface_C::ModifyInflationValue(float Delta, bool DeltaIsPercent, bool Subtract, float* NewInflationPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Interface.GasBags_Interface_C.ModifyInflationValue");
		
		UGasBags_Interface_C_ModifyInflationValue_Params params {};
		params.Delta = Delta;
		params.DeltaIsPercent = DeltaIsPercent;
		params.Subtract = Subtract;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewInflationPercent != nullptr)
			*NewInflationPercent = params.NewInflationPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function GasBags_Interface.GasBags_Interface_C.GetInflationValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGasBags_Interface_C::GetInflationValue(float* Value, float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Interface.GasBags_Interface_C.GetInflationValue");
		
		UGasBags_Interface_C_GetInflationValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGasBags_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGasBags_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GasBags_Interface.GasBags_Interface_C");
		return ptr;
	}

}


