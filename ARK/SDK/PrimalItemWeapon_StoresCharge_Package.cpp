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
	 * 		Name   -> Function PrimalItemWeapon_StoresCharge.PrimalItemWeapon_StoresCharge_C.ExecuteUbergraph_PrimalItemWeapon_StoresCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemWeapon_StoresCharge_C::ExecuteUbergraph_PrimalItemWeapon_StoresCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemWeapon_StoresCharge.PrimalItemWeapon_StoresCharge_C.ExecuteUbergraph_PrimalItemWeapon_StoresCharge");
		
		UPrimalItemWeapon_StoresCharge_C_ExecuteUbergraph_PrimalItemWeapon_StoresCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemWeapon_StoresCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemWeapon_StoresCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeapon_StoresCharge.PrimalItemWeapon_StoresCharge_C");
		return ptr;
	}

}


