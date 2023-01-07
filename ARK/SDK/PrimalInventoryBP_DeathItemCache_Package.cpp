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
	 * 		Name   -> Function PrimalInventoryBP_DeathItemCache.PrimalInventoryBP_DeathItemCache_C.ExecuteUbergraph_PrimalInventoryBP_DeathItemCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_DeathItemCache_C::ExecuteUbergraph_PrimalInventoryBP_DeathItemCache(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_DeathItemCache.PrimalInventoryBP_DeathItemCache_C.ExecuteUbergraph_PrimalInventoryBP_DeathItemCache");
		
		UPrimalInventoryBP_DeathItemCache_C_ExecuteUbergraph_PrimalInventoryBP_DeathItemCache_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_DeathItemCache_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_DeathItemCache_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_DeathItemCache.PrimalInventoryBP_DeathItemCache_C");
		return ptr;
	}

}


