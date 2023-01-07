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
	 * BlueprintGeneratedClass PrimalInventoryBP_ElectricGenerator.PrimalInventoryBP_ElectricGenerator_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_ElectricGenerator_C : public UPrimalInventoryBP_BaseGasolineBurning_C
	{
	public:
		void ExecuteUbergraph_PrimalInventoryBP_ElectricGenerator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
