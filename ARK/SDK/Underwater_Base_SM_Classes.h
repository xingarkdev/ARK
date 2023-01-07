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
	 * BlueprintGeneratedClass Underwater_Base_SM.Underwater_Base_SM_C
	 * Size -> 0x0038 (FullSize[0x0F10] - InheritedSize[0x0ED8])
	 */
	class AUnderwater_Base_SM_C : public APrimalStructureUnderwaterBase
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0ED8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       Collision_Top;                                           // 0x0EE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       Collision_Left;                                          // 0x0EE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       Collision_Right;                                         // 0x0EF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       Collision_Back;                                          // 0x0EF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       Collision_Front;                                         // 0x0F00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       Bounds;                                                  // 0x0F08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPPreventPlacingStructureOntoMe(class APlayerController* PC, class APrimalStructure* ForNewStructure, struct FHitResult* ForHitResult);
		bool BPForceConsideredEnemyFoundation(class APlayerController* PC, class APrimalStructure* ForNewStructure, struct FVector* TestAtLocation);
		void ChangedCompartmentFloodState();
		void UserConstructionScript();
		void ExecuteUbergraph_Underwater_Base_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
