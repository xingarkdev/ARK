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
	 * BlueprintGeneratedClass IndustrialCookingPot.IndustrialCookingPot_C
	 * Size -> 0x0010 (FullSize[0x0F48] - InheritedSize[0x0F38])
	 */
	class AIndustrialCookingPot_C : public AWaterTankBaseBP_NoInv_C
	{
	public:
		class UPrimalInventoryBP_CookingPot_Industrial_C*          PrimalInventoryBP_CookingPot_Industrial_C1;              // 0x0F38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                ActivatedEmitter;                                        // 0x0F40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_IndustrialCookingPot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
