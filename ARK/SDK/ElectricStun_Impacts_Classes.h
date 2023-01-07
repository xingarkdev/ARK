﻿#pragma once

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
	 * BlueprintGeneratedClass ElectricStun_Impacts.ElectricStun_Impacts_C
	 * Size -> 0x0008 (FullSize[0x0890] - InheritedSize[0x0888])
	 */
	class AElectricStun_Impacts_C : public AShooterImpactEffect
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0888(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ElectricStun_Impacts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
