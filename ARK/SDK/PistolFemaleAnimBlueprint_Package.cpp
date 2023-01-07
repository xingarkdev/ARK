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
	 * 		Name   -> Function PistolFemaleAnimBlueprint.PistolFemaleAnimBlueprint_C.ExecuteUbergraph_PistolFemaleAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPistolFemaleAnimBlueprint_C::ExecuteUbergraph_PistolFemaleAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PistolFemaleAnimBlueprint.PistolFemaleAnimBlueprint_C.ExecuteUbergraph_PistolFemaleAnimBlueprint");
		
		UPistolFemaleAnimBlueprint_C_ExecuteUbergraph_PistolFemaleAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPistolFemaleAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPistolFemaleAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass PistolFemaleAnimBlueprint.PistolFemaleAnimBlueprint_C");
		return ptr;
	}

}


