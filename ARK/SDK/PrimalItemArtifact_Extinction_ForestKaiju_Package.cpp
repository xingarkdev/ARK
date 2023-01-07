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
	 * 		Name   -> Function PrimalItemArtifact_Extinction_ForestKaiju.PrimalItemArtifact_Extinction_ForestKaiju_C.ExecuteUbergraph_PrimalItemArtifact_Extinction_ForestKaiju
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArtifact_Extinction_ForestKaiju_C::ExecuteUbergraph_PrimalItemArtifact_Extinction_ForestKaiju(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArtifact_Extinction_ForestKaiju.PrimalItemArtifact_Extinction_ForestKaiju_C.ExecuteUbergraph_PrimalItemArtifact_Extinction_ForestKaiju");
		
		UPrimalItemArtifact_Extinction_ForestKaiju_C_ExecuteUbergraph_PrimalItemArtifact_Extinction_ForestKaiju_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArtifact_Extinction_ForestKaiju_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArtifact_Extinction_ForestKaiju_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifact_Extinction_ForestKaiju.PrimalItemArtifact_Extinction_ForestKaiju_C");
		return ptr;
	}

}


