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
	 * BlueprintGeneratedClass Base_Roof_Tri.Base_Roof_Tri_C
	 * Size -> 0x0001 (FullSize[0x0AF1] - InheritedSize[0x0AF0])
	 */
	class ABase_Roof_Tri_C : public AStructureBaseBP_C
	{
	public:
		bool                                                       IsGlass;                                                 // 0x0AF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsValidSnapPointTo(class APrimalStructure* childStructure, int32_t MySnapPointToIndex);
		bool BPOverrideSnappedToTransform(class APrimalStructure* childStructure, int32_t ChildSnapFromIndex, const class FName& ChildSnapFromName, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int32_t SnapToIndex, const class FName& SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int32_t* bForceInvalidateSnap);
		void UserConstructionScript();
		void ExecuteUbergraph_Base_Roof_Tri(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
