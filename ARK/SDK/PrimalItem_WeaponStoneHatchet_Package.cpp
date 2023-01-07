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
	 * 		Name   -> Function PrimalItem_WeaponStoneHatchet.PrimalItem_WeaponStoneHatchet_C.ExecuteUbergraph_PrimalItem_WeaponStoneHatchet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponStoneHatchet_C::ExecuteUbergraph_PrimalItem_WeaponStoneHatchet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponStoneHatchet.PrimalItem_WeaponStoneHatchet_C.ExecuteUbergraph_PrimalItem_WeaponStoneHatchet");
		
		UPrimalItem_WeaponStoneHatchet_C_ExecuteUbergraph_PrimalItem_WeaponStoneHatchet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponStoneHatchet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponStoneHatchet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponStoneHatchet.PrimalItem_WeaponStoneHatchet_C");
		return ptr;
	}

}


