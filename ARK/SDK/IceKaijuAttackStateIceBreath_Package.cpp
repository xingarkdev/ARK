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
	 * 		Name   -> Function IceKaijuAttackStateIceBreath.IceKaijuAttackStateIceBreath_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIceKaijuAttackStateIceBreath_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceBreath.IceKaijuAttackStateIceBreath_C.OnEndEvent");
		
		UIceKaijuAttackStateIceBreath_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaijuAttackStateIceBreath.IceKaijuAttackStateIceBreath_C.ExecuteUbergraph_IceKaijuAttackStateIceBreath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIceKaijuAttackStateIceBreath_C::ExecuteUbergraph_IceKaijuAttackStateIceBreath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceBreath.IceKaijuAttackStateIceBreath_C.ExecuteUbergraph_IceKaijuAttackStateIceBreath");
		
		UIceKaijuAttackStateIceBreath_C_ExecuteUbergraph_IceKaijuAttackStateIceBreath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIceKaijuAttackStateIceBreath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIceKaijuAttackStateIceBreath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IceKaijuAttackStateIceBreath.IceKaijuAttackStateIceBreath_C");
		return ptr;
	}

}


