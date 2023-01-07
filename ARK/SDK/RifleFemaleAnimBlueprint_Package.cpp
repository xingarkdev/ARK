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
	 * 		Name   -> Function RifleFemaleAnimBlueprint.RifleFemaleAnimBlueprint_C.ExecuteUbergraph_RifleFemaleAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URifleFemaleAnimBlueprint_C::ExecuteUbergraph_RifleFemaleAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RifleFemaleAnimBlueprint.RifleFemaleAnimBlueprint_C.ExecuteUbergraph_RifleFemaleAnimBlueprint");
		
		URifleFemaleAnimBlueprint_C_ExecuteUbergraph_RifleFemaleAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URifleFemaleAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URifleFemaleAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass RifleFemaleAnimBlueprint.RifleFemaleAnimBlueprint_C");
		return ptr;
	}

}


