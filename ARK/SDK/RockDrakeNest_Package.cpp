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
	 * 		Name   -> Function RockDrakeNest.RockDrakeNest_C.RestartEggCheckTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrakeNest_C::RestartEggCheckTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrakeNest.RockDrakeNest_C.RestartEggCheckTimer");
		
		ARockDrakeNest_C_RestartEggCheckTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrakeNest.RockDrakeNest_C.CheckForNearbyEggs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrakeNest_C::CheckForNearbyEggs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrakeNest.RockDrakeNest_C.CheckForNearbyEggs");
		
		ARockDrakeNest_C_CheckForNearbyEggs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrakeNest.RockDrakeNest_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrakeNest_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrakeNest.RockDrakeNest_C.BPUnstasis");
		
		ARockDrakeNest_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrakeNest.RockDrakeNest_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrakeNest_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrakeNest.RockDrakeNest_C.UserConstructionScript");
		
		ARockDrakeNest_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrakeNest.RockDrakeNest_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrakeNest_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrakeNest.RockDrakeNest_C.ReceiveBeginPlay");
		
		ARockDrakeNest_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrakeNest.RockDrakeNest_C.CheckForEggs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrakeNest_C::CheckForEggs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrakeNest.RockDrakeNest_C.CheckForEggs");
		
		ARockDrakeNest_C_CheckForEggs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrakeNest.RockDrakeNest_C.ExecuteUbergraph_RockDrakeNest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrakeNest_C::ExecuteUbergraph_RockDrakeNest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrakeNest.RockDrakeNest_C.ExecuteUbergraph_RockDrakeNest");
		
		ARockDrakeNest_C_ExecuteUbergraph_RockDrakeNest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARockDrakeNest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARockDrakeNest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RockDrakeNest.RockDrakeNest_C");
		return ptr;
	}

}


