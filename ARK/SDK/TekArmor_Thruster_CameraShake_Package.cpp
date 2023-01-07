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
	 * 		Name   -> Function TekArmor_Thruster_CameraShake.TekArmor_Thruster_CameraShake_C.ExecuteUbergraph_TekArmor_Thruster_CameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTekArmor_Thruster_CameraShake_C::ExecuteUbergraph_TekArmor_Thruster_CameraShake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekArmor_Thruster_CameraShake.TekArmor_Thruster_CameraShake_C.ExecuteUbergraph_TekArmor_Thruster_CameraShake");
		
		UTekArmor_Thruster_CameraShake_C_ExecuteUbergraph_TekArmor_Thruster_CameraShake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTekArmor_Thruster_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTekArmor_Thruster_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekArmor_Thruster_CameraShake.TekArmor_Thruster_CameraShake_C");
		return ptr;
	}

}


