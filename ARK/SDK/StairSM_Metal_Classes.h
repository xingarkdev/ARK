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
	 * BlueprintGeneratedClass StairSM_Metal.StairSM_Metal_C
	 * Size -> 0x0008 (FullSize[0x0B18] - InheritedSize[0x0B10])
	 */
	class AStairSM_Metal_C : public AStairSM_Base_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1_1;                                           // 0x0B10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_StairSM_Metal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
