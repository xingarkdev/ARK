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
	 * BlueprintGeneratedClass TrophyBaseBP.TrophyBaseBP_C
	 * Size -> 0x0008 (FullSize[0x0E20] - InheritedSize[0x0E18])
	 */
	class ATrophyBaseBP_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UPrimalInventoryBP_TrophyBase_C*                     PrimalInventoryBP_TrophyBase_C1;                         // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_TrophyBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
