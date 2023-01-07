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
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.IsAlly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            otherTargetingTeam                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAllyOrSomeTeam                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::IsAlly(int32_t otherTargetingTeam, bool* isAllyOrSomeTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.IsAlly");
		
		ABuff_HealAura_C_IsAlly_Params params {};
		params.otherTargetingTeam = otherTargetingTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isAllyOrSomeTeam != nullptr)
			*isAllyOrSomeTeam = params.isAllyOrSomeTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_HealAura_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.BPClientHandleNetExecCommand");
		
		ABuff_HealAura_C_BPClientHandleNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.HasReachedMaxHealedCharacters
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasReachedMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::HasReachedMaxHealedCharacters(bool* hasReachedMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.HasReachedMaxHealedCharacters");
		
		ABuff_HealAura_C_HasReachedMaxHealedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasReachedMax != nullptr)
			*hasReachedMax = params.hasReachedMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.TryHealCharacterAndSpawnParticles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            characterToHeal                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dontHealIfAlreadyHealing                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isInstigator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::TryHealCharacterAndSpawnParticles(class APrimalCharacter* characterToHeal, bool dontHealIfAlreadyHealing, float DeltaTime, bool isInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.TryHealCharacterAndSpawnParticles");
		
		ABuff_HealAura_C_TryHealCharacterAndSpawnParticles_Params params {};
		params.characterToHeal = characterToHeal;
		params.dontHealIfAlreadyHealing = dontHealIfAlreadyHealing;
		params.DeltaTime = DeltaTime;
		params.isInstigator = isInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.CheckStopHealingCondition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldStopHealing                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::CheckStopHealingCondition(bool* shouldStopHealing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CheckStopHealingCondition");
		
		ABuff_HealAura_C_CheckStopHealingCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldStopHealing != nullptr)
			*shouldStopHealing = params.shouldStopHealing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatusValueModifierDescription             notificationDescription                                    (Parm)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::ShowHUDNotification(const struct FStatusValueModifierDescription& notificationDescription, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotification");
		
		ABuff_HealAura_C_ShowHUDNotification_Params params {};
		params.notificationDescription = notificationDescription;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.CalculateFoodConsumptionForHealingAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              healAmount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              foodAmount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::CalculateFoodConsumptionForHealingAmount(float healAmount, class APrimalCharacter* Character, float* foodAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CalculateFoodConsumptionForHealingAmount");
		
		ABuff_HealAura_C_CalculateFoodConsumptionForHealingAmount_Params params {};
		params.healAmount = healAmount;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (foodAmount != nullptr)
			*foodAmount = params.foodAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.StopHealing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               doMulticast                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::StopHealing(bool doMulticast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.StopHealing");
		
		ABuff_HealAura_C_StopHealing_Params params {};
		params.doMulticast = doMulticast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.Get Current Status Amount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPrimalCharacterStatusValue                        statusField                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              food                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::GetCurrentStatusAmount(class APawn* Pawn, EPrimalCharacterStatusValue statusField, float* food)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.Get Current Status Amount");
		
		ABuff_HealAura_C_GetCurrentStatusAmount_Params params {};
		params.Pawn = Pawn;
		params.statusField = statusField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (food != nullptr)
			*food = params.food;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.ConsumeFood
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              foodAmount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::ConsumeFood(float foodAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ConsumeFood");
		
		ABuff_HealAura_C_ConsumeFood_Params params {};
		params.foodAmount = foodAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.DisableHealingForCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            characterIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               disableParticles                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::DisableHealingForCharacter(class APrimalCharacter* characterIndex, bool disableParticles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DisableHealingForCharacter");
		
		ABuff_HealAura_C_DisableHealingForCharacter_Params params {};
		params.characterIndex = characterIndex;
		params.disableParticles = disableParticles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.RestoreBitFlag
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::RestoreBitFlag(class APrimalCharacter* forCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.RestoreBitFlag");
		
		ABuff_HealAura_C_RestoreBitFlag_Params params {};
		params.forCharacter = forCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.CanHealCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PrimalCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canHeal                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::CanHealCharacter(class APrimalCharacter* PrimalCharacter, bool* canHeal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CanHealCharacter");
		
		ABuff_HealAura_C_CanHealCharacter_Params params {};
		params.PrimalCharacter = PrimalCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canHeal != nullptr)
			*canHeal = params.canHeal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.CleanHealArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::CleanHealArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CleanHealArray");
		
		ABuff_HealAura_C_CleanHealArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.BuffTickServer");
		
		ABuff_HealAura_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.Activate Healing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::ActivateHealing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.Activate Healing");
		
		ABuff_HealAura_C_ActivateHealing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.TryHeal Character and Consume Food
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isSelf                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               couldHeal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::TryHealCharacterandConsumeFood(class APrimalCharacter* Character, bool isSelf, float DeltaTime, bool* couldHeal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.TryHeal Character and Consume Food");
		
		ABuff_HealAura_C_TryHealCharacterandConsumeFood_Params params {};
		params.Character = Character;
		params.isSelf = isSelf;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (couldHeal != nullptr)
			*couldHeal = params.couldHeal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.CheckFoodCondition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasEnoughFood                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::CheckFoodCondition(bool* hasEnoughFood)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CheckFoodCondition");
		
		ABuff_HealAura_C_CheckFoodCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasEnoughFood != nullptr)
			*hasEnoughFood = params.hasEnoughFood;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.HealCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::HealCharacter(class APrimalCharacter* Character, float amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.HealCharacter");
		
		ABuff_HealAura_C_HealCharacter_Params params {};
		params.Character = Character;
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.Restore All Bit Flags
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::RestoreAllBitFlags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.Restore All Bit Flags");
		
		ABuff_HealAura_C_RestoreAllBitFlags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.BPDeactivated");
		
		ABuff_HealAura_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ReceiveDestroyed");
		
		ABuff_HealAura_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.Calculate Healing Amount For Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isSelf                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              healingAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::CalculateHealingAmountForCharacter(class APrimalCharacter* Character, bool isSelf, float DeltaTime, float* healingAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.Calculate Healing Amount For Character");
		
		ABuff_HealAura_C_CalculateHealingAmountForCharacter_Params params {};
		params.Character = Character;
		params.isSelf = isSelf;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (healingAmount != nullptr)
			*healingAmount = params.healingAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.UserConstructionScript");
		
		ABuff_HealAura_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.FadeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_HealAura_C::FadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeOut__FinishedFunc");
		
		ABuff_HealAura_C_FadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.FadeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_HealAura_C::FadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeOut__UpdateFunc");
		
		ABuff_HealAura_C_FadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.FadeIn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_HealAura_C::FadeIn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeIn__FinishedFunc");
		
		ABuff_HealAura_C_FadeIn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.FadeIn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_HealAura_C::FadeIn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeIn__UpdateFunc");
		
		ABuff_HealAura_C_FadeIn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.SpawnHealParticleOnCharacter
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::SpawnHealParticleOnCharacter(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.SpawnHealParticleOnCharacter");
		
		ABuff_HealAura_C_SpawnHealParticleOnCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.FadeInPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::FadeInPulse(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeInPulse");
		
		ABuff_HealAura_C_FadeInPulse_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ReceiveBeginPlay");
		
		ABuff_HealAura_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::FadeOutPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse");
		
		ABuff_HealAura_C_FadeOutPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.DestroyHealingParticleForCharacter_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::DestroyHealingParticleForCharacter_Multicast(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DestroyHealingParticleForCharacter_Multicast");
		
		ABuff_HealAura_C_DestroyHealingParticleForCharacter_Multicast_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::DeactivateAndDestroyAllParticles_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles_Multicast");
		
		ABuff_HealAura_C_DeactivateAndDestroyAllParticles_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.DeactivateAllParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::DeactivateAllParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DeactivateAllParticles");
		
		ABuff_HealAura_C_DeactivateAllParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.DestroyAllHealingParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::DestroyAllHealingParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DestroyAllHealingParticles");
		
		ABuff_HealAura_C_DestroyAllHealingParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::DeactivateAndDestroyAllParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles");
		
		ABuff_HealAura_C_DeactivateAndDestroyAllParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::FadeOutPulse_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse_Multicast");
		
		ABuff_HealAura_C_FadeOutPulse_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.FadeInPulse_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_HealAura_C::FadeInPulse_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeInPulse_Multicast");
		
		ABuff_HealAura_C_FadeInPulse_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotificationForPlayer_FromServer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           PlayerCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::ShowHUDNotificationForPlayer_FromServer(class AShooterCharacter* PlayerCharacter, const class FName& CommandName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotificationForPlayer_FromServer");
		
		ABuff_HealAura_C_ShowHUDNotificationForPlayer_FromServer_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.DeactivateAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::DeactivateAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DeactivateAfterDelay");
		
		ABuff_HealAura_C_DeactivateAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_HealAura.Buff_HealAura_C.ExecuteUbergraph_Buff_HealAura
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_HealAura_C::ExecuteUbergraph_Buff_HealAura(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ExecuteUbergraph_Buff_HealAura");
		
		ABuff_HealAura_C_ExecuteUbergraph_Buff_HealAura_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_HealAura_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_HealAura_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HealAura.Buff_HealAura_C");
		return ptr;
	}

}


