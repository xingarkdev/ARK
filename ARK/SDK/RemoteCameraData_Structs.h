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
	 * UserDefinedStruct RemoteCameraData.RemoteCameraData
	 * Size -> 0x001C
	 */
	struct FRemoteCameraData
	{
	public:
		class FString                                              Name_6_B4ADECA1426EB9B7B12F9DB094A4B845;                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FVector                                             Position_9_17267DDC4E30DE0C5A63D2AABB1C1A90;             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
