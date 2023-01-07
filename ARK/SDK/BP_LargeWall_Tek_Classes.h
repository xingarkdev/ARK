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
	 * BlueprintGeneratedClass BP_LargeWall_Tek.BP_LargeWall_Tek_C
	 * Size -> 0x0000 (FullSize[0x0B28] - InheritedSize[0x0B28])
	 */
	class ABP_LargeWall_Tek_C : public ABase_Wall_Large_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BP_LargeWall_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
