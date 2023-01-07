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
	 * BlueprintGeneratedClass DmgType_FlameThrower_NoStructures.DmgType_FlameThrower_NoStructures_C
	 * Size -> 0x0027 (FullSize[0x0158] - InheritedSize[0x0131])
	 */
	class UDmgType_FlameThrower_NoStructures_C : public UDmgType_FlameThrower_C
	{
	public:
		unsigned char                                              UnknownData_CX1V[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AllowedStructures;                                       // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        AllowedStructures_NoRefStructureTag;                     // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		float BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
