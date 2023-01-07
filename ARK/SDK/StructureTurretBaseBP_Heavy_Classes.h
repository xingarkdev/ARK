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
	 * BlueprintGeneratedClass StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C
	 * Size -> 0x0008 (FullSize[0x0FB0] - InheritedSize[0x0FA8])
	 */
	class AStructureTurretBaseBP_Heavy_C : public AStructureTurretBaseBP_BaseHeavy_C
	{
	public:
		class UPrimalInventoryBP_HeavyTurret_C*                    PrimalInventoryBP_HeavyTurret_C1;                        // 0x0FA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		int32_t BPIsAllowedToBuildEx(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason, class APlayerController* PC, bool bFinalPlacement, bool bChoosingRotation);
		void UserConstructionScript();
		void ExecuteUbergraph_StructureTurretBaseBP_Heavy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
