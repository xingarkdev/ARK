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
	 * BlueprintGeneratedClass PrimalStructure_TekBridge.PrimalStructure_TekBridge_C
	 * Size -> 0x0188 (FullSize[0x0FA0] - InheritedSize[0x0E18])
	 */
	class APrimalStructure_TekBridge_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UStaticMeshComponent*                                PlatformCollision;                                       // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent_1;                                       // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                Platform;                                                // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Anchor;                                                  // 0x0E30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StartPlatform;                                           // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     SnapPointLeft;                                           // 0x0E40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     SnapPointRight;                                          // 0x0E48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     SnapPointBack;                                           // 0x0E50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Anchor2;                                                 // 0x0E58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                EndPlatform;                                             // 0x0E60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                Landing;                                                 // 0x0E68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LandingPosition;                                         // 0x0E70(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Activated;                                               // 0x0E7C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGCF[0x3];                                   // 0x0E7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DisabledWheelColor;                                      // 0x0E80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Activating;                                              // 0x0E90(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		EDrawDebugTrace                                            DebugPlacement;                                          // 0x0E91(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IYWZ[0x6];                                   // 0x0E92(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            PlatformMat;                                             // 0x0E98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxLength;                                               // 0x0EA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxAngle;                                                // 0x0EA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PreferredAngle;                                          // 0x0EA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ActivationTime;                                          // 0x0EAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastActivation;                                          // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Placed;                                                  // 0x0EB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8ZU[0x7];                                   // 0x0EB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   BasePlatformMat;                                         // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0EC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BJ6J[0x3];                                   // 0x0EC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x0ECC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue;             // 0x0ED8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetWorldLocation_ReturnValue;                   // 0x0EE0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetWorldLocation_ReturnValue2;                  // 0x0EEC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_FindLookAtRotation_ReturnValue;                 // 0x0EF8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z4JJ[0x4];                                   // 0x0F04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue2;            // 0x0F08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_BoxTraceSingle_ActorsToIgnore_RefProperty;      // 0x0F10(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_BoxTraceSingle_ActorsToIgnore2_RefProperty;     // 0x0F20(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_BoxTraceSingle_ActorsToIgnore3_RefProperty;     // 0x0F30(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_BoxTraceSingle_ActorsToIgnore4_RefProperty;     // 0x0F40(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_BoxTraceSingleForObjects_ActorsToIgnore_RefProperty; // 0x0F50(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_BoxTraceMultiForObjects_ActorsToIgnore_RefProperty; // 0x0F60(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_BoxTraceMultiForObjects_ActorsToIgnore2_RefProperty; // 0x0F70(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_BoxTraceSingle_ActorsToIgnore5_RefProperty;     // 0x0F80(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x0F90(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void AssignPlatformMaterials();
		void BPRefreshedStructureColors();
		void SetupSnaps();
		void BPPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		struct FVector BPOverrideTargetLocation(struct FVector* attackPos);
		struct FRotator CalculatePlacementRotation(class AController* PC, struct FPlacementData* PlacementData);
		struct FRotator BPOverridePlacementRotation(const struct FVector& ViewPos, const struct FRotator& ViewRot);
		int32_t BPIsAllowedToBuildEx(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason, class APlayerController* PC, bool bFinalPlacement, bool bChoosingRotation);
		void TestForEnemyStructures(const struct FVector& Location, class APlayerController* Placer, bool* TooClose);
		bool BPPreventUsingAsFloorForStructure(struct FPlacementData* theOutPlacementData, class APrimalStructure* StructureToPlaceOnMe);
		bool BPConsumeUsePinCode(class AActor* FromKeypadActor, class APlayerController* ForPC, int32_t appledPinCode, bool bIsActivating);
		bool BPCanBeActivated();
		void BPContainerDeactivated();
		void BPContainerActivated();
		void DeactivationComplete();
		void ClientMaterialUpdate();
		void ClientCompleteActivation();
		void ReceiveBeginPlay();
		void UpdateVisibility();
		struct FVector BPOverrideUILocation(class APlayerController* ForPC);
		bool BPOverrideSnappedFromTransform(class APrimalStructure* ParentStructure, int32_t ParentSnapFromIndex, const class FName& ParentSnapFromName, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int32_t SnapToIndex, const class FName& SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int32_t* bForceInvalidateSnap);
		void PushBlockers(class APrimalCharacter* BlockingCharacter, const struct FVector& StartPos);
		void OnRep_Activating();
		void TryActivate(bool ActivateBridge);
		void Activate(bool ActivateBridge);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void IsBlocked(const struct FVector& Start, const struct FRotator& Rotation, const struct FVector& End, bool CheckLanding, bool* bLocked);
		void OnRep_Activated();
		void OnRep_LandingPosition();
		void PreviewLanding();
		void TestExtension(const struct FVector& Start, const struct FRotator& Rotation, int32_t Extension, class APrimalStructure* SnapTarget, bool ChoosingRotation, bool* Good, struct FVector* Placement);
		void BPPlacedStructure(class APlayerController* ForPC);
		void BPBeginPreview();
		void ExtendBridge(const struct FVector& Location);
		void UserConstructionScript();
		void ActivationTick();
		void PushImpact(const struct FVector& Location);
		void ActivationFailed();
		void ClientIsPlaced();
		void MaterialUpdate();
		void ExecuteUbergraph_PrimalStructure_TekBridge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
