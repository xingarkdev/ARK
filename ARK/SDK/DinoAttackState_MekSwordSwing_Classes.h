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
	 * BlueprintGeneratedClass DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_MekSwordSwing_C : public UPrimalAIStateBPBase
	{
	public:
		TArray<struct FTransform>                                  SwordCapsuleTransforms;                                  // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       DebugAttacks;                                            // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionChannel                                          SwordTraceChannel;                                       // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HitPause;                                                // 0x00B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AttackStarted;                                           // 0x00B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LowFPSMode;                                              // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5WRT[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalDamage;                                             // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NSMS[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              LowFPSSweepIntervals;                                    // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void ShouldDoDamageTo(class AActor* Actor, bool* AllowDamage);
		void BPOnAttackEnd(int32_t AttackIndex);
		void BPOnAnimNotifyCustomEvent(const class FName& CustomEventName, class UAnimSequenceBase* Animation, ENetRole Role);
		void DoSwordDamage();
		void GetSwordCapsule(struct FTransform* WorldTransform, float* CapsuleRadius, float* CapsuleHalfHeight);
		void GetSwordDamagePoint(struct FVector* Loc, struct FRotator* Rot);
		void BPOnAttackStart(int32_t AttackIndex);
		void ExecuteUbergraph_DinoAttackState_MekSwordSwing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
