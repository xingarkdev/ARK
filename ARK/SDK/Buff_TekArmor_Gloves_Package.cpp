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
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventBlockingWithShield
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_TekArmor_Gloves_C::PreventBlockingWithShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventBlockingWithShield");
		
		ABuff_TekArmor_Gloves_C_PreventBlockingWithShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.HasShield
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_TekArmor_Gloves_C::HasShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.HasShield");
		
		ABuff_TekArmor_Gloves_C_HasShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ShieldActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_TekArmor_Gloves_C::ShieldActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ShieldActive");
		
		ABuff_TekArmor_Gloves_C_ShieldActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_TekArmor_Gloves_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPCheckPreventInput");
		
		ABuff_TekArmor_Gloves_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanPhysicallyTekPunch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::CanPhysicallyTekPunch(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanPhysicallyTekPunch");
		
		ABuff_TekArmor_Gloves_C_CanPhysicallyTekPunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Should Damage Actor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::ShouldDamageActor(class AActor* Victim, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Should Damage Actor");
		
		ABuff_TekArmor_Gloves_C_ShouldDamageActor_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Has Line Of SightToActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::HasLineOfSightToActor(class AActor* Actor, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Has Line Of SightToActor");
		
		ABuff_TekArmor_Gloves_C_HasLineOfSightToActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ArePunchChargeAnimsPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               cleanUpAnims                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::ArePunchChargeAnimsPlaying(bool cleanUpAnims, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ArePunchChargeAnimsPlaying");
		
		ABuff_TekArmor_Gloves_C_ArePunchChargeAnimsPlaying_Params params {};
		params.cleanUpAnims = cleanUpAnims;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PlayPunchAnimsByState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::PlayPunchAnimsByState(E_TekGlovePunchState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PlayPunchAnimsByState");
		
		ABuff_TekArmor_Gloves_C_PlayPunchAnimsByState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.IsPlayerAboveGround
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::IsPlayerAboveGround(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.IsPlayerAboveGround");
		
		ABuff_TekArmor_Gloves_C_IsPlayerAboveGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AreTekPantsEquipped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABuff_TekArmor_Pants_C*                      tekPantsRef                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::AreTekPantsEquipped(bool* Result, class ABuff_TekArmor_Pants_C** tekPantsRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AreTekPantsEquipped");
		
		ABuff_TekArmor_Gloves_C_AreTekPantsEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (tekPantsRef != nullptr)
			*tekPantsRef = params.tekPantsRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetBuffPostprocessIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_TekArmor_Gloves_C::GetBuffPostprocessIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetBuffPostprocessIntensity");
		
		ABuff_TekArmor_Gloves_C_GetBuffPostprocessIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPDeactivated");
		
		ABuff_TekArmor_Gloves_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Update Local Vars by State
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::UpdateLocalVarsbyState(E_TekGlovePunchState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Update Local Vars by State");
		
		ABuff_TekArmor_Gloves_C_UpdateLocalVarsbyState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetPlayerCameraLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::GetPlayerCameraLocation(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetPlayerCameraLocation");
		
		ABuff_TekArmor_Gloves_C_GetPlayerCameraLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPSetupForInstigator");
		
		ABuff_TekArmor_Gloves_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::RocketPunchEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchEnd");
		
		ABuff_TekArmor_Gloves_C_RocketPunchEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetOwningPlayerVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::ResetOwningPlayerVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetOwningPlayerVariables");
		
		ABuff_TekArmor_Gloves_C_ResetOwningPlayerVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_TekArmor_Gloves_C::PreventJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventJump");
		
		ABuff_TekArmor_Gloves_C_PreventJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.NetSetTekPunchState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               newPunchState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::NetSetTekPunchState(E_TekGlovePunchState newPunchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.NetSetTekPunchState");
		
		ABuff_TekArmor_Gloves_C_NetSetTekPunchState_Params params {};
		params.newPunchState = newPunchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickServer");
		
		ABuff_TekArmor_Gloves_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Client_SetTekPunchState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::Client_SetTekPunchState(E_TekGlovePunchState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Client_SetTekPunchState");
		
		ABuff_TekArmor_Gloves_C_Client_SetTekPunchState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetTimeToRocketPunchTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_TekArmor_Gloves_C::GetTimeToRocketPunchTarget(const struct FVector& TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetTimeToRocketPunchTarget");
		
		ABuff_TekArmor_Gloves_C_GetTimeToRocketPunchTarget_Params params {};
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CheckForTargetsWhileRocketPunching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               punchNow                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::CheckForTargetsWhileRocketPunching(bool* punchNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CheckForTargetsWhileRocketPunching");
		
		ABuff_TekArmor_Gloves_C_CheckForTargetsWhileRocketPunching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (punchNow != nullptr)
			*punchNow = params.punchNow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Set AudioParams and Play
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAudioComponent*                             Audio                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlaySound                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::SetAudioParamsandPlay(class UAudioComponent** Audio, float Volume, float Pitch, bool PlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Set AudioParams and Play");
		
		ABuff_TekArmor_Gloves_C_SetAudioParamsandPlay_Params params {};
		params.Volume = Volume;
		params.Pitch = Pitch;
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Audio != nullptr)
			*Audio = params.Audio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnRep_CurrentPunchState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::OnRep_CurrentPunchState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnRep_CurrentPunchState");
		
		ABuff_TekArmor_Gloves_C_OnRep_CurrentPunchState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetRelativeCenterOfMass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_TekArmor_Gloves_C::GetRelativeCenterOfMass(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetRelativeCenterOfMass");
		
		ABuff_TekArmor_Gloves_C_GetRelativeCenterOfMass_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.DrawBuffFloatingHUD");
		
		ABuff_TekArmor_Gloves_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ScanForRocketFistTargets
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               anyHit                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            hitPawn                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::ScanForRocketFistTargets(float Range, bool* anyHit, struct FVector* HitLocation, class APrimalCharacter** hitPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ScanForRocketFistTargets");
		
		ABuff_TekArmor_Gloves_C_ScanForRocketFistTargets_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (anyHit != nullptr)
			*anyHit = params.anyHit;
		if (HitLocation != nullptr)
			*HitLocation = params.HitLocation;
		if (hitPawn != nullptr)
			*hitPawn = params.hitPawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AccurateSphereCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     EndLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IgnoreFriendlies                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitPawnOrStructure                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::AccurateSphereCheck(const struct FVector& EndLocation, float SphereRadius, bool IgnoreFriendlies, bool* HitPawnOrStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AccurateSphereCheck");
		
		ABuff_TekArmor_Gloves_C_AccurateSphereCheck_Params params {};
		params.EndLocation = EndLocation;
		params.SphereRadius = SphereRadius;
		params.IgnoreFriendlies = IgnoreFriendlies;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitPawnOrStructure != nullptr)
			*HitPawnOrStructure = params.HitPawnOrStructure;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Spawn Sound at Fist Location
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  SoundToSpawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::SpawnSoundatFistLocation(class USoundBase* SoundToSpawn, float VolumeMultiplier, float PitchMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Spawn Sound at Fist Location");
		
		ABuff_TekArmor_Gloves_C_SpawnSoundatFistLocation_Params params {};
		params.SoundToSpawn = SoundToSpawn;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickClient");
		
		ABuff_TekArmor_Gloves_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Get Punch Location
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::GetPunchLocation(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Get Punch Location");
		
		ABuff_TekArmor_Gloves_C_GetPunchLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::RocketPunchStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchStart");
		
		ABuff_TekArmor_Gloves_C_RocketPunchStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Punch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::Punch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Punch");
		
		ABuff_TekArmor_Gloves_C_Punch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanUseTekAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNotifyIfOutOfElement                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanUseTekAbility");
		
		ABuff_TekArmor_Gloves_C_CanUseTekAbility_Params params {};
		params.bNotifyIfOutOfElement = bNotifyIfOutOfElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.SetCastedArmorPieceRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::SetCastedArmorPieceRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.SetCastedArmorPieceRef");
		
		ABuff_TekArmor_Gloves_C_SetCastedArmorPieceRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.UserConstructionScript");
		
		ABuff_TekArmor_Gloves_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_87
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_Targeting_K2Node_InputActionEvent_87()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_87");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_Targeting_K2Node_InputActionEvent_87_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_86
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_Targeting_K2Node_InputActionEvent_86()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_86");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_Targeting_K2Node_InputActionEvent_86_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_85
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_AltFire_K2Node_InputActionEvent_85()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_85");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_AltFire_K2Node_InputActionEvent_85_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_84
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_AltFire_K2Node_InputActionEvent_84()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_84");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_AltFire_K2Node_InputActionEvent_84_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_83
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_Fire_K2Node_InputActionEvent_83()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_83");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_Fire_K2Node_InputActionEvent_83_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_82
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_Fire_K2Node_InputActionEvent_82()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_82");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_Fire_K2Node_InputActionEvent_82_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_38
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_38()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_38");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_38_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_37
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_37()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_37");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_37_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_36
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_36()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_36");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_36_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_35
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_35()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_35");
		
		ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_35_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnSuperPunch_Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::OnSuperPunch_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnSuperPunch_Pressed");
		
		ABuff_TekArmor_Gloves_C_OnSuperPunch_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnSuperPunch_Released
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::OnSuperPunch_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnSuperPunch_Released");
		
		ABuff_TekArmor_Gloves_C_OnSuperPunch_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Server_SetPunchChargeState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               newPunchState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::Server_SetPunchChargeState(E_TekGlovePunchState newPunchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Server_SetPunchChargeState");
		
		ABuff_TekArmor_Gloves_C_Server_SetPunchChargeState_Params params {};
		params.newPunchState = newPunchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetCanLandAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::ResetCanLandAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetCanLandAfterDelay");
		
		ABuff_TekArmor_Gloves_C_ResetCanLandAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.UpdateClientHasValidRocketPunchTarget
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newHasTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            newTargetPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::UpdateClientHasValidRocketPunchTarget(bool newHasTarget, class APrimalCharacter* newTargetPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.UpdateClientHasValidRocketPunchTarget");
		
		ABuff_TekArmor_Gloves_C_UpdateClientHasValidRocketPunchTarget_Params params {};
		params.newHasTarget = newHasTarget;
		params.newTargetPawn = newTargetPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetPunchStateAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::ResetPunchStateAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetPunchStateAfterDelay");
		
		ABuff_TekArmor_Gloves_C_ResetPunchStateAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Gloves_AltFirePressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::Gloves_AltFirePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Gloves_AltFirePressed");
		
		ABuff_TekArmor_Gloves_C_Gloves_AltFirePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Gloves_AltFireReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Gloves_C::Gloves_AltFireReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Gloves_AltFireReleased");
		
		ABuff_TekArmor_Gloves_C_Gloves_AltFireReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ExecuteUbergraph_Buff_TekArmor_Gloves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekArmor_Gloves_C::ExecuteUbergraph_Buff_TekArmor_Gloves(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ExecuteUbergraph_Buff_TekArmor_Gloves");
		
		ABuff_TekArmor_Gloves_C_ExecuteUbergraph_Buff_TekArmor_Gloves_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekArmor_Gloves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekArmor_Gloves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C");
		return ptr;
	}

}


