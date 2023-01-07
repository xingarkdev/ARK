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
	 * 		Name   -> Function TrapStructureSettings.TrapStructureSettings_C.ExecuteUbergraph_TrapStructureSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTrapStructureSettings_C::ExecuteUbergraph_TrapStructureSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapStructureSettings.TrapStructureSettings_C.ExecuteUbergraph_TrapStructureSettings");
		
		UTrapStructureSettings_C_ExecuteUbergraph_TrapStructureSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrapStructureSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrapStructureSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrapStructureSettings.TrapStructureSettings_C");
		return ptr;
	}

}


