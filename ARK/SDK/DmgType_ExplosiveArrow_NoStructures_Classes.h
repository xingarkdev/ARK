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
	 * BlueprintGeneratedClass DmgType_ExplosiveArrow_NoStructures.DmgType_ExplosiveArrow_NoStructures_C
	 * Size -> 0x0017 (FullSize[0x0148] - InheritedSize[0x0131])
	 */
	class UDmgType_ExplosiveArrow_NoStructures_C : public UDmgType_ExplosiveArrow_C
	{
	public:
		unsigned char                                              UnknownData_O26V[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AllowedStructures;                                       // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		float BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
