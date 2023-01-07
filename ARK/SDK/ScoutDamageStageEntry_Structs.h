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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ScoutDamageStageEntry.ScoutDamageStageEntry
	 * Size -> 0x000C
	 */
	struct FScoutDamageStageEntry
	{
	public:
		class UParticleSystem*                                     ParticleSystem_2_3F70255542366800C3E76C9A704C918C;       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PlayIntervalSeconds_5_C11DF5814C838FEEDC2F7CA80A3DB7A0;  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
