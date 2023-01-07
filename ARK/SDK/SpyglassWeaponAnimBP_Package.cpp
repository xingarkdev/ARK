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
	 * 		Name   -> Function SpyglassWeaponAnimBP.SpyglassWeaponAnimBP_C.ExecuteUbergraph_SpyglassWeaponAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpyglassWeaponAnimBP_C::ExecuteUbergraph_SpyglassWeaponAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpyglassWeaponAnimBP.SpyglassWeaponAnimBP_C.ExecuteUbergraph_SpyglassWeaponAnimBP");
		
		USpyglassWeaponAnimBP_C_ExecuteUbergraph_SpyglassWeaponAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpyglassWeaponAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpyglassWeaponAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpyglassWeaponAnimBP.SpyglassWeaponAnimBP_C");
		return ptr;
	}

}


