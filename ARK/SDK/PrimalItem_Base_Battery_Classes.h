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
	 * BlueprintGeneratedClass PrimalItem_Base_Battery.PrimalItem_Base_Battery_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_Base_Battery_C : public UPrimalItem_Base_C
	{
	public:
		bool BPForceAllowRemoteAddToInventory(class UPrimalInventoryComponent* toInventory);
		void ExecuteUbergraph_PrimalItem_Base_Battery(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
