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
	 * BlueprintGeneratedClass WeapHarpoon.WeapHarpoon_C
	 * Size -> 0x0008 (FullSize[0x0E40] - InheritedSize[0x0E38])
	 */
	class AWeapHarpoon_C : public AShooterWeapon_Projectile
	{
	public:
		class UStaticMeshComponent*                                Mesh3PSM;                                                // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapHarpoon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
