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
	 * BlueprintGeneratedClass PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class APoisonGrenadeGasCloud_C : public ABuff_PoisonTrap_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_PoisonGrenadeGasCloud(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
