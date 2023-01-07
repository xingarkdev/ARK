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
	 * BlueprintGeneratedClass DmgType_DesertKaiju_Lightning.DmgType_DesertKaiju_Lightning_C
	 * Size -> 0x0000 (FullSize[0x0131] - InheritedSize[0x0131])
	 */
	class UDmgType_DesertKaiju_Lightning_C : public UDmgType_Melee_Dino_Carnivore_Large_C
	{
	public:
		float BPAdjustHarvestingDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
