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
	 * BlueprintGeneratedClass Base_FenceSupport.Base_FenceSupport_C
	 * Size -> 0x0010 (FullSize[0x0B00] - InheritedSize[0x0AF0])
	 */
	class ABase_FenceSupport_C : public AFenceFoundation_Base_New_C
	{
	public:
		class UStaticMeshComponent*                                RightTarget;                                             // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                LeftTarget;                                              // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BPPlacedStructure(class APlayerController* ForPC);
		bool BPTreatAsFoundationForSnappedStructure(class APrimalStructure* OtherStructure, struct FPlacementData* WithPlacementData);
		void UserConstructionScript();
		void ExecuteUbergraph_Base_FenceSupport(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
