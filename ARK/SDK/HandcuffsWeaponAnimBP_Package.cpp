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
	 * 		Name   -> Function HandcuffsWeaponAnimBP.HandcuffsWeaponAnimBP_C.ExecuteUbergraph_HandcuffsWeaponAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHandcuffsWeaponAnimBP_C::ExecuteUbergraph_HandcuffsWeaponAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HandcuffsWeaponAnimBP.HandcuffsWeaponAnimBP_C.ExecuteUbergraph_HandcuffsWeaponAnimBP");
		
		UHandcuffsWeaponAnimBP_C_ExecuteUbergraph_HandcuffsWeaponAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandcuffsWeaponAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandcuffsWeaponAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass HandcuffsWeaponAnimBP.HandcuffsWeaponAnimBP_C");
		return ptr;
	}

}


