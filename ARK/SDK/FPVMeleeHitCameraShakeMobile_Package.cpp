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
	 * 		Name   -> Function FPVMeleeHitCameraShakeMobile.FPVMeleeHitCameraShakeMobile_C.ExecuteUbergraph_FPVMeleeHitCameraShakeMobile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPVMeleeHitCameraShakeMobile_C::ExecuteUbergraph_FPVMeleeHitCameraShakeMobile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVMeleeHitCameraShakeMobile.FPVMeleeHitCameraShakeMobile_C.ExecuteUbergraph_FPVMeleeHitCameraShakeMobile");
		
		UFPVMeleeHitCameraShakeMobile_C_ExecuteUbergraph_FPVMeleeHitCameraShakeMobile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPVMeleeHitCameraShakeMobile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPVMeleeHitCameraShakeMobile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FPVMeleeHitCameraShakeMobile.FPVMeleeHitCameraShakeMobile_C");
		return ptr;
	}

}


