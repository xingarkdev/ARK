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
	 * 		Name   -> Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPDoAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_EnforcerBlink_C::BPDoAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPDoAttack");
		
		UDinoAttackState_EnforcerBlink_C_BPDoAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_EnforcerBlink_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnEndEvent");
		
		UDinoAttackState_EnforcerBlink_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_EnforcerBlink_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnBeginEvent");
		
		UDinoAttackState_EnforcerBlink_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPShouldEndAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UDinoAttackState_EnforcerBlink_C::BPShouldEndAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPShouldEndAttack");
		
		UDinoAttackState_EnforcerBlink_C_BPShouldEndAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.ExecuteUbergraph_DinoAttackState_EnforcerBlink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_EnforcerBlink_C::ExecuteUbergraph_DinoAttackState_EnforcerBlink(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.ExecuteUbergraph_DinoAttackState_EnforcerBlink");
		
		UDinoAttackState_EnforcerBlink_C_ExecuteUbergraph_DinoAttackState_EnforcerBlink_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_EnforcerBlink_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_EnforcerBlink_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C");
		return ptr;
	}

}


