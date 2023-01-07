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
	 * BlueprintGeneratedClass PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C
	 * Size -> 0x0004 (FullSize[0x0AEC] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_WeaponTorch_C : public UPrimalItemWeaponGenericAmmoless_C
	{
	public:
		float                                                      DurabilityLossPerSecond;                                 // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void SkinEquippedBlueprintTick(class UPrimalItem* OwnerItem, float DeltaSeconds);
		bool BPPreventUseOntoItem(class UPrimalItem* DestinationItem);
		void ExecuteUbergraph_PrimalItem_WeaponTorch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
