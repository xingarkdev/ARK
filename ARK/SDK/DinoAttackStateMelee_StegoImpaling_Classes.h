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
	 * BlueprintGeneratedClass DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UDinoAttackStateMelee_StegoImpaling_C : public UDinoAttackStateMelee_C
	{
	public:
		void BPOnHitActor(struct FHitResult* HitResult);
		void ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
