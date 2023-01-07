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
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetBabyFleeLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::GetBabyFleeLocation(struct FVector* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetBabyFleeLocation");
		
		AIceJumper_AIController_BP_C_GetBabyFleeLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsStuckInAir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::IsStuckInAir(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsStuckInAir");
		
		AIceJumper_AIController_BP_C_IsStuckInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPUpdateBestTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      bestTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dontSetIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dontSetOut                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AActor* AIceJumper_AIController_BP_C::BPUpdateBestTarget(class AActor* bestTarget, bool dontSetIn, bool* dontSetOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPUpdateBestTarget");
		
		AIceJumper_AIController_BP_C_BPUpdateBestTarget_Params params {};
		params.bestTarget = bestTarget;
		params.dontSetIn = dontSetIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dontSetOut != nullptr)
			*dontSetOut = params.dontSetOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.DoLOS
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ViewLocationOffset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               retVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::DoLOS(const struct FVector& ViewLocationOffset, bool* retVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.DoLOS");
		
		AIceJumper_AIController_BP_C_DoLOS_Params params {};
		params.ViewLocationOffset = ViewLocationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retVal != nullptr)
			*retVal = params.retVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Update LOSChecks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::UpdateLOSChecks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Update LOSChecks");
		
		AIceJumper_AIController_BP_C_UpdateLOSChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Percent Stamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::GetPercentStamina(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Percent Stamina");
		
		AIceJumper_AIController_BP_C_GetPercentStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsFallingToGroundBelowTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AIceJumper_AIController_BP_C::IsFallingToGroundBelowTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsFallingToGroundBelowTarget");
		
		AIceJumper_AIController_BP_C_IsFallingToGroundBelowTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AIceJumper_AIController_BP_C::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPGetTargetingDesire");
		
		AIceJumper_AIController_BP_C_BPGetTargetingDesire_Params params {};
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
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetPrimalTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::GetPrimalTarget(class APrimalCharacter** Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetPrimalTarget");
		
		AIceJumper_AIController_BP_C_GetPrimalTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is PreventingFrozen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AIceJumper_AIController_BP_C::TargetIsPreventingFrozen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is PreventingFrozen");
		
		AIceJumper_AIController_BP_C_TargetIsPreventingFrozen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is Freezing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AIceJumper_AIController_BP_C::TargetIsFreezing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is Freezing");
		
		AIceJumper_AIController_BP_C_TargetIsFreezing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Is LowStamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::IsLowStamina(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Is LowStamina");
		
		AIceJumper_AIController_BP_C_IsLowStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnTakeDamage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::OnTakeDamage(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnTakeDamage");
		
		AIceJumper_AIController_BP_C_OnTakeDamage_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TookLotsOfDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::TookLotsOfDamage(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TookLotsOfDamage");
		
		AIceJumper_AIController_BP_C_TookLotsOfDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TargetIsFrozen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AIceJumper_AIController_BP_C::TargetIsFrozen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TargetIsFrozen");
		
		AIceJumper_AIController_BP_C_TargetIsFrozen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetMeleeWeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::GetMeleeWeight(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetMeleeWeight");
		
		AIceJumper_AIController_BP_C_GetMeleeWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateMelee
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::UpdateMelee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateMelee");
		
		AIceJumper_AIController_BP_C_UpdateMelee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Melee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::Melee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Melee");
		
		AIceJumper_AIController_BP_C_Melee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateIceBreath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::UpdateIceBreath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateIceBreath");
		
		AIceJumper_AIController_BP_C_UpdateIceBreath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnMovementModeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnMovementModeChanged");
		
		AIceJumper_AIController_BP_C_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnAbilityChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIceJumperAbilities_Enum                           NewAbility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EIceJumperAbilities_Enum                           PrevAbility                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EIceJumperShortDashTypes_Enum                      SecondaryAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::OnAbilityChanged(EIceJumperAbilities_Enum NewAbility, EIceJumperAbilities_Enum PrevAbility, EIceJumperShortDashTypes_Enum SecondaryAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnAbilityChanged");
		
		AIceJumper_AIController_BP_C_OnAbilityChanged_Params params {};
		params.NewAbility = NewAbility;
		params.PrevAbility = PrevAbility;
		params.SecondaryAbility = SecondaryAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Trigger RandomWeighted Ability
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIceJumperAbilities_Enum                           TriggeredAbility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EIceJumperShortDashTypes_Enum                      SecondaryAbility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::TriggerRandomWeightedAbility(EIceJumperAbilities_Enum* TriggeredAbility, EIceJumperShortDashTypes_Enum* SecondaryAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Trigger RandomWeighted Ability");
		
		AIceJumper_AIController_BP_C_TriggerRandomWeightedAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TriggeredAbility != nullptr)
			*TriggeredAbility = params.TriggeredAbility;
		if (SecondaryAbility != nullptr)
			*SecondaryAbility = params.SecondaryAbility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get ShortForward Dash Weight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::GetShortForwardDashWeight(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get ShortForward Dash Weight");
		
		AIceJumper_AIController_BP_C_GetShortForwardDashWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetSide DashWeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::GetSideDashWeight(bool Left, float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetSide DashWeight");
		
		AIceJumper_AIController_BP_C_GetSideDashWeight_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get JumpWeight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::GetJumpWeight(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get JumpWeight");
		
		AIceJumper_AIController_BP_C_GetJumpWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsTarget Tamed or Survivor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::IsTargetTamedorSurvivor(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsTarget Tamed or Survivor");
		
		AIceJumper_AIController_BP_C_IsTargetTamedorSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Forward DashWeight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::GetForwardDashWeight(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Forward DashWeight");
		
		AIceJumper_AIController_BP_C_GetForwardDashWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsInAir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::IsInAir(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsInAir");
		
		AIceJumper_AIController_BP_C_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Ice BreathWeight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::GetIceBreathWeight(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Ice BreathWeight");
		
		AIceJumper_AIController_BP_C_GetIceBreathWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceBreath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::IceBreath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceBreath");
		
		AIceJumper_AIController_BP_C_IceBreath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ForwardDash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::ForwardDash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ForwardDash");
		
		AIceJumper_AIController_BP_C_ForwardDash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceJumper
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AIceJumper_Character_BP_C*                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::IceJumper(class AIceJumper_Character_BP_C** Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceJumper");
		
		AIceJumper_AIController_BP_C_IceJumper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.SideDash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIceJumperShortDashTypes_Enum                      Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::SideDash(EIceJumperShortDashTypes_Enum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.SideDash");
		
		AIceJumper_AIController_BP_C_SideDash_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveBeginPlay");
		
		AIceJumper_AIController_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Jump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::Jump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Jump");
		
		AIceJumper_AIController_BP_C_Jump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ChangedAITarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::ChangedAITarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ChangedAITarget");
		
		AIceJumper_AIController_BP_C_ChangedAITarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveTick");
		
		AIceJumper_AIController_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UserConstructionScript");
		
		AIceJumper_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TryNextAbility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::TryNextAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TryNextAbility");
		
		AIceJumper_AIController_BP_C_TryNextAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TickStaminaRegen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::TickStaminaRegen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TickStaminaRegen");
		
		AIceJumper_AIController_BP_C_TickStaminaRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ResetDamageCounter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::ResetDamageCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ResetDamageCounter");
		
		AIceJumper_AIController_BP_C_ResetDamageCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.FindImprintPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_C::FindImprintPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.FindImprintPlayer");
		
		AIceJumper_AIController_BP_C_FindImprintPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ExecuteUbergraph_IceJumper_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_C::ExecuteUbergraph_IceJumper_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ExecuteUbergraph_IceJumper_AIController_BP");
		
		AIceJumper_AIController_BP_C_ExecuteUbergraph_IceJumper_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIceJumper_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIceJumper_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IceJumper_AIController_BP.IceJumper_AIController_BP_C");
		return ptr;
	}

}


