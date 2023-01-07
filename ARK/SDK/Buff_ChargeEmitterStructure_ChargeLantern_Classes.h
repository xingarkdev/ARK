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
	 * BlueprintGeneratedClass Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C
	 * Size -> 0x0000 (FullSize[0x0BA0] - InheritedSize[0x0BA0])
	 */
	class ABuff_ChargeEmitterStructure_ChargeLantern_C : public ABuff_ChargeEmitterStructure_C
	{
	public:
		void GetDistanceAndAngleCheckOrigin(class AActor* emitterActor, struct FVector* distanceAngleOrigin);
		void BuffTickClient(float DeltaTime);
		void TakeChargeConsumedByReceivers(float chargeToTake);
		void WillReceiverAffectChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* canProcess);
		void IsValidReceiverforChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* IsValid);
		void OnChargeConsumedByReceiversChanged(float newCharge);
		void ShouldProcessChargeConsumedByReceivers(bool* shouldProcess);
		void CanProcessNewReceiverForChargeConsumption(bool* canProcess);
		void GetEmitterForwardVector(struct FVector* ForwardVector);
		void GetEmitterLineTraceOrigin(class AActor* emitterActor, struct FVector* lineTraceOrigin);
		void ModifyCharge(bool SetValue, float amount, bool multicast, bool triggerEvent, bool multicastEvent, float* chargeAdded);
		void EmitterUpdateChargeOnTimer(float DeltaTime);
		void ShouldEnableTimers(bool* tickServer, bool* TickClient);
		void ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue);
		void InitializeEmitter();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
