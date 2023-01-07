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
	 * BlueprintGeneratedClass PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UPrimalInventory_DinoLeash_C : public UPrimalInventoryBP_StorageBox_Base_C
	{
	public:
		void BPPreInitDefaultInventory();
		void ExecuteUbergraph_PrimalInventory_DinoLeash(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
