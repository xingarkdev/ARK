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
	 * 		Name   -> Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.AddChargeSource
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeEmitter_C*                       Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_Xenomorph_C::AddChargeSource(class ABuff_ChargeEmitter_C* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.AddChargeSource");
		
		ABuff_ChargeManager_Xenomorph_C_AddChargeSource_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.OnChargeEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeManager_Xenomorph_C::OnChargeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.OnChargeEvent");
		
		ABuff_ChargeManager_Xenomorph_C_OnChargeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.CanReceive Charge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canReceive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_Xenomorph_C::CanReceiveCharge(bool* canReceive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.CanReceive Charge");
		
		ABuff_ChargeManager_Xenomorph_C_CanReceiveCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canReceive != nullptr)
			*canReceive = params.canReceive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeManager_Xenomorph_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.UserConstructionScript");
		
		ABuff_ChargeManager_Xenomorph_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.ExecuteUbergraph_Buff_ChargeManager_Xenomorph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_Xenomorph_C::ExecuteUbergraph_Buff_ChargeManager_Xenomorph(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.ExecuteUbergraph_Buff_ChargeManager_Xenomorph");
		
		ABuff_ChargeManager_Xenomorph_C_ExecuteUbergraph_Buff_ChargeManager_Xenomorph_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeManager_Xenomorph_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeManager_Xenomorph_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C");
		return ptr;
	}

}


