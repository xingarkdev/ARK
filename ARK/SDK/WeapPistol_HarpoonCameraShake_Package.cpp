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
	 * 		Name   -> Function WeapPistol_HarpoonCameraShake.WeapPistol_HarpoonCameraShake_C.ExecuteUbergraph_WeapPistol_HarpoonCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeapPistol_HarpoonCameraShake_C::ExecuteUbergraph_WeapPistol_HarpoonCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPistol_HarpoonCameraShake.WeapPistol_HarpoonCameraShake_C.ExecuteUbergraph_WeapPistol_HarpoonCameraShake");
		
		UWeapPistol_HarpoonCameraShake_C_ExecuteUbergraph_WeapPistol_HarpoonCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeapPistol_HarpoonCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeapPistol_HarpoonCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapPistol_HarpoonCameraShake.WeapPistol_HarpoonCameraShake_C");
		return ptr;
	}

}


