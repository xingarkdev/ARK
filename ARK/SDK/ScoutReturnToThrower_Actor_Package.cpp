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
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_Colors
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScoutReturnToThrower_Actor_C::OnRep_Colors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_Colors");
		
		AScoutReturnToThrower_Actor_C_OnRep_Colors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_ScoutItemClient
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScoutReturnToThrower_Actor_C::OnRep_ScoutItemClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_ScoutItemClient");
		
		AScoutReturnToThrower_Actor_C_OnRep_ScoutItemClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Set Colors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AScoutReturnToThrower_Actor_C::SetColors(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Set Colors");
		
		AScoutReturnToThrower_Actor_C_SetColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Tick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScoutReturnToThrower_Actor_C::Tick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Tick");
		
		AScoutReturnToThrower_Actor_C_Tick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScoutReturnToThrower_Actor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.UserConstructionScript");
		
		AScoutReturnToThrower_Actor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScoutReturnToThrower_Actor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveTick");
		
		AScoutReturnToThrower_Actor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScoutReturnToThrower_Actor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveBeginPlay");
		
		AScoutReturnToThrower_Actor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.DelayedDestroy
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScoutReturnToThrower_Actor_C::DelayedDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.DelayedDestroy");
		
		AScoutReturnToThrower_Actor_C_DelayedDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReplicateScoutItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScoutReturnToThrower_Actor_C::ReplicateScoutItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReplicateScoutItem");
		
		AScoutReturnToThrower_Actor_C_ReplicateScoutItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ExecuteUbergraph_ScoutReturnToThrower_Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScoutReturnToThrower_Actor_C::ExecuteUbergraph_ScoutReturnToThrower_Actor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ExecuteUbergraph_ScoutReturnToThrower_Actor");
		
		AScoutReturnToThrower_Actor_C_ExecuteUbergraph_ScoutReturnToThrower_Actor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScoutReturnToThrower_Actor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScoutReturnToThrower_Actor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C");
		return ptr;
	}

}


