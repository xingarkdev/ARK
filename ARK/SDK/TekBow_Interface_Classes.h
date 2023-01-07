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
	 * BlueprintGeneratedClass TekBow_Interface.TekBow_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTekBow_Interface_C : public UInterface
	{
	public:
		void GetAmmoMultiuseEntries(TArray<struct FMultiUseEntry>* AmmoWheelEntries);
		void GetHudData(class FString* AmmoName, class UTexture2D** AmmoIcon, int32_t* CurrentAmmoCount, int32_t* CurrentAmmoCost, int32_t* AmmoPerClip, int32_t* AmmoTypeIndex, struct FLinearColor* CurrentAmmoTypeColor, bool* IsAccessoryActive);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
