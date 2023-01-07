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
	 * 		Name   -> Function PrimalItem_WeaponOneShotRifle.PrimalItem_WeaponOneShotRifle_C.ExecuteUbergraph_PrimalItem_WeaponOneShotRifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponOneShotRifle_C::ExecuteUbergraph_PrimalItem_WeaponOneShotRifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponOneShotRifle.PrimalItem_WeaponOneShotRifle_C.ExecuteUbergraph_PrimalItem_WeaponOneShotRifle");
		
		UPrimalItem_WeaponOneShotRifle_C_ExecuteUbergraph_PrimalItem_WeaponOneShotRifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponOneShotRifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponOneShotRifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponOneShotRifle.PrimalItem_WeaponOneShotRifle_C");
		return ptr;
	}

}


