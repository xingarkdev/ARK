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
	 * 		Name   -> Function Base_Ceiling_Tri.Base_Ceiling_Tri_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABase_Ceiling_Tri_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Ceiling_Tri.Base_Ceiling_Tri_C.UserConstructionScript");
		
		ABase_Ceiling_Tri_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Ceiling_Tri.Base_Ceiling_Tri_C.ExecuteUbergraph_Base_Ceiling_Tri
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Ceiling_Tri_C::ExecuteUbergraph_Base_Ceiling_Tri(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Ceiling_Tri.Base_Ceiling_Tri_C.ExecuteUbergraph_Base_Ceiling_Tri");
		
		ABase_Ceiling_Tri_C_ExecuteUbergraph_Base_Ceiling_Tri_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_Ceiling_Tri_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Ceiling_Tri_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Ceiling_Tri.Base_Ceiling_Tri_C");
		return ptr;
	}

}


