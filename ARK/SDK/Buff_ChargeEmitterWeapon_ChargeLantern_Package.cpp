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
	 * 		Name   -> Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.IsWeaponFiring
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFiring                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterWeapon_ChargeLantern_C::IsWeaponFiring(bool* IsFiring)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.IsWeaponFiring");
		
		ABuff_ChargeEmitterWeapon_ChargeLantern_C_IsWeaponFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFiring != nullptr)
			*IsFiring = params.IsFiring;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.InitializeEmitter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitterWeapon_ChargeLantern_C::InitializeEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.InitializeEmitter");
		
		ABuff_ChargeEmitterWeapon_ChargeLantern_C_InitializeEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitterWeapon_ChargeLantern_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.UserConstructionScript");
		
		ABuff_ChargeEmitterWeapon_ChargeLantern_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitterWeapon_ChargeLantern_C::ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern");
		
		ABuff_ChargeEmitterWeapon_ChargeLantern_C_ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeEmitterWeapon_ChargeLantern_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeEmitterWeapon_ChargeLantern_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C");
		return ptr;
	}

}


