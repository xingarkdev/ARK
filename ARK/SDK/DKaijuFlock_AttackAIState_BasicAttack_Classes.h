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
	 * BlueprintGeneratedClass DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C
	 * Size -> 0x0168 (FullSize[0x0208] - InheritedSize[0x00A0])
	 */
	class UDKaijuFlock_AttackAIState_BasicAttack_C : public UPrimalAIStateBPBase
	{
	public:
		float                                                      CheckForAttackHitFrequency;                              // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D5LA[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTime_CheckForAttackHitFrequency;                     // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndAttack;                                               // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HitSomeone;                                              // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1XY2[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDinoAttackInfo                                     AttackInfo;                                              // 0x00B8(0x0130) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     LastTimeHitSomeone;                                      // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StopScanning;                                            // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HCFZ[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x01F8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void BPOnAttackStart(int32_t AttackIndex);
		bool BPShouldEndAttack();
		void OnTickEvent(float DeltaSeconds);
		void ExecuteUbergraph_DKaijuFlock_AttackAIState_BasicAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
