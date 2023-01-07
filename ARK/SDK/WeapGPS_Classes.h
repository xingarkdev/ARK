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
	 * BlueprintGeneratedClass WeapGPS.WeapGPS_C
	 * Size -> 0x0008 (FullSize[0x1040] - InheritedSize[0x1038])
	 */
	class AWeapGPS_C : public APrimalWeaponGPS
	{
	public:
		class UPointLightComponent*                                PointLight1;                                             // 0x1038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapGPS(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
