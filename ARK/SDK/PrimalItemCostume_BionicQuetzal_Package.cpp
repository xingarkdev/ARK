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
	 * 		Name   -> Function PrimalItemCostume_BionicQuetzal.PrimalItemCostume_BionicQuetzal_C.ExecuteUbergraph_PrimalItemCostume_BionicQuetzal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCostume_BionicQuetzal_C::ExecuteUbergraph_PrimalItemCostume_BionicQuetzal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BionicQuetzal.PrimalItemCostume_BionicQuetzal_C.ExecuteUbergraph_PrimalItemCostume_BionicQuetzal");
		
		UPrimalItemCostume_BionicQuetzal_C_ExecuteUbergraph_PrimalItemCostume_BionicQuetzal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCostume_BionicQuetzal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCostume_BionicQuetzal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_BionicQuetzal.PrimalItemCostume_BionicQuetzal_C");
		return ptr;
	}

}


