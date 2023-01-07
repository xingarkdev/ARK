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
	 * BlueprintGeneratedClass Buff_Encapsulated.Buff_Encapsulated_C
	 * Size -> 0x008C (FullSize[0x0A5C] - InheritedSize[0x09D0])
	 */
	class ABuff_Encapsulated_C : public ABuff_FrozenEffect_Base_C
	{
	public:
		float                                                      IceShieldHealthPctOfCharBaseHealth;                      // 0x09D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      IceShieldMinHealth;                                      // 0x09D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PctOfDamageToForwardToOwnerOwl;                          // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AddPercentOfBaseHealthPerSecond;                         // 0x09DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OwlStaminaDrainPerSecond;                                // 0x09E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EncapsulatedFallDamageMultiplier;                        // 0x09E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EncapsulatedGravityScale;                                // 0x09E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EncapsulatedDamageMultiplier;                            // 0x09EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaterialLength;                                          // 0x09F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StartedFlying;                                           // 0x09F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StartedInAir;                                            // 0x09F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9JSN[0x2];                                   // 0x09F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     FallStartTime;                                           // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCollisionResponseSet                               OrigCollisionResponseSet;                                // 0x0A00(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      IceShieldCurrentHealth;                                  // 0x0A20(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		float                                                      IceShieldMaxHealth;                                      // 0x0A24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OrigGravityScale;                                        // 0x0A28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OrigFallDamageMultiplier;                                // 0x0A2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              OrigPoopItemClass;                                       // 0x0A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             VelocityAtBuffStart;                                     // 0x0A38(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DeactivatingSoon;                                        // 0x0A44(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PreventCameraControlWhileFrozen;                         // 0x0A45(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C0Y3[0x2];                                   // 0x0A46(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrevFoodConsumptionMultiplier;                           // 0x0A48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPVEEnemyPlayer;                                       // 0x0A4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XAEY[0x3];                                   // 0x0A4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartLocation;                                           // 0x0A50(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RepauseAnims();
		void BuffTickClient(float DeltaTime);
		void RefreshMeshes();
		class UClass* BPOverrideBuffToGiveOnDeactivation();
		bool PreventJump();
		bool CheckPVEEnemy();
		void BuffTickServer(float DeltaTime);
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		struct FVector BPAdjustImpulseFromDamage(const struct FVector& DesiredImpulse, float DamageTaken, const struct FDamageEvent& TheDamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void IsOwnerOwlRider(bool* IsOwlRider);
		void DeactivateSoon(float DelayTime);
		void BPActivated(class AActor* ForInstigator);
		void OnRep_IceShieldCurrentHealth();
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void ApplyDamageToIceShield(float Damage, bool IsRemoteDamage);
		bool IsRidingorCarriedPlayer(class AActor* Actor);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void FreezeCharacter(class APrimalCharacter* Character, bool Freeze);
		void BPDeactivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Encapsulated(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
