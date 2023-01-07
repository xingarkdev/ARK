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
	 * BlueprintGeneratedClass PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_TekSecurityConsole_C : public UPrimalInventoryComponent
	{
	public:
		void OnConsoleUpdated();
		void BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem);
		void ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
