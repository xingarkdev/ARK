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
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_MekRiderCockpit_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPCustomAllowAddBuff");
		
		ABuff_MekRiderCockpit_C_BPCustomAllowAddBuff_Params params {};
		params.forCharacter = forCharacter;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekRiderCockpit_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.UserConstructionScript");
		
		ABuff_MekRiderCockpit_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekRiderCockpit_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BuffTickServer");
		
		ABuff_MekRiderCockpit_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.DeactivateIfNotRidingMek
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekRiderCockpit_C::DeactivateIfNotRidingMek()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.DeactivateIfNotRidingMek");
		
		ABuff_MekRiderCockpit_C_DeactivateIfNotRidingMek_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekRiderCockpit_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPDeactivated");
		
		ABuff_MekRiderCockpit_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekRiderCockpit_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ReceiveBeginPlay");
		
		ABuff_MekRiderCockpit_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekOutOfFuel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekRiderCockpit_C::NotifyMekOutOfFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekOutOfFuel");
		
		ABuff_MekRiderCockpit_C_NotifyMekOutOfFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekHasFuel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekRiderCockpit_C::NotifyMekHasFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekHasFuel");
		
		ABuff_MekRiderCockpit_C_NotifyMekHasFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ClientSetUnderwaterBreathing
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekRiderCockpit_C::ClientSetUnderwaterBreathing(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ClientSetUnderwaterBreathing");
		
		ABuff_MekRiderCockpit_C_ClientSetUnderwaterBreathing_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.SetUnderwaterBreathing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekRiderCockpit_C::SetUnderwaterBreathing(bool Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.SetUnderwaterBreathing");
		
		ABuff_MekRiderCockpit_C_SetUnderwaterBreathing_Params params {};
		params.Allowed = Allowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ExecuteUbergraph_Buff_MekRiderCockpit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekRiderCockpit_C::ExecuteUbergraph_Buff_MekRiderCockpit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ExecuteUbergraph_Buff_MekRiderCockpit");
		
		ABuff_MekRiderCockpit_C_ExecuteUbergraph_Buff_MekRiderCockpit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_MekRiderCockpit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_MekRiderCockpit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekRiderCockpit.Buff_MekRiderCockpit_C");
		return ptr;
	}

}


