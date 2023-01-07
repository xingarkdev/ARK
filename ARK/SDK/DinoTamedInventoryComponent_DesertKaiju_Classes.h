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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_DesertKaiju_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		void BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem);
		void EquipSaddle();
		void ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
