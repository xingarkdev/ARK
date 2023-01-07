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
	 * 		Name   -> Function PrimalItem_WeaponBaseHatchet.PrimalItem_WeaponBaseHatchet_C.ExecuteUbergraph_PrimalItem_WeaponBaseHatchet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponBaseHatchet_C::ExecuteUbergraph_PrimalItem_WeaponBaseHatchet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponBaseHatchet.PrimalItem_WeaponBaseHatchet_C.ExecuteUbergraph_PrimalItem_WeaponBaseHatchet");
		
		UPrimalItem_WeaponBaseHatchet_C_ExecuteUbergraph_PrimalItem_WeaponBaseHatchet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponBaseHatchet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponBaseHatchet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponBaseHatchet.PrimalItem_WeaponBaseHatchet_C");
		return ptr;
	}

}


