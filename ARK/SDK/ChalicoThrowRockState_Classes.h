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
	 * BlueprintGeneratedClass ChalicoThrowRockState.ChalicoThrowRockState_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UChalicoThrowRockState_C : public UPrimalAIStateDinoRangedState
	{
	public:
		void BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity);
		void ExecuteUbergraph_ChalicoThrowRockState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
