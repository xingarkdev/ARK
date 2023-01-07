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
	 * 		Name   -> Function Diplocaulus_Anim_Blueprint.Diplocaulus_Anim_Blueprint_C.ExecuteUbergraph_Diplocaulus_Anim_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDiplocaulus_Anim_Blueprint_C::ExecuteUbergraph_Diplocaulus_Anim_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Diplocaulus_Anim_Blueprint.Diplocaulus_Anim_Blueprint_C.ExecuteUbergraph_Diplocaulus_Anim_Blueprint");
		
		UDiplocaulus_Anim_Blueprint_C_ExecuteUbergraph_Diplocaulus_Anim_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiplocaulus_Anim_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiplocaulus_Anim_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Diplocaulus_Anim_Blueprint.Diplocaulus_Anim_Blueprint_C");
		return ptr;
	}

}


