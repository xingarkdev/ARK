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
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ValidateZipLineTransform
	 */
	struct ACaveWolf_Character_BP_C_ValidateZipLineTransform_Params
	{
	public:
		struct FTransform                                          InTransform;                                             // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_61A5[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KKTX[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct ACaveWolf_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XEE3[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintOverrideWantsToRun
	 */
	struct ACaveWolf_Character_BP_C_BlueprintOverrideWantsToRun_Params
	{
	public:
		bool                                                       bInputWantsToRun;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOverrideMoveToOrder
	 */
	struct ACaveWolf_Character_BP_C_BPOverrideMoveToOrder_Params
	{
	public:
		struct FVector                                             MoveToLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HT82[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   OrderingPlayer;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4176[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPGetAddForwardVelocityOnJump
	 */
	struct ACaveWolf_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsTargetZiplineBlocked
	 */
	struct ACaveWolf_Character_BP_C_IsTargetZiplineBlocked_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GYRV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AZipline_Anchor_C*                                   Anchor;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          HitResult;                                               // 0x0018(0x0088)  (Parm, OutParm)
		bool                                                       HitReturn;                                               // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NXZE[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             StartLocation;                                           // 0x00A4(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintCanAttack
	 */
	struct ACaveWolf_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0QK2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetClosestLocationToPointFromArray
	 */
	struct ACaveWolf_Character_BP_C_GetClosestLocationToPointFromArray_Params
	{
	public:
		TArray<struct FVector>                                     LocationsToTest;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FVector                                             Point;                                                   // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ClosestLocation;                                         // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ArrayIndex;                                              // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.UpdateTPVViewOffset
	 */
	struct ACaveWolf_Character_BP_C_UpdateTPVViewOffset_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.Set Server Timer Tick Every Frame
	 */
	struct ACaveWolf_Character_BP_C_SetServerTimerTickEveryFrame_Params
	{
	public:
		bool                                                       TickEveryFrame;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5W7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPTimerServer
	 */
	struct ACaveWolf_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetMeshRelativeTransform_Pure
	 */
	struct ACaveWolf_Character_BP_C_GetTargetMeshRelativeTransform_Pure_Params
	{
	public:
		struct FTransform                                          Result;                                                  // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SetNonDediTimer_TickEveryFrame
	 */
	struct ACaveWolf_Character_BP_C_SetNonDediTimer_TickEveryFrame_Params
	{
	public:
		bool                                                       TickEveryFrame;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0OZP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetMeshRelativeTransform
	 */
	struct ACaveWolf_Character_BP_C_GetTargetMeshRelativeTransform_Params
	{
	public:
		struct FTransform                                          Result;                                                  // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.DebugDrawRotationAxes
	 */
	struct ACaveWolf_Character_BP_C_DebugDrawRotationAxes_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      lineLength;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      lineDuration;                                            // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LineThickness;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SoftSetCaveWolfTransform
	 */
	struct ACaveWolf_Character_BP_C_SoftSetCaveWolfTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.InterpCaveWolfMeshRelativeTransform
	 */
	struct ACaveWolf_Character_BP_C_InterpCaveWolfMeshRelativeTransform_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VVKL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ACaveWolf_Character_BP_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOnStartJump
	 */
	struct ACaveWolf_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPTimerNonDedicated
	 */
	struct ACaveWolf_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetZiplineDirectionFromAnchor
	 */
	struct ACaveWolf_Character_BP_C_GetZiplineDirectionFromAnchor_Params
	{
	public:
		class AZipline_Anchor_C*                                   Anchor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DownDirection;                                           // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetClosestPointOnLine
	 */
	struct ACaveWolf_Character_BP_C_GetClosestPointOnLine_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             B;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Point;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             closestPoint;                                            // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetZiplineBuff
	 */
	struct ACaveWolf_Character_BP_C_GetZiplineBuff_Params
	{
	public:
		class ABuff_Zipline_CaveWolf_C*                            ZiplineBuff;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetedZipline
	 */
	struct ACaveWolf_Character_BP_C_GetTargetedZipline_Params
	{
	public:
		class AZipline_Anchor_C*                                   TargetedZipline;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPNotifySetRider
	 */
	struct ACaveWolf_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPNotifyClearRider
	 */
	struct ACaveWolf_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsRotation Nearly Equal
	 */
	struct ACaveWolf_Character_BP_C_IsRotationNearlyEqual_Params
	{
	public:
		struct FRotator                                            A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            B;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Tolerance;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Return;                                                  // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H4FO[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsVectorNearlyEqual
	 */
	struct ACaveWolf_Character_BP_C_IsVectorNearlyEqual_Params
	{
	public:
		struct FVector                                             inVec;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             InVec2;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Tolerance;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0HKW[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ACaveWolf_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.TryAttachingToZipline
	 */
	struct ACaveWolf_Character_BP_C_TryAttachingToZipline_Params
	{
	public:
		class AZipline_Anchor_C*                                   overrideAnchor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OverrideStartLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      overrideFindLocationDistance;                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             overrideFindLocationDirection;                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DontUseLineOfSightCheck;                                 // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YHQI[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct ACaveWolf_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VLZQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.UserConstructionScript
	 */
	struct ACaveWolf_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.TryAttachToZipline_RunOnServer
	 */
	struct ACaveWolf_Character_BP_C_TryAttachToZipline_RunOnServer_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ACaveWolf_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.DoZiplineTurn
	 */
	struct ACaveWolf_Character_BP_C_DoZiplineTurn_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.PreZiplineTurn_Multicast
	 */
	struct ACaveWolf_Character_BP_C_PreZiplineTurn_Multicast_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ZiplineTargetingTimer
	 */
	struct ACaveWolf_Character_BP_C_ZiplineTargetingTimer_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.AttachToZipline_RunOnServer
	 */
	struct ACaveWolf_Character_BP_C_AttachToZipline_RunOnServer_Params
	{
	public:
		class AZipline_Anchor_C*                                   ZiplineAnchor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.AttachToZipline_Multicast
	 */
	struct ACaveWolf_Character_BP_C_AttachToZipline_Multicast_Params
	{
	public:
		class AZipline_Anchor_C*                                   ZiplineAnchor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.StartZiplineJumping
	 */
	struct ACaveWolf_Character_BP_C_StartZiplineJumping_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.CreateZiplineBuffAndStartRiding
	 */
	struct ACaveWolf_Character_BP_C_CreateZiplineBuffAndStartRiding_Params
	{
	public:
		class AZipline_Anchor_C*                                   Anchor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.Multi_SoftSetCaveWolfTransform
	 */
	struct ACaveWolf_Character_BP_C_Multi_SoftSetCaveWolfTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SetInitialVelocity_Multicast
	 */
	struct ACaveWolf_Character_BP_C_SetInitialVelocity_Multicast_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetZiplineJumping_RunOnServer
	 */
	struct ACaveWolf_Character_BP_C_ResetZiplineJumping_RunOnServer_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetZiplineJumping_Multicast
	 */
	struct ACaveWolf_Character_BP_C_ResetZiplineJumping_Multicast_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetForcePerFrameTicking
	 */
	struct ACaveWolf_Character_BP_C_ResetForcePerFrameTicking_Params
	{	};

	/**
	 * Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ExecuteUbergraph_CaveWolf_Character_BP
	 */
	struct ACaveWolf_Character_BP_C_ExecuteUbergraph_CaveWolf_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
