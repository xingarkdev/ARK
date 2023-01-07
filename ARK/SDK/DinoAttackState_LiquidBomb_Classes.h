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
	 * BlueprintGeneratedClass DinoAttackState_LiquidBomb.DinoAttackState_LiquidBomb_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_LiquidBomb_C : public UPrimalAIStateBPBase
	{
	public:
		void BPOnAttackEnd(int32_t AttackIndex);
		void BPOnAttackStart(int32_t AttackIndex);
		void ExecuteUbergraph_DinoAttackState_LiquidBomb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
