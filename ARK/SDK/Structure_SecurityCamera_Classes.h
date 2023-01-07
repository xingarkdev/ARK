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
	 * BlueprintGeneratedClass Structure_SecurityCamera.Structure_SecurityCamera_C
	 * Size -> 0x0161 (FullSize[0x0F79] - InheritedSize[0x0E18])
	 */
	class AStructure_SecurityCamera_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UParticleSystemComponent*                            ConnectionFX;                                            // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CameraViewPos;                                           // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CameraBasePos;                                           // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UArrowComponent*                                     Arrow2;                                                  // 0x0E30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UArrowComponent*                                     Arrow1;                                                  // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ActiveFX;                                                // 0x0E40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                CameraMesh;                                              // 0x0E48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CameraMount;                                             // 0x0E50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxDistanceFromConsole;                                  // 0x0E58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N2HT[0x4];                                   // 0x0E5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NoConsoleErrorString;                                    // 0x0E60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              TooFarErrorString;                                       // 0x0E70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class APrimalStructure*                                    LinkedConsole;                                           // 0x0E80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CameraActive;                                            // 0x0E88(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_65OF[0x7];                                   // 0x0E89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUpdateTime;                                          // 0x0E90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            DesiredRotation;                                         // 0x0E98(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CameraPlaced;                                            // 0x0EA4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       LocalActive;                                             // 0x0EA5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FM97[0x2];                                   // 0x0EA6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ConsoleLocation;                                         // 0x0EA8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ELNN[0x4];                                   // 0x0EB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            BeamToConsole;                                           // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxPlacementBeamLength;                                  // 0x0EC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RZJ1[0x4];                                   // 0x0EC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItem*                                         AssociatedItem;                                          // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              ConsoleLimitErrorString;                                 // 0x0ED0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              ConsoleName;                                             // 0x0EE0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		struct FVector                                             TargetRelativePosition;                                  // 0x0EF0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EverActive;                                              // 0x0EFC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9NB[0x3];                                   // 0x0EFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructure*                                    K2Node_Event_NewStructure;                               // 0x0F00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_Event_CameraIndex;                                // 0x0F08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_Event_NewRotation;                                // 0x0F0C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x0F18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H22P[0x3];                                   // 0x0F19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            K2Node_CustomEvent_NewParam;                             // 0x0F1C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   CallFunc_GetOwnerPlayer_ReturnValue;                     // 0x0F28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x0F30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x0F38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q8JW[0x4];                                   // 0x0F3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x0F40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0F48(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1AXJ[0x7];                                   // 0x0F49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_Event_Name;                                       // 0x0F50(0x0010) ZeroConstructor, Transient, DuplicateTransient
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x0F60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0F61(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7YLE[0x6];                                   // 0x0F62(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructure*                                    K2Node_Event_CameraToRemove;                             // 0x0F68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue;                  // 0x0F70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x0F78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera);
		void CanAddCamera(bool* Allowed);
		void GetConsoleID(float* ID);
		void GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index);
		void GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation);
		void UpdateEffects();
		class FString BPOverrideDescriptiveName();
		void ClientUpdatePosition();
		void BlueprintDrawHUD(class AShooterHUD* HUD, float CenterX, float CenterY);
		void GetConsoleFromID(float ID, class APrimalStructure** LinkedConsole);
		int32_t BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason);
		class UStaticMeshComponent* GetAdditionalComponentForDyePreview();
		void GetCorrectedRotation(struct FRotator* CameraRotation);
		void PlacementTick();
		void ReceiveBeginPlay();
		void BPUnstasis();
		void UpdateCameraPosition(bool Animated);
		void BPPostInitializeComponents();
		void InitializeRotation();
		void BPPlacedStructure(class APlayerController* ForPC);
		void PerformanceThrottledTick();
		void OnRep_CameraActive();
		void BPHandleStructureEnabled(bool bEnabled);
		bool BPPreventStasis();
		void OnContainerRenamed();
		void ReceiveDestroyed();
		void BPOnStructurePickup(class APlayerController* PlayerController, class UClass* ItemType, class UPrimalItem* NewlyPickedUpItem, bool bIsQuickPickup);
		void RetrieveLinkedConsoleFromItem(class UPrimalItem* Item, float* LinkedConsole, struct FVector* Location, class FString* CameraName, bool* CanAdd, class FString* ConsoleName);
		void BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem* ItemToConsumed);
		class FString BPOverrideCantBuildReasonString(int32_t CantBuildReason);
		int32_t BPCheckItemRequiementsToBuild(class UPrimalItem* ItemToConsumed);
		void UserConstructionScript();
		void AddNewCamera(class APrimalStructure* NewStructure);
		void SetCurrentCamera(int32_t CameraIndex);
		void UpdateCameraRotation(const struct FRotator& NewRotation);
		void ClientSetRotation(const struct FRotator& NewParam);
		void ServerInitializeRotation();
		void VerifyConsoleData();
		void UpdateConsoleName(const class FString& Name);
		void ActivateCamera();
		void ClientCameraActivated();
		void RemoveCamera(class APrimalStructure* CameraToRemove);
		void ClientCameraUnlinked();
		void ExecuteUbergraph_Structure_SecurityCamera(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
