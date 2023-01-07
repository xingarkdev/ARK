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
	 * 		Name   -> Function PrimalInventoryBP_IndustrialForge.PrimalInventoryBP_IndustrialForge_C.ExecuteUbergraph_PrimalInventoryBP_IndustrialForge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_IndustrialForge_C::ExecuteUbergraph_PrimalInventoryBP_IndustrialForge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_IndustrialForge.PrimalInventoryBP_IndustrialForge_C.ExecuteUbergraph_PrimalInventoryBP_IndustrialForge");
		
		UPrimalInventoryBP_IndustrialForge_C_ExecuteUbergraph_PrimalInventoryBP_IndustrialForge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_IndustrialForge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_IndustrialForge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_IndustrialForge.PrimalInventoryBP_IndustrialForge_C");
		return ptr;
	}

}


