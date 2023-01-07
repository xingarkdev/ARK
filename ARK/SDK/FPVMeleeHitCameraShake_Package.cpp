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
	 * 		Name   -> Function FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C.ExecuteUbergraph_FPVMeleeHitCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPVMeleeHitCameraShake_C::ExecuteUbergraph_FPVMeleeHitCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C.ExecuteUbergraph_FPVMeleeHitCameraShake");
		
		UFPVMeleeHitCameraShake_C_ExecuteUbergraph_FPVMeleeHitCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPVMeleeHitCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPVMeleeHitCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C");
		return ptr;
	}

}


