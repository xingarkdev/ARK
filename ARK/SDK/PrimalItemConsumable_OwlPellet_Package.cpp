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
	 * 		Name   -> Function PrimalItemConsumable_OwlPellet.PrimalItemConsumable_OwlPellet_C.ExecuteUbergraph_PrimalItemConsumable_OwlPellet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_OwlPellet_C::ExecuteUbergraph_PrimalItemConsumable_OwlPellet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_OwlPellet.PrimalItemConsumable_OwlPellet_C.ExecuteUbergraph_PrimalItemConsumable_OwlPellet");
		
		UPrimalItemConsumable_OwlPellet_C_ExecuteUbergraph_PrimalItemConsumable_OwlPellet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_OwlPellet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_OwlPellet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_OwlPellet.PrimalItemConsumable_OwlPellet_C");
		return ptr;
	}

}


