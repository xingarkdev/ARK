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
	 * 		Name   -> Function PrimalItemConsumableEatable_WaterContainer.PrimalItemConsumableEatable_WaterContainer_C.ExecuteUbergraph_PrimalItemConsumableEatable_WaterContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumableEatable_WaterContainer_C::ExecuteUbergraph_PrimalItemConsumableEatable_WaterContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable_WaterContainer.PrimalItemConsumableEatable_WaterContainer_C.ExecuteUbergraph_PrimalItemConsumableEatable_WaterContainer");
		
		UPrimalItemConsumableEatable_WaterContainer_C_ExecuteUbergraph_PrimalItemConsumableEatable_WaterContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumableEatable_WaterContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumableEatable_WaterContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableEatable_WaterContainer.PrimalItemConsumableEatable_WaterContainer_C");
		return ptr;
	}

}


