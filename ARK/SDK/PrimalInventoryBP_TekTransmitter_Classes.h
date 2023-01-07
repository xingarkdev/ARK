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
	 * BlueprintGeneratedClass PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C
	 * Size -> 0x0001 (FullSize[0x0599] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_TekTransmitter_C : public UPrimalInventoryBP_BaseGasolineBurning_C
	{
	public:
		bool                                                       RequiresEngram;                                          // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPRemoteInventoryAllowViewing(class AShooterPlayerController* PC);
		void ExecuteUbergraph_PrimalInventoryBP_TekTransmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
