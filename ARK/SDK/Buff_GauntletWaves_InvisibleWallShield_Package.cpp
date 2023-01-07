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
	 * 		Name   -> Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_GauntletWaves_InvisibleWallShield_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.UserConstructionScript");
		
		ABuff_GauntletWaves_InvisibleWallShield_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_GauntletWaves_InvisibleWallShield_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.ReceiveBeginPlay");
		
		ABuff_GauntletWaves_InvisibleWallShield_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.SetupShieldScale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GauntletWaves_InvisibleWallShield_C::SetupShieldScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.SetupShieldScale");
		
		ABuff_GauntletWaves_InvisibleWallShield_C_SetupShieldScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.ExecuteUbergraph_Buff_GauntletWaves_InvisibleWallShield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_GauntletWaves_InvisibleWallShield_C::ExecuteUbergraph_Buff_GauntletWaves_InvisibleWallShield(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.ExecuteUbergraph_Buff_GauntletWaves_InvisibleWallShield");
		
		ABuff_GauntletWaves_InvisibleWallShield_C_ExecuteUbergraph_Buff_GauntletWaves_InvisibleWallShield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_GauntletWaves_InvisibleWallShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_GauntletWaves_InvisibleWallShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C");
		return ptr;
	}

}


