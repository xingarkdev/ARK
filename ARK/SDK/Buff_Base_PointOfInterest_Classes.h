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
	 * BlueprintGeneratedClass Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C
	 * Size -> 0x0158 (FullSize[0x0AD8] - InheritedSize[0x0980])
	 */
	class ABuff_Base_PointOfInterest_C : public ABuff_Base_C
	{
	public:
		struct FPointOfInterestData                                PointOfInterestData;                                     // 0x0980(0x0140) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       POIInitialized;                                          // 0x0AC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bNewUniqueState;                            // 0x0AC1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0CXU[0x6];                                   // 0x0AC2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_UnviewedByActor;                            // 0x0AC8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_Event_ViewedByActor;                              // 0x0AD0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool CanBeViewed(class AActor* ByActor);
		class UClass* GetPointCustomData();
		struct FPointOfInterestData GetPointOfInterestData();
		void InititalizePointOfInterest();
		void UserConstructionScript();
		void SetPointTagUniqueState(bool bNewUniqueState);
		void UnviewPoint(class AActor* UnviewedByActor);
		void ViewPoint(class AActor* ViewedByActor);
		void ExecuteUbergraph_Buff_Base_PointOfInterest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
