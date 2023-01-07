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
	 * BlueprintGeneratedClass Interface_MutagenSpawner.Interface_MutagenSpawner_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface_MutagenSpawner_C : public UInterface
	{
	public:
		void AdjustableSpawnDelayChanged();
		void itemPickedUp(class AActor* Item, class APlayerController* ByPC);
		void SpawnItem(class AActor* Manager, class AActor** SpawnedItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
