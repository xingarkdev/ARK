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
	 * 		Name   -> Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveDeactivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_SetFlockAttackFormation_C::ReceiveDeactivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveDeactivation");
		
		UService_SetFlockAttackFormation_C_ReceiveDeactivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_SetFlockAttackFormation_C::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveActivation");
		
		UService_SetFlockAttackFormation_C_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ExecuteUbergraph_Service_SetFlockAttackFormation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UService_SetFlockAttackFormation_C::ExecuteUbergraph_Service_SetFlockAttackFormation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ExecuteUbergraph_Service_SetFlockAttackFormation");
		
		UService_SetFlockAttackFormation_C_ExecuteUbergraph_Service_SetFlockAttackFormation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UService_SetFlockAttackFormation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UService_SetFlockAttackFormation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C");
		return ptr;
	}

}


