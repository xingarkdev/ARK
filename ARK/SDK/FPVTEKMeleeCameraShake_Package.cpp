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
	 * 		Name   -> Function FPVTEKMeleeCameraShake.FPVTEKMeleeCameraShake_C.ExecuteUbergraph_FPVTEKMeleeCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFPVTEKMeleeCameraShake_C::ExecuteUbergraph_FPVTEKMeleeCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVTEKMeleeCameraShake.FPVTEKMeleeCameraShake_C.ExecuteUbergraph_FPVTEKMeleeCameraShake");
		
		UFPVTEKMeleeCameraShake_C_ExecuteUbergraph_FPVTEKMeleeCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPVTEKMeleeCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPVTEKMeleeCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FPVTEKMeleeCameraShake.FPVTEKMeleeCameraShake_C");
		return ptr;
	}

}


