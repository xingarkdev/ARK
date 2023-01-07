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
	 * BlueprintGeneratedClass WeapTripWireC4.WeapTripWireC4_C
	 * Size -> 0x0000 (FullSize[0x0E00] - InheritedSize[0x0E00])
	 */
	class AWeapTripWireC4_C : public AShooterWeapon_Placer
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapTripWireC4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
