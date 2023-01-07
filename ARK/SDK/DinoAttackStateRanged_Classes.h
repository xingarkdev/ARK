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
	 * BlueprintGeneratedClass DinoAttackStateRanged.DinoAttackStateRanged_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UDinoAttackStateRanged_C : public UPrimalAIStateDinoRangedState
	{
	public:
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void ExecuteUbergraph_DinoAttackStateRanged(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
