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
	 * BlueprintGeneratedClass WeapMap.WeapMap_C
	 * Size -> 0x0000 (FullSize[0x1040] - InheritedSize[0x1040])
	 */
	class AWeapMap_C : public AWeapGPS_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
