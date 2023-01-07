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
	 * BlueprintGeneratedClass DinoAttackStateMelee_IceJumper.DinoAttackStateMelee_IceJumper_C
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UDinoAttackStateMelee_IceJumper_C : public UPrimalAIStateDinoMeleeState
	{
	public:
		double                                                     LastOnMeleeHitTime;                                      // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void ExecuteUbergraph_DinoAttackStateMelee_IceJumper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
