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
	 * BlueprintGeneratedClass StorageBox_TekTransmitter.StorageBox_TekTransmitter_C
	 * Size -> 0x0018 (FullSize[0x0E30] - InheritedSize[0x0E18])
	 */
	class AStorageBox_TekTransmitter_C : public ABaseFuelBurner_GasOnly_C
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh1;                                           // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalInventoryBP_TekTransmitter_C*                 PrimalInventoryBP_TekTransmitter_C1;                     // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                ActivatedEmitter;                                        // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPCanBeActivatedByPlayer(class AShooterPlayerController* PC);
		void UserConstructionScript();
		void ExecuteUbergraph_StorageBox_TekTransmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
