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
	 * BlueprintGeneratedClass StructureTurretPlant.StructureTurretPlant_C
	 * Size -> 0x001D (FullSize[0x0FC5] - InheritedSize[0x0FA8])
	 */
	class AStructureTurretPlant_C : public APrimalStructureTurretPlant
	{
	public:
		class UStaticMeshComponent*                                Collision;                                               // 0x0FA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x0FB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                TargetingEmitter;                                        // 0x0FB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxTurretsNearby;                                        // 0x0FC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTooManyInRangeInactive;                                 // 0x0FC4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser);
		void BPPostLoadedFromSaveGame();
		bool BPCanBeActivated();
		void TurretCheckHardLimit();
		void BlueprintDrawHUD(class AShooterHUD* HUD, float CenterX, float CenterY);
		void UserConstructionScript();
		void ExecuteUbergraph_StructureTurretPlant(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
