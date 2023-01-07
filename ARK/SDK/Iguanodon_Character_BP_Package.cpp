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
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnJumped");
		
		AIguanodon_Character_BP_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AIguanodon_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.CanJumpInternal");
		
		AIguanodon_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetAddForwardVelocityOnJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AIguanodon_Character_BP_C::BPGetAddForwardVelocityOnJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetAddForwardVelocityOnJump");
		
		AIguanodon_Character_BP_C_BPGetAddForwardVelocityOnJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnRep_bIsBiped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::OnRep_bIsBiped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnRep_bIsBiped");
		
		AIguanodon_Character_BP_C_OnRep_bIsBiped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ToggleStance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::ToggleStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ToggleStance");
		
		AIguanodon_Character_BP_C_ToggleStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTimerServer");
		
		AIguanodon_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AIguanodon_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.StartChangingStance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::StartChangingStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.StartChangingStance");
		
		AIguanodon_Character_BP_C_StartChangingStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Get Correct Stance Switch Anim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                animRef                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::GetCorrectStanceSwitchAnim(class UAnimMontage** animRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Get Correct Stance Switch Anim");
		
		AIguanodon_Character_BP_C_GetCorrectStanceSwitchAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (animRef != nullptr)
			*animRef = params.animRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPUnstasis");
		
		AIguanodon_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.InitIguanodon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::InitIguanodon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.InitIguanodon");
		
		AIguanodon_Character_BP_C_InitIguanodon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.NetSetHasFruitInInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Newval                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::NetSetHasFruitInInventory(bool Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.NetSetHasFruitInInventory");
		
		AIguanodon_Character_BP_C_NetSetHasFruitInInventory_Params params {};
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Update Move SpeedByStance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::UpdateMoveSpeedByStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Update Move SpeedByStance");
		
		AIguanodon_Character_BP_C_UpdateMoveSpeedByStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateStance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::UpdateStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateStance");
		
		AIguanodon_Character_BP_C_UpdateStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateHasFruitInInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::UpdateHasFruitInInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateHasFruitInInventory");
		
		AIguanodon_Character_BP_C_UpdateHasFruitInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIguanodon_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTryMultiUse");
		
		AIguanodon_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AIguanodon_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetMultiUseEntries");
		
		AIguanodon_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ConvertFruitToSeeds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::ConvertFruitToSeeds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ConvertFruitToSeeds");
		
		AIguanodon_Character_BP_C_ConvertFruitToSeeds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPNotifySetRider");
		
		AIguanodon_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Net SetCurrentStance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isBiped                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::NetSetCurrentStance(bool isBiped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Net SetCurrentStance");
		
		AIguanodon_Character_BP_C_NetSetCurrentStance_Params params {};
		params.isBiped = isBiped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPDoAttack");
		
		AIguanodon_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SetUseStamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newUse                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::SetUseStamina(bool newUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SetUseStamina");
		
		AIguanodon_Character_BP_C_SetUseStamina_Params params {};
		params.newUse = newUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveAnyDamage");
		
		AIguanodon_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AIguanodon_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintCanRiderAttack");
		
		AIguanodon_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ClientSetBipedState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isBiped                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::ClientSetBipedState(bool isBiped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ClientSetBipedState");
		
		AIguanodon_Character_BP_C_ClientSetBipedState_Params params {};
		params.isBiped = isBiped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.GetDefaultDino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AIguanodon_Character_BP_C*                   ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::GetDefaultDino(class AIguanodon_Character_BP_C** ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.GetDefaultDino");
		
		AIguanodon_Character_BP_C_GetDefaultDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ref != nullptr)
			*ref = params.ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UserConstructionScript");
		
		AIguanodon_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Server_SetWantsToSwitchStance
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::Server_SetWantsToSwitchStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Server_SetWantsToSwitchStance");
		
		AIguanodon_Character_BP_C_Server_SetWantsToSwitchStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SwitchStanceAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::SwitchStanceAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SwitchStanceAfterDelay");
		
		AIguanodon_Character_BP_C_SwitchStanceAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveBeginPlay");
		
		AIguanodon_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ExecuteUbergraph_Iguanodon_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_Character_BP_C::ExecuteUbergraph_Iguanodon_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ExecuteUbergraph_Iguanodon_Character_BP");
		
		AIguanodon_Character_BP_C_ExecuteUbergraph_Iguanodon_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIguanodon_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIguanodon_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Iguanodon_Character_BP.Iguanodon_Character_BP_C");
		return ptr;
	}

}


