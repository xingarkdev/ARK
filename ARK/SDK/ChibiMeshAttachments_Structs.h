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
	 * UserDefinedStruct ChibiMeshAttachments.ChibiMeshAttachments
	 * Size -> 0x0040
	 */
	struct FChibiMeshAttachments
	{
	public:
		class FName                                                SocketName_2_700A9C214EAC35955848639A37223A02;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMesh*                                         StaticMesh_5_8BD1CE2042771926A14BC8A93FD33B3D;           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTransform                                          TransformOffset_17_4B838DBC4A66A9AC09221C89FD357CFA;     // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
