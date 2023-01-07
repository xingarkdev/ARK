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
	 * 		Name   -> Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.AllowNocturnalLogic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_Aberrant_C::AllowNocturnalLogic(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.AllowNocturnalLogic");
		
		AMegalosaurus_Character_BP_Aberrant_C_AllowNocturnalLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_Aberrant_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.UserConstructionScript");
		
		AMegalosaurus_Character_BP_Aberrant_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_Aberrant_C::ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant");
		
		AMegalosaurus_Character_BP_Aberrant_C_ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMegalosaurus_Character_BP_Aberrant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMegalosaurus_Character_BP_Aberrant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C");
		return ptr;
	}

}


