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
	 * 		Name   -> Function PrimalItemAmmo_RefinedTranqDart.PrimalItemAmmo_RefinedTranqDart_C.ExecuteUbergraph_PrimalItemAmmo_RefinedTranqDart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemAmmo_RefinedTranqDart_C::ExecuteUbergraph_PrimalItemAmmo_RefinedTranqDart(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_RefinedTranqDart.PrimalItemAmmo_RefinedTranqDart_C.ExecuteUbergraph_PrimalItemAmmo_RefinedTranqDart");
		
		UPrimalItemAmmo_RefinedTranqDart_C_ExecuteUbergraph_PrimalItemAmmo_RefinedTranqDart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemAmmo_RefinedTranqDart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemAmmo_RefinedTranqDart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_RefinedTranqDart.PrimalItemAmmo_RefinedTranqDart_C");
		return ptr;
	}

}


