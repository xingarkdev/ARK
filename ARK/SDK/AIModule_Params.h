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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AIModule.AIController.UseBlackboard
	 */
	struct AAIController_UseBlackboard_Params
	{
	public:
		class UBlackboardData*                                     BlackboardAsset;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.UpdateMoveFocus
	 */
	struct AAIController_UpdateMoveFocus_Params
	{	};

	/**
	 * Function AIModule.AIController.SetMoveBlockDetection
	 */
	struct AAIController_SetMoveBlockDetection_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.RunBehaviorTree
	 */
	struct AAIController_RunBehaviorTree_Params
	{
	public:
		class UBehaviorTree*                                       BTAsset;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.OnPossess
	 */
	struct AAIController_OnPossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.MoveToLocation
	 */
	struct AAIController_MoveToLocation_Params
	{
	public:
		struct FVector                                             dest;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      AcceptanceRadius;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bStopOnOverlap;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUsePathfinding;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bProjectDestinationToNavigation;                         // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanStrafe;                                              // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ILFE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              FilterClass;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasPlayerCommand;                                        // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPathFollowingRequestResult                                ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.MoveToActor
	 */
	struct AAIController_MoveToActor_Params
	{
	public:
		class AActor*                                              Goal;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AcceptanceRadius;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bStopOnOverlap;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUsePathfinding;                                         // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanStrafe;                                              // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F4NN[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              FilterClass;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPathFollowingRequestResult                                ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.K2_SetFocus
	 */
	struct AAIController_K2_SetFocus_Params
	{
	public:
		class AActor*                                              NewFocus;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.K2_SetFocalPoint
	 */
	struct AAIController_K2_SetFocalPoint_Params
	{
	public:
		struct FVector                                             FP;                                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOffsetFromBase;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.K2_ClearFocus
	 */
	struct AAIController_K2_ClearFocus_Params
	{	};

	/**
	 * Function AIModule.AIController.HasPartialPath
	 */
	struct AAIController_HasPartialPath_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.GetMoveStatus
	 */
	struct AAIController_GetMoveStatus_Params
	{
	public:
		EPathFollowingStatus                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.GetImmediateMoveDestination
	 */
	struct AAIController_GetImmediateMoveDestination_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.GetFocusActor
	 */
	struct AAIController_GetFocusActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.GetFocalPoint
	 */
	struct AAIController_GetFocalPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIController.AIMoveCompletedSignature__DelegateSignature
	 */
	struct AAIController_AIMoveCompletedSignature__DelegateSignature_Params
	{
	public:
		struct FAIRequestID                                        RequestID;                                               // 0x0000(0x0004)  (Parm)
		EPathFollowingResult                                       Result;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	 */
	struct UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
	{
	public:
		struct FAIRequestID                                        RequestID;                                               // 0x0000(0x0004)  (Parm)
		EPathFollowingResult                                       MovementResult;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIAsyncTaskBlueprintProxy.OAISimpleDelegate__DelegateSignature
	 */
	struct UAIAsyncTaskBlueprintProxy_OAISimpleDelegate__DelegateSignature_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	 */
	struct UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUnlockMovement;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UnlockAILogic;                                           // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	 */
	struct UAIBlueprintHelperLibrary_SpawnAIFromClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              PawnClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNoCollisionFail;                                        // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZCSR[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIBlueprintHelperLibrary.SpawnAI
	 */
	struct UAIBlueprintHelperLibrary_SpawnAI_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBlueprint*                                          Pawn;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNoCollisionFail;                                        // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_08C6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	 */
	struct UAIBlueprintHelperLibrary_SendAIMessage_Params
	{
	public:
		class APawn*                                               Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Message;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             MessageSource;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	 */
	struct UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLockMovement;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LockAILogic;                                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	 */
	struct UAIBlueprintHelperLibrary_IsValidAIRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	 */
	struct UAIBlueprintHelperLibrary_IsValidAILocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	 */
	struct UAIBlueprintHelperLibrary_GetBlackboard_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBlackboardComponent*                                ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	 */
	struct UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Destination;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YKZ5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetActor;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AcceptanceRadius;                                        // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bStopOnOverlap;                                          // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AN78[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAIAsyncTaskBlueprintProxy*                          ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnActionsComponent.PushAction
	 */
	struct UPawnActionsComponent_PushAction_Params
	{
	public:
		class UPawnAction*                                         NewAction;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EAIRequestPriority                                         Priority;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SYNV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Instigator;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnActionsComponent.PerformAction
	 */
	struct UPawnActionsComponent_PerformAction_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPawnAction*                                         Action;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EAIRequestPriority                                         Priority;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnActionsComponent.AbortAction
	 */
	struct UPawnActionsComponent_AbortAction_Params
	{
	public:
		class UPawnAction*                                         ActionToAbort;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AISystem.AILoggingVerbose
	 */
	struct UAISystem_AILoggingVerbose_Params
	{	};

	/**
	 * Function AIModule.AISystem.AIIgnorePlayers
	 */
	struct UAISystem_AIIgnorePlayers_Params
	{	};

	/**
	 * Function AIModule.AIPerceptionComponent.SetSightRadius
	 */
	struct UAIPerceptionComponent_SetSightRadius_Params
	{
	public:
		float                                                      NewSightRadius;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIPerceptionComponent.SetPeripheralVisionAngle
	 */
	struct UAIPerceptionComponent_SetPeripheralVisionAngle_Params
	{
	public:
		float                                                      NewPeripheralVisionAngle;                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIPerceptionComponent.SetLOSHearingRange
	 */
	struct UAIPerceptionComponent_SetLOSHearingRange_Params
	{
	public:
		float                                                      NewLOSHearingRange;                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIPerceptionComponent.SetHearingRange
	 */
	struct UAIPerceptionComponent_SetHearingRange_Params
	{
	public:
		float                                                      NewHearingRange;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	 */
	struct UAIPerceptionComponent_OnOwnerEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BehaviorTreeComponent.FindService
	 */
	struct UBehaviorTreeComponent_FindService_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UBTNode*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsVector
	 */
	struct UBlackboardComponent_SetValueAsVector_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             VectorValue;                                             // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsString
	 */
	struct UBlackboardComponent_SetValueAsString_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FString                                              StringValue;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsRotator
	 */
	struct UBlackboardComponent_SetValueAsRotator_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            VectorValue;                                             // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsObject
	 */
	struct UBlackboardComponent_SetValueAsObject_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class UObject*                                             ObjectValue;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsName
	 */
	struct UBlackboardComponent_SetValueAsName_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FName                                                NameValue;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsInt
	 */
	struct UBlackboardComponent_SetValueAsInt_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    IntValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsFloat
	 */
	struct UBlackboardComponent_SetValueAsFloat_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      FloatValue;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsEnum
	 */
	struct UBlackboardComponent_SetValueAsEnum_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              EnumValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsClass
	 */
	struct UBlackboardComponent_SetValueAsClass_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class UClass*                                              ClassValue;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.SetValueAsBool
	 */
	struct UBlackboardComponent_SetValueAsBool_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       BoolValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsVector
	 */
	struct UBlackboardComponent_GetValueAsVector_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsString
	 */
	struct UBlackboardComponent_GetValueAsString_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsRotator
	 */
	struct UBlackboardComponent_GetValueAsRotator_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsObject
	 */
	struct UBlackboardComponent_GetValueAsObject_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsName
	 */
	struct UBlackboardComponent_GetValueAsName_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsInt
	 */
	struct UBlackboardComponent_GetValueAsInt_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsFloat
	 */
	struct UBlackboardComponent_GetValueAsFloat_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsEnum
	 */
	struct UBlackboardComponent_GetValueAsEnum_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsClass
	 */
	struct UBlackboardComponent_GetValueAsClass_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetValueAsBool
	 */
	struct UBlackboardComponent_GetValueAsBool_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetRotationFromEntry
	 */
	struct UBlackboardComponent_GetRotationFromEntry_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ResultRotation;                                          // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.GetLocationFromEntry
	 */
	struct UBlackboardComponent_GetLocationFromEntry_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ResultLocation;                                          // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.ClearValueAsVector
	 */
	struct UBlackboardComponent_ClearValueAsVector_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BlackboardComponent.ClearValueAsRotator
	 */
	struct UBlackboardComponent_ClearValueAsRotator_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	 */
	struct UBTFunctionLibrary_StopUsingExternalEvent_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	 */
	struct UBTFunctionLibrary_StartUsingExternalEvent_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OwningActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	 */
	struct UBTFunctionLibrary_SetBlackboardValueAsVector_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FVector                                             Value;                                                   // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	 */
	struct UBTFunctionLibrary_SetBlackboardValueAsString_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FString                                              Value;                                                   // 0x0030(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	 */
	struct UBTFunctionLibrary_SetBlackboardValueAsObject_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UObject*                                             Value;                                                   // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	 */
	struct UBTFunctionLibrary_SetBlackboardValueAsName_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FName                                                Value;                                                   // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	 */
	struct UBTFunctionLibrary_SetBlackboardValueAsInt_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    Value;                                                   // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	 */
	struct UBTFunctionLibrary_SetBlackboardValueAsFloat_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		float                                                      Value;                                                   // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	 */
	struct UBTFunctionLibrary_SetBlackboardValueAsEnum_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		unsigned char                                              Value;                                                   // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	 */
	struct UBTFunctionLibrary_SetBlackboardValueAsClass_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UClass*                                              Value;                                                   // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	 */
	struct UBTFunctionLibrary_SetBlackboardValueAsBool_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       Value;                                                   // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsVector_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FVector                                             ReturnValue;                                             // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsString_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FString                                              ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsObject_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UObject*                                             ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsName_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FName                                                ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsInt_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsFloat_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsEnum_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		unsigned char                                              ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsClass_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UClass*                                              ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsBool_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	 */
	struct UBTFunctionLibrary_GetBlackboardValueAsActor_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		class AActor*                                              ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBlackboard
	 */
	struct UBTFunctionLibrary_GetBlackboard_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBlackboardComponent*                                ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.GetBehaviorTree
	 */
	struct UBTFunctionLibrary_GetBehaviorTree_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBehaviorTreeComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.ForceNotifyBlackboardValue
	 */
	struct UBTFunctionLibrary_ForceNotifyBlackboardValue_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	 */
	struct UBTFunctionLibrary_ClearBlackboardValueAsVector_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	 */
	struct UBTDecorator_BlueprintBase_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	 */
	struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	 */
	struct UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	 */
	struct UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	 */
	struct UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EBTNodeResult                                              NodeResult;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
	 */
	struct UBTDecorator_BlueprintBase_ReceiveConditionCheck_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	 */
	struct UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	 */
	struct UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
	 */
	struct UBTDecorator_BlueprintBase_FinishConditionCheck_Params
	{
	public:
		bool                                                       bAllowExecution;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTService_BlueprintBase.ResetInterval
	 */
	struct UBTService_BlueprintBase_ResetInterval_Params
	{
	public:
		class UBehaviorTreeComponent*                              OwnerComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTService_BlueprintBase.ReceiveTick
	 */
	struct UBTService_BlueprintBase_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	 */
	struct UBTService_BlueprintBase_ReceiveSearchStart_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	 */
	struct UBTService_BlueprintBase_ReceiveDeactivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTService_BlueprintBase.ReceiveActivation
	 */
	struct UBTService_BlueprintBase_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTService_BlueprintBase.IsServiceActive
	 */
	struct UBTService_BlueprintBase_IsServiceActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	 */
	struct UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    RequestID;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	 */
	struct UBTTask_BlueprintBase_SetFinishOnMessage_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTTask_BlueprintBase.ReceiveTick
	 */
	struct UBTTask_BlueprintBase_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	 */
	struct UBTTask_BlueprintBase_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	 */
	struct UBTTask_BlueprintBase_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	 */
	struct UBTTask_BlueprintBase_IsTaskExecuting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTTask_BlueprintBase.FinishExecute
	 */
	struct UBTTask_BlueprintBase_FinishExecute_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.BTTask_BlueprintBase.FinishAbort
	 */
	struct UBTTask_BlueprintBase_FinishAbort_Params
	{	};

	/**
	 * Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	 */
	struct UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
	{
	public:
		class AActor*                                              QuerierActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ResultingLocation;                                       // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	 */
	struct UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params
	{
	public:
		class AActor*                                              QuerierActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              ResultingActor;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	 */
	struct UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
	{
	public:
		class AActor*                                              QuerierActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FVector>                                     ResultingLocationSet;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	 */
	struct UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params
	{
	public:
		class AActor*                                              QuerierActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class AActor*>                                      ResultingActorsSet;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	 */
	struct UEnvQueryGenerator_BlueprintBase_GetQuerier_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	 */
	struct UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
	{
	public:
		TArray<struct FVector>                                     ContextLocations;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	 */
	struct UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
	{
	public:
		struct FVector                                             GeneratedVector;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	 */
	struct UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
	{
	public:
		class AActor*                                              GeneratedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.NavigationComponent.OnNavDataRegistered
	 */
	struct UNavigationComponent_OnNavDataRegistered_Params
	{
	public:
		class ANavigationData*                                     NavData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnAction.GetActionPriority
	 */
	struct UPawnAction_GetActionPriority_Params
	{
	public:
		EAIRequestPriority                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnAction.Finish
	 */
	struct UPawnAction_Finish_Params
	{
	public:
		EPawnActionResult                                          WithResult;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnAction.CreateActionInstance
	 */
	struct UPawnAction_CreateActionInstance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              ActionClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPawnAction*                                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnAction_BlueprintBase.ActionTick
	 */
	struct UPawnAction_BlueprintBase_ActionTick_Params
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnAction_BlueprintBase.ActionStart
	 */
	struct UPawnAction_BlueprintBase_ActionStart_Params
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnAction_BlueprintBase.ActionResume
	 */
	struct UPawnAction_BlueprintBase_ActionResume_Params
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnAction_BlueprintBase.ActionPause
	 */
	struct UPawnAction_BlueprintBase_ActionPause_Params
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnAction_BlueprintBase.ActionFinished
	 */
	struct UPawnAction_BlueprintBase_ActionFinished_Params
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPawnActionResult                                          WithResult;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	 */
	struct UPawnSensingComponent_SetSensingUpdatesEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnSensingComponent.SetSensingInterval
	 */
	struct UPawnSensingComponent_SetSensingInterval_Params
	{
	public:
		float                                                      NewSensingInterval;                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	 */
	struct UPawnSensingComponent_SetPeripheralVisionAngle_Params
	{
	public:
		float                                                      NewPeripheralVisionAngle;                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	 */
	struct UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	 */
	struct UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Volume;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	 */
	struct UPawnSensingComponent_GetPeripheralVisionCosine_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	 */
	struct UPawnSensingComponent_GetPeripheralVisionAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
