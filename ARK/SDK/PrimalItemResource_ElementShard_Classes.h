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
	 * BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemResource_ElementShard_C : public UPrimalItemResourceGeneric_C
	{
	public:
		void RefillElementShard(class UPrimalItem* DestinationItem);
		void CheckForElementShardData(class UPrimalItem* DestinationItem, bool* SupportsDragOnto);
		bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem);
		void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData);
		void ExecuteUbergraph_PrimalItemResource_ElementShard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
