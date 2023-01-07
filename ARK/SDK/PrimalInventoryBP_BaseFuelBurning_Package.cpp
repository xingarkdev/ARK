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
	 * 		Name   -> Function PrimalInventoryBP_BaseFuelBurning.PrimalInventoryBP_BaseFuelBurning_C.ExecuteUbergraph_PrimalInventoryBP_BaseFuelBurning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_BaseFuelBurning_C::ExecuteUbergraph_PrimalInventoryBP_BaseFuelBurning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BaseFuelBurning.PrimalInventoryBP_BaseFuelBurning_C.ExecuteUbergraph_PrimalInventoryBP_BaseFuelBurning");
		
		UPrimalInventoryBP_BaseFuelBurning_C_ExecuteUbergraph_PrimalInventoryBP_BaseFuelBurning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_BaseFuelBurning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_BaseFuelBurning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_BaseFuelBurning.PrimalInventoryBP_BaseFuelBurning_C");
		return ptr;
	}

}


