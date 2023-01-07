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
	 * Class AIModule.AIController
	 * Size -> 0x00D8 (FullSize[0x05A0] - InheritedSize[0x04C8])
	 */
	class AAIController : public AController
	{
	public:
		unsigned char                                              UnknownData_30G3[0x18];                                  // 0x04C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLOSflag : 1;                                            // 0x04E0(0x0001) BIT_FIELD NoDestructor
		bool                                                       bSkipExtraLOSChecks : 1;                                 // 0x04E0(0x0001) BIT_FIELD NoDestructor
		bool                                                       bAllowStrafe : 1;                                        // 0x04E0(0x0001) BIT_FIELD NoDestructor
		bool                                                       bWantsPlayerState : 1;                                   // 0x04E0(0x0001) BIT_FIELD NoDestructor
		bool                                                       bUse3DGoalRadius : 1;                                    // 0x04E0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bForceInputAcceptanceRadius : 1;                         // 0x04E0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_H2IL[0x7];                                   // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBrainComponent*                                     BrainComponent;                                          // 0x04E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		class UAIPerceptionComponent*                              PerceptionComponent;                                     // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		struct FVector                                             MoveTowardTargetOffset;                                  // 0x04F8(0x000C) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             TargetFocalPositionOffset;                               // 0x0504(0x000C) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      ReachedDestinationThresholdOffset;                       // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovementGoalHeight;                                      // 0x0514(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             ReceiveMoveCompleted;                                    // 0x0518(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_1F3T[0x70];                                  // 0x0528(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       UnknownData_M9DC : 1;                                    // 0x0598(0x0001) BIT_FIELD (PADDING)
		bool                                                       bLastMoveReachedGoal : 1;                                // 0x0598(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor
		bool                                                       bLastRequestedMoveToLocationWasPlayerCommand : 1;        // 0x0598(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor
		unsigned char                                              UnknownData_ZD3O[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (PADDING)

	public:
		bool UseBlackboard(class UBlackboardData* BlackboardAsset);
		void UpdateMoveFocus();
		void SetMoveBlockDetection(bool bEnable);
		bool RunBehaviorTree(class UBehaviorTree* BTAsset);
		void OnPossess(class APawn* PossessedPawn);
		EPathFollowingRequestResult MoveToLocation(const struct FVector& dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool WasPlayerCommand);
		EPathFollowingRequestResult MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass);
		void K2_SetFocus(class AActor* NewFocus);
		void K2_SetFocalPoint(const struct FVector& FP, bool bOffsetFromBase);
		void K2_ClearFocus();
		bool HasPartialPath();
		EPathFollowingStatus GetMoveStatus();
		struct FVector GetImmediateMoveDestination();
		class AActor* GetFocusActor();
		struct FVector GetFocalPoint();
		void AIMoveCompletedSignature__DelegateSignature(const struct FAIRequestID& RequestID, EPathFollowingResult Result);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTNode
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UBTNode : public UObject
	{
	public:
		class FString                                              NodeName;                                                // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected
		class UBehaviorTree*                                       TreeAsset;                                               // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UBTCompositeNode*                                    ParentNode;                                              // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C666[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTAuxiliaryNode
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UBTAuxiliaryNode : public UBTNode
	{
	public:
		unsigned char                                              UnknownData_ASI5[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UBTService : public UBTAuxiliaryNode
	{
	public:
		float                                                      Interval;                                                // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      RandomDeviation;                                         // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_HA18[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBehaviorTreeTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_BlackboardBase
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UBTService_BlackboardBase : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0068(0x0028) Edit, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTaskNode
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UBTTaskNode : public UBTNode
	{
	public:
		unsigned char                                              UnknownData_54IL[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_BlackboardBase
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	class UBTTask_BlackboardBase : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0058(0x0028) Edit, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIResourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIResourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIAsyncTaskBlueprintProxy
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAIAsyncTaskBlueprintProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_EFVG[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnMoveCompleted(const struct FAIRequestID& RequestID, EPathFollowingResult MovementResult);
		void OAISimpleDelegate__DelegateSignature(EPathFollowingResult MovementResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIBlueprintHelperLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
		class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
		class APawn* STATIC_SpawnAI(class UObject* WorldContextObject, class UBlueprint* Pawn, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
		void STATIC_SendAIMessage(class APawn* Target, const class FName& Message, class UObject* MessageSource, bool bSuccess);
		void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
		bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
		bool STATIC_IsValidAILocation(const struct FVector& Location);
		class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
		class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnActionsComponent
	 * Size -> 0x0038 (FullSize[0x0110] - InheritedSize[0x00D8])
	 */
	class UPawnActionsComponent : public UActorComponent
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x00D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		TArray<struct FPawnActionStack>                            ActionStacks;                                            // 0x00E0(0x0010) ZeroConstructor, Protected
		TArray<struct FPawnActionEvent>                            ActionEvents;                                            // 0x00F0(0x0010) ZeroConstructor, Protected
		class UPawnAction*                                         CurrentAction;                                           // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_YLE3[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		bool PushAction(class UPawnAction* NewAction, EAIRequestPriority Priority, class UObject* Instigator);
		bool STATIC_PerformAction(class APawn* Pawn, class UPawnAction* Action, EAIRequestPriority Priority);
		bool AbortAction(class UPawnAction* ActionToAbort);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionListenerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPerceptionListenerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISystem
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAISystem : public UAISystemBase
	{
	public:
		class UBehaviorTreeManager*                                BehaviorTreeManager;                                     // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		class UEnvQueryManager*                                    EnvironmentQueryManager;                                 // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		class UAIPerceptionSystem*                                 PerceptionSystem;                                        // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		TArray<class UAIAsyncTaskBlueprintProxy*>                  AllProxyObjects;                                         // 0x0058(0x0010) ZeroConstructor, Transient, Protected

	public:
		void AILoggingVerbose();
		void AIIgnorePlayers();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionSystem
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UAIPerceptionSystem : public UBlueprintFunctionLibrary
	{
	public:
		unsigned char                                              UnknownData_9E3P[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAISense*>                                    Senses;                                                  // 0x0078(0x0010) ZeroConstructor, Protected
		float                                                      PerceptionAgingRate;                                     // 0x0088(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_O4G1[0x2C];                                  // 0x008C(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionComponent
	 * Size -> 0x00B0 (FullSize[0x0188] - InheritedSize[0x00D8])
	 */
	class UAIPerceptionComponent : public UActorComponent
	{
	public:
		float                                                      HearingRange;                                            // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      LOSHearingRange;                                         // 0x00DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      SightRadius;                                             // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      LoseSightRadius;                                         // 0x00E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      PeripheralVisionAngle;                                   // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_28VB[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       AIOwner;                                                 // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_AUOK[0x58];                                  // 0x00F8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECorePerceptionTypes                                       DominantSense;                                           // 0x0150(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8D5O[0x37];                                  // 0x0151(0x0037) MISSED OFFSET (PADDING)

	public:
		void SetSightRadius(float NewSightRadius);
		void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
		void SetLOSHearingRange(float NewLOSHearingRange);
		void SetHearingRange(float NewHearingRange);
		void OnOwnerEndPlay(EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAISense : public UObject
	{
	public:
		class UAIPerceptionSystem*                                 PerceptionSystemInstance;                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4X0L[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Damage
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAISense_Damage : public UAISense
	{
	public:
		TArray<struct FAIDamageEvent>                              RegisteredEvents;                                        // 0x0050(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Hearing
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAISense_Hearing : public UAISense
	{
	public:
		TArray<struct FAINoiseEvent>                               NoiseEvents;                                             // 0x0050(0x0010) ZeroConstructor, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Prediction
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAISense_Prediction : public UAISense
	{
	public:
		TArray<struct FAIPredictionEvent>                          RegisteredEvents;                                        // 0x0050(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Sight
	 * Size -> 0x0078 (FullSize[0x00C8] - InheritedSize[0x0050])
	 */
	class UAISense_Sight : public UAISense
	{
	public:
		unsigned char                                              UnknownData_CWYF[0x60];                                  // 0x0050(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxTracesPerTick;                                        // 0x00B0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		float                                                      HighImportanceQueryDistanceThreshold;                    // 0x00B4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_19M2[0x4];                                   // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxQueryImportance;                                      // 0x00BC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		float                                                      SightLimitQueryImportance;                               // 0x00C0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_U85Y[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Team
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAISense_Team : public UAISense
	{
	public:
		TArray<struct FAITeamStimulusEvent>                        RegisteredEvents;                                        // 0x0050(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Touch
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAISense_Touch : public UAISense
	{
	public:
		TArray<struct FAITouchEvent>                               RegisteredEvents;                                        // 0x0050(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISightTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISightTargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BrainComponent
	 * Size -> 0x0040 (FullSize[0x0118] - InheritedSize[0x00D8])
	 */
	class UBrainComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_79KN[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlackboardComponent*                                BlackboardComp;                                          // 0x00E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected
		class AAIController*                                       AIOwner;                                                 // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_9XE7[0x28];                                  // 0x00F0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeComponent
	 * Size -> 0x00D8 (FullSize[0x01F0] - InheritedSize[0x0118])
	 */
	class UBehaviorTreeComponent : public UBrainComponent
	{
	public:
		unsigned char                                              UnknownData_RRX6[0x48];                                  // 0x0118(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBTNode*>                                     NodeInstances;                                           // 0x0160(0x0010) ZeroConstructor, Transient, Protected
		unsigned char                                              UnknownData_AR4R[0x80];                                  // 0x0170(0x0080) MISSED OFFSET (PADDING)

	public:
		class UBTNode* FindService(const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTCompositeNode
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UBTCompositeNode : public UBTNode
	{
	public:
		TArray<struct FBTCompositeChild>                           Children;                                                // 0x0050(0x0010) ZeroConstructor
		TArray<class UBTService*>                                  Services;                                                // 0x0060(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_V72T[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTree
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UBehaviorTree : public UObject
	{
	public:
		class UBTCompositeNode*                                    RootNode;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UBlackboardData*                                     BlackboardAsset;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UBTDecorator*>                                RootDecorators;                                          // 0x0038(0x0010) ZeroConstructor
		TArray<struct FBTDecoratorLogic>                           RootDecoratorOps;                                        // 0x0048(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_2CHO[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeManager
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UBehaviorTreeManager : public UObject
	{
	public:
		int32_t                                                    MaxDebuggerSteps;                                        // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B4B6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBehaviorTreeTemplateInfo>                   LoadedTemplates;                                         // 0x0030(0x0010) ZeroConstructor, Protected
		TArray<class UBehaviorTreeComponent*>                      ActiveComponents;                                        // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBlackboardKeyType : public UObject
	{
	public:
		unsigned char                                              UnknownData_3MF7[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UBlackboardData : public UDataAsset
	{
	public:
		class UBlackboardData*                                     Parent;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FBlackboardEntry>                            Keys;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		unsigned char                                              UnknownData_RYU0[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardComponent
	 * Size -> 0x0098 (FullSize[0x0170] - InheritedSize[0x00D8])
	 */
	class UBlackboardComponent : public UActorComponent
	{
	public:
		class UBrainComponent*                                     BrainComp;                                               // 0x00D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected
		class UBlackboardData*                                     BlackboardAsset;                                         // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_MIQ4[0x88];                                  // 0x00E8(0x0088) MISSED OFFSET (PADDING)

	public:
		void SetValueAsVector(const class FName& KeyName, const struct FVector& VectorValue);
		void SetValueAsString(const class FName& KeyName, const class FString& StringValue);
		void SetValueAsRotator(const class FName& KeyName, const struct FRotator& VectorValue);
		void SetValueAsObject(const class FName& KeyName, class UObject* ObjectValue);
		void SetValueAsName(const class FName& KeyName, const class FName& NameValue);
		void SetValueAsInt(const class FName& KeyName, int32_t IntValue);
		void SetValueAsFloat(const class FName& KeyName, float FloatValue);
		void SetValueAsEnum(const class FName& KeyName, unsigned char EnumValue);
		void SetValueAsClass(const class FName& KeyName, class UClass* ClassValue);
		void SetValueAsBool(const class FName& KeyName, bool BoolValue);
		struct FVector GetValueAsVector(const class FName& KeyName);
		class FString GetValueAsString(const class FName& KeyName);
		struct FRotator GetValueAsRotator(const class FName& KeyName);
		class UObject* GetValueAsObject(const class FName& KeyName);
		class FName GetValueAsName(const class FName& KeyName);
		int32_t GetValueAsInt(const class FName& KeyName);
		float GetValueAsFloat(const class FName& KeyName);
		unsigned char GetValueAsEnum(const class FName& KeyName);
		class UClass* GetValueAsClass(const class FName& KeyName);
		bool GetValueAsBool(const class FName& KeyName);
		bool GetRotationFromEntry(const class FName& KeyName, struct FRotator* ResultRotation);
		bool GetLocationFromEntry(const class FName& KeyName, struct FVector* ResultLocation);
		void ClearValueAsVector(const class FName& KeyName);
		void ClearValueAsRotator(const class FName& KeyName);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Bool
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Bool : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Class
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Class : public UBlackboardKeyType
	{
	public:
		class UClass*                                              BaseClass;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Enum
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Enum : public UBlackboardKeyType
	{
	public:
		class UEnum*                                               EnumType;                                                // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Float
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Float : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Int
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Int : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Name
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Name : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_NativeEnum
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
	{
	public:
		class FString                                              EnumName;                                                // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bIsEnumNameValid;                                        // 0x0040(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0AMR[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               EnumType;                                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Object
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Object : public UBlackboardKeyType
	{
	public:
		class UClass*                                              BaseClass;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Rotator
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Rotator : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_String
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_String : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Vector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Vector : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBTFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
		void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
		void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
		void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value);
		void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
		void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FName& Value);
		void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32_t Value);
		void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
		void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
		void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
		void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
		struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		int32_t STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class UBlackboardComponent* STATIC_GetBlackboard(class UBTNode* NodeOwner);
		class UBehaviorTreeComponent* STATIC_GetBehaviorTree(class UBTNode* NodeOwner);
		void STATIC_ForceNotifyBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UBTDecorator : public UBTAuxiliaryNode
	{
	public:
		bool                                                       UnknownData_GLEJ : 7;                                    // 0x0058(0x0001) BIT_FIELD (PADDING)
		bool                                                       bInverseCondition : 1;                                   // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_JYCA[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBTFlowAbortMode                                           FlowAbortMode;                                           // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_3DG1[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_BlackboardBase
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UBTDecorator_BlackboardBase : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0060(0x0028) Edit, Protected
		unsigned char                                              UnknownData_A3LD[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Blackboard
	 * Size -> 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
	 */
	class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      FloatValue;                                              // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class FString                                              StringValue;                                             // 0x0098(0x0010) Edit, ZeroConstructor, Protected
		class FString                                              CachedDescription;                                       // 0x00A8(0x0010) ZeroConstructor, Protected
		unsigned char                                              OperationType;                                           // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		EBTBlackboardRestart                                       NotifyObserver;                                          // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_J8BC[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ConditionalLoop
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_BlueprintBase
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UBTDecorator_BlueprintBase : public UBTDecorator
	{
	public:
		unsigned char                                              UnknownData_81RP[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShowPropertyDetails : 1;                                // 0x0080(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected
		unsigned char                                              UnknownData_DLQT[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (PADDING)

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveObserverDeactivated(class AActor* OwnerActor);
		void ReceiveObserverActivated(class AActor* OwnerActor);
		void ReceiveExecutionStart(class AActor* OwnerActor);
		void ReceiveExecutionFinish(class AActor* OwnerActor, EBTNodeResult NodeResult);
		void ReceiveConditionCheck(class AActor* OwnerActor);
		bool IsDecoratorObserverActive();
		bool IsDecoratorExecutionActive();
		void FinishConditionCheck(bool bAllowExecution);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_CompareBBEntries
	 * Size -> 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
	 */
	class UBTDecorator_CompareBBEntries : public UBTDecorator
	{
	public:
		EBlackBoardEntryComparison                                 Operator;                                                // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_FT0J[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BlackboardKeyA;                                          // 0x0068(0x0028) Edit, Protected
		struct FBlackboardKeySelector                              BlackboardKeyB;                                          // 0x0090(0x0028) Edit, Protected
		unsigned char                                              UnknownData_H7IC[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ConeCheck
	 * Size -> 0x0088 (FullSize[0x00E8] - InheritedSize[0x0060])
	 */
	class UBTDecorator_ConeCheck : public UBTDecorator
	{
	public:
		float                                                      ConeHalfAngle;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YAA9[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ConeOrigin;                                              // 0x0068(0x0028) Edit
		struct FBlackboardKeySelector                              ConeDirection;                                           // 0x0090(0x0028) Edit
		struct FBlackboardKeySelector                              Observed;                                                // 0x00B8(0x0028) Edit
		unsigned char                                              UnknownData_F0P5[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Cooldown
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UBTDecorator_Cooldown : public UBTDecorator
	{
	public:
		float                                                      CoolDownTime;                                            // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M0GP[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              CoolDownTimeKey;                                         // 0x0068(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_DoesPathExist
	 * Size -> 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
	 */
	class UBTDecorator_DoesPathExist : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKeyA;                                          // 0x0060(0x0028) Edit, Protected
		struct FBlackboardKeySelector                              BlackboardKeyB;                                          // 0x0088(0x0028) Edit, Protected
		bool                                                       bUseSelf : 1;                                            // 0x00B0(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_JAL2[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPathExistanceQueryType                                    PathQueryType;                                           // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OZDA[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ForceSuccess
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBTDecorator_ForceSuccess : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_KeepInCone
	 * Size -> 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
	 */
	class UBTDecorator_KeepInCone : public UBTDecorator
	{
	public:
		float                                                      ConeHalfAngle;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JSVF[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ConeOrigin;                                              // 0x0068(0x0028) Edit
		struct FBlackboardKeySelector                              Observed;                                                // 0x0090(0x0028) Edit
		bool                                                       bUseSelfAsOrigin : 1;                                    // 0x00B8(0x0001) BIT_FIELD NoDestructor
		bool                                                       bUseSelfAsObserved : 1;                                  // 0x00B8(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_HVUY[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Loop
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTDecorator_Loop : public UBTDecorator
	{
	public:
		int32_t                                                    NumLoops;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bInfiniteLoop;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PSC5[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ReachedMoveGoal
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBTDecorator_ReachedMoveGoal : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_TimeLimit
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UBTDecorator_TimeLimit : public UBTDecorator
	{
	public:
		float                                                      TimeLimit;                                               // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W9A1[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              TimeLimitKey;                                            // 0x0068(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_DefaultFocus
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UBTService_DefaultFocus : public UBTService_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_BlueprintBase
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UBTService_BlueprintBase : public UBTService
	{
	public:
		unsigned char                                              UnknownData_IGWJ[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShowPropertyDetails : 1;                                // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected
		unsigned char                                              UnknownData_JPXV[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		void ResetInterval(class UBehaviorTreeComponent* OwnerComp);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveSearchStart(class AActor* OwnerActor);
		void ReceiveDeactivation(class AActor* OwnerActor);
		void ReceiveActivation(class AActor* OwnerActor);
		bool IsServiceActive();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_Selector
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UBTComposite_Selector : public UBTCompositeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_Sequence
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UBTComposite_Sequence : public UBTCompositeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_SimpleParallel
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UBTComposite_SimpleParallel : public UBTCompositeNode
	{
	public:
		EBTParallelMode                                            FinishMode;                                              // 0x0080(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A43E[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MoveDirectlyToward
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UBTTask_MoveDirectlyToward : public UBTTask_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0080(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		bool                                                       bAutoStopOnAbort : 1;                                    // 0x0084(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bForceMoveToLocation : 1;                                // 0x0084(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bProjectVectorGoalToNavigation : 1;                      // 0x0084(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAllowStrafe : 1;                                        // 0x0084(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_47WJ[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              AcceptableRadiusKey;                                     // 0x0088(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MoveTo
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UBTTask_MoveTo : public UBTTask_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0080(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JD9W[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowStrafe : 1;                                        // 0x0090(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_2ZCM[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RotateToFaceBBEntry
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
	{
	public:
		float                                                      Precision;                                               // 0x0080(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_ORQ9[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              PrecisionKey;                                            // 0x0088(0x0028) Edit, Protected
		bool                                                       bForceUpdatePrecision : 1;                               // 0x00B0(0x0001) BIT_FIELD Edit, NoDestructor, Protected
		bool                                                       bZeroPrecisionSucceedsInstantly : 1;                     // 0x00B0(0x0001) BIT_FIELD Edit, NoDestructor, Protected
		bool                                                       bIgnorePitch : 1;                                        // 0x00B0(0x0001) BIT_FIELD Edit, NoDestructor, Protected
		unsigned char                                              UnknownData_MK6U[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEnvQueryItemType : public UObject
	{
	public:
		unsigned char                                              UnknownData_8K2R[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunEQSQuery
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FEnvNamedValue>                              QueryParams;                                             // 0x0088(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_BlueprintBase
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UBTTask_BlueprintBase : public UBTTaskNode
	{
	public:
		unsigned char                                              UnknownData_KBGI[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShowPropertyDetails : 1;                                // 0x0070(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected
		unsigned char                                              UnknownData_S59X[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetFinishOnMessageWithId(const class FName& MessageName, int32_t RequestID);
		void SetFinishOnMessage(const class FName& MessageName);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveExecute(class AActor* OwnerActor);
		void ReceiveAbort(class AActor* OwnerActor);
		bool IsTaskExecuting();
		void FinishExecute(bool bSuccess);
		void FinishAbort();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MakeNoise
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UBTTask_MakeNoise : public UBTTaskNode
	{
	public:
		float                                                      Loudnes;                                                 // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GGEV[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PlaySound
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UBTTask_PlaySound : public UBTTaskNode
	{
	public:
		class USoundCue*                                           SoundToPlay;                                             // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunBehavior
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UBTTask_RunBehavior : public UBTTaskNode
	{
	public:
		class UBehaviorTree*                                       BehaviorAsset;                                           // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class FString                                              ControllerProperty;                                      // 0x0060(0x0010) Edit, ZeroConstructor, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_Wait
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UBTTask_Wait : public UBTTaskNode
	{
	public:
		float                                                      WaitTime;                                                // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_56S8[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CrowdAgentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrowdAgentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQuery
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnvQuery : public UObject
	{
	public:
		TArray<class UEnvQueryOption*>                             Options;                                                 // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext_BlueprintBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
	{
	public:
		unsigned char                                              UnknownData_D392[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void ProvideSingleLocation(class AActor* QuerierActor, struct FVector* ResultingLocation);
		void ProvideSingleActor(class AActor* QuerierActor, class AActor** ResultingActor);
		void ProvideLocationsSet(class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
		void ProvideActorsSet(class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext_Item
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Item : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext_Querier
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Querier : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.VisualLoggerExtension
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisualLoggerExtension : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryDebugHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryDebugHelpers : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEnvQueryGenerator : public UObject
	{
	public:
		class FString                                              OptionName;                                              // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              UnknownData_7OHJ[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_ActorsOfClass
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
	{
	public:
		struct FEnvFloatParam                                      Radius;                                                  // 0x0040(0x000C) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_I44T[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SearchedActorClass;                                      // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              SearchCenter;                                            // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_BlueprintBase
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
	{
	public:
		struct FEnvFloatParam                                      Radius;                                                  // 0x0040(0x000C) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_RS42[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                GeneratorsActionDescription;                             // 0x0050(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_VNDZ[0x10];                                  // 0x0068(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              Context;                                                 // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              GeneratedItemType;                                       // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SGXG[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		class UObject* GetQuerier();
		void DoItemGeneration(TArray<struct FVector> ContextLocations);
		void AddGeneratedVector(const struct FVector& GeneratedVector);
		void AddGeneratedActor(class AActor* GeneratedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_Composite
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
	{
	public:
		TArray<class UEnvQueryGenerator*>                          Generators;                                              // 0x0040(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_PathingGrid
	 * Size -> 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
	 */
	class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator
	{
	public:
		struct FEnvFloatParam                                      MaxPathDistance;                                         // 0x0040(0x000C) Edit, DisableEditOnInstance
		struct FEnvFloatParam                                      Density;                                                 // 0x004C(0x000C) Edit, DisableEditOnInstance
		struct FEnvBoolParam                                       PathFromContext;                                         // 0x0058(0x000C) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_PXP6[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GenerateAround;                                          // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EEnvQueryTrace                                             TraceType;                                               // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8SGH[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NavigationFilter;                                        // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_ProjectedPoints
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
	{
	public:
		struct FEnvTraceData                                       ProjectionData;                                          // 0x0040(0x0028) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_OnCircle
	 * Size -> 0x0080 (FullSize[0x00E8] - InheritedSize[0x0068])
	 */
	class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FEnvFloatParam                                      Radius;                                                  // 0x0068(0x000C) Edit, DisableEditOnInstance
		struct FEnvFloatParam                                      ItemSpacing;                                             // 0x0074(0x000C) Edit, DisableEditOnInstance
		struct FEnvDirection                                       ArcDirection;                                            // 0x0080(0x0020) Edit, DisableEditOnInstance
		struct FEnvFloatParam                                      Angle;                                                   // 0x00A0(0x000C) Edit, DisableEditOnInstance
		float                                                      AngleRadians;                                            // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              CircleCenter;                                            // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FEnvTraceData                                       TraceData;                                               // 0x00B8(0x0028) Edit
		bool                                                       bDefineArc : 1;                                          // 0x00E0(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_N102[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_SimpleGrid
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FEnvFloatParam                                      Radius;                                                  // 0x0068(0x000C) Edit, DisableEditOnInstance
		struct FEnvFloatParam                                      Density;                                                 // 0x0074(0x000C) Edit, DisableEditOnInstance
		class UClass*                                              GenerateAround;                                          // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_VectorBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_ActorBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_Actor
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_Direction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_Point
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryManager
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UEnvQueryManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_O87C[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryOption
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEnvQueryOption : public UObject
	{
	public:
		class UEnvQueryGenerator*                                  Generator;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UEnvQueryTest*>                               Tests;                                                   // 0x0030(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UEnvQueryTest : public UObject
	{
	public:
		int32_t                                                    TestOrder;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		EEnvTestPurpose                                            TestPurpose;                                             // 0x002C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EEnvTestFilterType                                         FilterType;                                              // 0x002D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HPOI[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvBoolParam                                       BoolFilter;                                              // 0x0030(0x000C) Edit, DisableEditOnInstance
		struct FEnvFloatParam                                      FloatFilter;                                             // 0x003C(0x000C)
		struct FEnvFloatParam                                      FloatFilterMin;                                          // 0x0048(0x000C) Edit, DisableEditOnInstance
		struct FEnvFloatParam                                      FloatFilterMax;                                          // 0x0054(0x000C) Edit, DisableEditOnInstance
		bool                                                       bFormatUpdated;                                          // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		EEnvTestCondition                                          Condition;                                               // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		EEnvTestWeight                                             WeightModifier;                                          // 0x0062(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TJ7W[0x1];                                   // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEnvQueryTestClamping                                      ClampMinType;                                            // 0x0064(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EEnvQueryTestClamping                                      ClampMaxType;                                            // 0x0065(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8SRR[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvFloatParam                                      ScoreClampingMin;                                        // 0x0068(0x000C) Edit, DisableEditOnInstance
		struct FEnvFloatParam                                      ScoreClampingMax;                                        // 0x0074(0x000C) Edit, DisableEditOnInstance
		EEnvTestScoreEquation                                      ScoringEquation;                                         // 0x0080(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6H8Q[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvFloatParam                                      Weight;                                                  // 0x0084(0x000C) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_2S84[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       UnknownData_UHRV : 1;                                    // 0x0098(0x0001) BIT_FIELD (PADDING)
		bool                                                       bWorkOnFloatValues : 1;                                  // 0x0098(0x0001) BIT_FIELD NoDestructor
		bool                                                       bDiscardFailedItems : 1;                                 // 0x0098(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_YG84[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Distance
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	class UEnvQueryTest_Distance : public UEnvQueryTest
	{
	public:
		EEnvTestDistance                                           TestMode;                                                // 0x00A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K8O8[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DistanceTo;                                              // 0x00A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Dot
	 * Size -> 0x0040 (FullSize[0x00E0] - InheritedSize[0x00A0])
	 */
	class UEnvQueryTest_Dot : public UEnvQueryTest
	{
	public:
		struct FEnvDirection                                       LineA;                                                   // 0x00A0(0x0020) Edit, DisableEditOnInstance
		struct FEnvDirection                                       LineB;                                                   // 0x00C0(0x0020) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Pathfinding
	 * Size -> 0x0038 (FullSize[0x00D8] - InheritedSize[0x00A0])
	 */
	class UEnvQueryTest_Pathfinding : public UEnvQueryTest
	{
	public:
		EEnvTestPathfinding                                        TestMode;                                                // 0x00A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IE7M[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Context;                                                 // 0x00A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FEnvBoolParam                                       PathToItem;                                              // 0x00B0(0x000C) Edit, DisableEditOnInstance
		struct FEnvBoolParam                                       DiscardUnreachable;                                      // 0x00BC(0x000C) Edit, DisableEditOnInstance, AdvancedDisplay
		struct FEnvBoolParam                                       HierarchicalPathfinding;                                 // 0x00C8(0x000C) Edit, DisableEditOnInstance, AdvancedDisplay
		unsigned char                                              UnknownData_A5AB[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Trace
	 * Size -> 0x0058 (FullSize[0x00F8] - InheritedSize[0x00A0])
	 */
	class UEnvQueryTest_Trace : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       TraceData;                                               // 0x00A0(0x0028) Edit, DisableEditOnInstance
		struct FEnvBoolParam                                       TraceToItem;                                             // 0x00C8(0x000C) Edit, DisableEditOnInstance
		struct FEnvFloatParam                                      ItemOffsetZ;                                             // 0x00D4(0x000C) Edit, DisableEditOnInstance, AdvancedDisplay
		struct FEnvFloatParam                                      ContextOffsetZ;                                          // 0x00E0(0x000C) Edit, DisableEditOnInstance, AdvancedDisplay
		unsigned char                                              UnknownData_U1VV[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Context;                                                 // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSQueryResultSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEQSQueryResultSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSRenderingComponent
	 * Size -> 0x0018 (FullSize[0x0680] - InheritedSize[0x0668])
	 */
	class UEQSRenderingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_5ASR[0x8];                                   // 0x0668(0x0008) Fix Super Size
		unsigned char                                              UnknownData_WAPS[0x10];                                  // 0x0670(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSTestingPawn
	 * Size -> 0x0050 (FullSize[0x0720] - InheritedSize[0x06D0])
	 */
	class AEQSTestingPawn : public ACharacter
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x06D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FEnvNamedValue>                              QueryParams;                                             // 0x06D8(0x0010) Edit, ZeroConstructor
		float                                                      TimeLimitPerStep;                                        // 0x06E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    StepToDebugDraw;                                         // 0x06EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDrawLabels : 1;                                         // 0x06F0(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bDrawFailedItems : 1;                                    // 0x06F0(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bReRunQueryOnlyOnFinishedMove : 1;                       // 0x06F0(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bShouldBeVisibleInGame : 1;                              // 0x06F0(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_6C3G[0x3];                                   // 0x06F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEnvQueryRunMode                                           QueryingMode;                                            // 0x06F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4RLH[0x2B];                                  // 0x06F5(0x002B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.GenericTeamAgentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGenericTeamAgentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.NavigationComponent
	 * Size -> 0x00C8 (FullSize[0x01A0] - InheritedSize[0x00D8])
	 */
	class UNavigationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_HQRW[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              GoalActor;                                               // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AController*                                         ControllerOwner;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_HSD7[0x21];                                  // 0x00F0(0x0021) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDoAsyncPathfinding : 1;                                 // 0x0111(0x0001) BIT_FIELD Config, NoDestructor, Protected
		bool                                                       bDoHierarchicalPathfinding : 1;                          // 0x0111(0x0001) BIT_FIELD Config, NoDestructor, Protected
		bool                                                       bSearchFromGoalWhenOutOfNodes : 1;                       // 0x0111(0x0001) BIT_FIELD Config, NoDestructor, Protected
		unsigned char                                              UnknownData_QW1U[0x86];                                  // 0x0112(0x0086) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANavigationData*                                     MyNavData;                                               // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnNavDataRegistered(class ANavigationData* NavData);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UPawnAction : public UObject
	{
	public:
		class UPawnAction*                                         ChildAction;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class UPawnAction*                                         ParentAction;                                            // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class UPawnActionsComponent*                               OwnerComponent;                                          // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		class UObject*                                             Instigator;                                              // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class UBrainComponent*                                     BrainComp;                                               // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_E37I[0x24];                                  // 0x0050(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAllowNewSameClassInstance : 1;                          // 0x0074(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected
		bool                                                       bReplaceActiveSameClassInstance : 1;                     // 0x0074(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected
		unsigned char                                              UnknownData_FNTX[0x13];                                  // 0x0075(0x0013) MISSED OFFSET (PADDING)

	public:
		EAIRequestPriority GetActionPriority();
		void Finish(EPawnActionResult WithResult);
		class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_BlueprintBase
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UPawnAction_BlueprintBase : public UPawnAction
	{
	public:
		void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
		void ActionStart(class APawn* ControlledPawn);
		void ActionResume(class APawn* ControlledPawn);
		void ActionPause(class APawn* ControlledPawn);
		void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Move
	 * Size -> 0x0040 (FullSize[0x00C8] - InheritedSize[0x0088])
	 */
	class UPawnAction_Move : public UPawnAction
	{
	public:
		class AActor*                                              GoalActor;                                               // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		struct FVector                                             GoalLocation;                                            // 0x0090(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      AcceptableRadius;                                        // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class UClass*                                              FilterClass;                                             // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       bAllowStrafe : 1;                                        // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected
		unsigned char                                              UnknownData_TBR3[0x1F];                                  // 0x00A9(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Repeat
	 * Size -> 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
	 */
	class UPawnAction_Repeat : public UPawnAction
	{
	public:
		class UPawnAction*                                         ActionToRepeat;                                          // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UPawnAction*                                         RecentActionCopy;                                        // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		EPawnActionFailHandling                                    ChildFailureHandlingMode;                                // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TM4M[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Sequence
	 * Size -> 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
	 */
	class UPawnAction_Sequence : public UPawnAction
	{
	public:
		TArray<class UPawnAction*>                                 ActionSequence;                                          // 0x0088(0x0010) ZeroConstructor
		EPawnActionFailHandling                                    ChildFailureHandlingMode;                                // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A9ZJ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnAction*                                         RecentActionCopy;                                        // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DW37[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnSensingComponent
	 * Size -> 0x0040 (FullSize[0x0118] - InheritedSize[0x00D8])
	 */
	class UPawnSensingComponent : public UActorComponent
	{
	public:
		float                                                      HearingThreshold;                                        // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LOSHearingThreshold;                                     // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SightRadius;                                             // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SensingInterval;                                         // 0x00E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HearingMaxSoundAge;                                      // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableSensingUpdates : 1;                               // 0x00EC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bOnlySensePlayers : 1;                                   // 0x00EC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bSeePawns : 1;                                           // 0x00EC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bHearNoises : 1;                                         // 0x00EC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_8D0I[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSeePawn;                                               // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnHearNoise;                                             // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		float                                                      PeripheralVisionAngle;                                   // 0x0110(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      PeripheralVisionCosine;                                  // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected

	public:
		void SetSensingUpdatesEnabled(bool bEnabled);
		void SetSensingInterval(float NewSensingInterval);
		void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
		void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
		void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
		float GetPeripheralVisionCosine();
		float GetPeripheralVisionAngle();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
