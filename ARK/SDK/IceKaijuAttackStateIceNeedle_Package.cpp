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
	 * 		Name   -> Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceKaijuAttackStateIceNeedle_C::BPOnAttackStart(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackStart");
		
		UIceKaijuAttackStateIceNeedle_C_BPOnAttackStart_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.StartAnimationStateEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENetRole                                           Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceKaijuAttackStateIceNeedle_C::StartAnimationStateEvent(const class FName& CustomEventName, ENetRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.StartAnimationStateEvent");
		
		UIceKaijuAttackStateIceNeedle_C_StartAnimationStateEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceKaijuAttackStateIceNeedle_C::BPOnAttackTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackTick");
		
		UIceKaijuAttackStateIceNeedle_C_BPOnAttackTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.TickAnimationStateEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENetRole                                           Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceKaijuAttackStateIceNeedle_C::TickAnimationStateEvent(float DeltaTime, const class FName& CustomEventName, ENetRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.TickAnimationStateEvent");
		
		UIceKaijuAttackStateIceNeedle_C_TickAnimationStateEvent_Params params {};
		params.DeltaTime = DeltaTime;
		params.CustomEventName = CustomEventName;
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.ExecuteUbergraph_IceKaijuAttackStateIceNeedle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceKaijuAttackStateIceNeedle_C::ExecuteUbergraph_IceKaijuAttackStateIceNeedle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.ExecuteUbergraph_IceKaijuAttackStateIceNeedle");
		
		UIceKaijuAttackStateIceNeedle_C_ExecuteUbergraph_IceKaijuAttackStateIceNeedle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIceKaijuAttackStateIceNeedle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIceKaijuAttackStateIceNeedle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C");
		return ptr;
	}

}


