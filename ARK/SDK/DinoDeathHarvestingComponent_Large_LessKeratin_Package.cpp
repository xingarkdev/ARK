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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Large_LessKeratin.DinoDeathHarvestingComponent_Large_LessKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Large_LessKeratin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Large_LessKeratin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Large_LessKeratin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Large_LessKeratin.DinoDeathHarvestingComponent_Large_LessKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Large_LessKeratin");
		
		UDinoDeathHarvestingComponent_Large_LessKeratin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Large_LessKeratin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Large_LessKeratin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Large_LessKeratin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Large_LessKeratin.DinoDeathHarvestingComponent_Large_LessKeratin_C");
		return ptr;
	}

}


