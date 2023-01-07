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
	 * 		Name   -> Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGetRandomFleePointTamedFlier_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ReceiveExecute");
		
		UGetRandomFleePointTamedFlier_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ReceiveAbort
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGetRandomFleePointTamedFlier_TK_C::ReceiveAbort(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ReceiveAbort");
		
		UGetRandomFleePointTamedFlier_TK_C_ReceiveAbort_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ExecuteUbergraph_GetRandomFleePointTamedFlier_TK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGetRandomFleePointTamedFlier_TK_C::ExecuteUbergraph_GetRandomFleePointTamedFlier_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ExecuteUbergraph_GetRandomFleePointTamedFlier_TK");
		
		UGetRandomFleePointTamedFlier_TK_C_ExecuteUbergraph_GetRandomFleePointTamedFlier_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetRandomFleePointTamedFlier_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetRandomFleePointTamedFlier_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C");
		return ptr;
	}

}


