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
	 * 		Name   -> Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_ZiplineMoveTowardsTarget_TK_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ReceiveTick");
		
		UCaveWolf_ZiplineMoveTowardsTarget_TK_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ReceiveAbort
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_ZiplineMoveTowardsTarget_TK_C::ReceiveAbort(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ReceiveAbort");
		
		UCaveWolf_ZiplineMoveTowardsTarget_TK_C_ReceiveAbort_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_ZiplineMoveTowardsTarget_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ReceiveExecute");
		
		UCaveWolf_ZiplineMoveTowardsTarget_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.TryToUnblock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCaveWolf_ZiplineMoveTowardsTarget_TK_C::TryToUnblock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.TryToUnblock");
		
		UCaveWolf_ZiplineMoveTowardsTarget_TK_C_TryToUnblock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ExecuteUbergraph_CaveWolf_ZiplineMoveTowardsTarget_TK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_ZiplineMoveTowardsTarget_TK_C::ExecuteUbergraph_CaveWolf_ZiplineMoveTowardsTarget_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ExecuteUbergraph_CaveWolf_ZiplineMoveTowardsTarget_TK");
		
		UCaveWolf_ZiplineMoveTowardsTarget_TK_C_ExecuteUbergraph_CaveWolf_ZiplineMoveTowardsTarget_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaveWolf_ZiplineMoveTowardsTarget_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaveWolf_ZiplineMoveTowardsTarget_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C");
		return ptr;
	}

}


