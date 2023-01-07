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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Hugest.DinoDeathHarvestingComponent_Hugest_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Hugest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Hugest_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Hugest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Hugest.DinoDeathHarvestingComponent_Hugest_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Hugest");
		
		UDinoDeathHarvestingComponent_Hugest_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Hugest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Hugest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Hugest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Hugest.DinoDeathHarvestingComponent_Hugest_C");
		return ptr;
	}

}


