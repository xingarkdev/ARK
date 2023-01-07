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
	 * BlueprintGeneratedClass AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAmmoContainerHUD_Interface_C : public UInterface
	{
	public:
		void GetAmmoContainerIcon(class UTexture2D** Icon);
		void ProvidedAmmoQuantity(class APrimalStructureItemContainer* TurretStructureItemContainer, class UClass* AmmoItemTemplate, int32_t* Quantity, bool* AnyAmmoContainersInRange);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
