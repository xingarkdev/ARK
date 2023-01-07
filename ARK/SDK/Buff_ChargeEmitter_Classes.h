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
	 * BlueprintGeneratedClass Buff_ChargeEmitter.Buff_ChargeEmitter_C
	 * Size -> 0x0148 (FullSize[0x0B98] - InheritedSize[0x0A50])
	 */
	class ABuff_ChargeEmitter_C : public ABuff_ChargeManager_C
	{
	public:
		class UStaticMeshComponent*                                ChargeSphereSolid;                                       // 0x0A50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    ChargeSphere;                                            // 0x0A58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeOutTimeline_FadeOutAlpha_0773ADF748C88887CC468C8F12C3B3D9; // 0x0A60(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         FadeOutTimeline__Direction_0773ADF748C88887CC468C8F12C3B3D9; // 0x0A64(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E1T0[0x3];                                   // 0x0A65(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeOutTimeline;                                         // 0x0A68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeInTimeline_FadeInAlpha_BFB4480A4B7ADE83F853E2ABF3FD6FBD; // 0x0A70(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         FadeInTimeline__Direction_BFB4480A4B7ADE83F853E2ABF3FD6FBD; // 0x0A74(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8Z3S[0x3];                                   // 0x0A75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeInTimeline;                                          // 0x0A78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      emitterAngle;                                            // 0x0A80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       doTraceToTarget;                                         // 0x0A84(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZBUB[0x3];                                   // 0x0A85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      chargeEffectFadeInDuration;                              // 0x0A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      chargeEffectFadeOutDuration;                             // 0x0A8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       usesEmitterEffects;                                      // 0x0A90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H5U4[0x3];                                   // 0x0A91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      solidEffectScaleMultiplier;                              // 0x0A94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       consumesChargeWhenEmitting;                              // 0x0A98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       allowsHarvesting;                                        // 0x0A99(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       harvestRechargesBatteries;                               // 0x0A9A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PUIP[0x1];                                   // 0x0A9B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      harvestingCooldown;                                      // 0x0A9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              cantHarvestString;                                       // 0x0AA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              attachmentSocket;                                        // 0x0AB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       bForceUseActorEnteredEmitterArea;                        // 0x0AC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_95JE[0x7];                                   // 0x0AC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABuff_ChargeManager_C*>                       currentReceiversConsumingCharge;                         // 0x0AC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<float>                                              consumedChargeForReceiverMultiplier;                     // 0x0AD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<E_ChargeManagerType>                                consumeChargeForReceiverType;                            // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              cantHarvestFullPetString;                                // 0x0AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0B08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0B09(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W0PG[0x2];                                   // 0x0B0A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x0B0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x0B10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x0B14(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0B15(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue3;                 // 0x0B16(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x0B17(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x0B18(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0B24(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue4;                 // 0x0B28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_62C0[0x3];                                   // 0x0B29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x0B2C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x0B38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3I7C[0x7];                                   // 0x0B39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue;                        // 0x0B40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            K2Node_DynamicCast_AsMaterialInstanceDynamic;            // 0x0B48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0B50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TCDX[0x7];                                   // 0x0B51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue2;                       // 0x0B58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_CreateDynamicMaterialInstance_ReturnValue;      // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0B68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X4DS[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CallFunc_GetMaterial_ReturnValue3;                       // 0x0B70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            K2Node_DynamicCast_AsMaterialInstanceDynamic2;           // 0x0B78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0B80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BLLC[0x3];                                   // 0x0B81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Get_Charge_Variable_fValue;                     // 0x0B84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Get_Charge_Variable_dValue;                     // 0x0B88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Get_Charge_Variable_bBValue;                    // 0x0B90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GYW4[0x3];                                   // 0x0B91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Get_Charge_Variable_iValue;                     // 0x0B94(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EmitterIsBuffOfType(E_ChargeManagerType typeToCheck, bool* isOfType);
		void GetExtraChargeConsumedMultiplierforReceiver(class ABuff_ChargeManager_C* Receiver, float* retMultiplier);
		void GetDistanceAndAngleCheckOrigin(class AActor* emitterActor, struct FVector* distanceAngleOrigin);
		void TakeChargeConsumedByReceivers(float chargeToTake);
		void GetChargeVariableExternalEmitter(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue);
		void ShouldProcessChargeConsumedByReceivers(bool* shouldProcess);
		void OnChargeConsumedByReceiversChanged(float newCharge);
		void WillReceiverAffectChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* canProcess);
		void IsValidReceiverforChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* IsValid);
		void ProcessChargeConsumedbyReceivers();
		void CanProcessNewReceiverForChargeConsumption(bool* canProcess);
		void GetRadiusForDistanceCheck(float* radiusForCheck);
		void OnActorEnteredEmitterArea(class AActor* enteringActor);
		void GetEmitterLineTraceOrigin(class AActor* emitterActor, struct FVector* lineTraceOrigin);
		void OnEnteredEmitterRadius(class ABuff_ChargeManager_C* chargeReceiver);
		void GetActorsToIgnoreOnRaycast(class AActor* emitterActor, TArray<class AActor*>* ActorsToIgnore);
		void GetEmitterActor(class AActor** emitterActor);
		void IsPointAffectedByEmitter(const struct FVector& affectedPoint, class AActor* requestingActor, bool* isAffected);
		void TakeHarvestingChargeFromCharacter(float chargeHarvested, float* chargeTaken);
		void OnChargeHarvested(float amountHarvested);
		void InitializeManager(class AActor* Owner);
		void OnEmitterIsActiveChanged();
		void ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue);
		void OnEmitterRangeChanged();
		void IsEmitterAvailableForHarvesting(bool* available);
		void GetEmitterForwardVector(struct FVector* ForwardVector);
		void CanPlayerHarvest(class APlayerController* Controller, bool toBattery, bool* canHarvest);
		void HarvestCharge(bool MountedDino, class APlayerController* Controller);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void BPDeactivated(class AActor* ForInstigator);
		void ShouldEnableTimers(bool* tickServer, bool* TickClient);
		void EmitterShouldUpdateChargeOnTimer(bool* shouldUpdateOnTimer);
		void BuffTickClient(float DeltaTime);
		void EmitterUpdateChargeOnTimer(float DeltaTime);
		void BuffTickServer(float DeltaTime);
		void CanEmitCharge(bool* canEmit);
		void IsActorAffectedbyEmitter(class AActor* affectedActor, bool skipLineTrace, bool* isAffected);
		void UserConstructionScript();
		void FadeInTimeline__FinishedFunc();
		void FadeInTimeline__UpdateFunc();
		void FadeOutTimeline__FinishedFunc();
		void FadeOutTimeline__UpdateFunc();
		void FadeInPulse();
		void FadeInPulse_Multicast();
		void FadeOutPulse();
		void FadeOutPulse_Multicast();
		void UpdateEmitterEffectsRadius();
		void UpdateEmitterEffectsRadius_Multicast();
		void InitializeEmitter();
		void ExecuteUbergraph_Buff_ChargeEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
