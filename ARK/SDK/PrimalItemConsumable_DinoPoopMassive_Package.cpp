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
	 * 		Name   -> Function PrimalItemConsumable_DinoPoopMassive.PrimalItemConsumable_DinoPoopMassive_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopMassive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_DinoPoopMassive_C::ExecuteUbergraph_PrimalItemConsumable_DinoPoopMassive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_DinoPoopMassive.PrimalItemConsumable_DinoPoopMassive_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopMassive");
		
		UPrimalItemConsumable_DinoPoopMassive_C_ExecuteUbergraph_PrimalItemConsumable_DinoPoopMassive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_DinoPoopMassive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_DinoPoopMassive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_DinoPoopMassive.PrimalItemConsumable_DinoPoopMassive_C");
		return ptr;
	}

}


