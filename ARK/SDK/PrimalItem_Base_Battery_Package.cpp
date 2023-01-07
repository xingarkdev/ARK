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
	 * 		Name   -> Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.BPForceAllowRemoteAddToInventory
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   toInventory                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalItem_Base_Battery_C::BPForceAllowRemoteAddToInventory(class UPrimalInventoryComponent* toInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.BPForceAllowRemoteAddToInventory");
		
		UPrimalItem_Base_Battery_C_BPForceAllowRemoteAddToInventory_Params params {};
		params.toInventory = toInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.ExecuteUbergraph_PrimalItem_Base_Battery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_Base_Battery_C::ExecuteUbergraph_PrimalItem_Base_Battery(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.ExecuteUbergraph_PrimalItem_Base_Battery");
		
		UPrimalItem_Base_Battery_C_ExecuteUbergraph_PrimalItem_Base_Battery_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_Base_Battery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_Base_Battery_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Base_Battery.PrimalItem_Base_Battery_C");
		return ptr;
	}

}


