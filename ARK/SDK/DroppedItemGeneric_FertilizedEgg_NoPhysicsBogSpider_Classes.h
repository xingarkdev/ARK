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
	 * BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C
	 * Size -> 0x0010 (FullSize[0x0758] - InheritedSize[0x0748])
	 */
	class ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C : public ADroppedItemGeneric_FertilizedEgg_NoPhysics_C
	{
	public:
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x0748(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
