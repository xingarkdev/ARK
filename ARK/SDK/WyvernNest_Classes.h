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
	 * BlueprintGeneratedClass WyvernNest.WyvernNest_C
	 * Size -> 0x000C (FullSize[0x0AFC] - InheritedSize[0x0AF0])
	 */
	class AWyvernNest_C : public AStructureBaseBP_C
	{
	public:
		class UClass*                                              DroppedItemEggClass;                                     // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x0AF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void CheckForNearbyEggs();
		void BPUnstasis();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void CheckForEggs();
		void ExecuteUbergraph_WyvernNest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
