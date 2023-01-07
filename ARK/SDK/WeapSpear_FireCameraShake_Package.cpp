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
	 * 		Name   -> Function WeapSpear_FireCameraShake.WeapSpear_FireCameraShake_C.ExecuteUbergraph_WeapSpear_FireCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeapSpear_FireCameraShake_C::ExecuteUbergraph_WeapSpear_FireCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSpear_FireCameraShake.WeapSpear_FireCameraShake_C.ExecuteUbergraph_WeapSpear_FireCameraShake");
		
		UWeapSpear_FireCameraShake_C_ExecuteUbergraph_WeapSpear_FireCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeapSpear_FireCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeapSpear_FireCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapSpear_FireCameraShake.WeapSpear_FireCameraShake_C");
		return ptr;
	}

}


