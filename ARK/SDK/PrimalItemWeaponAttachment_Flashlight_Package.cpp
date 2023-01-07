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
	 * 		Name   -> Function PrimalItemWeaponAttachment_Flashlight.PrimalItemWeaponAttachment_Flashlight_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Flashlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemWeaponAttachment_Flashlight_C::ExecuteUbergraph_PrimalItemWeaponAttachment_Flashlight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponAttachment_Flashlight.PrimalItemWeaponAttachment_Flashlight_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Flashlight");
		
		UPrimalItemWeaponAttachment_Flashlight_C_ExecuteUbergraph_PrimalItemWeaponAttachment_Flashlight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemWeaponAttachment_Flashlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemWeaponAttachment_Flashlight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponAttachment_Flashlight.PrimalItemWeaponAttachment_Flashlight_C");
		return ptr;
	}

}


