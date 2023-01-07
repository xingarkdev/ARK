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
	 * 		Name   -> Function CaveWolf_ResetProcessMoveToOrder_TK.CaveWolf_ResetProcessMoveToOrder_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_ResetProcessMoveToOrder_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_ResetProcessMoveToOrder_TK.CaveWolf_ResetProcessMoveToOrder_TK_C.ReceiveExecute");
		
		UCaveWolf_ResetProcessMoveToOrder_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_ResetProcessMoveToOrder_TK.CaveWolf_ResetProcessMoveToOrder_TK_C.ExecuteUbergraph_CaveWolf_ResetProcessMoveToOrder_TK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_ResetProcessMoveToOrder_TK_C::ExecuteUbergraph_CaveWolf_ResetProcessMoveToOrder_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_ResetProcessMoveToOrder_TK.CaveWolf_ResetProcessMoveToOrder_TK_C.ExecuteUbergraph_CaveWolf_ResetProcessMoveToOrder_TK");
		
		UCaveWolf_ResetProcessMoveToOrder_TK_C_ExecuteUbergraph_CaveWolf_ResetProcessMoveToOrder_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaveWolf_ResetProcessMoveToOrder_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaveWolf_ResetProcessMoveToOrder_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_ResetProcessMoveToOrder_TK.CaveWolf_ResetProcessMoveToOrder_TK_C");
		return ptr;
	}

}


