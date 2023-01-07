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
	 * 		Name   -> Function GenericStructureSettings.GenericStructureSettings_C.ExecuteUbergraph_GenericStructureSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGenericStructureSettings_C::ExecuteUbergraph_GenericStructureSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericStructureSettings.GenericStructureSettings_C.ExecuteUbergraph_GenericStructureSettings");
		
		UGenericStructureSettings_C_ExecuteUbergraph_GenericStructureSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericStructureSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericStructureSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GenericStructureSettings.GenericStructureSettings_C");
		return ptr;
	}

}


