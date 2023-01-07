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
	 * 		Name   -> Function Task_ClearTamedLandTarget.Task_ClearTamedLandTarget_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ClearTamedLandTarget_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ClearTamedLandTarget.Task_ClearTamedLandTarget_C.ReceiveExecute");
		
		UTask_ClearTamedLandTarget_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_ClearTamedLandTarget.Task_ClearTamedLandTarget_C.ExecuteUbergraph_Task_ClearTamedLandTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_ClearTamedLandTarget_C::ExecuteUbergraph_Task_ClearTamedLandTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_ClearTamedLandTarget.Task_ClearTamedLandTarget_C.ExecuteUbergraph_Task_ClearTamedLandTarget");
		
		UTask_ClearTamedLandTarget_C_ExecuteUbergraph_Task_ClearTamedLandTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_ClearTamedLandTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_ClearTamedLandTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_ClearTamedLandTarget.Task_ClearTamedLandTarget_C");
		return ptr;
	}

}


