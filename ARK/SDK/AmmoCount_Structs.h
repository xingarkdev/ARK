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
	 * UserDefinedStruct AmmoCount.AmmoCount
	 * Size -> 0x000C
	 */
	struct FAmmoCount
	{
	public:
		class UClass*                                              AmmoItemTemplate_2_C5C44475479690FAE137CE9F7251F4AF;     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Quantity_5_486A6A904B7378A6D63CBBBC82468B9F;             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
