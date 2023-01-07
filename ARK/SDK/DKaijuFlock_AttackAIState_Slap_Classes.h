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
	 * BlueprintGeneratedClass DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C
	 * Size -> 0x0012 (FullSize[0x00B2] - InheritedSize[0x00A0])
	 */
	class UDKaijuFlock_AttackAIState_Slap_C : public UPrimalAIStateBPBase
	{
	public:
		float                                                      CheckForAttackHitFrequency;                              // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VBI0[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTime_CheckForAttackHitFrequency;                     // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndAttack;                                               // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HitSomeone;                                              // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void BPOnAttackStart(int32_t AttackIndex);
		bool BPShouldEndAttack();
		void OnTickEvent(float DeltaSeconds);
		void ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
