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
	 * 		Name   -> Function Base_Foundation_Tri.Base_Foundation_Tri_C.IsValidSnapPointTo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            childStructure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MySnapPointToIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABase_Foundation_Tri_C::IsValidSnapPointTo(class APrimalStructure* childStructure, int32_t MySnapPointToIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Foundation_Tri.Base_Foundation_Tri_C.IsValidSnapPointTo");
		
		ABase_Foundation_Tri_C_IsValidSnapPointTo_Params params {};
		params.childStructure = childStructure;
		params.MySnapPointToIndex = MySnapPointToIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Foundation_Tri.Base_Foundation_Tri_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABase_Foundation_Tri_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Foundation_Tri.Base_Foundation_Tri_C.UserConstructionScript");
		
		ABase_Foundation_Tri_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Foundation_Tri.Base_Foundation_Tri_C.ExecuteUbergraph_Base_Foundation_Tri
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Foundation_Tri_C::ExecuteUbergraph_Base_Foundation_Tri(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Foundation_Tri.Base_Foundation_Tri_C.ExecuteUbergraph_Base_Foundation_Tri");
		
		ABase_Foundation_Tri_C_ExecuteUbergraph_Base_Foundation_Tri_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_Foundation_Tri_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Foundation_Tri_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Foundation_Tri.Base_Foundation_Tri_C");
		return ptr;
	}

}


