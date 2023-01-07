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
	 * 		Name   -> Function WeapPistol_ShotgunCameraShake.WeapPistol_ShotgunCameraShake_C.ExecuteUbergraph_WeapPistol_ShotgunCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeapPistol_ShotgunCameraShake_C::ExecuteUbergraph_WeapPistol_ShotgunCameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPistol_ShotgunCameraShake.WeapPistol_ShotgunCameraShake_C.ExecuteUbergraph_WeapPistol_ShotgunCameraShake");
		
		UWeapPistol_ShotgunCameraShake_C_ExecuteUbergraph_WeapPistol_ShotgunCameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeapPistol_ShotgunCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeapPistol_ShotgunCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapPistol_ShotgunCameraShake.WeapPistol_ShotgunCameraShake_C");
		return ptr;
	}

}


