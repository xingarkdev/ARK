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
	 * 		Name   -> Function PrimalItemStructure_DoubleDoor_Greenhouse.PrimalItemStructure_DoubleDoor_Greenhouse_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Greenhouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_DoubleDoor_Greenhouse_C::ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Greenhouse(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_DoubleDoor_Greenhouse.PrimalItemStructure_DoubleDoor_Greenhouse_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Greenhouse");
		
		UPrimalItemStructure_DoubleDoor_Greenhouse_C_ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Greenhouse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_DoubleDoor_Greenhouse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_DoubleDoor_Greenhouse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoor_Greenhouse.PrimalItemStructure_DoubleDoor_Greenhouse_C");
		return ptr;
	}

}


