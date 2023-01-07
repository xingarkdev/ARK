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
	 * 		Name   -> Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.ShouldIgnoreAggression
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AXenomorph_Male_AIController_BP_C::ShouldIgnoreAggression(class UObject* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.ShouldIgnoreAggression");
		
		AXenomorph_Male_AIController_BP_C_ShouldIgnoreAggression_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Male_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.UserConstructionScript");
		
		AXenomorph_Male_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.ExecuteUbergraph_Xenomorph_Male_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Male_AIController_BP_C::ExecuteUbergraph_Xenomorph_Male_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C.ExecuteUbergraph_Xenomorph_Male_AIController_BP");
		
		AXenomorph_Male_AIController_BP_C_ExecuteUbergraph_Xenomorph_Male_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AXenomorph_Male_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AXenomorph_Male_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C");
		return ptr;
	}

}


