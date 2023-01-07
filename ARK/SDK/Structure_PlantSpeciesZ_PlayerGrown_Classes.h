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
	 * BlueprintGeneratedClass Structure_PlantSpeciesZ_PlayerGrown.Structure_PlantSpeciesZ_PlayerGrown_C
	 * Size -> 0x0000 (FullSize[0x0C65] - InheritedSize[0x0C65])
	 */
	class AStructure_PlantSpeciesZ_PlayerGrown_C : public AStructure_PlantSpeciesZ_Base_C
	{
	public:
		void BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser);
		void InitializeState();
		void UserConstructionScript();
		void ExecuteUbergraph_Structure_PlantSpeciesZ_PlayerGrown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
