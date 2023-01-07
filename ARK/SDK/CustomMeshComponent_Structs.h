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
	 * ScriptStruct CustomMeshComponent.CustomMeshComponent.CustomMeshTriangle
	 * Size -> 0x0024
	 */
	struct FCustomMeshTriangle
	{
	public:
		struct FVector                                             Vertex0;                                                 // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Vertex1;                                                 // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Vertex2;                                                 // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
