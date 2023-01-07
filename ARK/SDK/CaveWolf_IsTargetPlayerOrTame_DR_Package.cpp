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
	 * 		Name   -> Function CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_IsTargetPlayerOrTame_DR_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C.ReceiveConditionCheck");
		
		UCaveWolf_IsTargetPlayerOrTame_DR_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C.ExecuteUbergraph_CaveWolf_IsTargetPlayerOrTame_DR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_IsTargetPlayerOrTame_DR_C::ExecuteUbergraph_CaveWolf_IsTargetPlayerOrTame_DR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C.ExecuteUbergraph_CaveWolf_IsTargetPlayerOrTame_DR");
		
		UCaveWolf_IsTargetPlayerOrTame_DR_C_ExecuteUbergraph_CaveWolf_IsTargetPlayerOrTame_DR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaveWolf_IsTargetPlayerOrTame_DR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaveWolf_IsTargetPlayerOrTame_DR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C");
		return ptr;
	}

}


