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
	 * BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemResource_Gasoline_C : public UPrimalItemResource_Craftable_C
	{
	public:
		void CheckForGasolineData(class UPrimalItem* DestinationItem, bool* SupportsDragOn);
		void RefillGasoline(class UPrimalItem* DestinationItem);
		void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData);
		bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem);
		void ExecuteUbergraph_PrimalItemResource_Gasoline(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
