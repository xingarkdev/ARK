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
	 * BlueprintGeneratedClass WeapMachinedSniper_Laser.WeapMachinedSniper_Laser_C
	 * Size -> 0x0020 (FullSize[0x0DF8] - InheritedSize[0x0DD8])
	 */
	class AWeapMachinedSniper_Laser_C : public AWeapMachinedSniper_Scope_C
	{
	public:
		class UShooterLaserBeamComponent*                          FPVLaserBeam;                                            // 0x0DD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                _1pAttachmentLaser;                                      // 0x0DE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UShooterLaserBeamComponent*                          TPVLaserBeam;                                            // 0x0DE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                _3pAttachmentLaser;                                      // 0x0DF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapMachinedSniper_Laser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
