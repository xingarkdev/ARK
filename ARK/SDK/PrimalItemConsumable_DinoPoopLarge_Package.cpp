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
	 * 		Name   -> Function PrimalItemConsumable_DinoPoopLarge.PrimalItemConsumable_DinoPoopLarge_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopLarge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_DinoPoopLarge_C::ExecuteUbergraph_PrimalItemConsumable_DinoPoopLarge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_DinoPoopLarge.PrimalItemConsumable_DinoPoopLarge_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopLarge");
		
		UPrimalItemConsumable_DinoPoopLarge_C_ExecuteUbergraph_PrimalItemConsumable_DinoPoopLarge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_DinoPoopLarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_DinoPoopLarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_DinoPoopLarge.PrimalItemConsumable_DinoPoopLarge_C");
		return ptr;
	}

}


