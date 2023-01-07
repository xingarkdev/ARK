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
	 * 		Name   -> Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_DKFlockAdjustSpeed_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ReceiveTick");
		
		UService_DKFlockAdjustSpeed_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ExecuteUbergraph_Service_DKFlockAdjustSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_DKFlockAdjustSpeed_C::ExecuteUbergraph_Service_DKFlockAdjustSpeed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ExecuteUbergraph_Service_DKFlockAdjustSpeed");
		
		UService_DKFlockAdjustSpeed_C_ExecuteUbergraph_Service_DKFlockAdjustSpeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UService_DKFlockAdjustSpeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UService_DKFlockAdjustSpeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C");
		return ptr;
	}

}


