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
	 * BlueprintGeneratedClass Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C
	 * Size -> 0x0008 (FullSize[0x0B08] - InheritedSize[0x0B00])
	 */
	class ACeiling_Doorway_Tek_C : public ACeiling_Doorway_Base_SM_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPAllowSnappingWith(class APrimalStructure* OtherStructure, class APlayerController* ForPC);
		void UserConstructionScript();
		void ExecuteUbergraph_Ceiling_Doorway_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
