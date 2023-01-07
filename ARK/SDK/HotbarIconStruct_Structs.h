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
	 * UserDefinedStruct HotbarIconStruct.HotbarIconStruct
	 * Size -> 0x000C
	 */
	struct FHotbarIconStruct
	{
	public:
		class UTexture*                                            Icon_6_917FA98646C38FB1DD8550A739F01D69;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Quantity_5_AC984AC14D5FC961A3E9C3BCF32B8EA2;             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
