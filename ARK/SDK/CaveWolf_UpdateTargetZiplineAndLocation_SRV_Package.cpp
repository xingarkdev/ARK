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
	 * 		Name   -> Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ReceiveActivation");
		
		UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ReceiveTick");
		
		UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C::ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV");
		
		UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C_ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C");
		return ptr;
	}

}


