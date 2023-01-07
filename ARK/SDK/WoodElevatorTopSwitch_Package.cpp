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
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.AllowedToChangePublicUse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorTopSwitch_C::AllowedToChangePublicUse(class APlayerController* PC, bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.AllowedToChangePublicUse");
		
		AWoodElevatorTopSwitch_C_AllowedToChangePublicUse_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Make Multi Use Entry
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalStructureElevatorState                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMultiUseEntry                              Entry                                                      (Parm, OutParm)
	 */
	void AWoodElevatorTopSwitch_C::MakeMultiUseEntry(EPrimalStructureElevatorState Direction, int32_t Priority, struct FMultiUseEntry* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Make Multi Use Entry");
		
		AWoodElevatorTopSwitch_C_MakeMultiUseEntry_Params params {};
		params.Direction = Direction;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Entry != nullptr)
			*Entry = params.Entry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Get Elevator Platform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWoodElevatorPlatform_Base_C*                Elevator                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorTopSwitch_C::GetElevatorPlatform(class AWoodElevatorPlatform_Base_C** Elevator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Get Elevator Platform");
		
		AWoodElevatorTopSwitch_C_GetElevatorPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Elevator != nullptr)
			*Elevator = params.Elevator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Move Elevator
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureElevatorPlatform*            Elevator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPrimalStructureElevatorState                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorTopSwitch_C::MoveElevator(class APrimalStructureElevatorPlatform* Elevator, class APlayerController* PC, EPrimalStructureElevatorState Direction, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Move Elevator");
		
		AWoodElevatorTopSwitch_C_MoveElevator_Params params {};
		params.Elevator = Elevator;
		params.PC = PC;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AWoodElevatorTopSwitch_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPTryMultiUse");
		
		AWoodElevatorTopSwitch_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AWoodElevatorTopSwitch_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPGetMultiUseEntries");
		
		AWoodElevatorTopSwitch_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWoodElevatorTopSwitch_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.UserConstructionScript");
		
		AWoodElevatorTopSwitch_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWoodElevatorTopSwitch_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ReceiveBeginPlay");
		
		AWoodElevatorTopSwitch_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStartMove
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalStructureElevatorState                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorTopSwitch_C::OnElevatorStartMove(EPrimalStructureElevatorState Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStartMove");
		
		AWoodElevatorTopSwitch_C_OnElevatorStartMove_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStop
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SwitchedDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPrimalStructureElevatorState                      NewDirection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorTopSwitch_C::OnElevatorStop(bool SwitchedDirection, EPrimalStructureElevatorState NewDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStop");
		
		AWoodElevatorTopSwitch_C_OnElevatorStop_Params params {};
		params.SwitchedDirection = SwitchedDirection;
		params.NewDirection = NewDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ExecuteUbergraph_WoodElevatorTopSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodElevatorTopSwitch_C::ExecuteUbergraph_WoodElevatorTopSwitch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ExecuteUbergraph_WoodElevatorTopSwitch");
		
		AWoodElevatorTopSwitch_C_ExecuteUbergraph_WoodElevatorTopSwitch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWoodElevatorTopSwitch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWoodElevatorTopSwitch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodElevatorTopSwitch.WoodElevatorTopSwitch_C");
		return ptr;
	}

}


