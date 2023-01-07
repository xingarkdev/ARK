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
	 * 		Name   -> Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IncubatorGestationMonitor_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.BuffTickServer");
		
		ABuff_IncubatorGestationMonitor_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.GetEnabledGestationMonitoringTargets
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class APrimalDinoCharacter*> ABuff_IncubatorGestationMonitor_C::GetEnabledGestationMonitoringTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.GetEnabledGestationMonitoringTargets");
		
		ABuff_IncubatorGestationMonitor_C_GetEnabledGestationMonitoringTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.SetGestationMonitoringTarget
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IncubatorGestationMonitor_C::SetGestationMonitoringTarget(class APrimalDinoCharacter* forTarget, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.SetGestationMonitoringTarget");
		
		ABuff_IncubatorGestationMonitor_C_SetGestationMonitoringTarget_Params params {};
		params.forTarget = forTarget;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ReplicateGestationData
	 * 		Flags  -> (Net, NetReliable, Public, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUnreplicatedEggData                        GestationData                                              (Parm)
	 * 		class APrimalDinoCharacter*                        forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IncubatorGestationMonitor_C::ReplicateGestationData(const struct FUnreplicatedEggData& GestationData, class APrimalDinoCharacter* forTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ReplicateGestationData");
		
		ABuff_IncubatorGestationMonitor_C_ReplicateGestationData_Params params {};
		params.GestationData = GestationData;
		params.forTarget = forTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_IncubatorGestationMonitor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.UserConstructionScript");
		
		ABuff_IncubatorGestationMonitor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ExecuteUbergraph_Buff_IncubatorGestationMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IncubatorGestationMonitor_C::ExecuteUbergraph_Buff_IncubatorGestationMonitor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ExecuteUbergraph_Buff_IncubatorGestationMonitor");
		
		ABuff_IncubatorGestationMonitor_C_ExecuteUbergraph_Buff_IncubatorGestationMonitor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_IncubatorGestationMonitor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_IncubatorGestationMonitor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C");
		return ptr;
	}

}


