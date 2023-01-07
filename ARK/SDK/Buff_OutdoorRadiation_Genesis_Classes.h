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
	 * BlueprintGeneratedClass Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C
	 * Size -> 0x00C0 (FullSize[0x0A40] - InheritedSize[0x0980])
	 */
	class ABuff_OutdoorRadiation_Genesis_C : public ABuff_Base_C
	{
	public:
		float                                                      LocalParticleFadeout_Value_D50E2ABF4A5043FC801DEE9ABD567034; // 0x0980(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         LocalParticleFadeout__Direction_D50E2ABF4A5043FC801DEE9ABD567034; // 0x0984(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DHH0[0x3];                                   // 0x0985(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  LocalParticleFadeout;                                    // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BaseDamagePerSecond;                                     // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PercentageOfMaxHealthPerSecond;                          // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      DamageMitigationArmorTypes;                              // 0x0998(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      DamageReductionPercentPerArmorItem;                      // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DurabilityDamagePerSecond;                               // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<EPrimalEquipmentType>                               EquipSlotsToDamageDurability;                            // 0x09B0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       DamageEquippedWeaponDurability;                          // 0x09C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XVRM[0x7];                                   // 0x09C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      buffsToRemove;                                           // 0x09C8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UParticleSystem*                                     LocalOnlyParticleSystem;                                 // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            LocalParticles;                                          // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                LocalParticleFadeoutParamName;                           // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTransform                                          CallFunc_MakeTransform_ReturnValue;                      // 0x09F0(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_AddComponent_ReturnValue;                       // 0x0A20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0A28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlled_ReturnValue;                // 0x0A29(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0A2A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0A2B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0A2C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0A2D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0A2E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x0A2F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x0A30(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W2GF[0x7];                                   // 0x0A31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_ForInstigator;                              // 0x0A38(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		float GetMaxHealth();
		void GetDamageMitigationArmorEquippedCount(int32_t* NumItemsEquipped);
		void DamageDurability(class UPrimalItem* Item, float Damage);
		void RemoveBuffs();
		void BPActivated(class AActor* ForInstigator);
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void LocalParticleFadeout__FinishedFunc();
		void LocalParticleFadeout__UpdateFunc();
		void ReceiveBeginPlay();
		void BPDeactivated(class AActor* ForInstigator);
		void ExecuteUbergraph_Buff_OutdoorRadiation_Genesis(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
