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
	 * BlueprintGeneratedClass Buff_OwlIceCrash.Buff_OwlIceCrash_C
	 * Size -> 0x0024 (FullSize[0x09F4] - InheritedSize[0x09D0])
	 */
	class ABuff_OwlIceCrash_C : public ABuff_FrozenEffect_Base_C
	{
	public:
		bool                                                       WaitingForHit;                                           // 0x09D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z6UY[0x3];                                   // 0x09D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OrigGravityScale;                                        // 0x09D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EncapsulatedGravityScale;                                // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EncapsulatedFallDamageMultiplier;                        // 0x09DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OrigFallDamageMultiplier;                                // 0x09E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             VelocityAtBuffStart;                                     // 0x09E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistanceToGroundAtStart;                                 // 0x09F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void BuffTickClient(float DeltaTime);
		void BPActivated(class AActor* ForInstigator);
		void BPOnInstigatorCapsuleComponentHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
		void BPDeactivated(class AActor* ForInstigator);
		void SetupIceCrash(class APrimalCharacter* Character, bool Frozen);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_OwlIceCrash(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
