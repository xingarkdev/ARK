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
	 * 		Name   -> Function LowOscillationLongCameraShake.LowOscillationLongCameraShake_C.ExecuteUbergraph_LowOscillationLongCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULowOscillationLongCameraShake_C::ExecuteUbergraph_LowOscillationLongCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowOscillationLongCameraShake.LowOscillationLongCameraShake_C.ExecuteUbergraph_LowOscillationLongCameraShake");
		
		ULowOscillationLongCameraShake_C_ExecuteUbergraph_LowOscillationLongCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULowOscillationLongCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowOscillationLongCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LowOscillationLongCameraShake.LowOscillationLongCameraShake_C");
		return ptr;
	}

}


