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
	 * BlueprintGeneratedClass EggIncubator.EggIncubator_C
	 * Size -> 0x0568 (FullSize[0x1380] - InheritedSize[0x0E18])
	 */
	class AEggIncubator_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UParticleSystemComponent*                            WarmLight9;                                              // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WarmLight8;                                              // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WarmLight7;                                              // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WarmLight6;                                              // 0x0E30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WarmLight5;                                              // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WarmLight4;                                              // 0x0E40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WarmLight3;                                              // 0x0E48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WarmLight2;                                              // 0x0E50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WarmLight1;                                              // 0x0E58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            WarmLight0;                                              // 0x0E60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     WarmLights;                                              // 0x0E68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot9;                                                // 0x0E70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot8;                                                // 0x0E78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot7;                                                // 0x0E80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot6;                                                // 0x0E88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot5;                                                // 0x0E90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot4;                                                // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot3;                                                // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot2;                                                // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot1;                                                // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                EggSlot0;                                                // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     EggSlots;                                                // 0x0EC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalInventoryBP_EggIncubator_C*                   PrimalInventoryBP_EggIncubator_C1;                       // 0x0EC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CachedEggHatchSpeedMultiplier;                           // 0x0ED0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3BGI[0x4];                                   // 0x0ED4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUpdateCachedHatchSpeed;                              // 0x0ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HatchSpeedCacheRateSeconds;                              // 0x0EE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IncubationFloorClamp;                                    // 0x0EE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DedicatedServerIncubationUpdateRateSeconds;              // 0x0EE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TempControlValue;                                        // 0x0EEC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TempControlRangeMin;                                     // 0x0EF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TempControlRangeMax;                                     // 0x0EF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TempControlBonusMultiplierRangeMin;                      // 0x0EF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TempControlBonusMultiplierRangeMax;                      // 0x0EFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              TempControlUnpoweredString;                              // 0x0F00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        TempControlUnpoweredTextColor;                           // 0x0F10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              TempValuePrefixString;                                   // 0x0F20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        TempControlMinHeatColor;                                 // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        TempControlMaxHeatColor;                                 // 0x0F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              TempControlEntryBackString;                              // 0x0F50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              TempControlEntryCategoryString;                          // 0x0F60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              TempControlEntryIncreasePrefix;                          // 0x0F70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              TempControlEntryDecreasePrefix;                          // 0x0F80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      TempControlMinQuantity;                                  // 0x0F90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TempControlMedQuantity;                                  // 0x0F94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TempControlMaxQuantity;                                  // 0x0F98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RCUT[0x4];                                   // 0x0F9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               EggSlotInUse;                                            // 0x0FA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class AViewableIncubatorEgg_C*>                     EggSlotDisplayEggs;                                      // 0x0FB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class UPrimalItemConsumable_Egg_C*>                 EggSlotEggItems;                                         // 0x0FC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      ListeningServerIncubationUpdateRateSeconds;              // 0x0FD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClientIncubationUpdateRateSeconds;                       // 0x0FD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DisplayEggSyncRate;                                      // 0x0FD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LastEggSlotSynced;                                       // 0x0FDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastServerSyncEggDisplay;                                // 0x0FE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastUpdateIncubation;                                    // 0x0FE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             SelfRef;                                                 // 0x0FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BabySpawnLocationForwardOffset;                          // 0x0FF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DEP9[0x4];                                   // 0x0FFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CrackEggString;                                          // 0x1000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              HatchEggString;                                          // 0x1010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      EggThermalInsulationTemperatureMultiplier;               // 0x1020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HypoThermalInsulation;                                   // 0x1024(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HyperThermalInsulation;                                  // 0x1028(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IndoorsHypoThermalInsulation;                            // 0x102C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IndoorsHyperThermalInsulation;                           // 0x1030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsIndoors;                                              // 0x1034(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LEHU[0x3];                                   // 0x1035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastInsulationCalcTime;                                  // 0x1038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InsulationUpdateRateSeconds;                             // 0x1040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InsulationCheckRadius;                                   // 0x1044(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              EggCrackActorTemplate;                                   // 0x1048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAutoHatchEggsWhenUnpowered;                             // 0x1050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDamageEggsWhenUnpoweredAndUnableToIncubate;             // 0x1051(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RB5Q[0x6];                                   // 0x1052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     WarmingLightTemplate;                                    // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            ScreenMatInst;                                           // 0x1060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ScreenMaterialIndex;                                     // 0x1068(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9PEH[0x4];                                   // 0x106C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalEggToolTipWidget*                             FoundToolTipCDO;                                         // 0x1070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              IncubatorGestationBuff;                                  // 0x1078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              GestationMonitoringString;                               // 0x1080(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              GestationMonitorAddEffect;                               // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x1098(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAuthority_ReturnValue;                       // 0x109C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GWTN[0x3];                                   // 0x109D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_GetWarmingLightForSlot_WarmingLightComponent;   // 0x10A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x10A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QNVJ[0x3];                                   // 0x10A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x10AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_SlotIndex2;                           // 0x10B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X8KJ[0x4];                                   // 0x10B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUnreplicatedEggData                                K2Node_CustomEvent_ManuallyReplicatedEggData;            // 0x10B8(0x0058) Transient, DuplicateTransient
		struct FItemNetInfo                                        K2Node_CustomEvent_ItemNetInfo;                          // 0x1110(0x01B0) Transient, DuplicateTransient
		int32_t                                                    K2Node_CustomEvent_SlotIndex;                            // 0x12C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2DC9[0x4];                                   // 0x12C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AShooterPlayerController*>                    CallFunc_GetAllLocalPlayerControllers_ReturnValue;       // 0x12C8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AShooterPlayerController*                            CallFunc_Array_Get_Item;                                 // 0x12D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x12E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalInventoryBP_EggIncubator_C*                   K2Node_DynamicCast_AsPrimalInventoryBP_EggIncubator_C;   // 0x12E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x12F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1A1K[0x3];                                   // 0x12F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x12F4(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate2;                   // 0x1304(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		bool                                                       CallFunc_HasAuthority_ReturnValue2;                      // 0x1314(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MPBL[0x3];                                   // 0x1315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_ItemID1;                              // 0x1318(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_ItemID2;                              // 0x131C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FBPNetExecParams                                    K2Node_MakeStruct_BPNetExecParams;                       // 0x1320(0x0040) Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x1360(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x1364(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Get_Item2;                                // 0x1365(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_89W2[0x2];                                   // 0x1366(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItemConsumable_Egg_C*                         CallFunc_Array_Set_Item_RefProperty;                     // 0x1368(0x0008) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		class UPrimalItemConsumable_Egg_C*                         CallFunc_Array_Set_Item2_RefProperty;                    // 0x1370(0x0008) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		class UPrimalItemConsumable_Egg_C*                         CallFunc_Array_Set_Item3_RefProperty;                    // 0x1378(0x0008) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor

	public:
		void IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsAllowed);
		void GetItemDisplaySlot(class UPrimalItem* ForItem, int32_t* InSlot, bool* SlotFound);
		void ClientDisplayGestationMonitorEffectAdded(const struct FTransform& AtLocation);
		void BPNotifyPowerChanged();
		void SetIncubatorMaterialValues();
		void UpdateWarmingLights();
		void GetWarmingLightForSlot(int32_t ForSlotIndex, class UParticleSystemComponent** WarmingLightComponent);
		void DestroyEggDisplay(int32_t ItemID1, int32_t ItemID2);
		void CanEggIncubateInTemp(class UPrimalItemConsumable_Egg_C* eggItem, bool* bCanIncubate);
		void UpdateIndoorsStatus();
		void CalculateIncubationInsulation();
		void CanEggBeHatched(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsHatchable);
		void TrySpawnEggToWorld(class UPrimalItemConsumable_Egg_C* eggItem, bool* EggWasSpawned);
		void ThrottledTick();
		void ServerSyncEggDisplay();
		void GetTempBonusRawPercent(float EggTempLowerBound, float EggTempUpperBound, float* BoostPercent);
		void SetIncubatorCustomDatasForEgg(class UPrimalItemConsumable_Egg_C* eggItem);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void ClientRemoveFertilizedEgg(int32_t SlotIndex);
		void ClientAddFertilizedEgg(int32_t SlotIndex, struct FUnreplicatedEggData* ManuallyReplicatedEggData, struct FItemNetInfo* ItemNetInfo);
		void SetupEggSlots();
		void RefreshEggDisplays();
		void CheckIsFertilizedEgg(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsFertilized);
		void GetSlotIndexForEggItem(class UPrimalItemConsumable_Egg_C* eggItem, int32_t* SlotIndex);
		void GetFirstAvailableEggSlotIndex(int32_t* EggSlotIndex);
		void BPPostInitializeComponents();
		void ServerRemoveFertilizedEgg(class UPrimalItemConsumable_Egg_C* eggItem);
		void ServerAddFertilizedEgg(class UPrimalItemConsumable_Egg_C* eggItem);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void AddTempControlEntries(TArray<struct FMultiUseEntry>* MultiUseEntries);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPGetMultiUseCenterText(class APlayerController* ForPC, int32_t UseIndex, class FString* OutCenterText, struct FLinearColor* OutCenterTextColor);
		void GetTempControlBonus(float EggTempLowerBound, float EggTempUpperBound, float* TempControlBonusMultiplier);
		void UpdateIncubation();
		void UpdateCachedHatchSpeedMultiplier();
		void UserConstructionScript();
		void ClientNotifyAddedEgg(int32_t SlotIndex, const struct FUnreplicatedEggData& ManuallyReplicatedEggData, const struct FItemNetInfo& ItemNetInfo);
		void ClientNotifyRemovedEgg(int32_t SlotIndex);
		void ReceiveBeginPlay();
		void MC_DestroyEggVFX(int32_t ItemID1, int32_t ItemID2);
		void BPUnstasis();
		void MC_UpdateWarmingLighhts();
		void MC_NotifyPowerChanged();
		void ExecuteUbergraph_EggIncubator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
