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
	 * BlueprintGeneratedClass IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UIceKaiju_AttackState_Leap_C : public UPrimalAIStateBPBase
	{
	public:
		void BPOnClearAttackState();
		void BPOnAttackEnd(int32_t AttackIndex);
		void BPOnAttackStart(int32_t AttackIndex);
		void ExecuteUbergraph_IceKaiju_AttackState_Leap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
