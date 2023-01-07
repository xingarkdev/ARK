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
	 * 		Name   -> Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.BPOnHitActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, ReferenceParm)
	 */
	void UDinoAttackStateMelee_StegoImpaling_C::BPOnHitActor(struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.BPOnHitActor");
		
		UDinoAttackStateMelee_StegoImpaling_C_BPOnHitActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateMelee_StegoImpaling_C::ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling");
		
		UDinoAttackStateMelee_StegoImpaling_C_ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateMelee_StegoImpaling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateMelee_StegoImpaling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C");
		return ptr;
	}

}


