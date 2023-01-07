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
	 * 		Name   -> Function RightClimbing_ImpactEffect_Leaves.RightClimbing_ImpactEffect_Leaves_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARightClimbing_ImpactEffect_Leaves_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClimbing_ImpactEffect_Leaves.RightClimbing_ImpactEffect_Leaves_C.UserConstructionScript");
		
		ARightClimbing_ImpactEffect_Leaves_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RightClimbing_ImpactEffect_Leaves.RightClimbing_ImpactEffect_Leaves_C.ExecuteUbergraph_RightClimbing_ImpactEffect_Leaves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARightClimbing_ImpactEffect_Leaves_C::ExecuteUbergraph_RightClimbing_ImpactEffect_Leaves(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClimbing_ImpactEffect_Leaves.RightClimbing_ImpactEffect_Leaves_C.ExecuteUbergraph_RightClimbing_ImpactEffect_Leaves");
		
		ARightClimbing_ImpactEffect_Leaves_C_ExecuteUbergraph_RightClimbing_ImpactEffect_Leaves_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARightClimbing_ImpactEffect_Leaves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARightClimbing_ImpactEffect_Leaves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RightClimbing_ImpactEffect_Leaves.RightClimbing_ImpactEffect_Leaves_C");
		return ptr;
	}

}


