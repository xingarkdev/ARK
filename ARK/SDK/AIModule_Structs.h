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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AIModule.EAIOptionFlag
	 */
	enum class EAIOptionFlag : uint8_t
	{
		Default = 0,
		Enable  = 1,
		Disable = 2,
		MAX     = 3,
		MAX01   = 4
	};

	/**
	 * Enum AIModule.EPawnActionAbortState
	 */
	enum class EPawnActionAbortState : uint8_t
	{
		NotBeingAborted       = 0,
		MarkPendingAbort      = 1,
		LatentAbortInProgress = 2,
		AbortDone             = 3,
		MAX                   = 4,
		MAX01                 = 5
	};

	/**
	 * Enum AIModule.EPawnActionResult
	 */
	enum class EPawnActionResult : uint8_t
	{
		InProgress = 0,
		Success    = 1,
		Failed     = 2,
		Aborted    = 3,
		MAX        = 4
	};

	/**
	 * Enum AIModule.EPawnActionEventType
	 */
	enum class EPawnActionEventType : uint8_t
	{
		Invalid           = 0,
		FailedToStart     = 1,
		FinishedAborting  = 2,
		FinishedExecution = 3,
		Push              = 4,
		MAX               = 5
	};

	/**
	 * Enum AIModule.EAIRequestPriority
	 */
	enum class EAIRequestPriority : uint8_t
	{
		SoftScript = 0,
		Logic      = 1,
		HardScript = 2,
		Reaction   = 3,
		Ultimate   = 4,
		MAX        = 5,
		MAX01      = 6
	};

	/**
	 * Enum AIModule.EAILockSource
	 */
	enum class EAILockSource : uint8_t
	{
		Animation = 0,
		Logic     = 1,
		Script    = 2,
		Gameplay  = 3,
		MAX       = 4,
		MAX01     = 5
	};

	/**
	 * Enum AIModule.EPathFollowingStatus
	 */
	enum class EPathFollowingStatus : uint8_t
	{
		Idle    = 0,
		Waiting = 1,
		Paused  = 2,
		Moving  = 3,
		MAX     = 4
	};

	/**
	 * Enum AIModule.EPathFollowingResult
	 */
	enum class EPathFollowingResult : uint8_t
	{
		Success = 0,
		Blocked = 1,
		OffPath = 2,
		Aborted = 3,
		Skipped = 4,
		Invalid = 5,
		MAX     = 6
	};

	/**
	 * Enum AIModule.EPathFollowingAction
	 */
	enum class EPathFollowingAction : uint8_t
	{
		Error       = 0,
		NoMove      = 1,
		DirectMove  = 2,
		PartialPath = 3,
		PathToGoal  = 4,
		MAX         = 5
	};

	/**
	 * Enum AIModule.EPathFollowingRequestResult
	 */
	enum class EPathFollowingRequestResult : uint8_t
	{
		Failed            = 0,
		AlreadyAtGoal     = 1,
		RequestSuccessful = 2,
		MAX               = 3
	};

	/**
	 * Enum AIModule.ECorePerceptionTypes
	 */
	enum class ECorePerceptionTypes : uint8_t
	{
		Sight      = 0,
		Hearing    = 1,
		Damage     = 2,
		Touch      = 3,
		Team       = 4,
		Prediction = 5,
		MAX        = 6,
		MAX01      = 7
	};

	/**
	 * Enum AIModule.BehaviorTreeTypes.EBTFlowAbortMode
	 */
	enum class EBTFlowAbortMode : uint8_t
	{
		None          = 0,
		LowerPriority = 1,
		Self          = 2,
		Both          = 3,
		MAX           = 4
	};

	/**
	 * Enum AIModule.BehaviorTreeTypes.EBTNodeResult
	 */
	enum class EBTNodeResult : uint8_t
	{
		Succeeded  = 0,
		Failed     = 1,
		Aborted    = 2,
		InProgress = 3,
		MAX        = 4
	};

	/**
	 * Enum AIModule.BTCompositeNode.EBTDecoratorLogic
	 */
	enum class EBTDecoratorLogic : uint8_t
	{
		Invalid = 0,
		Test    = 1,
		And     = 2,
		Or      = 3,
		Not     = 4,
		MAX     = 5
	};

	/**
	 * Enum AIModule.BTCompositeNode.EBTChildIndex
	 */
	enum class EBTChildIndex : uint8_t
	{
		FirstNode = 0,
		TaskNode  = 1,
		MAX       = 2
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvQueryTestClamping
	 */
	enum class EEnvQueryTestClamping : uint8_t
	{
		None            = 0,
		SpecifiedValue  = 1,
		FilterThreshold = 2,
		MAX             = 3
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvDirection
	 */
	enum class EEnvDirection : uint8_t
	{
		TwoPoints = 0,
		Rotation  = 1,
		MAX       = 2
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvTraceShape
	 */
	enum class EEnvTraceShape : uint8_t
	{
		Line    = 0,
		Box     = 1,
		Sphere  = 2,
		Capsule = 3,
		MAX     = 4
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvQueryTrace
	 */
	enum class EEnvQueryTrace : uint8_t
	{
		None       = 0,
		Navigation = 1,
		Geometry   = 2,
		MAX        = 3
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvQueryParam
	 */
	enum class EEnvQueryParam : uint8_t
	{
		Float = 0,
		Int   = 1,
		Bool  = 2,
		MAX   = 3
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvQueryRunMode
	 */
	enum class EEnvQueryRunMode : uint8_t
	{
		SingleResult = 0,
		AllMatching  = 1,
		MAX          = 2
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvQueryStatus
	 */
	enum class EEnvQueryStatus : uint8_t
	{
		Processing   = 0,
		Success      = 1,
		Failed       = 2,
		Aborted      = 3,
		OwnerLost    = 4,
		MissingParam = 5,
		MAX          = 6
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvTestCost
	 */
	enum class EEnvTestCost : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvTestWeight
	 */
	enum class EEnvTestWeight : uint8_t
	{
		None     = 0,
		Square   = 1,
		Inverse  = 2,
		Absolute = 3,
		Constant = 4,
		Skip     = 5,
		MAX      = 6
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvTestScoreEquation
	 */
	enum class EEnvTestScoreEquation : uint8_t
	{
		Linear        = 0,
		Square        = 1,
		InverseLinear = 2,
		Constant      = 3,
		MAX           = 4
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvTestCondition
	 */
	enum class EEnvTestCondition : uint8_t
	{
		NoCondition = 0,
		AtLeast     = 1,
		UpTo        = 2,
		Match       = 3,
		MAX         = 4
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvTestFilterType
	 */
	enum class EEnvTestFilterType : uint8_t
	{
		Minimum = 0,
		Maximum = 1,
		Range   = 2,
		Match   = 3,
		MAX     = 4
	};

	/**
	 * Enum AIModule.EnvQueryTypes.EEnvTestPurpose
	 */
	enum class EEnvTestPurpose : uint8_t
	{
		Filter         = 0,
		Score          = 1,
		FilterAndScore = 2,
		MAX            = 3
	};

	/**
	 * Enum AIModule.GenericTeamAgentInterface.ETeamAttitude
	 */
	enum class ETeamAttitude : uint8_t
	{
		Friendly = 0,
		Neutral  = 1,
		Hostile  = 2,
		MAX      = 3
	};

	/**
	 * Enum AIModule.BlackboardKeyType.ETextKeyOperation
	 */
	enum class ETextKeyOperation : uint8_t
	{
		Equal      = 0,
		NotEqual   = 1,
		Contain    = 2,
		NotContain = 3,
		MAX        = 4
	};

	/**
	 * Enum AIModule.BlackboardKeyType.EArithmeticKeyOperation
	 */
	enum class EArithmeticKeyOperation : uint8_t
	{
		Equal          = 0,
		NotEqual       = 1,
		Less           = 2,
		LessOrEqual    = 3,
		Greater        = 4,
		GreaterOrEqual = 5,
		MAX            = 6
	};

	/**
	 * Enum AIModule.BlackboardKeyType.EBasicKeyOperation
	 */
	enum class EBasicKeyOperation : uint8_t
	{
		Set    = 0,
		NotSet = 1,
		MAX    = 2
	};

	/**
	 * Enum AIModule.BTDecorator_Blackboard.EBTBlackboardRestart
	 */
	enum class EBTBlackboardRestart : uint8_t
	{
		ValueChange  = 0,
		ResultChange = 1,
		MAX          = 2
	};

	/**
	 * Enum AIModule.BTDecorator_CompareBBEntries.EBlackBoardEntryComparison
	 */
	enum class EBlackBoardEntryComparison : uint8_t
	{
		Equal    = 0,
		NotEqual = 1,
		MAX      = 2
	};

	/**
	 * Enum AIModule.BTDecorator_DoesPathExist.EPathExistanceQueryType
	 */
	enum class EPathExistanceQueryType : uint8_t
	{
		NavmeshRaycast2D   = 0,
		HierarchicalQuery  = 1,
		RegularPathFinding = 2,
		MAX                = 3
	};

	/**
	 * Enum AIModule.BTComposite_SimpleParallel.EBTParallelMode
	 */
	enum class EBTParallelMode : uint8_t
	{
		AbortBackground   = 0,
		WaitForBackground = 1,
		MAX               = 2
	};

	/**
	 * Enum AIModule.EnvQueryTest_Distance.EEnvTestDistance
	 */
	enum class EEnvTestDistance : uint8_t
	{
		Distance3D = 0,
		Distance2D = 1,
		DistanceZ  = 2,
		MAX        = 3
	};

	/**
	 * Enum AIModule.EnvQueryTest_Pathfinding.EEnvTestPathfinding
	 */
	enum class EEnvTestPathfinding : uint8_t
	{
		PathExist  = 0,
		PathCost   = 1,
		PathLength = 2,
		MAX        = 3
	};

	/**
	 * Enum AIModule.PawnAction.EPawnActionFailHandling
	 */
	enum class EPawnActionFailHandling : uint8_t
	{
		RequireSuccess = 0,
		IgnoreFailure  = 1,
		MAX            = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AIModule.AIRequestID
	 * Size -> 0x0004
	 */
	struct FAIRequestID
	{
	public:
		uint32_t                                                   RequestID;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.BehaviorTreeTypes.BlackboardKeySelector
	 * Size -> 0x0028
	 */
	struct FBlackboardKeySelector
	{
	public:
		TArray<class UBlackboardKeyType*>                          AllowedTypes;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance
		class FName                                                SelectedKeyName;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class UClass*                                              SelectedKeyType;                                         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              SelectedKeyID;                                           // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_WC1O[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bNoneIsAllowedValue : 1;                                 // 0x0024(0x0001) BIT_FIELD Edit, Transient, DisableEditOnInstance, NoDestructor, Protected
		unsigned char                                              UnknownData_NSM2[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.PawnActionsComponent.PawnActionStack
	 * Size -> 0x0008
	 */
	struct FPawnActionStack
	{
	public:
		class UPawnAction*                                         TopAction;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.PawnActionsComponent.PawnActionEvent
	 * Size -> 0x0018
	 */
	struct FPawnActionEvent
	{
	public:
		class UPawnAction*                                         Action;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E46X[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AISense_Damage.AIDamageEvent
	 * Size -> 0x0030
	 */
	struct FAIDamageEvent
	{
	public:
		unsigned char                                              UnknownData_CN9U[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              Instigator;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.AISense_Hearing.AINoiseEvent
	 * Size -> 0x0020
	 */
	struct FAINoiseEvent
	{
	public:
		unsigned char                                              UnknownData_BTE9[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Instigator;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.AISense_Prediction.AIPredictionEvent
	 * Size -> 0x0018
	 */
	struct FAIPredictionEvent
	{
	public:
		class AActor*                                              Requestor;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              PredictedActor;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YUM3[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AISense_Team.AITeamStimulusEvent
	 * Size -> 0x0038
	 */
	struct FAITeamStimulusEvent
	{
	public:
		unsigned char                                              UnknownData_U4HJ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Broadcaster;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              Enemy;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.AISense_Touch.AITouchEvent
	 * Size -> 0x0020
	 */
	struct FAITouchEvent
	{
	public:
		unsigned char                                              UnknownData_EBGA[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TouchReceiver;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              OtherActor;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.BTCompositeNode.BTDecoratorLogic
	 * Size -> 0x0004
	 */
	struct FBTDecoratorLogic
	{
	public:
		EBTDecoratorLogic                                          Operation;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJVC[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   Number;                                                  // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.BTCompositeNode.BTCompositeChild
	 * Size -> 0x0030
	 */
	struct FBTCompositeChild
	{
	public:
		class UBTCompositeNode*                                    ChildComposite;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UBTTaskNode*                                         ChildTask;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UBTDecorator*>                                Decorators;                                              // 0x0010(0x0010) ZeroConstructor
		TArray<struct FBTDecoratorLogic>                           DecoratorOps;                                            // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct AIModule.BehaviorTreeManager.BehaviorTreeTemplateInfo
	 * Size -> 0x0028
	 */
	struct FBehaviorTreeTemplateInfo
	{
	public:
		class UBehaviorTree*                                       Asset;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UBTCompositeNode*                                    Template;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class FString                                              Category;                                                // 0x0010(0x0010) ZeroConstructor, Transient
		unsigned char                                              UnknownData_TD1Q[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.BlackboardData.BlackboardEntry
	 * Size -> 0x0010
	 */
	struct FBlackboardEntry
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBlackboardKeyType*                                  KeyType;                                                 // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.EnvQueryTypes.EnvNamedValue
	 * Size -> 0x0010
	 */
	struct FEnvNamedValue
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EEnvQueryParam                                             ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4H6E[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.EnvQueryTypes.EnvFloatParam
	 * Size -> 0x000C
	 */
	struct FEnvFloatParam
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ParamName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.EnvQueryTypes.EnvBoolParam
	 * Size -> 0x000C
	 */
	struct FEnvBoolParam
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A7XT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParamName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.EnvQueryTypes.EnvTraceData
	 * Size -> 0x0028
	 */
	struct FEnvTraceData
	{
	public:
		class UClass*                                              NavigationFilter;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ProjectDown;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ProjectUp;                                               // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExtentX;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExtentY;                                                 // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExtentZ;                                                 // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ETraceTypeQuery                                            TraceChannel;                                            // 0x001C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EEnvTraceShape                                             TraceShape;                                              // 0x001D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EEnvQueryTrace                                             TraceMode;                                               // 0x001E(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WQ9X[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bTraceComplex : 1;                                       // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		bool                                                       bOnlyBlockingHits : 1;                                   // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		bool                                                       bCanTraceOnNavMesh : 1;                                  // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bCanTraceOnGeometry : 1;                                 // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bCanDisableTrace : 1;                                    // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bCanProjectDown : 1;                                     // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_1T7B[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvQueryTypes.EnvDirection
	 * Size -> 0x0020
	 */
	struct FEnvDirection
	{
	public:
		class UClass*                                              LineFrom;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              LineTo;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              Rotation;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EEnvDirection                                              DirMode;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X9VV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AISense_Sight.AISightEvent
	 * Size -> 0x0018
	 */
	struct FAISightEvent
	{
	public:
		unsigned char                                              UnknownData_AGU6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SeenActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              Observer;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.EnvQueryTypes.EnvIntParam
	 * Size -> 0x000C
	 */
	struct FEnvIntParam
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ParamName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIModule.EnvQueryManager.EnvQueryRequest
	 * Size -> 0x0068
	 */
	struct FEnvQueryRequest
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class UWorld*                                              World;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_BV8S[0x50];                                  // 0x0018(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.GenericTeamAgentInterface.GenericTeamId
	 * Size -> 0x0001
	 */
	struct FGenericTeamId
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
