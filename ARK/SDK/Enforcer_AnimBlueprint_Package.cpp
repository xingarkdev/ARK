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
	 * 		Name   -> Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.IsDinoRunning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADino_Character_BP_Climber_C*                Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Running                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnforcer_AnimBlueprint_C::IsDinoRunning(class ADino_Character_BP_Climber_C* Dino, bool* Running)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.IsDinoRunning");
		
		UEnforcer_AnimBlueprint_C_IsDinoRunning_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Running != nullptr)
			*Running = params.Running;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.GetStrafeBlendspacePlayRate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ForwardVelocity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RightVelocity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   BlendspaceInputs                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendspacePlayRate                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnforcer_AnimBlueprint_C::GetStrafeBlendspacePlayRate(float ForwardVelocity, float RightVelocity, const struct FVector2D& BlendspaceInputs, float* BlendspacePlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.GetStrafeBlendspacePlayRate");
		
		UEnforcer_AnimBlueprint_C_GetStrafeBlendspacePlayRate_Params params {};
		params.ForwardVelocity = ForwardVelocity;
		params.RightVelocity = RightVelocity;
		params.BlendspaceInputs = BlendspaceInputs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlendspacePlayRate != nullptr)
			*BlendspacePlayRate = params.BlendspacePlayRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ShouldPlayClimbRunAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayClimbRun                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnforcer_AnimBlueprint_C::ShouldPlayClimbRunAnim(bool* PlayClimbRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ShouldPlayClimbRunAnim");
		
		UEnforcer_AnimBlueprint_C_ShouldPlayClimbRunAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayClimbRun != nullptr)
			*PlayClimbRun = params.PlayClimbRun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnforcer_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UEnforcer_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEnforcer_AnimBlueprint_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintInitializeAnimation");
		
		UEnforcer_AnimBlueprint_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ExecuteUbergraph_Enforcer_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnforcer_AnimBlueprint_C::ExecuteUbergraph_Enforcer_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ExecuteUbergraph_Enforcer_AnimBlueprint");
		
		UEnforcer_AnimBlueprint_C_ExecuteUbergraph_Enforcer_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnforcer_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnforcer_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C");
		return ptr;
	}

}


