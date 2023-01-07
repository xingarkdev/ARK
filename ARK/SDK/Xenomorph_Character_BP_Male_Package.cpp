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
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::DiveEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveEnd");
		
		AXenomorph_Character_BP_Male_C_DiveEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyClaimed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::BPNotifyClaimed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyClaimed");
		
		AXenomorph_Character_BP_Male_C_BPNotifyClaimed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPChangedActorTeam
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::BPChangedActorTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPChangedActorTeam");
		
		AXenomorph_Character_BP_Male_C_BPChangedActorTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPPreventOrderAllowed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AXenomorph_Character_BP_Male_C::BPPreventOrderAllowed(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPPreventOrderAllowed");
		
		AXenomorph_Character_BP_Male_C_BPPreventOrderAllowed_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintExtraBabyScaling
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AXenomorph_Character_BP_Male_C::BlueprintExtraBabyScaling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintExtraBabyScaling");
		
		AXenomorph_Character_BP_Male_C_BlueprintExtraBabyScaling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AXenomorph_Character_BP_Male_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPShouldForceFlee");
		
		AXenomorph_Character_BP_Male_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAllowClaiming
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AXenomorph_Character_BP_Male_C::BPAllowClaiming(class AShooterPlayerController* ForPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAllowClaiming");
		
		AXenomorph_Character_BP_Male_C_BPAllowClaiming_Params params {};
		params.ForPlayer = ForPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AXenomorph_Character_BP_Male_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPGetMultiUseEntries");
		
		AXenomorph_Character_BP_Male_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveSetup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::DiveSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveSetup");
		
		AXenomorph_Character_BP_Male_C_DiveSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::DiveIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveIdle");
		
		AXenomorph_Character_BP_Male_C_DiveIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_isUnderground
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::OnRep_isUnderground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_isUnderground");
		
		AXenomorph_Character_BP_Male_C_OnRep_isUnderground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AXenomorph_Character_BP_Male_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAdjustAttackIndex");
		
		AXenomorph_Character_BP_Male_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_bIsOffspringMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::OnRep_bIsOffspringMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_bIsOffspringMode");
		
		AXenomorph_Character_BP_Male_C_OnRep_bIsOffspringMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintGetAttackWeight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              inputWeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AXenomorph_Character_BP_Male_C::BlueprintGetAttackWeight(int32_t AttackIndex, float inputWeight, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintGetAttackWeight");
		
		AXenomorph_Character_BP_Male_C_BlueprintGetAttackWeight_Params params {};
		params.AttackIndex = AttackIndex;
		params.inputWeight = inputWeight;
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
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyBabyAgeIncrement
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PreviousAge                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_C::BPNotifyBabyAgeIncrement(float PreviousAge, float NewAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyBabyAgeIncrement");
		
		AXenomorph_Character_BP_Male_C_BPNotifyBabyAgeIncrement_Params params {};
		params.PreviousAge = PreviousAge;
		params.NewAge = NewAge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.GetDefaultMaleXeno
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AXenomorph_Character_BP_Male_C*              AsXenomorph_Character_BP_Male_C                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_C::GetDefaultMaleXeno(class AXenomorph_Character_BP_Male_C** AsXenomorph_Character_BP_Male_C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.GetDefaultMaleXeno");
		
		AXenomorph_Character_BP_Male_C_GetDefaultMaleXeno_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsXenomorph_Character_BP_Male_C != nullptr)
			*AsXenomorph_Character_BP_Male_C = params.AsXenomorph_Character_BP_Male_C;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.SetupOffspringMeshAndSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OffspringMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_C::SetupOffspringMeshAndSettings(bool OffspringMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.SetupOffspringMeshAndSettings");
		
		AXenomorph_Character_BP_Male_C_SetupOffspringMeshAndSettings_Params params {};
		params.OffspringMode = OffspringMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.InitializeDive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::InitializeDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.InitializeDive");
		
		AXenomorph_Character_BP_Male_C_InitializeDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPBecomeAdult
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::BPBecomeAdult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPBecomeAdult");
		
		AXenomorph_Character_BP_Male_C_BPBecomeAdult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.Can Dive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_C::CanDive(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.Can Dive");
		
		AXenomorph_Character_BP_Male_C_CanDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.UserConstructionScript");
		
		AXenomorph_Character_BP_Male_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DelayedUnbury
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_C::DelayedUnbury(float DelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DelayedUnbury");
		
		AXenomorph_Character_BP_Male_C_DelayedUnbury_Params params {};
		params.DelayTime = DelayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BornDiveOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::BornDiveOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BornDiveOut");
		
		AXenomorph_Character_BP_Male_C_BornDiveOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_EndBury
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::AnimNotify_EndBury()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_EndBury");
		
		AXenomorph_Character_BP_Male_C_AnimNotify_EndBury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BeginMaturationTransform
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::BeginMaturationTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BeginMaturationTransform");
		
		AXenomorph_Character_BP_Male_C_BeginMaturationTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_ChestBurst
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_C::AnimNotify_ChestBurst()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_ChestBurst");
		
		AXenomorph_Character_BP_Male_C_AnimNotify_ChestBurst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.ExecuteUbergraph_Xenomorph_Character_BP_Male
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_C::ExecuteUbergraph_Xenomorph_Character_BP_Male(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.ExecuteUbergraph_Xenomorph_Character_BP_Male");
		
		AXenomorph_Character_BP_Male_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AXenomorph_Character_BP_Male_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AXenomorph_Character_BP_Male_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C");
		return ptr;
	}

}


