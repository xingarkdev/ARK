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
	 * 		Name   -> Function PlantTrapStructureSettings.PlantTrapStructureSettings_C.ExecuteUbergraph_PlantTrapStructureSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlantTrapStructureSettings_C::ExecuteUbergraph_PlantTrapStructureSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlantTrapStructureSettings.PlantTrapStructureSettings_C.ExecuteUbergraph_PlantTrapStructureSettings");
		
		UPlantTrapStructureSettings_C_ExecuteUbergraph_PlantTrapStructureSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlantTrapStructureSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlantTrapStructureSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlantTrapStructureSettings.PlantTrapStructureSettings_C");
		return ptr;
	}

}


