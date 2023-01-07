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
	 * 		Name   -> Function PrimalInventoryComponentBP_RadioActiveChargeLanternGround.PrimalInventoryComponentBP_RadioActiveChargeLanternGround_C.ExecuteUbergraph_PrimalInventoryComponentBP_RadioActiveChargeLanternGround
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryComponentBP_RadioActiveChargeLanternGround_C::ExecuteUbergraph_PrimalInventoryComponentBP_RadioActiveChargeLanternGround(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryComponentBP_RadioActiveChargeLanternGround.PrimalInventoryComponentBP_RadioActiveChargeLanternGround_C.ExecuteUbergraph_PrimalInventoryComponentBP_RadioActiveChargeLanternGround");
		
		UPrimalInventoryComponentBP_RadioActiveChargeLanternGround_C_ExecuteUbergraph_PrimalInventoryComponentBP_RadioActiveChargeLanternGround_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryComponentBP_RadioActiveChargeLanternGround_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryComponentBP_RadioActiveChargeLanternGround_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryComponentBP_RadioActiveChargeLanternGround.PrimalInventoryComponentBP_RadioActiveChargeLanternGround_C");
		return ptr;
	}

}


