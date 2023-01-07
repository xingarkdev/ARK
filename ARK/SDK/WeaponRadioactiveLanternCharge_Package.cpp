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
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetNumBatteries
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            numBatteries                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::GetNumBatteries(int32_t* numBatteries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetNumBatteries");
		
		AWeaponRadioactiveLanternCharge_C_GetNumBatteries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (numBatteries != nullptr)
			*numBatteries = params.numBatteries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Get Charge Variable Interface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::GetChargeVariableInterface(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Get Charge Variable Interface");
		
		AWeaponRadioactiveLanternCharge_C_GetChargeVariableInterface_Params params {};
		params.variableType = variableType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (fValue != nullptr)
			*fValue = params.fValue;
		if (dValue != nullptr)
			*dValue = params.dValue;
		if (bBValue != nullptr)
			*bBValue = params.bBValue;
		if (ivalue != nullptr)
			*ivalue = params.ivalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveAllBeamsServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::RemoveAllBeamsServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveAllBeamsServer");
		
		AWeaponRadioactiveLanternCharge_C_RemoveAllBeamsServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.IsFreeBeamForActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFreeBeam                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::IsFreeBeamForActor(class AActor* forActor, bool* isFreeBeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.IsFreeBeamForActor");
		
		AWeaponRadioactiveLanternCharge_C_IsFreeBeamForActor_Params params {};
		params.forActor = forActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isFreeBeam != nullptr)
			*isFreeBeam = params.isFreeBeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPPrefireAction
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::BPPrefireAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPPrefireAction");
		
		AWeaponRadioactiveLanternCharge_C_BPPrefireAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RechargeFromMaxBattery
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               couldRecharge                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::RechargeFromMaxBattery(bool* couldRecharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RechargeFromMaxBattery");
		
		AWeaponRadioactiveLanternCharge_C_RechargeFromMaxBattery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (couldRecharge != nullptr)
			*couldRecharge = params.couldRecharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeaponRadioactiveLanternCharge_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWeaponCanFire");
		
		AWeaponRadioactiveLanternCharge_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    dynamicMaterial                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::UpdateMaterial(class UMaterialInstanceDynamic* dynamicMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateMaterial");
		
		AWeaponRadioactiveLanternCharge_C_UpdateMaterial_Params params {};
		params.dynamicMaterial = dynamicMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyChargeBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::DestroyChargeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyChargeBuff");
		
		AWeaponRadioactiveLanternCharge_C_DestroyChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAdjustAmmoPerShot
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	int32_t AWeaponRadioactiveLanternCharge_C::BPAdjustAmmoPerShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAdjustAmmoPerShot");
		
		AWeaponRadioactiveLanternCharge_C_BPAdjustAmmoPerShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetBeamIntensity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    BeamComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::SetBeamIntensity(class UParticleSystemComponent* BeamComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetBeamIntensity");
		
		AWeaponRadioactiveLanternCharge_C_SetBeamIntensity_Params params {};
		params.BeamComponent = BeamComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPSecondaryAction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeaponRadioactiveLanternCharge_C::BPSecondaryAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPSecondaryAction");
		
		AWeaponRadioactiveLanternCharge_C_BPSecondaryAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetLightMultiplier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              lightMultiplier                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::GetLightMultiplier(float* lightMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetLightMultiplier");
		
		AWeaponRadioactiveLanternCharge_C_GetLightMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (lightMultiplier != nullptr)
			*lightMultiplier = params.lightMultiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWaitingForPlacement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::BPWaitingForPlacement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWaitingForPlacement");
		
		AWeaponRadioactiveLanternCharge_C_BPWaitingForPlacement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CheckIfFireStopped
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::CheckIfFireStopped(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CheckIfFireStopped");
		
		AWeaponRadioactiveLanternCharge_C_CheckIfFireStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateLightEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::UpdateLightEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateLightEffects");
		
		AWeaponRadioactiveLanternCharge_C_UpdateLightEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update MaterialsAndParticles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               couldUpdateMaterial                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::UpdateMaterialsAndParticles(bool* couldUpdateMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update MaterialsAndParticles");
		
		AWeaponRadioactiveLanternCharge_C_UpdateMaterialsAndParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (couldUpdateMaterial != nullptr)
			*couldUpdateMaterial = params.couldUpdateMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DisableFiringEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::DisableFiringEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DisableFiringEffects");
		
		AWeaponRadioactiveLanternCharge_C_DisableFiringEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitializeFiringEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::InitializeFiringEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitializeFiringEffects");
		
		AWeaponRadioactiveLanternCharge_C_InitializeFiringEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DetectChupasAndTriggerBeams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::DetectChupasAndTriggerBeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DetectChupasAndTriggerBeams");
		
		AWeaponRadioactiveLanternCharge_C_DetectChupasAndTriggerBeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::OnStopFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring");
		
		AWeaponRadioactiveLanternCharge_C_OnStopFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::DestroyBeamForTarget(class APrimalCharacter* forCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget");
		
		AWeaponRadioactiveLanternCharge_C_DestroyBeamForTarget_Params params {};
		params.forCharacter = forCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamVisuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSTR_ChargeBeamInfo                         beamInfo                                                   (Parm)
	 */
	void AWeaponRadioactiveLanternCharge_C::DestroyBeamVisuals(const struct FSTR_ChargeBeamInfo& beamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamVisuals");
		
		AWeaponRadioactiveLanternCharge_C_DestroyBeamVisuals_Params params {};
		params.beamInfo = beamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ServerTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::ServerTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ServerTick");
		
		AWeaponRadioactiveLanternCharge_C_ServerTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ClientTick
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::ClientTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ClientTick");
		
		AWeaponRadioactiveLanternCharge_C_ClientTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Remove All BeamsClient
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::RemoveAllBeamsClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Remove All BeamsClient");
		
		AWeaponRadioactiveLanternCharge_C_RemoveAllBeamsClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveDestroyed");
		
		AWeaponRadioactiveLanternCharge_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TryAddNewBeam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::TryAddNewBeam(class AActor* forActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TryAddNewBeam");
		
		AWeaponRadioactiveLanternCharge_C_TryAddNewBeam_Params params {};
		params.forActor = forActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartUnequipEvent");
		
		AWeaponRadioactiveLanternCharge_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Should Remove Beam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSTR_ChargeBeamInfo                         beamInfo                                                   (Parm)
	 * 		bool                                               shouldRemove                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ShouldRemoveBeam(const struct FSTR_ChargeBeamInfo& beamInfo, bool* shouldRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Should Remove Beam");
		
		AWeaponRadioactiveLanternCharge_C_ShouldRemoveBeam_Params params {};
		params.beamInfo = beamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldRemove != nullptr)
			*shouldRemove = params.shouldRemove;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update Impact Particles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSTR_ChargeBeamInfo                         beamInfo                                                   (Parm)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::UpdateImpactParticles(const struct FSTR_ChargeBeamInfo& beamInfo, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update Impact Particles");
		
		AWeaponRadioactiveLanternCharge_C_UpdateImpactParticles_Params params {};
		params.beamInfo = beamInfo;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetEndPoints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    beam                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndPoint1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     endPoint2                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     endPoint3                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::SetEndPoints(class UParticleSystemComponent* beam, const struct FVector& EndPoint1, const struct FVector& endPoint2, const struct FVector& endPoint3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetEndPoints");
		
		AWeaponRadioactiveLanternCharge_C_SetEndPoints_Params params {};
		params.beam = beam;
		params.EndPoint1 = EndPoint1;
		params.endPoint2 = endPoint2;
		params.endPoint3 = endPoint3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ConnectBeamToTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSTR_ChargeBeamInfo                         beamInfo                                                   (Parm)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ConnectBeamToTarget(const struct FSTR_ChargeBeamInfo& beamInfo, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ConnectBeamToTarget");
		
		AWeaponRadioactiveLanternCharge_C_ConnectBeamToTarget_Params params {};
		params.beamInfo = beamInfo;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateNewBeam
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ToActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::CreateNewBeam(class AActor* ToActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateNewBeam");
		
		AWeaponRadioactiveLanternCharge_C_CreateNewBeam_Params params {};
		params.ToActor = ToActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ShouldRemoveBeamForTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               shouldRemove                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ShouldRemoveBeamForTarget(class APrimalCharacter* Character, bool* shouldRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ShouldRemoveBeamForTarget");
		
		AWeaponRadioactiveLanternCharge_C_ShouldRemoveBeamForTarget_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldRemove != nullptr)
			*shouldRemove = params.shouldRemove;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveBeamTarget_Server
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      BeamTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::RemoveBeamTarget_Server(class AActor* BeamTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveBeamTarget_Server");
		
		AWeaponRadioactiveLanternCharge_C_RemoveBeamTarget_Server_Params params {};
		params.BeamTarget = BeamTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateCharge
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldActivate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::UpdateCharge(bool ShouldActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateCharge");
		
		AWeaponRadioactiveLanternCharge_C_UpdateCharge_Params params {};
		params.ShouldActivate = ShouldActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.EffectsDisableCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::EffectsDisableCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.EffectsDisableCheck");
		
		AWeaponRadioactiveLanternCharge_C_EffectsDisableCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPFiredWeapon");
		
		AWeaponRadioactiveLanternCharge_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartSecondaryActionEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::StartSecondaryActionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartSecondaryActionEvent");
		
		AWeaponRadioactiveLanternCharge_C_StartSecondaryActionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UserConstructionScript");
		
		AWeaponRadioactiveLanternCharge_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::LightFlickerTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__FinishedFunc");
		
		AWeaponRadioactiveLanternCharge_C_LightFlickerTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::LightFlickerTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__UpdateFunc");
		
		AWeaponRadioactiveLanternCharge_C_LightFlickerTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::LightTurnOffTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__FinishedFunc");
		
		AWeaponRadioactiveLanternCharge_C_LightTurnOffTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::LightTurnOffTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__UpdateFunc");
		
		AWeaponRadioactiveLanternCharge_C_LightTurnOffTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Interface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.fValue = fValue;
		params.dValue = dValue;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Trigger Multicast Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            iVariable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventTriggerMulticastInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t iVariable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Trigger Multicast Interface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventTriggerMulticastInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.fValue = fValue;
		params.dValue = dValue;
		params.iVariable = iVariable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Interface Check for Batteries and Update Multicast
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::InterfaceCheckforBatteriesandUpdateMulticast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Interface Check for Batteries and Update Multicast");
		
		AWeaponRadioactiveLanternCharge_C_InterfaceCheckforBatteriesandUpdateMulticast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Double MulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventDoubleMulticastInterface(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Double MulticastInterface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventDoubleMulticastInterface_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventDoubleInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventDoubleInterface(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventDoubleInterface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventDoubleInterface_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventIntInterface(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntInterface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventIntInterface_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntMulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventIntMulticastInterface(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntMulticastInterface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventIntMulticastInterface_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveBeginPlay");
		
		AWeaponRadioactiveLanternCharge_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnNewActorAffected_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      actorAffected                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::OnNewActorAffected_Multicast(class AActor* actorAffected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnNewActorAffected_Multicast");
		
		AWeaponRadioactiveLanternCharge_C_OnNewActorAffected_Multicast_Params params {};
		params.actorAffected = actorAffected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::DestroyBeamForTarget_Multicast(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget_Multicast");
		
		AWeaponRadioactiveLanternCharge_C_DestroyBeamForTarget_Multicast_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.PlayLanternCameraShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::PlayLanternCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.PlayLanternCameraShake");
		
		AWeaponRadioactiveLanternCharge_C_PlayLanternCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateChargeManager
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::CreateChargeManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateChargeManager");
		
		AWeaponRadioactiveLanternCharge_C_CreateChargeManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Set Charge Variable Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicast                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               triggerEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::SetChargeVariableInterface(E_ChargeVariableNames variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Set Charge Variable Interface");
		
		AWeaponRadioactiveLanternCharge_C_SetChargeVariableInterface_Params params {};
		params.variableType = variableType;
		params.multicast = multicast;
		params.fValue = fValue;
		params.dValue = dValue;
		params.bBValue = bBValue;
		params.triggerEvent = triggerEvent;
		params.multicastEvent = multicastEvent;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.FiringBeamLogic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::FiringBeamLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.FiringBeamLogic");
		
		AWeaponRadioactiveLanternCharge_C_FiringBeamLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::OnStartFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring");
		
		AWeaponRadioactiveLanternCharge_C_OnStartFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEvent_Boolean(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Boolean_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEvent_Float(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Float_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEvent_Float_Multicast(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float_Multicast");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Float_Multicast_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventBooleanInterface(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean Interface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventBooleanInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventFloatInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventFloatInterface(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventFloatInterface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventFloatInterface_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEvent_Boolean_Multicast(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean_Multicast");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Boolean_Multicast_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean MulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventBooleanMulticastInterface(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean MulticastInterface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventBooleanMulticastInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Float Multicast Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventFloatMulticastInterface(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Float Multicast Interface");
		
		AWeaponRadioactiveLanternCharge_C_ChargeVariableEventFloatMulticastInterface_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DoLightFlicker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::DoLightFlicker(float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DoLightFlicker");
		
		AWeaponRadioactiveLanternCharge_C_DoLightFlicker_Params params {};
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMaterialUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::InitialMaterialUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMaterialUpdate");
		
		AWeaponRadioactiveLanternCharge_C_InitialMaterialUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TurnOffLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::TurnOffLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TurnOffLight");
		
		AWeaponRadioactiveLanternCharge_C_TurnOffLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::OnStopFiring_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring_Multicast");
		
		AWeaponRadioactiveLanternCharge_C_OnStopFiring_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CancelPlacement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::CancelPlacement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CancelPlacement");
		
		AWeaponRadioactiveLanternCharge_C_CancelPlacement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAnimNotifyCustomEvent");
		
		AWeaponRadioactiveLanternCharge_C_BPAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMeterAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::InitialMeterAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMeterAnim");
		
		AWeaponRadioactiveLanternCharge_C_InitialMeterAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponRadioactiveLanternCharge_C::OnStartFiring_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring_Multicast");
		
		AWeaponRadioactiveLanternCharge_C_OnStartFiring_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ExecuteUbergraph_WeaponRadioactiveLanternCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponRadioactiveLanternCharge_C::ExecuteUbergraph_WeaponRadioactiveLanternCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ExecuteUbergraph_WeaponRadioactiveLanternCharge");
		
		AWeaponRadioactiveLanternCharge_C_ExecuteUbergraph_WeaponRadioactiveLanternCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeaponRadioactiveLanternCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeaponRadioactiveLanternCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C");
		return ptr;
	}

}


