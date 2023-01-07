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
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerCustomEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      requestingActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_ChargeManagerType                                requiresManagerOfType                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ManagerCustomEvent(class AActor* requestingActor, E_ChargeManagerType requiresManagerOfType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerCustomEvent");
		
		ABuff_ChargeManager_C_ManagerCustomEvent_Params params {};
		params.requestingActor = requestingActor;
		params.requiresManagerOfType = requiresManagerOfType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerIsBuffOfType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeManagerType                                typeToCheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isOfType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ManagerIsBuffOfType(E_ChargeManagerType typeToCheck, bool* isOfType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ManagerIsBuffOfType");
		
		ABuff_ChargeManager_C_ManagerIsBuffOfType_Params params {};
		params.typeToCheck = typeToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isOfType != nullptr)
			*isOfType = params.isOfType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Should Receive Charge FromEmitter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeEmitter_C*                       Emitter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               shouldReceive                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ShouldReceiveChargeFromEmitter(class ABuff_ChargeEmitter_C* Emitter, bool* shouldReceive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Should Receive Charge FromEmitter");
		
		ABuff_ChargeManager_C_ShouldReceiveChargeFromEmitter_Params params {};
		params.Emitter = Emitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldReceive != nullptr)
			*shouldReceive = params.shouldReceive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeVariableExternalManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::GetChargeVariableExternalManager(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeVariableExternalManager");
		
		ABuff_ChargeManager_C_GetChargeVariableExternalManager_Params params {};
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
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Update Tick Delta Time
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              deltaTimeServer                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              deltaTimeClient                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::UpdateTickDeltaTime(float* deltaTimeServer, float* deltaTimeClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Update Tick Delta Time");
		
		ABuff_ChargeManager_C_UpdateTickDeltaTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (deltaTimeServer != nullptr)
			*deltaTimeServer = params.deltaTimeServer;
		if (deltaTimeClient != nullptr)
			*deltaTimeClient = params.deltaTimeClient;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.ForceEnableTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ForceEnableTimer(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ForceEnableTimer");
		
		ABuff_ChargeManager_C_ForceEnableTimer_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.On Batteries Charged Client
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              chargeAdded                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::OnBatteriesChargedClient(float chargeAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.On Batteries Charged Client");
		
		ABuff_ChargeManager_C_OnBatteriesChargedClient_Params params {};
		params.chargeAdded = chargeAdded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Client
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::BatteriesLogicClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Client");
		
		ABuff_ChargeManager_C_BatteriesLogicClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Pre Timer Modify Charge Actions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldSkipModify                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::PreTimerModifyChargeActions(bool* shouldSkipModify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Pre Timer Modify Charge Actions");
		
		ABuff_ChargeManager_C_PreTimerModifyChargeActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldSkipModify != nullptr)
			*shouldSkipModify = params.shouldSkipModify;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Actor Inventory And Items
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UPrimalItem*>                         ownerItems                                                 (Parm, OutParm, ZeroConstructor)
	 * 		class UPrimalInventoryComponent*                   actorInventory                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::GetChargeActorInventoryAndItems(class AActor* OwnerActor, TArray<class UPrimalItem*>* ownerItems, class UPrimalInventoryComponent** actorInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Actor Inventory And Items");
		
		ABuff_ChargeManager_C_GetChargeActorInventoryAndItems_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ownerItems != nullptr)
			*ownerItems = params.ownerItems;
		if (actorInventory != nullptr)
			*actorInventory = params.actorInventory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge To Batteries Parallel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amountToAddPerBattery                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      inventoryOwner                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               takeChargeFromBuff                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MulticastCharge                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              maxChargeToAdd                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceUseAllCharge                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeAddedToBattery                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            accessedBatteries                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::AddChargeToBatteriesParallel(float amountToAddPerBattery, class AActor* inventoryOwner, bool takeChargeFromBuff, bool MulticastCharge, float maxChargeToAdd, bool ForceUseAllCharge, float* chargeAddedToBattery, int32_t* accessedBatteries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge To Batteries Parallel");
		
		ABuff_ChargeManager_C_AddChargeToBatteriesParallel_Params params {};
		params.amountToAddPerBattery = amountToAddPerBattery;
		params.inventoryOwner = inventoryOwner;
		params.takeChargeFromBuff = takeChargeFromBuff;
		params.MulticastCharge = MulticastCharge;
		params.maxChargeToAdd = maxChargeToAdd;
		params.ForceUseAllCharge = ForceUseAllCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeAddedToBattery != nullptr)
			*chargeAddedToBattery = params.chargeAddedToBattery;
		if (accessedBatteries != nullptr)
			*accessedBatteries = params.accessedBatteries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargePercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              OutPercent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::GetChargePercent(float* OutPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargePercent");
		
		ABuff_ChargeManager_C_GetChargePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPercent != nullptr)
			*OutPercent = params.OutPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldExecuteBatteriesLogic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ShouldExecuteBatteriesLogic(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldExecuteBatteriesLogic");
		
		ABuff_ChargeManager_C_ShouldExecuteBatteriesLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.DestroyBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeManager_C::DestroyBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.DestroyBuff");
		
		ABuff_ChargeManager_C_DestroyBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeToBattery
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem_ChargeBattery_C*                 battery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               takeChargeFromBuff                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MulticastCharge                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeToAdd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeAddedToBattery                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeTakenFromBuff                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::AddChargeToBattery(class UPrimalItem_ChargeBattery_C* battery, bool takeChargeFromBuff, bool MulticastCharge, float chargeToAdd, float* chargeAddedToBattery, float* chargeTakenFromBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeToBattery");
		
		ABuff_ChargeManager_C_AddChargeToBattery_Params params {};
		params.battery = battery;
		params.takeChargeFromBuff = takeChargeFromBuff;
		params.MulticastCharge = MulticastCharge;
		params.chargeToAdd = chargeToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeAddedToBattery != nullptr)
			*chargeAddedToBattery = params.chargeAddedToBattery;
		if (chargeTakenFromBuff != nullptr)
			*chargeTakenFromBuff = params.chargeTakenFromBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Server
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::BatteriesLogicServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Batteries Logic Server");
		
		ABuff_ChargeManager_C_BatteriesLogicServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Take Charge from Batteries
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amountToTake                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      inventoryOwner                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               addChargeToBuff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               updateItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MulticastCharge                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeTaken                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            accessedBatteries                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::TakeChargefromBatteries(float amountToTake, class AActor* inventoryOwner, bool addChargeToBuff, bool updateItem, bool MulticastCharge, float* chargeTaken, int32_t* accessedBatteries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Take Charge from Batteries");
		
		ABuff_ChargeManager_C_TakeChargefromBatteries_Params params {};
		params.amountToTake = amountToTake;
		params.inventoryOwner = inventoryOwner;
		params.addChargeToBuff = addChargeToBuff;
		params.updateItem = updateItem;
		params.MulticastCharge = MulticastCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeTaken != nullptr)
			*chargeTaken = params.chargeTaken;
		if (accessedBatteries != nullptr)
			*accessedBatteries = params.accessedBatteries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge to Batteries
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amountToAdd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      inventoryOwner                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               takeChargeFromBuff                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MulticastCharge                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeAddedToBattery                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            accessedBatteries                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::AddChargetoBatteries(float amountToAdd, class AActor* inventoryOwner, bool takeChargeFromBuff, bool MulticastCharge, float* chargeAddedToBattery, int32_t* accessedBatteries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Add Charge to Batteries");
		
		ABuff_ChargeManager_C_AddChargetoBatteries_Params params {};
		params.amountToAdd = amountToAdd;
		params.inventoryOwner = inventoryOwner;
		params.takeChargeFromBuff = takeChargeFromBuff;
		params.MulticastCharge = MulticastCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeAddedToBattery != nullptr)
			*chargeAddedToBattery = params.chargeAddedToBattery;
		if (accessedBatteries != nullptr)
			*accessedBatteries = params.accessedBatteries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.OnBatteryItemChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeManager_C::OnBatteryItemChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.OnBatteryItemChange");
		
		ABuff_ChargeManager_C_OnBatteryItemChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Has Relevant Battery in Inventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldExecuteLogic                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::HasRelevantBatteryinInventory(bool* shouldExecuteLogic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Has Relevant Battery in Inventory");
		
		ABuff_ChargeManager_C_HasRelevantBatteryinInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldExecuteLogic != nullptr)
			*shouldExecuteLogic = params.shouldExecuteLogic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Check BatteriesAndUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeManager_C::CheckBatteriesAndUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Check BatteriesAndUpdate");
		
		ABuff_ChargeManager_C_CheckBatteriesAndUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.ChargeVariableEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ChargeVariableEvent");
		
		ABuff_ChargeManager_C_ChargeVariableEvent_Params params {};
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
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.SetChargeVariable
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
	void ABuff_ChargeManager_C::SetChargeVariable(E_ChargeVariableNames variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int32_t ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.SetChargeVariable");
		
		ABuff_ChargeManager_C_SetChargeVariable_Params params {};
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
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Variable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		E_ChargeVariableNames                              VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ivalue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::GetChargeVariable(E_ChargeVariableNames VariableName, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Get Charge Variable");
		
		ABuff_ChargeManager_C_GetChargeVariable_Params params {};
		params.VariableName = VariableName;
		
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
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeMultiplierForSource
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeEmitter_C*                       buffSource                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isHarvesting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::GetChargeMultiplierForSource(class ABuff_ChargeEmitter_C* buffSource, bool isHarvesting, float* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.GetChargeMultiplierForSource");
		
		ABuff_ChargeManager_C_GetChargeMultiplierForSource_Params params {};
		params.buffSource = buffSource;
		params.isHarvesting = isHarvesting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeSource
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_ChargeEmitter_C*                       Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::AddChargeSource(class ABuff_ChargeEmitter_C* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.AddChargeSource");
		
		ABuff_ChargeManager_C_AddChargeSource_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldEnableTimers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               tickServer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TickClient                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ShouldEnableTimers");
		
		ABuff_ChargeManager_C_ShouldEnableTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tickServer != nullptr)
			*tickServer = params.tickServer;
		if (TickClient != nullptr)
			*TickClient = params.TickClient;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.InitializeManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::InitializeManager(class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.InitializeManager");
		
		ABuff_ChargeManager_C_InitializeManager_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.EnableTimersIfNeeded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeManager_C::EnableTimersIfNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.EnableTimersIfNeeded");
		
		ABuff_ChargeManager_C_EnableTimersIfNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Should Update Charge On Timer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldUpdateWithTimer                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ShouldUpdateChargeOnTimer(bool* shouldUpdateWithTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Should Update Charge On Timer");
		
		ABuff_ChargeManager_C_ShouldUpdateChargeOnTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldUpdateWithTimer != nullptr)
			*shouldUpdateWithTimer = params.shouldUpdateWithTimer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.IsGainingCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsGainingCharge                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::IsGainingCharge(bool* IsGainingCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.IsGainingCharge");
		
		ABuff_ChargeManager_C_IsGainingCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsGainingCharge != nullptr)
			*IsGainingCharge = params.IsGainingCharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.isGettingCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isGettingCharge                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::isGettingCharge(bool* isGettingCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.isGettingCharge");
		
		ABuff_ChargeManager_C_isGettingCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isGettingCharge != nullptr)
			*isGettingCharge = params.isGettingCharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.CalculateChargeReceivedPerSecond
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              receivedCharge                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::CalculateChargeReceivedPerSecond(float* receivedCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.CalculateChargeReceivedPerSecond");
		
		ABuff_ChargeManager_C_CalculateChargeReceivedPerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (receivedCharge != nullptr)
			*receivedCharge = params.receivedCharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.OnChargeEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeManager_C::OnChargeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.OnChargeEvent");
		
		ABuff_ChargeManager_C_OnChargeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.isFirstCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFirstCharge                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::isFirstCharge(bool* isFirstCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.isFirstCharge");
		
		ABuff_ChargeManager_C_isFirstCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isFirstCharge != nullptr)
			*isFirstCharge = params.isFirstCharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickClient");
		
		ABuff_ChargeManager_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Modify Charge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicast                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               triggerEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chargeAdded                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ModifyCharge(bool SetValue, float amount, bool multicast, bool triggerEvent, bool multicastEvent, float* chargeAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Modify Charge");
		
		ABuff_ChargeManager_C_ModifyCharge_Params params {};
		params.SetValue = SetValue;
		params.amount = amount;
		params.multicast = multicast;
		params.triggerEvent = triggerEvent;
		params.multicastEvent = multicastEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeAdded != nullptr)
			*chargeAdded = params.chargeAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Update Charge on Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::UpdateChargeonTimer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Update Charge on Timer");
		
		ABuff_ChargeManager_C_UpdateChargeonTimer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.Get ChargeInEnvironment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               getRawValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              receivedCharge                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::GetChargeInEnvironment(bool getRawValue, float* receivedCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.Get ChargeInEnvironment");
		
		ABuff_ChargeManager_C_GetChargeInEnvironment_Params params {};
		params.getRawValue = getRawValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (receivedCharge != nullptr)
			*receivedCharge = params.receivedCharge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.BuffTickServer");
		
		ABuff_ChargeManager_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.OnReceivedCharge
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              chargeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::OnReceivedCharge(float chargeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.OnReceivedCharge");
		
		ABuff_ChargeManager_C_OnReceivedCharge_Params params {};
		params.chargeAmount = chargeAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.CanReceive Charge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canReceive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::CanReceiveCharge(bool* canReceive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.CanReceive Charge");
		
		ABuff_ChargeManager_C_CanReceiveCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canReceive != nullptr)
			*canReceive = params.canReceive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.UserConstructionScript");
		
		ABuff_ChargeManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.OnIsReceiverChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeManager_C::OnIsReceiverChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.OnIsReceiverChange");
		
		ABuff_ChargeManager_C_OnIsReceiverChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeManager.Buff_ChargeManager_C.ExecuteUbergraph_Buff_ChargeManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeManager_C::ExecuteUbergraph_Buff_ChargeManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager.Buff_ChargeManager_C.ExecuteUbergraph_Buff_ChargeManager");
		
		ABuff_ChargeManager_C_ExecuteUbergraph_Buff_ChargeManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeManager.Buff_ChargeManager_C");
		return ptr;
	}

}


