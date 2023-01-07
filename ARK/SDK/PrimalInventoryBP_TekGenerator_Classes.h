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
	 * BlueprintGeneratedClass PrimalInventoryBP_TekGenerator.PrimalInventoryBP_TekGenerator_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_TekGenerator_C : public UPrimalInventoryBP_BaseGasolineBurning_C
	{
	public:
		bool BPRemoteInventoryAllowViewing(class AShooterPlayerController* PC);
		void ExecuteUbergraph_PrimalInventoryBP_TekGenerator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
