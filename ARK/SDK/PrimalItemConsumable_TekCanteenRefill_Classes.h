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
	 * BlueprintGeneratedClass PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C
	 * Size -> 0x0000 (FullSize[0x0B78] - InheritedSize[0x0B78])
	 */
	class UPrimalItemConsumable_TekCanteenRefill_C : public UPrimalItemConsumable_TekCanteenCraftable_C
	{
	public:
		void BPCrafted();
		void ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
