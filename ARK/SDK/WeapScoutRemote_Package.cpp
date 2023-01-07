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
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPGetDebugInfoString
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString AWeapScoutRemote_C::BPGetDebugInfoString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPGetDebugInfoString");
		
		AWeapScoutRemote_C_BPGetDebugInfoString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.AllowTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapScoutRemote_C::AllowTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.AllowTargeting");
		
		AWeapScoutRemote_C_AllowTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPGetTargetingTooltipInfoLabel
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText AWeapScoutRemote_C::BPGetTargetingTooltipInfoLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPGetTargetingTooltipInfoLabel");
		
		AWeapScoutRemote_C_BPGetTargetingTooltipInfoLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPGetProjectileSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AWeapScoutRemote_C::BPGetProjectileSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPGetProjectileSpeed");
		
		AWeapScoutRemote_C_BPGetProjectileSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.OnRep_GogglesMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::OnRep_GogglesMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.OnRep_GogglesMode");
		
		AWeapScoutRemote_C_OnRep_GogglesMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.OnRep_FiredScout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::OnRep_FiredScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.OnRep_FiredScout");
		
		AWeapScoutRemote_C_OnRep_FiredScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPOverrideFPVMasterPoseComponent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class USkeletalMeshComponent* AWeapScoutRemote_C::BPOverrideFPVMasterPoseComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPOverrideFPVMasterPoseComponent");
		
		AWeapScoutRemote_C_BPOverrideFPVMasterPoseComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPPreventSwitchingWeapon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapScoutRemote_C::BPPreventSwitchingWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPPreventSwitchingWeapon");
		
		AWeapScoutRemote_C_BPPreventSwitchingWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.Setup Goggle Anim Instance Class 
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::SetupGoggleAnimInstanceClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Setup Goggle Anim Instance Class ");
		
		AWeapScoutRemote_C_SetupGoggleAnimInstanceClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.Get Relevant GoggleAnim Instance Class
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      ClassRef                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::GetRelevantGoggleAnimInstanceClass(class UClass** ClassRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Get Relevant GoggleAnim Instance Class");
		
		AWeapScoutRemote_C_GetRelevantGoggleAnimInstanceClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassRef != nullptr)
			*ClassRef = params.ClassRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.Get RelevantGrenade Anim Instance Class
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      ClassRef                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::GetRelevantGrenadeAnimInstanceClass(class UClass** ClassRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Get RelevantGrenade Anim Instance Class");
		
		AWeapScoutRemote_C_GetRelevantGrenadeAnimInstanceClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassRef != nullptr)
			*ClassRef = params.ClassRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.Setup Grenade Anim Instance Class
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::SetupGrenadeAnimInstanceClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Setup Grenade Anim Instance Class");
		
		AWeapScoutRemote_C_SetupGrenadeAnimInstanceClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPIsValidUnStasisCaster
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapScoutRemote_C::BPIsValidUnStasisCaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPIsValidUnStasisCaster");
		
		AWeapScoutRemote_C_BPIsValidUnStasisCaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPOnStopTargeting
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepadLeft                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::BPOnStopTargeting(bool bFromGamepadLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPOnStopTargeting");
		
		AWeapScoutRemote_C_BPOnStopTargeting_Params params {};
		params.bFromGamepadLeft = bFromGamepadLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ReceiveTick");
		
		AWeapScoutRemote_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.ScoutDespawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::ScoutDespawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ScoutDespawned");
		
		AWeapScoutRemote_C_ScoutDespawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.Show
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             SceneComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::Show(class USceneComponent* SceneComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Show");
		
		AWeapScoutRemote_C_Show_Params params {};
		params.SceneComp = SceneComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.Hide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             SceneComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::Hide(class USceneComponent* SceneComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Hide");
		
		AWeapScoutRemote_C_Hide_Params params {};
		params.SceneComp = SceneComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.ScoutGrenadeReturned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::ScoutGrenadeReturned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ScoutGrenadeReturned");
		
		AWeapScoutRemote_C_ScoutGrenadeReturned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPFiredWeapon");
		
		AWeapScoutRemote_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPTryFireWeapon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapScoutRemote_C::BPTryFireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPTryFireWeapon");
		
		AWeapScoutRemote_C_BPTryFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.AllowUnequip
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapScoutRemote_C::AllowUnequip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.AllowUnequip");
		
		AWeapScoutRemote_C_AllowUnequip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPAnimNotifyCustomEvent");
		
		AWeapScoutRemote_C_BPAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ReceiveEndPlay");
		
		AWeapScoutRemote_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPStartEquippedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::BPStartEquippedNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPStartEquippedNotify");
		
		AWeapScoutRemote_C_BPStartEquippedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ReceiveBeginPlay");
		
		AWeapScoutRemote_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.Scout Launched
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScout_Character_BP_C*                       Scout                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::ScoutLaunched(class AScout_Character_BP_C* Scout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Scout Launched");
		
		AWeapScoutRemote_C_ScoutLaunched_Params params {};
		params.Scout = Scout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPGetActorForTargetingTooltip
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class AActor* AWeapScoutRemote_C::BPGetActorForTargetingTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPGetActorForTargetingTooltip");
		
		AWeapScoutRemote_C_BPGetActorForTargetingTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapScoutRemote_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.BPWeaponCanFire");
		
		AWeapScoutRemote_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.UserConstructionScript");
		
		AWeapScoutRemote_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutLaunched
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::MULTI_ScoutLaunched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutLaunched");
		
		AWeapScoutRemote_C_MULTI_ScoutLaunched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ReleasedPossessingSurvivor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::MULTI_ReleasedPossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ReleasedPossessingSurvivor");
		
		AWeapScoutRemote_C_MULTI_ReleasedPossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_ScoutPossessedBySurvivor
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::OWNINGCLIENT_ScoutPossessedBySurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_ScoutPossessedBySurvivor");
		
		AWeapScoutRemote_C_OWNINGCLIENT_ScoutPossessedBySurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_OnEquipNoScout
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::OWNINGCLIENT_OnEquipNoScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_OnEquipNoScout");
		
		AWeapScoutRemote_C_OWNINGCLIENT_OnEquipNoScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.MULTI_OnEquipScoutActive
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::MULTI_OnEquipScoutActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_OnEquipScoutActive");
		
		AWeapScoutRemote_C_MULTI_OnEquipScoutActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutGrenadeReturnedEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::MULTI_ScoutGrenadeReturnedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutGrenadeReturnedEvent");
		
		AWeapScoutRemote_C_MULTI_ScoutGrenadeReturnedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.MULTI_FiredWeapon
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::MULTI_FiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_FiredWeapon");
		
		AWeapScoutRemote_C_MULTI_FiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutDespawned
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::MULTI_ScoutDespawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutDespawned");
		
		AWeapScoutRemote_C_MULTI_ScoutDespawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.SERVER_RecallScout
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::SERVER_RecallScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.SERVER_RecallScout");
		
		AWeapScoutRemote_C_SERVER_RecallScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.Initialize");
		
		AWeapScoutRemote_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.SERVER_ReleasedPossessingSurvivor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::SERVER_ReleasedPossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.SERVER_ReleasedPossessingSurvivor");
		
		AWeapScoutRemote_C_SERVER_ReleasedPossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.SERVER_DoHandleFiring
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::SERVER_DoHandleFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.SERVER_DoHandleFiring");
		
		AWeapScoutRemote_C_SERVER_DoHandleFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.UpdateTooltipInfoText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::UpdateTooltipInfoText(class AShooterCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.UpdateTooltipInfoText");
		
		AWeapScoutRemote_C_UpdateTooltipInfoText_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.ExpireTooltipInfoText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapScoutRemote_C::ExpireTooltipInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ExpireTooltipInfoText");
		
		AWeapScoutRemote_C_ExpireTooltipInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapScoutRemote.WeapScoutRemote_C.ExecuteUbergraph_WeapScoutRemote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapScoutRemote_C::ExecuteUbergraph_WeapScoutRemote(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapScoutRemote.WeapScoutRemote_C.ExecuteUbergraph_WeapScoutRemote");
		
		AWeapScoutRemote_C_ExecuteUbergraph_WeapScoutRemote_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapScoutRemote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapScoutRemote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapScoutRemote.WeapScoutRemote_C");
		return ptr;
	}

}


