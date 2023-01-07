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
	 * 		Name   -> Function WeapPistol_FireCameraShake.WeapPistol_FireCameraShake_C.ExecuteUbergraph_WeapPistol_FireCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeapPistol_FireCameraShake_C::ExecuteUbergraph_WeapPistol_FireCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPistol_FireCameraShake.WeapPistol_FireCameraShake_C.ExecuteUbergraph_WeapPistol_FireCameraShake");
		
		UWeapPistol_FireCameraShake_C_ExecuteUbergraph_WeapPistol_FireCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeapPistol_FireCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeapPistol_FireCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapPistol_FireCameraShake.WeapPistol_FireCameraShake_C");
		return ptr;
	}

}


