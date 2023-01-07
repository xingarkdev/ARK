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
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetNumBatteries
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            numBatteries                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::GetNumBatteries(int32_t* numBatteries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetNumBatteries");
		
		ARadioActiveLanternGroundCharge_C_GetNumBatteries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (numBatteries != nullptr)
			*numBatteries = params.numBatteries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Charge Variable Interface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::GetChargeVariableInterface(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Charge Variable Interface");
		
		ARadioActiveLanternGroundCharge_C_GetChargeVariableInterface_Params params {};
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
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UpdateItemStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::UpdateItemStats(class UPrimalItem* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UpdateItemStats");
		
		ARadioActiveLanternGroundCharge_C_UpdateItemStats_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPRefreshedStructureColors
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::BPRefreshedStructureColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPRefreshedStructureColors");
		
		ARadioActiveLanternGroundCharge_C_BPRefreshedStructureColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementInitialization
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterWeapon*                              constructorWeapon                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::PlacementInitialization(class AShooterWeapon* constructorWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementInitialization");
		
		ARadioActiveLanternGroundCharge_C_PlacementInitialization_Params params {};
		params.constructorWeapon = constructorWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Placement TickActions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ReachedDestination                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::PlacementTickActions(bool* ReachedDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Placement TickActions");
		
		ARadioActiveLanternGroundCharge_C_PlacementTickActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReachedDestination != nullptr)
			*ReachedDestination = params.ReachedDestination;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPSetPlayerConstructor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::BPSetPlayerConstructor(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPSetPlayerConstructor");
		
		ARadioActiveLanternGroundCharge_C_BPSetPlayerConstructor_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TickUpdateLightEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::TickUpdateLightEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TickUpdateLightEffects");
		
		ARadioActiveLanternGroundCharge_C_TickUpdateLightEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ShouldLanternDeactivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               retShouldDeactivate                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ShouldLanternDeactivate(bool* retShouldDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ShouldLanternDeactivate");
		
		ARadioActiveLanternGroundCharge_C_ShouldLanternDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retShouldDeactivate != nullptr)
			*retShouldDeactivate = params.retShouldDeactivate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UpdateMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StaticMesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               couldUpdateMaterials                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::UpdateMaterial(bool StaticMesh, bool* couldUpdateMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UpdateMaterial");
		
		ARadioActiveLanternGroundCharge_C_UpdateMaterial_Params params {};
		params.StaticMesh = StaticMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (couldUpdateMaterials != nullptr)
			*couldUpdateMaterials = params.couldUpdateMaterials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::DestroyChargeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff");
		
		ARadioActiveLanternGroundCharge_C_DestroyChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTriggerStasisEvent");
		
		ARadioActiveLanternGroundCharge_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ConsumeChargeAfterStasis
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              consumedCharge                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ConsumeChargeAfterStasis(float* consumedCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ConsumeChargeAfterStasis");
		
		ARadioActiveLanternGroundCharge_C_ConsumeChargeAfterStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (consumedCharge != nullptr)
			*consumedCharge = params.consumedCharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLightModeForRange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            lightMode                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::GetLightModeForRange(float Range, int32_t* lightMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLightModeForRange");
		
		ARadioActiveLanternGroundCharge_C_GetLightModeForRange_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (lightMode != nullptr)
			*lightMode = params.lightMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update Light Effects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enableLight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            newLightMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::UpdateLightEffects(bool enableLight, int32_t newLightMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update Light Effects");
		
		ARadioActiveLanternGroundCharge_C_UpdateLightEffects_Params params {};
		params.enableLight = enableLight;
		params.newLightMode = newLightMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeTakenFromBattery
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amountTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::OnChargeTakenFromBattery(float amountTaken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeTakenFromBattery");
		
		ARadioActiveLanternGroundCharge_C_OnChargeTakenFromBattery_Params params {};
		params.amountTaken = amountTaken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Available Charge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::GetAvailableCharge(float* available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Available Charge");
		
		ARadioActiveLanternGroundCharge_C_GetAvailableCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (available != nullptr)
			*available = params.available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetInfoFromConsumedItemForPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ItemToConsumed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem* ItemToConsumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetInfoFromConsumedItemForPlacedStructure");
		
		ARadioActiveLanternGroundCharge_C_BPGetInfoFromConsumedItemForPlacedStructure_Params params {};
		params.ItemToConsumed = ItemToConsumed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update ChargeVariableFromBatteries
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::UpdateChargeVariableFromBatteries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update ChargeVariableFromBatteries");
		
		ARadioActiveLanternGroundCharge_C_UpdateChargeVariableFromBatteries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Light Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               nextMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastChange                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::SetLightMode(int32_t NewMode, bool nextMode, bool multicastChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Light Mode");
		
		ARadioActiveLanternGroundCharge_C_SetLightMode_Params params {};
		params.NewMode = NewMode;
		params.nextMode = nextMode;
		params.multicastChange = multicastChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::CreateChargeManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeManager");
		
		ARadioActiveLanternGroundCharge_C_CreateChargeManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveDestroyed");
		
		ARadioActiveLanternGroundCharge_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPNotifyInventoryItemChange");
		
		ARadioActiveLanternGroundCharge_C_BPNotifyInventoryItemChange_Params params {};
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
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLight ModeValues
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            lightMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Intensity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Emissiveness                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Range                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeEmittedPerSecond                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeConsumedPerSecond                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::GetLightModeValues(int32_t lightMode, float* Intensity, float* Emissiveness, float* Range, float* chargeEmittedPerSecond, float* chargeConsumedPerSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLight ModeValues");
		
		ARadioActiveLanternGroundCharge_C_GetLightModeValues_Params params {};
		params.lightMode = lightMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Intensity != nullptr)
			*Intensity = params.Intensity;
		if (Emissiveness != nullptr)
			*Emissiveness = params.Emissiveness;
		if (Range != nullptr)
			*Range = params.Range;
		if (chargeEmittedPerSecond != nullptr)
			*chargeEmittedPerSecond = params.chargeEmittedPerSecond;
		if (chargeConsumedPerSecond != nullptr)
			*chargeConsumedPerSecond = params.chargeConsumedPerSecond;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BlueprintDrawHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::BlueprintDrawHUD(class AShooterHUD* HUD, float CenterX, float CenterY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BlueprintDrawHUD");
		
		ARadioActiveLanternGroundCharge_C_BlueprintDrawHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARadioActiveLanternGroundCharge_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTryMultiUse");
		
		ARadioActiveLanternGroundCharge_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ARadioActiveLanternGroundCharge_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetMultiUseEntries");
		
		ARadioActiveLanternGroundCharge_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UserConstructionScript");
		
		ARadioActiveLanternGroundCharge_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::FadeInLightTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__FinishedFunc");
		
		ARadioActiveLanternGroundCharge_C_FadeInLightTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::FadeInLightTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__UpdateFunc");
		
		ARadioActiveLanternGroundCharge_C_FadeInLightTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Interface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventInterface_Params params {};
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
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Trigger Multicast Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            iVariable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventTriggerMulticastInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t iVariable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Trigger Multicast Interface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventTriggerMulticastInterface_Params params {};
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
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPUnstasis");
		
		ARadioActiveLanternGroundCharge_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveBeginPlay");
		
		ARadioActiveLanternGroundCharge_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Charge Variable Interface
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
	void ARadioActiveLanternGroundCharge_C::SetChargeVariableInterface(E_ChargeVariableNames variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Charge Variable Interface");
		
		ARadioActiveLanternGroundCharge_C_SetChargeVariableInterface_Params params {};
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
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CheckForBatteriesAndUpdate_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::CheckForBatteriesAndUpdate_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CheckForBatteriesAndUpdate_Multicast");
		
		ARadioActiveLanternGroundCharge_C_CheckForBatteriesAndUpdate_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Interface Check for Batteries and Update Multicast
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::InterfaceCheckforBatteriesandUpdateMulticast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Interface Check for Batteries and Update Multicast");
		
		ARadioActiveLanternGroundCharge_C_InterfaceCheckforBatteriesandUpdateMulticast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPApplyCustomDurabilityOnPickup
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 PickedUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::BPApplyCustomDurabilityOnPickup(class UPrimalItem* PickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPApplyCustomDurabilityOnPickup");
		
		ARadioActiveLanternGroundCharge_C_BPApplyCustomDurabilityOnPickup_Params params {};
		params.PickedUp = PickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fastActivate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ActivateLantern_Multicast(bool fastActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern_Multicast");
		
		ARadioActiveLanternGroundCharge_C_ActivateLantern_Multicast_Params params {};
		params.fastActivate = fastActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fastActivate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ActivateLantern(bool fastActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern");
		
		ARadioActiveLanternGroundCharge_C_ActivateLantern_Params params {};
		params.fastActivate = fastActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TransitionLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              targetIntensity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               disableVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              startingIntensity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::TransitionLight(float targetIntensity, bool disableVisibility, float PlayRate, float startingIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TransitionLight");
		
		ARadioActiveLanternGroundCharge_C_TransitionLight_Params params {};
		params.targetIntensity = targetIntensity;
		params.disableVisibility = disableVisibility;
		params.PlayRate = PlayRate;
		params.startingIntensity = startingIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::DestroyChargeBuff_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff_Multicast");
		
		ARadioActiveLanternGroundCharge_C_DestroyChargeBuff_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::CreateChargeBuff_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff_Multicast");
		
		ARadioActiveLanternGroundCharge_C_CreateChargeBuff_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            lightMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::OnLightModeChanged_Multicast(int32_t lightMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged_Multicast");
		
		ARadioActiveLanternGroundCharge_C_OnLightModeChanged_Multicast_Params params {};
		params.lightMode = lightMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            lightMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::OnLightModeChanged(int32_t lightMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged");
		
		ARadioActiveLanternGroundCharge_C_OnLightModeChanged_Params params {};
		params.lightMode = lightMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Boolean(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Boolean_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Float(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Float_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Float_Multicast(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float_Multicast");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Float_Multicast_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventBooleanInterface(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean Interface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventBooleanInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventFloatInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventFloatInterface(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventFloatInterface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventFloatInterface_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Boolean_Multicast(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean_Multicast");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Boolean_Multicast_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean MulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventBooleanMulticastInterface(E_ChargeVariableNames variableType, bool bBValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean MulticastInterface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventBooleanMulticastInterface_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Float Multicast Interface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventFloatMulticastInterface(E_ChargeVariableNames variableType, float fValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Float Multicast Interface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventFloatMulticastInterface_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Double(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Double_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Double_Multicast(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double_Multicast");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Double_Multicast_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventDoubleInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventDoubleInterface(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventDoubleInterface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventDoubleInterface_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Double MulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventDoubleMulticastInterface(E_ChargeVariableNames variableType, double dValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Double MulticastInterface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventDoubleMulticastInterface_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::CreateChargeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff");
		
		ARadioActiveLanternGroundCharge_C_CreateChargeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::DeactivateLantern(bool Fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern");
		
		ARadioActiveLanternGroundCharge_C_DeactivateLantern_Params params {};
		params.Fast = Fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Fast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::DeactivateLantern_Multicast(bool Fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern_Multicast");
		
		ARadioActiveLanternGroundCharge_C_DeactivateLantern_Multicast_Params params {};
		params.Fast = Fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventIntInterface(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntInterface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventIntInterface_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntMulticastInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEventIntMulticastInterface(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntMulticastInterface");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEventIntMulticastInterface_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Int(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Int_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ChargeVariableEvent_Int_Multicast(E_ChargeVariableNames variableType, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int_Multicast");
		
		ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Int_Multicast_Params params {};
		params.variableType = variableType;
		params.ivalue = ivalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.InitialUpdateMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StaticMesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::InitialUpdateMaterial(bool StaticMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.InitialUpdateMaterial");
		
		ARadioActiveLanternGroundCharge_C_InitialUpdateMaterial_Params params {};
		params.StaticMesh = StaticMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeFromBatteriesChanged_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::OnChargeFromBatteriesChanged_Multicast(float newValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeFromBatteriesChanged_Multicast");
		
		ARadioActiveLanternGroundCharge_C_OnChargeFromBatteriesChanged_Multicast_Params params {};
		params.newValue = newValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.StartPlacement_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           constructor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::StartPlacement_Multicast(class AShooterCharacter* constructor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.StartPlacement_Multicast");
		
		ARadioActiveLanternGroundCharge_C_StartPlacement_Multicast_Params params {};
		params.constructor = constructor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementAnimationTickEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARadioActiveLanternGroundCharge_C::PlacementAnimationTickEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementAnimationTickEvent");
		
		ARadioActiveLanternGroundCharge_C_PlacementAnimationTickEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DebugCylinders_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     cylinder1Direction                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::DebugCylinders_Multicast(const struct FVector& Origin, const struct FVector& cylinder1Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DebugCylinders_Multicast");
		
		ARadioActiveLanternGroundCharge_C_DebugCylinders_Multicast_Params params {};
		params.Origin = Origin;
		params.cylinder1Direction = cylinder1Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ExecuteUbergraph_RadioActiveLanternGroundCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARadioActiveLanternGroundCharge_C::ExecuteUbergraph_RadioActiveLanternGroundCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ExecuteUbergraph_RadioActiveLanternGroundCharge");
		
		ARadioActiveLanternGroundCharge_C_ExecuteUbergraph_RadioActiveLanternGroundCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARadioActiveLanternGroundCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARadioActiveLanternGroundCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C");
		return ptr;
	}

}


