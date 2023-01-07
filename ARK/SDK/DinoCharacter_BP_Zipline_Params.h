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
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Get Zipline Buff
	 */
	struct ADinoCharacter_BP_Zipline_C_GetZiplineBuff_Params
	{
	public:
		class ABuff_Zipline_DinoBase_C*                            ZiplineBuff;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.OnOrderedMoveToOrFollow
	 */
	struct ADinoCharacter_BP_Zipline_C_OnOrderedMoveToOrFollow_Params
	{
	public:
		bool                                                       moveTo;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KYKF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnTamedProcessOrder
	 */
	struct ADinoCharacter_BP_Zipline_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W3KF[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintOverrideWantsToRun
	 */
	struct ADinoCharacter_BP_Zipline_C_BlueprintOverrideWantsToRun_Params
	{
	public:
		bool                                                       bInputWantsToRun;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X7Y6[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOverrideMoveToOrder
	 */
	struct ADinoCharacter_BP_Zipline_C_BPOverrideMoveToOrder_Params
	{
	public:
		struct FVector                                             MoveToLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X9I7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   OrderingPlayer;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateNonDediActive
	 */
	struct ADinoCharacter_BP_Zipline_C_UpdateNonDediActive_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Update Non Dedi Limits
	 */
	struct ADinoCharacter_BP_Zipline_C_UpdateNonDediLimits_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateCrosshair
	 */
	struct ADinoCharacter_BP_Zipline_C_UpdateCrosshair_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifySetRider
	 */
	struct ADinoCharacter_BP_Zipline_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerServer
	 */
	struct ADinoCharacter_BP_Zipline_C_BPTimerServer_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SoftSetTransform
	 */
	struct ADinoCharacter_BP_Zipline_C_SoftSetTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateTPViewOffset
	 */
	struct ADinoCharacter_BP_Zipline_C_UpdateTPViewOffset_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetMeshRelativeTransformPure
	 */
	struct ADinoCharacter_BP_Zipline_C_GetTargetMeshRelativeTransformPure_Params
	{
	public:
		struct FTransform                                          Result;                                                  // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.InterpMeshRelativeTransform
	 */
	struct ADinoCharacter_BP_Zipline_C_InterpMeshRelativeTransform_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P1WJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetedZipline
	 */
	struct ADinoCharacter_BP_Zipline_C_GetTargetedZipline_Params
	{
	public:
		class AZipline_Anchor_C*                                   TargetedZipline;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineNonDediLogic
	 */
	struct ADinoCharacter_BP_Zipline_C_ZiplineNonDediLogic_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetNonDediTimerTickEveryFrame
	 */
	struct ADinoCharacter_BP_Zipline_C_SetNonDediTimerTickEveryFrame_Params
	{
	public:
		bool                                                       TickEveryFrame;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R0ID[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestLocationToPointFromArray
	 */
	struct ADinoCharacter_BP_Zipline_C_GetClosestLocationToPointFromArray_Params
	{
	public:
		TArray<struct FVector>                                     LocationsToTest;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FVector                                             Point;                                                   // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ClosestLocation;                                         // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ArrayIndex;                                              // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetServerTimerTickEveryFrame
	 */
	struct ADinoCharacter_BP_Zipline_C_SetServerTimerTickEveryFrame_Params
	{
	public:
		bool                                                       TickEveryFrame;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_36ML[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.CreateZiplineBuffAndStartRiding
	 */
	struct ADinoCharacter_BP_Zipline_C_CreateZiplineBuffAndStartRiding_Params
	{
	public:
		class AZipline_Anchor_C*                                   Anchor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.IsTargetZiplineBlocked
	 */
	struct ADinoCharacter_BP_Zipline_C_IsTargetZiplineBlocked_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1QCP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AZipline_Anchor_C*                                   Anchor;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          HitResult;                                               // 0x0018(0x0088)  (Parm, OutParm)
		bool                                                       HitReturn;                                               // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FGU0[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             StartLocation;                                           // 0x00A4(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestPointOnLine
	 */
	struct ADinoCharacter_BP_Zipline_C_GetClosestPointOnLine_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             B;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Point;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             closestPoint;                                            // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachingToZipline
	 */
	struct ADinoCharacter_BP_Zipline_C_TryAttachingToZipline_Params
	{
	public:
		class AZipline_Anchor_C*                                   overrideAnchor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OverrideStartLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      overrideFindLocationDistance;                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             overrideFindLocationDirection;                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5PC[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnStartJump
	 */
	struct ADinoCharacter_BP_Zipline_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifyClearRider
	 */
	struct ADinoCharacter_BP_Zipline_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerNonDedicated
	 */
	struct ADinoCharacter_BP_Zipline_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Is Dino Submerged
	 */
	struct ADinoCharacter_BP_Zipline_C_IsDinoSubmerged_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2EZ5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UserConstructionScript
	 */
	struct ADinoCharacter_BP_Zipline_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ADinoCharacter_BP_Zipline_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachToZipline_RunOnServer
	 */
	struct ADinoCharacter_BP_Zipline_C_TryAttachToZipline_RunOnServer_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.StartZiplineJumping
	 */
	struct ADinoCharacter_BP_Zipline_C_StartZiplineJumping_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_RunOnServer
	 */
	struct ADinoCharacter_BP_Zipline_C_AttachToZipline_RunOnServer_Params
	{
	public:
		class AZipline_Anchor_C*                                   ZiplineAnchor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_Multicast
	 */
	struct ADinoCharacter_BP_Zipline_C_AttachToZipline_Multicast_Params
	{
	public:
		class AZipline_Anchor_C*                                   ZiplineAnchor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_RunOnServer
	 */
	struct ADinoCharacter_BP_Zipline_C_ResetZiplineJumping_RunOnServer_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_Multicast
	 */
	struct ADinoCharacter_BP_Zipline_C_ResetZiplineJumping_Multicast_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineTargetingTimer
	 */
	struct ADinoCharacter_BP_Zipline_C_ZiplineTargetingTimer_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetInitialVelocity_Multicast
	 */
	struct ADinoCharacter_BP_Zipline_C_SetInitialVelocity_Multicast_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Multi_SoftSetTransform
	 */
	struct ADinoCharacter_BP_Zipline_C_Multi_SoftSetTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DoZiplineTurn
	 */
	struct ADinoCharacter_BP_Zipline_C_DoZiplineTurn_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.PreZiplineTurn_Multicast
	 */
	struct ADinoCharacter_BP_Zipline_C_PreZiplineTurn_Multicast_Params
	{	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugSphere_Multicast
	 */
	struct ADinoCharacter_BP_Zipline_C_DebugSphere_Multicast_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugArrow_Multicast
	 */
	struct ADinoCharacter_BP_Zipline_C_DebugArrow_Multicast_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewParam1;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewParam3;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ExecuteUbergraph_DinoCharacter_BP_Zipline
	 */
	struct ADinoCharacter_BP_Zipline_C_ExecuteUbergraph_DinoCharacter_BP_Zipline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
