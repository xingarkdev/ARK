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
	 * 		Name   -> Function PrimalItemConsumable_DinoPoopMedium.PrimalItemConsumable_DinoPoopMedium_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopMedium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_DinoPoopMedium_C::ExecuteUbergraph_PrimalItemConsumable_DinoPoopMedium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_DinoPoopMedium.PrimalItemConsumable_DinoPoopMedium_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopMedium");
		
		UPrimalItemConsumable_DinoPoopMedium_C_ExecuteUbergraph_PrimalItemConsumable_DinoPoopMedium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_DinoPoopMedium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_DinoPoopMedium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_DinoPoopMedium.PrimalItemConsumable_DinoPoopMedium_C");
		return ptr;
	}

}


