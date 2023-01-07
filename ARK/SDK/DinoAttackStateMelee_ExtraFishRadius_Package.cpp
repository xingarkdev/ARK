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
	 * 		Name   -> Function DinoAttackStateMelee_ExtraFishRadius.DinoAttackStateMelee_ExtraFishRadius_C.ExecuteUbergraph_DinoAttackStateMelee_ExtraFishRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateMelee_ExtraFishRadius_C::ExecuteUbergraph_DinoAttackStateMelee_ExtraFishRadius(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_ExtraFishRadius.DinoAttackStateMelee_ExtraFishRadius_C.ExecuteUbergraph_DinoAttackStateMelee_ExtraFishRadius");
		
		UDinoAttackStateMelee_ExtraFishRadius_C_ExecuteUbergraph_DinoAttackStateMelee_ExtraFishRadius_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateMelee_ExtraFishRadius_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateMelee_ExtraFishRadius_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_ExtraFishRadius.DinoAttackStateMelee_ExtraFishRadius_C");
		return ptr;
	}

}


