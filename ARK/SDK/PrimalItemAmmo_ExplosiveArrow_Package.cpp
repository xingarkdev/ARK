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
	 * 		Name   -> Function PrimalItemAmmo_ExplosiveArrow.PrimalItemAmmo_ExplosiveArrow_C.ExecuteUbergraph_PrimalItemAmmo_ExplosiveArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemAmmo_ExplosiveArrow_C::ExecuteUbergraph_PrimalItemAmmo_ExplosiveArrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_ExplosiveArrow.PrimalItemAmmo_ExplosiveArrow_C.ExecuteUbergraph_PrimalItemAmmo_ExplosiveArrow");
		
		UPrimalItemAmmo_ExplosiveArrow_C_ExecuteUbergraph_PrimalItemAmmo_ExplosiveArrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemAmmo_ExplosiveArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemAmmo_ExplosiveArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_ExplosiveArrow.PrimalItemAmmo_ExplosiveArrow_C");
		return ptr;
	}

}


