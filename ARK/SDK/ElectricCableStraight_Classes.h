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
	 * BlueprintGeneratedClass ElectricCableStraight.ElectricCableStraight_C
	 * Size -> 0x0000 (FullSize[0x0B10] - InheritedSize[0x0B10])
	 */
	class AElectricCableStraight_C : public AElectricCableBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ElectricCableStraight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
