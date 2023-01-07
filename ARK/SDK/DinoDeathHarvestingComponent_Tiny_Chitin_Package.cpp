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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Tiny_Chitin.DinoDeathHarvestingComponent_Tiny_Chitin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Chitin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Tiny_Chitin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Chitin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny_Chitin.DinoDeathHarvestingComponent_Tiny_Chitin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Chitin");
		
		UDinoDeathHarvestingComponent_Tiny_Chitin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Chitin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Tiny_Chitin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Tiny_Chitin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Tiny_Chitin.DinoDeathHarvestingComponent_Tiny_Chitin_C");
		return ptr;
	}

}


