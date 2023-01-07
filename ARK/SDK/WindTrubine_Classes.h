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
	 * BlueprintGeneratedClass WindTrubine.WindTrubine_C
	 * Size -> 0x0020 (FullSize[0x0E38] - InheritedSize[0x0E18])
	 */
	class AWindTrubine_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UChildActorComponent*                                ActivatedEmitter;                                        // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              SkeletalMesh1;                                           // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TurnOffForWindLessThan;                                  // 0x0E28(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxPowerDistance;                                        // 0x0E2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentWind;                                             // 0x0E30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x0E34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		class FString BPOverrideCantBuildReasonString(int32_t CantBuildReason);
		int32_t BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason);
		void BPUnstasis();
		void UpdateWind();
		bool BPIsValidWaterSourceForPipe(class APrimalStructureWaterPipe* ForWaterPipe);
		bool BPCanBeActivatedByPlayer(class AShooterPlayerController* PC);
		bool BPCanBeActivated();
		void BPContainerActivated();
		void BPContainerDeactivated();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ForceUpdateWind();
		void ExecuteUbergraph_WindTrubine(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
