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
	 * 		Name   -> Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDKaijuFlock_AttackAIState_BasicAttack_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.OnBeginEvent");
		
		UDKaijuFlock_AttackAIState_BasicAttack_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.BPOnAttackStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDKaijuFlock_AttackAIState_BasicAttack_C::BPOnAttackStart(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.BPOnAttackStart");
		
		UDKaijuFlock_AttackAIState_BasicAttack_C_BPOnAttackStart_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.BPShouldEndAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UDKaijuFlock_AttackAIState_BasicAttack_C::BPShouldEndAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.BPShouldEndAttack");
		
		UDKaijuFlock_AttackAIState_BasicAttack_C_BPShouldEndAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.OnTickEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDKaijuFlock_AttackAIState_BasicAttack_C::OnTickEvent(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.OnTickEvent");
		
		UDKaijuFlock_AttackAIState_BasicAttack_C_OnTickEvent_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.ExecuteUbergraph_DKaijuFlock_AttackAIState_BasicAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDKaijuFlock_AttackAIState_BasicAttack_C::ExecuteUbergraph_DKaijuFlock_AttackAIState_BasicAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C.ExecuteUbergraph_DKaijuFlock_AttackAIState_BasicAttack");
		
		UDKaijuFlock_AttackAIState_BasicAttack_C_ExecuteUbergraph_DKaijuFlock_AttackAIState_BasicAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDKaijuFlock_AttackAIState_BasicAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDKaijuFlock_AttackAIState_BasicAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C");
		return ptr;
	}

}


