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
	 * BlueprintGeneratedClass Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C
	 * Size -> 0x0031 (FullSize[0x0F41] - InheritedSize[0x0F10])
	 */
	class AUnderwater_Base_SM_BottomEntry_C : public AUnderwater_Base_SM_C
	{
	public:
		class UStaticMeshComponent*                                WaterPlaneBottom;                                        // 0x0F10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                WaterPlaneTop;                                           // 0x0F18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh4;                                             // 0x0F20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh3;                                             // 0x0F28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh2;                                             // 0x0F30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0F38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSetTimer;                                               // 0x0F40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ChangedCompartmentFloodState();
		void UpdatedVisuals();
		void BPUnstasis();
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void UpdateVisuals();
		void ExecuteUbergraph_Underwater_Base_SM_BottomEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
