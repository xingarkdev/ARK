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
	 * 		Name   -> Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointNoMin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_DKaijuFindMovePointWithinArena_C::GetRandomPointNoMin(const struct FVector& Origin, struct FVector* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointNoMin");
		
		UTask_DKaijuFindMovePointWithinArena_C_GetRandomPointNoMin_Params params {};
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointMin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DidNotFindLoc                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_DKaijuFindMovePointWithinArena_C::GetRandomPointMin(const struct FVector& Origin, struct FVector* Return, bool* DidNotFindLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointMin");
		
		UTask_DKaijuFindMovePointWithinArena_C_GetRandomPointMin_Params params {};
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
		if (DidNotFindLoc != nullptr)
			*DidNotFindLoc = params.DidNotFindLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_DKaijuFindMovePointWithinArena_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ReceiveExecute");
		
		UTask_DKaijuFindMovePointWithinArena_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_DKaijuFindMovePointWithinArena_C::ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena");
		
		UTask_DKaijuFindMovePointWithinArena_C_ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_DKaijuFindMovePointWithinArena_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_DKaijuFindMovePointWithinArena_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C");
		return ptr;
	}

}


