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
	 * 		Name   -> Function PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium.PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C::ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium.PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium");
		
		UPrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C_ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium.PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C");
		return ptr;
	}

}


