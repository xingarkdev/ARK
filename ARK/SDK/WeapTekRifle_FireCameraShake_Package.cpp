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
	 * 		Name   -> Function WeapTekRifle_FireCameraShake.WeapTekRifle_FireCameraShake_C.ExecuteUbergraph_WeapTekRifle_FireCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeapTekRifle_FireCameraShake_C::ExecuteUbergraph_WeapTekRifle_FireCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekRifle_FireCameraShake.WeapTekRifle_FireCameraShake_C.ExecuteUbergraph_WeapTekRifle_FireCameraShake");
		
		UWeapTekRifle_FireCameraShake_C_ExecuteUbergraph_WeapTekRifle_FireCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeapTekRifle_FireCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeapTekRifle_FireCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekRifle_FireCameraShake.WeapTekRifle_FireCameraShake_C");
		return ptr;
	}

}


