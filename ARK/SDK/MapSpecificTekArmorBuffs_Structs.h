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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct MapSpecificTekArmorBuffs.MapSpecificTekArmorBuffs
	 * Size -> 0x0018
	 */
	struct FMapSpecificTekArmorBuffs
	{
	public:
		class UClass*                                              TekArmorBuff_2_F5E423204C994EC6354175AE7BC652F7;         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              ForMap_5_BDE018E042331E4B7EC006837145188A;               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
