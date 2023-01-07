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
	 * 		Name   -> Function PrimalItemTrophy_Broodmother_Gamma.PrimalItemTrophy_Broodmother_Gamma_C.ExecuteUbergraph_PrimalItemTrophy_Broodmother_Gamma
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemTrophy_Broodmother_Gamma_C::ExecuteUbergraph_PrimalItemTrophy_Broodmother_Gamma(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Broodmother_Gamma.PrimalItemTrophy_Broodmother_Gamma_C.ExecuteUbergraph_PrimalItemTrophy_Broodmother_Gamma");
		
		UPrimalItemTrophy_Broodmother_Gamma_C_ExecuteUbergraph_PrimalItemTrophy_Broodmother_Gamma_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemTrophy_Broodmother_Gamma_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemTrophy_Broodmother_Gamma_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Broodmother_Gamma.PrimalItemTrophy_Broodmother_Gamma_C");
		return ptr;
	}

}


