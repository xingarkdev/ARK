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
	 * 		Name   -> Function StructureSettings_Plants_Aberration.StructureSettings_Plants_Aberration_C.ExecuteUbergraph_StructureSettings_Plants_Aberration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStructureSettings_Plants_Aberration_C::ExecuteUbergraph_StructureSettings_Plants_Aberration(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureSettings_Plants_Aberration.StructureSettings_Plants_Aberration_C.ExecuteUbergraph_StructureSettings_Plants_Aberration");
		
		UStructureSettings_Plants_Aberration_C_ExecuteUbergraph_StructureSettings_Plants_Aberration_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStructureSettings_Plants_Aberration_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructureSettings_Plants_Aberration_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_Plants_Aberration.StructureSettings_Plants_Aberration_C");
		return ptr;
	}

}


