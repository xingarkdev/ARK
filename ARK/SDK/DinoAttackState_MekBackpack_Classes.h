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
	 * BlueprintGeneratedClass DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_MekBackpack_C : public UPrimalAIStateBPBase
	{
	public:
		void BPOnAttackTick(float DeltaTime);
		void BPOnAttackStart(int32_t AttackIndex);
		void GetMuzzleInfo(struct FVector* Location, struct FVector* Direction);
		void ExecuteUbergraph_DinoAttackState_MekBackpack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
