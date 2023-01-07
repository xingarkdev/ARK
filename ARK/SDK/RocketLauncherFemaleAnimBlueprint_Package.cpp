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
	 * 		Name   -> Function RocketLauncherFemaleAnimBlueprint.RocketLauncherFemaleAnimBlueprint_C.ExecuteUbergraph_RocketLauncherFemaleAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URocketLauncherFemaleAnimBlueprint_C::ExecuteUbergraph_RocketLauncherFemaleAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RocketLauncherFemaleAnimBlueprint.RocketLauncherFemaleAnimBlueprint_C.ExecuteUbergraph_RocketLauncherFemaleAnimBlueprint");
		
		URocketLauncherFemaleAnimBlueprint_C_ExecuteUbergraph_RocketLauncherFemaleAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URocketLauncherFemaleAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URocketLauncherFemaleAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass RocketLauncherFemaleAnimBlueprint.RocketLauncherFemaleAnimBlueprint_C");
		return ptr;
	}

}


