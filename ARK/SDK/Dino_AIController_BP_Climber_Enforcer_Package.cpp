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
	 * 		Name   -> Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_AIController_BP_Climber_Enforcer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ReceiveBeginPlay");
		
		ADino_AIController_BP_Climber_Enforcer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPSetupFindTarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_AIController_BP_Climber_Enforcer_C::BPSetupFindTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPSetupFindTarget");
		
		ADino_AIController_BP_Climber_Enforcer_C_BPSetupFindTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ADino_AIController_BP_Climber_Enforcer_C::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPGetTargetingDesire");
		
		ADino_AIController_BP_Climber_Enforcer_C_BPGetTargetingDesire_Params params {};
		params.forTarget = forTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_AIController_BP_Climber_Enforcer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.UserConstructionScript");
		
		ADino_AIController_BP_Climber_Enforcer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_AIController_BP_Climber_Enforcer_C::ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer");
		
		ADino_AIController_BP_Climber_Enforcer_C_ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_AIController_BP_Climber_Enforcer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_AIController_BP_Climber_Enforcer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C");
		return ptr;
	}

}


