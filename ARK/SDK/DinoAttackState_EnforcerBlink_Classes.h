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
	 * BlueprintGeneratedClass DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_EnforcerBlink_C : public UPrimalAIStateBPBase
	{
	public:
		double                                                     StartTime;                                               // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPDoAttack();
		void OnEndEvent();
		void OnBeginEvent(class UPrimalAIState* InParentState);
		bool BPShouldEndAttack();
		void ExecuteUbergraph_DinoAttackState_EnforcerBlink(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
