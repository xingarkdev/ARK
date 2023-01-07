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
	 * 		Name   -> Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.InitializeAoE
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeEmitter_C*                       chargeManagerBuff                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeStun_AoE_C::InitializeAoE(class ABuff_ChargeEmitter_C* chargeManagerBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.InitializeAoE");
		
		ABuff_ChargeStun_AoE_C_InitializeAoE_Params params {};
		params.chargeManagerBuff = chargeManagerBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Can Stun Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            characterToStun                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canStun                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeStun_AoE_C::CanStunCharacter(class APrimalCharacter* characterToStun, bool* canStun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Can Stun Character");
		
		ABuff_ChargeStun_AoE_C_CanStunCharacter_Params params {};
		params.characterToStun = characterToStun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canStun != nullptr)
			*canStun = params.canStun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Get WeaponCharge Buff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABuff_ChargeEmitter_C*                       chargeBuff                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeStun_AoE_C::GetWeaponChargeBuff(class ABuff_ChargeEmitter_C** chargeBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Get WeaponCharge Buff");
		
		ABuff_ChargeStun_AoE_C_GetWeaponChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeBuff != nullptr)
			*chargeBuff = params.chargeBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.BPExcludeAoEActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToConsider                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_ChargeStun_AoE_C::BPExcludeAoEActor(class AActor* ActorToConsider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.BPExcludeAoEActor");
		
		ABuff_ChargeStun_AoE_C_BPExcludeAoEActor_Params params {};
		params.ActorToConsider = ActorToConsider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeStun_AoE_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.UserConstructionScript");
		
		ABuff_ChargeStun_AoE_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.ExecuteUbergraph_Buff_ChargeStun_AoE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeStun_AoE_C::ExecuteUbergraph_Buff_ChargeStun_AoE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.ExecuteUbergraph_Buff_ChargeStun_AoE");
		
		ABuff_ChargeStun_AoE_C_ExecuteUbergraph_Buff_ChargeStun_AoE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeStun_AoE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeStun_AoE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C");
		return ptr;
	}

}


