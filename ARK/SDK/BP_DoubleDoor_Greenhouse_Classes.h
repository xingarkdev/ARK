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
	 * BlueprintGeneratedClass BP_DoubleDoor_Greenhouse.BP_DoubleDoor_Greenhouse_C
	 * Size -> 0x0010 (FullSize[0x0BC0] - InheritedSize[0x0BB0])
	 */
	class ABP_DoubleDoor_Greenhouse_C : public ABase_DoubleDoor_C
	{
	public:
		class UStaticMeshComponent*                                SecondDoor;                                              // 0x0BB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     SecondDoorTransform;                                     // 0x0BB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BP_DoubleDoor_Greenhouse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
