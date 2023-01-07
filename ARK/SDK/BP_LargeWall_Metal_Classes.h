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
	 * BlueprintGeneratedClass BP_LargeWall_Metal.BP_LargeWall_Metal_C
	 * Size -> 0x0000 (FullSize[0x0B28] - InheritedSize[0x0B28])
	 */
	class ABP_LargeWall_Metal_C : public ABase_Wall_Large_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BP_LargeWall_Metal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
