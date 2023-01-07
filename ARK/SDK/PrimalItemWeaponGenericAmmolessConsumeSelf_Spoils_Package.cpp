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
	 * 		Name   -> Function PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils.PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C.ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C::ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils.PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C.ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils");
		
		UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C_ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils.PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C");
		return ptr;
	}

}


