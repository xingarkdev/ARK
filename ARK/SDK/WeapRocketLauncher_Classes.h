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
	 * BlueprintGeneratedClass WeapRocketLauncher.WeapRocketLauncher_C
	 * Size -> 0x0000 (FullSize[0x0E38] - InheritedSize[0x0E38])
	 */
	class AWeapRocketLauncher_C : public AShooterWeapon_Projectile
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapRocketLauncher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
