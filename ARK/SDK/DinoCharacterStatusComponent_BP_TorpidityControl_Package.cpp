﻿/**
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
	 * 		Name   -> Function DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C.BPAdjustStatusValueModification
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bManualModification                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UDinoCharacterStatusComponent_BP_TorpidityControl_C::BPAdjustStatusValueModification(EPrimalCharacterStatusValue ValueType, float amount, class UClass* DamageTypeClass, bool bManualModification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C.BPAdjustStatusValueModification");
		
		UDinoCharacterStatusComponent_BP_TorpidityControl_C_BPAdjustStatusValueModification_Params params {};
		params.ValueType = ValueType;
		params.amount = amount;
		params.DamageTypeClass = DamageTypeClass;
		params.bManualModification = bManualModification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_TorpidityControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoCharacterStatusComponent_BP_TorpidityControl_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_TorpidityControl(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_TorpidityControl");
		
		UDinoCharacterStatusComponent_BP_TorpidityControl_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_TorpidityControl_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoCharacterStatusComponent_BP_TorpidityControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoCharacterStatusComponent_BP_TorpidityControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C");
		return ptr;
	}

}


