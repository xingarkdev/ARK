#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Buff_ChargeManager.Buff_ChargeManager_C
	 * Size -> 0x00D0 (FullSize[0x0A50] - InheritedSize[0x0980])
	 */
	class ABuff_ChargeManager_C : public ABuff_Base_C
	{
	public:
		float                                                      chargeCheckRadius;                                       // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       useStrongestChargeSource;                                // 0x0984(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9X9S[0x3];                                   // 0x0985(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTimeReceivedCharge;                                  // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxChargeReceivedPerSecond;                              // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R0J3[0x4];                                   // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTimeStartedReceivingCharge;                          // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      chargeUpdateCooldownAfterChargeReceived;                 // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      lastChargeValue;                                         // 0x09A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      receivedChargeMultiplier;                                // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxCharge;                                               // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      minCharge;                                               // 0x09B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentChargeInTheEnvironment;                           // 0x09B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastTimeChargeInEnvironment;                             // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              chargeEmitterClass;                                      // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<float>                                              chargeMultipliersPerSource;                              // 0x09C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class ABuff_ChargeEmitter_C*>                       currentChargeSources;                                    // 0x09D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       dontUpdateClient;                                        // 0x09E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A8K5[0x7];                                   // 0x09E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              harvestMultipliersPerSource;                             // 0x09F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AActor*                                              chargeActor;                                             // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       interactsWithBatteriesOnTimer;                           // 0x0A08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isInteractingWithBatteriesOnTimer;                       // 0x0A09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       consumeChargeWhenRechargingBattery;                      // 0x0A0A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U0GV[0x1];                                   // 0x0A0B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      batteryToCharacterChargeMultiplier;                      // 0x0A0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      characterToBatteryChargeMultiplier;                      // 0x0A10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       gainChargeWhenDepletingBattery;                          // 0x0A14(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HIGM[0x3];                                   // 0x0A15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    batteriesToChargeInParallel;                             // 0x0A18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0RBK[0x4];                                   // 0x0A1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTimeTickedClient;                                    // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastTimeTickedServer;                                    // 0x0A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentDeltaClient;                                      // 0x0A30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentDeltaServer;                                      // 0x0A34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_ChargeManagerType                                        chargeBuffType;                                          // 0x0A38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L1VB[0x7];                                   // 0x0A39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<E_ChargeManagerType>                                chargeSourceTypeForMultipliers;                          // 0x0A40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void ManagerCustomEvent(class AActor* requestingActor, E_ChargeManagerType requiresManagerOfType);
		void ManagerIsBuffOfType(E_ChargeManagerType typeToCheck, bool* isOfType);
		void ShouldReceiveChargeFromEmitter(class ABuff_ChargeEmitter_C* Emitter, bool* shouldReceive);
		void GetChargeVariableExternalManager(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue);
		void UpdateTickDeltaTime(float* deltaTimeServer, float* deltaTimeClient);
		void ForceEnableTimer(bool Enable);
		void OnBatteriesChargedClient(float chargeAdded);
		void BatteriesLogicClient(float DeltaTime);
		void PreTimerModifyChargeActions(bool* shouldSkipModify);
		void GetChargeActorInventoryAndItems(class AActor* OwnerActor, TArray<class UPrimalItem*>* ownerItems, class UPrimalInventoryComponent** actorInventory);
		void AddChargeToBatteriesParallel(float amountToAddPerBattery, class AActor* inventoryOwner, bool takeChargeFromBuff, bool MulticastCharge, float maxChargeToAdd, bool ForceUseAllCharge, float* chargeAddedToBattery, int32_t* accessedBatteries);
		void GetChargePercent(float* OutPercent);
		void ShouldExecuteBatteriesLogic(bool* NewParam);
		void DestroyBuff();
		void AddChargeToBattery(class UPrimalItem_ChargeBattery_C* battery, bool takeChargeFromBuff, bool MulticastCharge, float chargeToAdd, float* chargeAddedToBattery, float* chargeTakenFromBuff);
		void BatteriesLogicServer(float DeltaTime);
		void TakeChargefromBatteries(float amountToTake, class AActor* inventoryOwner, bool addChargeToBuff, bool updateItem, bool MulticastCharge, float* chargeTaken, int32_t* accessedBatteries);
		void AddChargetoBatteries(float amountToAdd, class AActor* inventoryOwner, bool takeChargeFromBuff, bool MulticastCharge, float* chargeAddedToBattery, int32_t* accessedBatteries);
		void OnBatteryItemChange();
		void HasRelevantBatteryinInventory(bool* shouldExecuteLogic);
		void CheckBatteriesAndUpdate();
		void ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue);
		void SetChargeVariable(E_ChargeVariableNames variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int32_t ivalue);
		void GetChargeVariable(E_ChargeVariableNames VariableName, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue);
		void GetChargeMultiplierForSource(class ABuff_ChargeEmitter_C* buffSource, bool isHarvesting, float* Multiplier);
		void AddChargeSource(class ABuff_ChargeEmitter_C* Source);
		void ShouldEnableTimers(bool* tickServer, bool* TickClient);
		void InitializeManager(class AActor* Owner);
		void EnableTimersIfNeeded();
		void ShouldUpdateChargeOnTimer(bool* shouldUpdateWithTimer);
		void IsGainingCharge(bool* IsGainingCharge);
		void isGettingCharge(bool* isGettingCharge);
		void CalculateChargeReceivedPerSecond(float* receivedCharge);
		void OnChargeEvent();
		void isFirstCharge(bool* isFirstCharge);
		void BuffTickClient(float DeltaTime);
		void ModifyCharge(bool SetValue, float amount, bool multicast, bool triggerEvent, bool multicastEvent, float* chargeAdded);
		void UpdateChargeonTimer(float DeltaTime);
		void GetChargeInEnvironment(bool getRawValue, float* receivedCharge);
		void BuffTickServer(float DeltaTime);
		void OnReceivedCharge(float chargeAmount);
		void CanReceiveCharge(bool* canReceive);
		void UserConstructionScript();
		void OnIsReceiverChange();
		void ExecuteUbergraph_Buff_ChargeManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
