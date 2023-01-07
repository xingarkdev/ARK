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
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPIsHidden
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARockDrake_Character_BP_C::BPIsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPIsHidden");
		
		ARockDrake_Character_BP_C_BPIsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            launchedCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BPNotifyIfPassengerLaunchShoulderMount(class APrimalCharacter* launchedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount");
		
		ARockDrake_Character_BP_C_BPNotifyIfPassengerLaunchShoulderMount_Params params {};
		params.launchedCharacter = launchedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPGetAddForwardVelocityOnJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ARockDrake_Character_BP_C::BPGetAddForwardVelocityOnJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPGetAddForwardVelocityOnJump");
		
		ARockDrake_Character_BP_C_BPGetAddForwardVelocityOnJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPDinoARKDownloadedBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::BPDinoARKDownloadedBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPDinoARKDownloadedBegin");
		
		ARockDrake_Character_BP_C_BPDinoARKDownloadedBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveDestroyed");
		
		ARockDrake_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_Controlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::CanClimberStopNonDediTick_Controlled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_Controlled");
		
		ARockDrake_Character_BP_C_CanClimberStopNonDediTick_Controlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnJumped");
		
		ARockDrake_Character_BP_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_ClimbingCanAttack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::Climber_AI_ClimbingCanAttack(int32_t AttackIndex, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_ClimbingCanAttack");
		
		ARockDrake_Character_BP_C_Climber_AI_ClimbingCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARockDrake_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnStartJump");
		
		ARockDrake_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_CheckForAttackWhileClimbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::Climber_AI_CheckForAttackWhileClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_CheckForAttackWhileClimbing");
		
		ARockDrake_Character_BP_C_Climber_AI_CheckForAttackWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleRightShoulderButton
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARockDrake_Character_BP_C::BPHandleRightShoulderButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleRightShoulderButton");
		
		ARockDrake_Character_BP_C_BPHandleRightShoulderButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberAI_UpdateHasTargetWhileClimbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ClimberAI_UpdateHasTargetWhileClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberAI_UpdateHasTargetWhileClimbing");
		
		ARockDrake_Character_BP_C_ClimberAI_UpdateHasTargetWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPCharacterSleeped");
		
		ARockDrake_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.HideSaddleMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::HideSaddleMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.HideSaddleMesh");
		
		ARockDrake_Character_BP_C_HideSaddleMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyInventoryItemChange");
		
		ARockDrake_Character_BP_C_BPNotifyInventoryItemChange_Params params {};
		params.bIsItemAdd = bIsItemAdd;
		params.theItem = theItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetAllRidersHidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::SetAllRidersHidden(bool bNewHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetAllRidersHidden");
		
		ARockDrake_Character_BP_C_SetAllRidersHidden_Params params {};
		params.bNewHidden = bNewHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARockDrake_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleOnStopTargeting");
		
		ARockDrake_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ARockDrake_Character_BP_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPModifyFOV");
		
		ARockDrake_Character_BP_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARockDrake_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ARockDrake_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_Server
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ClimberTick_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_Server");
		
		ARockDrake_Character_BP_C_ClimberTick_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Gliding_BraceForImpact
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::RockDrakeTick_Gliding_BraceForImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Gliding_BraceForImpact");
		
		ARockDrake_Character_BP_C_RockDrakeTick_Gliding_BraceForImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Server
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::RockDrakeTick_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Server");
		
		ARockDrake_Character_BP_C_RockDrakeTick_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_NonDedi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::RockDrakeTick_NonDedi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_NonDedi");
		
		ARockDrake_Character_BP_C_RockDrakeTick_NonDedi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyAddPassenger");
		
		ARockDrake_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearPassenger");
		
		ARockDrake_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_NonDedi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ClimberTick_NonDedi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_NonDedi");
		
		ARockDrake_Character_BP_C_ClimberTick_NonDedi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_CheckForPounce
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     pounceDir                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::RockDrake_AI_CheckForPounce(bool* Success, struct FVector* pounceDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_CheckForPounce");
		
		ARockDrake_Character_BP_C_RockDrake_AI_CheckForPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (pounceDir != nullptr)
			*pounceDir = params.pounceDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BeginPounceAnims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::BeginPounceAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BeginPounceAnims");
		
		ARockDrake_Character_BP_C_BeginPounceAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.AllowTraceForPounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::AllowTraceForPounce(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.AllowTraceForPounce");
		
		ARockDrake_Character_BP_C_AllowTraceForPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdatePounceTargetLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::UpdatePounceTargetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdatePounceTargetLocation");
		
		ARockDrake_Character_BP_C_UpdatePounceTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnSetDeath");
		
		ARockDrake_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.TraceForPounce
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               foundValidLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     validLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::TraceForPounce(bool* foundValidLocation, struct FVector* validLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.TraceForPounce");
		
		ARockDrake_Character_BP_C_TraceForPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (foundValidLocation != nullptr)
			*foundValidLocation = params.foundValidLocation;
		if (validLocation != nullptr)
			*validLocation = params.validLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateServerClimberByClimbingIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::UpdateServerClimberByClimbingIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateServerClimberByClimbingIndex");
		
		ARockDrake_Character_BP_C_UpdateServerClimberByClimbingIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateNonControlledClimber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::UpdateNonControlledClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateNonControlledClimber");
		
		ARockDrake_Character_BP_C_UpdateNonControlledClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeAdult
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::BPBecomeAdult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeAdult");
		
		ARockDrake_Character_BP_C_BPBecomeAdult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeBaby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::BPBecomeBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeBaby");
		
		ARockDrake_Character_BP_C_BPBecomeBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_NonControlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::CanClimberStopNonDediTick_NonControlled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_NonControlled");
		
		ARockDrake_Character_BP_C_CanClimberStopNonDediTick_NonControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnNestEgg
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::SpawnNestEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnNestEgg");
		
		ARockDrake_Character_BP_C_SpawnNestEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForSpawnEggs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::CheckForSpawnEggs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForSpawnEggs");
		
		ARockDrake_Character_BP_C_CheckForSpawnEggs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.CleanAllowTargetWhenUsingCamoArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::CleanAllowTargetWhenUsingCamoArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CleanAllowTargetWhenUsingCamoArray");
		
		ARockDrake_Character_BP_C_CleanAllowTargetWhenUsingCamoArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnTargetedByTamedOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            OrderingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        AttackingDino                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForced                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BP_OnTargetedByTamedOrder(class APrimalCharacter* OrderingCharacter, class APrimalDinoCharacter* AttackingDino, bool bForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnTargetedByTamedOrder");
		
		ARockDrake_Character_BP_C_BP_OnTargetedByTamedOrder_Params params {};
		params.OrderingCharacter = OrderingCharacter;
		params.AttackingDino = AttackingDino;
		params.bForced = bForced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectWallJumpAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     wallJumpVelocity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::GetCorrectWallJumpAnim(const struct FVector& wallJumpVelocity, class UAnimMontage** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectWallJumpAnim");
		
		ARockDrake_Character_BP_C_GetCorrectWallJumpAnim_Params params {};
		params.wallJumpVelocity = wallJumpVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get CorrectClimber Rotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               updateRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::GetCorrectClimberRotation(bool* updateRotation, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get CorrectClimber Rotation");
		
		ARockDrake_Character_BP_C_GetCorrectClimberRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (updateRotation != nullptr)
			*updateRotation = params.updateRotation;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldAlignWithVelocityOnImpact
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHit                                                  (Parm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::ShouldAlignWithVelocityOnImpact(const struct FHitResult& ImpactHit, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldAlignWithVelocityOnImpact");
		
		ARockDrake_Character_BP_C_ShouldAlignWithVelocityOnImpact_Params params {};
		params.ImpactHit = ImpactHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Override
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ServerTick_Override()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Override");
		
		ARockDrake_Character_BP_C_ServerTick_Override_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnWallJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     wallJumpVelocity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::OnWallJump(const struct FVector& wallJumpVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnWallJump");
		
		ARockDrake_Character_BP_C_OnWallJump_Params params {};
		params.wallJumpVelocity = wallJumpVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnStartSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::OnStartSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnStartSeeking");
		
		ARockDrake_Character_BP_C_OnStartSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSelfMoved                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ARockDrake_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveHit");
		
		ARockDrake_Character_BP_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ARockDrake_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Rock Drake Anim BP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class URockDrake_AnimBlueprint_C*                  animBP                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::GetRockDrakeAnimBP(class URockDrake_AnimBlueprint_C** animBP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Rock Drake Anim BP");
		
		ARockDrake_Character_BP_C_GetRockDrakeAnimBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (animBP != nullptr)
			*animBP = params.animBP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnGlideImpactVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::SpawnGlideImpactVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnGlideImpactVFX");
		
		ARockDrake_Character_BP_C_SpawnGlideImpactVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCurrentGlidingRotationRateMult
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              mult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::GetCurrentGlidingRotationRateMult(float* mult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCurrentGlidingRotationRateMult");
		
		ARockDrake_Character_BP_C_GetCurrentGlidingRotationRateMult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mult != nullptr)
			*mult = params.mult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ARockDrake_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ARockDrake_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
		params.AttackIndex = AttackIndex;
		params.OriginalDamageAmount = OriginalDamageAmount;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamageType != nullptr)
			*OutDamageType = params.OutDamageType;
		if (OutDamageImpulse != nullptr)
			*OutDamageImpulse = params.OutDamageImpulse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Is Rock Drake Gliding
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               checkPrevious                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::IsRockDrakeGliding(bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Is Rock Drake Gliding");
		
		ARockDrake_Character_BP_C_IsRockDrakeGliding_Params params {};
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Stop All Climber Logic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::StopAllClimberLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Stop All Climber Logic");
		
		ARockDrake_Character_BP_C_StopAllClimberLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::PounceStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceStart");
		
		ARockDrake_Character_BP_C_PounceStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_OnSetTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::Climber_AI_OnSetTarget(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_OnSetTarget");
		
		ARockDrake_Character_BP_C_Climber_AI_OnSetTarget_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnRiderChangeWeapons
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           theRider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 newWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BP_OnRiderChangeWeapons(class AShooterCharacter* theRider, class UPrimalItem* newWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnRiderChangeWeapons");
		
		ARockDrake_Character_BP_C_BP_OnRiderChangeWeapons_Params params {};
		params.theRider = theRider;
		params.newWeapon = newWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberOn Server Run Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ClimberOnServerRunReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberOn Server Run Released");
		
		ARockDrake_Character_BP_C_ClimberOnServerRunReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldRockDrakeGlideFall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::ShouldRockDrakeGlideFall(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldRockDrakeGlideFall");
		
		ARockDrake_Character_BP_C_ShouldRockDrakeGlideFall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStopSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ClimberStopSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStopSeeking");
		
		ARockDrake_Character_BP_C_ClimberStopSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStartSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ClimberStartSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStartSeeking");
		
		ARockDrake_Character_BP_C_ClimberStartSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsRockDrakeGliding_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               checkPrev                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::IsRockDrakeGliding_Pure(bool checkPrev, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsRockDrakeGliding_Pure");
		
		ARockDrake_Character_BP_C_IsRockDrakeGliding_Pure_Params params {};
		params.checkPrev = checkPrev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_Feathers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::UpdateGliding_Feathers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_Feathers");
		
		ARockDrake_Character_BP_C_UpdateGliding_Feathers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::UpdateGliding_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_VFX");
		
		ARockDrake_Character_BP_C_UpdateGliding_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGliding_Audio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::UpdateGliding_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGliding_Audio");
		
		ARockDrake_Character_BP_C_UpdateGliding_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGlidingFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::UpdateGlidingFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGlidingFX");
		
		ARockDrake_Character_BP_C_UpdateGlidingFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_OnServerRunPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::Climber_OnServerRunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_OnServerRunPressed");
		
		ARockDrake_Character_BP_C_Climber_OnServerRunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClientTick_UpdateClimberTarget FOV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ClientTick_UpdateClimberTargetFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClientTick_UpdateClimberTarget FOV");
		
		ARockDrake_Character_BP_C_ClientTick_UpdateClimberTargetFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Target TPV_Camera Offset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ReplicateIndexUpdateTargetTPV_CameraOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Target TPV_Camera Offset");
		
		ARockDrake_Character_BP_C_ReplicateIndexUpdateTargetTPV_CameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.AddRiderToCamoFadeQueue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EnterCamo                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInstant                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::AddRiderToCamoFadeQueue(class AShooterCharacter* Rider, bool EnterCamo, bool bInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.AddRiderToCamoFadeQueue");
		
		ARockDrake_Character_BP_C_AddRiderToCamoFadeQueue_Params params {};
		params.Rider = Rider;
		params.EnterCamo = EnterCamo;
		params.bInstant = bInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ActivateRiderCamoParticles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnterCamo                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           specificRider                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::ActivateRiderCamoParticles(bool EnterCamo, class AShooterCharacter* specificRider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ActivateRiderCamoParticles");
		
		ARockDrake_Character_BP_C_ActivateRiderCamoParticles_Params params {};
		params.EnterCamo = EnterCamo;
		params.specificRider = specificRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifySetRider");
		
		ARockDrake_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearRider");
		
		ARockDrake_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveAnyDamage");
		
		ARockDrake_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::GetGlidingSpeedRatio_(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_");
		
		ARockDrake_Character_BP_C_GetGlidingSpeedRatio__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPUnstasis");
		
		ARockDrake_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::InitRockDrake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake");
		
		ARockDrake_Character_BP_C_InitRockDrake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::GetGlidingSpeedRatio_Pure(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_Pure");
		
		ARockDrake_Character_BP_C_GetGlidingSpeedRatio_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ARockDrake_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		ARockDrake_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Non Dedi Climber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ReplicateIndexUpdateNonDediClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Non Dedi Climber");
		
		ARockDrake_Character_BP_C_ReplicateIndexUpdateNonDediClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Server And Client Climber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ReplicateIndexUpdateServerAndClientClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Server And Client Climber");
		
		ARockDrake_Character_BP_C_ReplicateIndexUpdateServerAndClientClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberMovementMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::UpdateClimberMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberMovementMode");
		
		ARockDrake_Character_BP_C_UpdateClimberMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnMovementModeChangedNotify");
		
		ARockDrake_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetRockDrakeStateOverrideIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		E_DinoClimberState_RockDrake                       State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::GetRockDrakeStateOverrideIndex(E_DinoClimberState_RockDrake State, unsigned char* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetRockDrakeStateOverrideIndex");
		
		ARockDrake_Character_BP_C_GetRockDrakeStateOverrideIndex_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectSurfaceTraceDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isForRetry                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              traceDist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::GetCorrectSurfaceTraceDistance(bool isForRetry, float* traceDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectSurfaceTraceDistance");
		
		ARockDrake_Character_BP_C_GetCorrectSurfaceTraceDistance_Params params {};
		params.isForRetry = isForRetry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceDist != nullptr)
			*traceDist = params.traceDist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Tick Force Forward Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::TickForceForwardInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Tick Force Forward Input");
		
		ARockDrake_Character_BP_C_TickForceForwardInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ARockDrake_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ARockDrake_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.GlideStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::GlideStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GlideStart");
		
		ARockDrake_Character_BP_C_GlideStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.PrepareToPounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     pounceDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::PrepareToPounce(const struct FVector& pounceDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.PrepareToPounce");
		
		ARockDrake_Character_BP_C_PrepareToPounce_Params params {};
		params.pounceDir = pounceDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Net Set Climber State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      newStateIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::NetSetClimberState(unsigned char newStateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Net Set Climber State");
		
		ARockDrake_Character_BP_C_NetSetClimberState_Params params {};
		params.newStateIndex = newStateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetCamoActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::SetCamoActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetCamoActive");
		
		ARockDrake_Character_BP_C_SetCamoActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanGlide
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isToStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::CanGlide(bool isToStart, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanGlide");
		
		ARockDrake_Character_BP_C_CanGlide_Params params {};
		params.isToStart = isToStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanPounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isToStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::CanPounce(bool isToStart, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanPounce");
		
		ARockDrake_Character_BP_C_CanPounce_Params params {};
		params.isToStart = isToStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Gliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ServerTick_Gliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Gliding");
		
		ARockDrake_Character_BP_C_ServerTick_Gliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Pouncing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ServerTick_Pouncing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Pouncing");
		
		ARockDrake_Character_BP_C_ServerTick_Pouncing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberStateByClimbingIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      newIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::UpdateClimberStateByClimbingIndex(unsigned char newIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberStateByClimbingIndex");
		
		ARockDrake_Character_BP_C_UpdateClimberStateByClimbingIndex_Params params {};
		params.newIndex = newIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldClimberDraw CrosshairWhileClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::ShouldClimberDrawCrosshairWhileClimbing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldClimberDraw CrosshairWhileClimbing");
		
		ARockDrake_Character_BP_C_ShouldClimberDrawCrosshairWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnRep_bIsUsingCamo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::OnRep_bIsUsingCamo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnRep_bIsUsingCamo");
		
		ARockDrake_Character_BP_C_OnRep_bIsUsingCamo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Can Use Camo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isForStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::CanUseCamo(bool isForStart, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Can Use Camo");
		
		ARockDrake_Character_BP_C_CanUseCamo_Params params {};
		params.isForStart = isForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.NetSetUseCamo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newUse                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::NetSetUseCamo(bool newUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.NetSetUseCamo");
		
		ARockDrake_Character_BP_C_NetSetUseCamo_Params params {};
		params.newUse = newUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsNormalClimbable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAverageNormal                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::IsNormalClimbable(const struct FVector& Normal, bool isAverageNormal, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsNormalClimbable");
		
		ARockDrake_Character_BP_C_IsNormalClimbable_Params params {};
		params.Normal = Normal;
		params.isAverageNormal = isAverageNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Correct Surface Trace OffsetTransforms
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideUseMap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<bool>                                       newUseMp                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FTransform>                          offsetTransforms                                           (Parm, OutParm, ZeroConstructor)
	 * 		TArray<int32_t>                                    TraceIndeces                                               (Parm, OutParm, ZeroConstructor)
	 */
	void ARockDrake_Character_BP_C::GetCorrectSurfaceTraceOffsetTransforms(bool overrideUseMap, TArray<bool>* newUseMp, TArray<struct FTransform>* offsetTransforms, TArray<int32_t>* TraceIndeces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Correct Surface Trace OffsetTransforms");
		
		ARockDrake_Character_BP_C_GetCorrectSurfaceTraceOffsetTransforms_Params params {};
		params.overrideUseMap = overrideUseMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newUseMp != nullptr)
			*newUseMp = params.newUseMp;
		if (offsetTransforms != nullptr)
			*offsetTransforms = params.offsetTransforms;
		if (TraceIndeces != nullptr)
			*TraceIndeces = params.TraceIndeces;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Check For Prevent Stop Climbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       traceHitsArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            numValidHits                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            numTraces                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               allowClimbing                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::CheckForPreventStopClimbing(TArray<bool>* traceHitsArray, int32_t numValidHits, int32_t numTraces, bool* allowClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Check For Prevent Stop Climbing");
		
		ARockDrake_Character_BP_C_CheckForPreventStopClimbing_Params params {};
		params.numValidHits = numValidHits;
		params.numTraces = numTraces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceHitsArray != nullptr)
			*traceHitsArray = params.traceHitsArray;
		if (allowClimbing != nullptr)
			*allowClimbing = params.allowClimbing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARockDrake_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanAttack");
		
		ARockDrake_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARockDrake_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanRiderAttack");
		
		ARockDrake_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UserConstructionScript");
		
		ARockDrake_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::FadeCamo_RockDrake__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__FinishedFunc");
		
		ARockDrake_Character_BP_C_FadeCamo_RockDrake__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::FadeCamo_RockDrake__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__UpdateFunc");
		
		ARockDrake_Character_BP_C_FadeCamo_RockDrake__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::FadeToInvisible_Rider__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__FinishedFunc");
		
		ARockDrake_Character_BP_C_FadeToInvisible_Rider__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::FadeToInvisible_Rider__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__UpdateFunc");
		
		ARockDrake_Character_BP_C_FadeToInvisible_Rider__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_126
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_126()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_126");
		
		ARockDrake_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_126_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpPressed");
		
		ARockDrake_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpReleased");
		
		ARockDrake_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_GlideStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              newSpeedMult                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::Multi_GlideStart(const struct FRotator& NewRotation, float newSpeedMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_GlideStart");
		
		ARockDrake_Character_BP_C_Multi_GlideStart_Params params {};
		params.NewRotation = NewRotation;
		params.newSpeedMult = newSpeedMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PounceStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFromClimbing                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::Multi_PounceStart(const struct FRotator& NewRotation, bool isFromClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PounceStart");
		
		ARockDrake_Character_BP_C_Multi_PounceStart_Params params {};
		params.NewRotation = NewRotation;
		params.isFromClimbing = isFromClimbing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Play_FadeCamo_RockDrake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::Play_FadeCamo_RockDrake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Play_FadeCamo_RockDrake");
		
		ARockDrake_Character_BP_C_Play_FadeCamo_RockDrake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Reverse_FadeCamo_RockDrake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::Reverse_FadeCamo_RockDrake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Reverse_FadeCamo_RockDrake");
		
		ARockDrake_Character_BP_C_Reverse_FadeCamo_RockDrake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveBeginPlay");
		
		ARockDrake_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_RockDrake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::SetNewTime_FadeCamo_RockDrake(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_RockDrake");
		
		ARockDrake_Character_BP_C_SetNewTime_FadeCamo_RockDrake_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_SetNewTime_FadeCamo_RockDrake
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::Multi_SetNewTime_FadeCamo_RockDrake(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_SetNewTime_FadeCamo_RockDrake");
		
		ARockDrake_Character_BP_C_Multi_SetNewTime_FadeCamo_RockDrake_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_Rider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::SetNewTime_FadeCamo_Rider(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_Rider");
		
		ARockDrake_Character_BP_C_SetNewTime_FadeCamo_Rider_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReverseFromEnd_FadeCamo_Rider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ReverseFromEnd_FadeCamo_Rider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReverseFromEnd_FadeCamo_Rider");
		
		ARockDrake_Character_BP_C_ReverseFromEnd_FadeCamo_Rider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.PlayFromStart_FadeCamo_Rider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::PlayFromStart_FadeCamo_Rider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.PlayFromStart_FadeCamo_Rider");
		
		ARockDrake_Character_BP_C_PlayFromStart_FadeCamo_Rider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_OnRiderEquipWeapon
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           theRider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::Multi_OnRiderEquipWeapon(class AShooterCharacter* theRider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_OnRiderEquipWeapon");
		
		ARockDrake_Character_BP_C_Multi_OnRiderEquipWeapon_Params params {};
		params.theRider = theRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::InitRockDrake_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_Event");
		
		ARockDrake_Character_BP_C_InitRockDrake_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_NextTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::InitRockDrake_NextTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_NextTick");
		
		ARockDrake_Character_BP_C_InitRockDrake_NextTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_HardSetCamoActive
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::Multi_HardSetCamoActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_HardSetCamoActive");
		
		ARockDrake_Character_BP_C_Multi_HardSetCamoActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::PounceAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceAfterDelay");
		
		ARockDrake_Character_BP_C_PounceAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::Event_CleanAllowTargetWhenUsingCamoArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray");
		
		ARockDrake_Character_BP_C_Event_CleanAllowTargetWhenUsingCamoArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_RestartCheckTargetArrayTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::Event_RestartCheckTargetArrayTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_RestartCheckTargetArrayTimer");
		
		ARockDrake_Character_BP_C_Event_RestartCheckTargetArrayTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.TrySpawnEggAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::TrySpawnEggAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.TrySpawnEggAfterDelay");
		
		ARockDrake_Character_BP_C_TrySpawnEggAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestSetJumpMovementMode
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::Server_RequestSetJumpMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestSetJumpMovementMode");
		
		ARockDrake_Character_BP_C_Server_RequestSetJumpMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ResetIsInAirFromJumpAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::ResetIsInAirFromJumpAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ResetIsInAirFromJumpAfterDelay");
		
		ARockDrake_Character_BP_C_ResetIsInAirFromJumpAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.OwningClient_SyncAllowPouncing
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Newval                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::OwningClient_SyncAllowPouncing(bool Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OwningClient_SyncAllowPouncing");
		
		ARockDrake_Character_BP_C_OwningClient_SyncAllowPouncing_Params params {};
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_SyncHasValidPounceTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Newval                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewTargetLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::Server_SyncHasValidPounceTarget(bool Newval, const struct FVector& NewTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_SyncHasValidPounceTarget");
		
		ARockDrake_Character_BP_C_Server_SyncHasValidPounceTarget_Params params {};
		params.Newval = Newval;
		params.NewTargetLocation = NewTargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_AnticipatePounce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFromSetTarget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::RockDrake_AI_AnticipatePounce(bool isFromSetTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_AnticipatePounce");
		
		ARockDrake_Character_BP_C_RockDrake_AI_AnticipatePounce_Params params {};
		params.isFromSetTarget = isFromSetTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::CheckForGlideStartTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer");
		
		ARockDrake_Character_BP_C_CheckForGlideStartTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_EnableTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::CheckForGlideStartTimer_EnableTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_EnableTick");
		
		ARockDrake_Character_BP_C_CheckForGlideStartTimer_EnableTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_StopTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::CheckForGlideStartTimer_StopTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_StopTick");
		
		ARockDrake_Character_BP_C_CheckForGlideStartTimer_StopTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PlayFade
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::Multi_PlayFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PlayFade");
		
		ARockDrake_Character_BP_C_Multi_PlayFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestWaterJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::Server_RequestWaterJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestWaterJump");
		
		ARockDrake_Character_BP_C_Server_RequestWaterJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.WaterJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockDrake_Character_BP_C::WaterJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.WaterJump");
		
		ARockDrake_Character_BP_C_WaterJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RockDrake_Character_BP.RockDrake_Character_BP_C.ExecuteUbergraph_RockDrake_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockDrake_Character_BP_C::ExecuteUbergraph_RockDrake_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ExecuteUbergraph_RockDrake_Character_BP");
		
		ARockDrake_Character_BP_C_ExecuteUbergraph_RockDrake_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARockDrake_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARockDrake_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RockDrake_Character_BP.RockDrake_Character_BP_C");
		return ptr;
	}

}


