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
	 * 		Name   -> Function PrimalItemAmmo_Boulder_Fire.PrimalItemAmmo_Boulder_Fire_C.ExecuteUbergraph_PrimalItemAmmo_Boulder_Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemAmmo_Boulder_Fire_C::ExecuteUbergraph_PrimalItemAmmo_Boulder_Fire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_Boulder_Fire.PrimalItemAmmo_Boulder_Fire_C.ExecuteUbergraph_PrimalItemAmmo_Boulder_Fire");
		
		UPrimalItemAmmo_Boulder_Fire_C_ExecuteUbergraph_PrimalItemAmmo_Boulder_Fire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemAmmo_Boulder_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemAmmo_Boulder_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_Boulder_Fire.PrimalItemAmmo_Boulder_Fire_C");
		return ptr;
	}

}


