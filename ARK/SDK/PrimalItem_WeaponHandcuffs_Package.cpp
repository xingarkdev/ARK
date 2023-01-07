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
	 * 		Name   -> Function PrimalItem_WeaponHandcuffs.PrimalItem_WeaponHandcuffs_C.ExecuteUbergraph_PrimalItem_WeaponHandcuffs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponHandcuffs_C::ExecuteUbergraph_PrimalItem_WeaponHandcuffs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponHandcuffs.PrimalItem_WeaponHandcuffs_C.ExecuteUbergraph_PrimalItem_WeaponHandcuffs");
		
		UPrimalItem_WeaponHandcuffs_C_ExecuteUbergraph_PrimalItem_WeaponHandcuffs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponHandcuffs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponHandcuffs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponHandcuffs.PrimalItem_WeaponHandcuffs_C");
		return ptr;
	}

}


