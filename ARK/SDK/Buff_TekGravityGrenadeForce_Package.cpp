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
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGravityGrenadeForce_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BuffTickServer");
		
		ABuff_TekGravityGrenadeForce_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGravityGrenadeForce_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPDeactivated");
		
		ABuff_TekGravityGrenadeForce_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGravityGrenadeForce_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPActivated");
		
		ABuff_TekGravityGrenadeForce_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPPreventInstigatorMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekGravityGrenadeForce_C::BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPPreventInstigatorMovementMode");
		
		ABuff_TekGravityGrenadeForce_C_BPPreventInstigatorMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_TekGravityGrenadeForce_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPOverrideCharacterNewFallVelocity");
		
		ABuff_TekGravityGrenadeForce_C_BPOverrideCharacterNewFallVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialVelocity != nullptr)
			*InitialVelocity = params.InitialVelocity;
		if (Gravity != nullptr)
			*Gravity = params.Gravity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.SetupGravityForce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     GravityCenter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StrengthMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EffectRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGravityGrenadeForce_C::SetupGravityForce(const struct FVector& GravityCenter, float StrengthMultiplier, float EffectRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.SetupGravityForce");
		
		ABuff_TekGravityGrenadeForce_C_SetupGravityForce_Params params {};
		params.GravityCenter = GravityCenter;
		params.StrengthMultiplier = StrengthMultiplier;
		params.EffectRadius = EffectRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGravityGrenadeForce_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.UserConstructionScript");
		
		ABuff_TekGravityGrenadeForce_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.MultiOnSetupGravityForce
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     GravityCenter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForceMult                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EffectRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InitialLaunchDuration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             ExplodeNetworkTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGravityGrenadeForce_C::MultiOnSetupGravityForce(const struct FVector& GravityCenter, float ForceMult, float EffectRadius, float InitialLaunchDuration, double ExplodeNetworkTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.MultiOnSetupGravityForce");
		
		ABuff_TekGravityGrenadeForce_C_MultiOnSetupGravityForce_Params params {};
		params.GravityCenter = GravityCenter;
		params.ForceMult = ForceMult;
		params.EffectRadius = EffectRadius;
		params.InitialLaunchDuration = InitialLaunchDuration;
		params.ExplodeNetworkTime = ExplodeNetworkTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientUpdateVelocity
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGravityGrenadeForce_C::ClientUpdateVelocity(const struct FVector& NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientUpdateVelocity");
		
		ABuff_TekGravityGrenadeForce_C_ClientUpdateVelocity_Params params {};
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.StopGravityEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGravityGrenadeForce_C::StopGravityEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.StopGravityEffect");
		
		ABuff_TekGravityGrenadeForce_C_StopGravityEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ForceInstigatorNetUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGravityGrenadeForce_C::ForceInstigatorNetUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ForceInstigatorNetUpdate");
		
		ABuff_TekGravityGrenadeForce_C_ForceInstigatorNetUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientSyncDesiredFallVelocity
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     vel                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGravityGrenadeForce_C::ClientSyncDesiredFallVelocity(const struct FVector& vel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientSyncDesiredFallVelocity");
		
		ABuff_TekGravityGrenadeForce_C_ClientSyncDesiredFallVelocity_Params params {};
		params.vel = vel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ExecuteUbergraph_Buff_TekGravityGrenadeForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGravityGrenadeForce_C::ExecuteUbergraph_Buff_TekGravityGrenadeForce(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ExecuteUbergraph_Buff_TekGravityGrenadeForce");
		
		ABuff_TekGravityGrenadeForce_C_ExecuteUbergraph_Buff_TekGravityGrenadeForce_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekGravityGrenadeForce_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekGravityGrenadeForce_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C");
		return ptr;
	}

}


