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
	 * 		Name   -> Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.OnPossess
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_AIController_BP_C::OnPossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.OnPossess");
		
		AAndrewsarchus_AIController_BP_C_OnPossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.ResetUseOverlapCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_AIController_BP_C::ResetUseOverlapCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.ResetUseOverlapCheck");
		
		AAndrewsarchus_AIController_BP_C_ResetUseOverlapCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.UserConstructionScript");
		
		AAndrewsarchus_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.ExecuteUbergraph_Andrewsarchus_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_AIController_BP_C::ExecuteUbergraph_Andrewsarchus_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.ExecuteUbergraph_Andrewsarchus_AIController_BP");
		
		AAndrewsarchus_AIController_BP_C_ExecuteUbergraph_Andrewsarchus_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAndrewsarchus_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAndrewsarchus_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C");
		return ptr;
	}

}


