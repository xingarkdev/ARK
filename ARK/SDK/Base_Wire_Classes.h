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
	 * BlueprintGeneratedClass Base_Wire.Base_Wire_C
	 * Size -> 0x0000 (FullSize[0x0B10] - InheritedSize[0x0B10])
	 */
	class ABase_Wire_C : public AElectricCableBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Base_Wire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
