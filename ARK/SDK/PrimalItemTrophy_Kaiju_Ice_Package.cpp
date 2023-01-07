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
	 * 		Name   -> Function PrimalItemTrophy_Kaiju_Ice.PrimalItemTrophy_Kaiju_Ice_C.ExecuteUbergraph_PrimalItemTrophy_Kaiju_Ice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemTrophy_Kaiju_Ice_C::ExecuteUbergraph_PrimalItemTrophy_Kaiju_Ice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Kaiju_Ice.PrimalItemTrophy_Kaiju_Ice_C.ExecuteUbergraph_PrimalItemTrophy_Kaiju_Ice");
		
		UPrimalItemTrophy_Kaiju_Ice_C_ExecuteUbergraph_PrimalItemTrophy_Kaiju_Ice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemTrophy_Kaiju_Ice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemTrophy_Kaiju_Ice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Kaiju_Ice.PrimalItemTrophy_Kaiju_Ice_C");
		return ptr;
	}

}


