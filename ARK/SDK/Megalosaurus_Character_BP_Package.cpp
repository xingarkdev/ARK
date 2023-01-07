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
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName AMegalosaurus_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");
		
		AMegalosaurus_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateSeverTimerLimits
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newMin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              newMAX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::UpdateSeverTimerLimits(float newMin, float newMAX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateSeverTimerLimits");
		
		AMegalosaurus_Character_BP_C_UpdateSeverTimerLimits_Params params {};
		params.newMin = newMin;
		params.newMAX = newMAX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.InitNocturnalDino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::InitNocturnalDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.InitNocturnalDino");
		
		AMegalosaurus_Character_BP_C_InitNocturnalDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.SetupRefs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::SetupRefs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.SetupRefs");
		
		AMegalosaurus_Character_BP_C_SetupRefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPUnstasis");
		
		AMegalosaurus_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPNotifyStructurePlacedNearby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::BPNotifyStructurePlacedNearby(class APrimalStructure* NewStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPNotifyStructurePlacedNearby");
		
		AMegalosaurus_Character_BP_C_BPNotifyStructurePlacedNearby_Params params {};
		params.NewStructure = NewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTimerServer");
		
		AMegalosaurus_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AMegalosaurus_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPGetMultiUseEntries");
		
		AMegalosaurus_Character_BP_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMegalosaurus_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTryMultiUse");
		
		AMegalosaurus_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnWakeUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::OnWakeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnWakeUp");
		
		AMegalosaurus_Character_BP_C_OnWakeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsDaytime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::OnRep_bIsDaytime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsDaytime");
		
		AMegalosaurus_Character_BP_C_OnRep_bIsDaytime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnFallAsleep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::OnFallAsleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnFallAsleep");
		
		AMegalosaurus_Character_BP_C_OnFallAsleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.Howl
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::Howl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.Howl");
		
		AMegalosaurus_Character_BP_C_Howl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateAppearance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::UpdateAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateAppearance");
		
		AMegalosaurus_Character_BP_C_UpdateAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsNaturallySleeping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::OnRep_bIsNaturallySleeping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsNaturallySleeping");
		
		AMegalosaurus_Character_BP_C_OnRep_bIsNaturallySleeping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckPrey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::CheckPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckPrey");
		
		AMegalosaurus_Character_BP_C_CheckPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanSleep
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::CanSleep(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanSleep");
		
		AMegalosaurus_Character_BP_C_CanSleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanWake
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::CanWake(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanWake");
		
		AMegalosaurus_Character_BP_C_CanWake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForSleep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::CheckForSleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForSleep");
		
		AMegalosaurus_Character_BP_C_CheckForSleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForWake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::CheckForWake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForWake");
		
		AMegalosaurus_Character_BP_C_CheckForWake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.RemoveCarryBuffFromPrey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::RemoveCarryBuffFromPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.RemoveCarryBuffFromPrey");
		
		AMegalosaurus_Character_BP_C_RemoveCarryBuffFromPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveAnyDamage");
		
		AMegalosaurus_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsSleepDeprived
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::IsSleepDeprived(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsSleepDeprived");
		
		AMegalosaurus_Character_BP_C_IsSleepDeprived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.DropPrey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayAnim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::DropPrey(bool PlayAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.DropPrey");
		
		AMegalosaurus_Character_BP_C_DropPrey_Params params {};
		params.PlayAnim = PlayAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FoodTriesToEscape
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::FoodTriesToEscape(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FoodTriesToEscape");
		
		AMegalosaurus_Character_BP_C_FoodTriesToEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMegalosaurus_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanRiderAttack");
		
		AMegalosaurus_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsCarryingValidLivingCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::IsCarryingValidLivingCharacter(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsCarryingValidLivingCharacter");
		
		AMegalosaurus_Character_BP_C_IsCarryingValidLivingCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.TryShakePreyAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::TryShakePreyAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.TryShakePreyAttack");
		
		AMegalosaurus_Character_BP_C_TryShakePreyAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMegalosaurus_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanAttack");
		
		AMegalosaurus_Character_BP_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UserConstructionScript");
		
		AMegalosaurus_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_DamagePrey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::AnimNotify_DamagePrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_DamagePrey");
		
		AMegalosaurus_Character_BP_C_AnimNotify_DamagePrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_ThrowPrey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::AnimNotify_ThrowPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_ThrowPrey");
		
		AMegalosaurus_Character_BP_C_AnimNotify_ThrowPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_CheckForPrey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::AnimNotify_CheckForPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_CheckForPrey");
		
		AMegalosaurus_Character_BP_C_AnimNotify_CheckForPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnCarriedCharacterDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::OnCarriedCharacterDeath(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnCarriedCharacterDeath");
		
		AMegalosaurus_Character_BP_C_OnCarriedCharacterDeath_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsDaytime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::OnIsDaytime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsDaytime");
		
		AMegalosaurus_Character_BP_C_OnIsDaytime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsNighttime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::OnIsNighttime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsNighttime");
		
		AMegalosaurus_Character_BP_C_OnIsNighttime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveBeginPlay");
		
		AMegalosaurus_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FirstHowl
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMegalosaurus_Character_BP_C::FirstHowl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FirstHowl");
		
		AMegalosaurus_Character_BP_C_FirstHowl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ExecuteUbergraph_Megalosaurus_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMegalosaurus_Character_BP_C::ExecuteUbergraph_Megalosaurus_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ExecuteUbergraph_Megalosaurus_Character_BP");
		
		AMegalosaurus_Character_BP_C_ExecuteUbergraph_Megalosaurus_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMegalosaurus_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMegalosaurus_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Megalosaurus_Character_BP.Megalosaurus_Character_BP_C");
		return ptr;
	}

}


