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
	 * 		Name   -> Function FPVClimbPickHitCameraShake.FPVClimbPickHitCameraShake_C.ExecuteUbergraph_FPVClimbPickHitCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPVClimbPickHitCameraShake_C::ExecuteUbergraph_FPVClimbPickHitCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVClimbPickHitCameraShake.FPVClimbPickHitCameraShake_C.ExecuteUbergraph_FPVClimbPickHitCameraShake");
		
		UFPVClimbPickHitCameraShake_C_ExecuteUbergraph_FPVClimbPickHitCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPVClimbPickHitCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPVClimbPickHitCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FPVClimbPickHitCameraShake.FPVClimbPickHitCameraShake_C");
		return ptr;
	}

}


