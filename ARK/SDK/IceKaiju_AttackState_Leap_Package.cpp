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
	 * 		Name   -> Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnClearAttackState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIceKaiju_AttackState_Leap_C::BPOnClearAttackState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnClearAttackState");
		
		UIceKaiju_AttackState_Leap_C_BPOnClearAttackState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceKaiju_AttackState_Leap_C::BPOnAttackEnd(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackEnd");
		
		UIceKaiju_AttackState_Leap_C_BPOnAttackEnd_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceKaiju_AttackState_Leap_C::BPOnAttackStart(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackStart");
		
		UIceKaiju_AttackState_Leap_C_BPOnAttackStart_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.ExecuteUbergraph_IceKaiju_AttackState_Leap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceKaiju_AttackState_Leap_C::ExecuteUbergraph_IceKaiju_AttackState_Leap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.ExecuteUbergraph_IceKaiju_AttackState_Leap");
		
		UIceKaiju_AttackState_Leap_C_ExecuteUbergraph_IceKaiju_AttackState_Leap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIceKaiju_AttackState_Leap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIceKaiju_AttackState_Leap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C");
		return ptr;
	}

}


