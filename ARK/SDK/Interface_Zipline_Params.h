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
	 * Function Interface_Zipline.Interface_Zipline_C.GetFinishedAttach_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetFinishedAttach_InterfaceCall_Params
	{
	public:
		bool                                                       bOutAttached;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.GetActiveTargetedZipline
	 */
	struct UInterface_Zipline_C_GetActiveTargetedZipline_Params
	{
	public:
		class APrimalStructure*                                    Zipline;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.SetProcessMoveToOrder_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetProcessMoveToOrder_InterfaceCall_Params
	{
	public:
		bool                                                       newValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Set Current Move To Order Location Interface Call
	 */
	struct UInterface_Zipline_C_SetCurrentMoveToOrderLocationInterfaceCall_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Current Move to Order Location_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetCurrentMovetoOrderLocation_InterfaceCall_Params
	{
	public:
		struct FVector                                             OutLocation;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Process Move to Order_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetProcessMovetoOrder_InterfaceCall_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.GetClosestLocationToPointFromArray_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetClosestLocationToPointFromArray_InterfaceCall_Params
	{
	public:
		struct FVector                                             InPoint;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OX5A[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     InArray;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FVector                                             OutClosestPoint;                                         // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OutIndex;                                                // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Impulse AI_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetZiplineJumpOffImpulseAI_InterfaceCall_Params
	{
	public:
		struct FVector                                             NewZiplineJumpOffImpulseAI;                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Zipline Buff_Interface Call
	 */
	struct UInterface_Zipline_C_GetZiplineBuff_InterfaceCall_Params
	{
	public:
		class APrimalBuff*                                         Buff;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Set Finished Attach_Interface Call
	 */
	struct UInterface_Zipline_C_SetFinishedAttach_InterfaceCall_Params
	{
	public:
		bool                                                       bNewFinishedAttach;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.SetKeepHanging_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetKeepHanging_InterfaceCall_Params
	{
	public:
		bool                                                       bNewKeepHanging;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.GetKeepHanging_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetKeepHanging_InterfaceCall_Params
	{
	public:
		bool                                                       bKeepHanging;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.SetUsingZipline_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetUsingZipline_InterfaceCall_Params
	{
	public:
		bool                                                       bUsingZipline;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Allow Zipline Jumping_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetAllowZiplineJumping_InterfaceCall_Params
	{
	public:
		bool                                                       bAllowZiplineJumping;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Using Zipline_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetUsingZipline_InterfaceCall_Params
	{
	public:
		bool                                                       bUsingZipline;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Current Targeted Zipline_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetCurrentTargetedZipline_InterfaceCall_Params
	{
	public:
		class APrimalStructure*                                    Anchor;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Start Zipline Jumping_InterfaceCall
	 */
	struct UInterface_Zipline_C_StartZiplineJumping_InterfaceCall_Params
	{	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Multi Soft Set Transform_InterfaceCall
	 */
	struct UInterface_Zipline_C_MultiSoftSetTransform_InterfaceCall_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Sliding_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetSliding_InterfaceCall_Params
	{
	public:
		bool                                                       bSliding;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Set Sliding_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetSliding_InterfaceCall_Params
	{
	public:
		bool                                                       bNewSliding;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Direction AI_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetZiplineJumpOffDirectionAI_InterfaceCall_Params
	{
	public:
		struct FVector                                             NewZiplineJumpOffDirectionAI;                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Is Zipline Jumping_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetIsZiplineJumping_InterfaceCall_Params
	{
	public:
		bool                                                       bZiplineJumping;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Set Initial Velocity Multicast_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetInitialVelocityMulticast_InterfaceCall_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Set Zipline New Target Location_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetZiplineNewTargetLocation_InterfaceCall_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Zipline New Target Location_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetZiplineNewTargetLocation_InterfaceCall_Params
	{
	public:
		struct FVector                                             NewTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Attach from Below_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetAttachfromBelow_InterfaceCall_Params
	{
	public:
		bool                                                       bAttachFromBelow;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Set Is Hanging_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetIsHanging_InterfaceCall_Params
	{
	public:
		bool                                                       bNewIsHanging;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Get Is Hanging_InterfaceCall
	 */
	struct UInterface_Zipline_C_GetIsHanging_InterfaceCall_Params
	{
	public:
		bool                                                       bIsHanging;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Set Non Dedi Tick Every Frame_InterfaceCall
	 */
	struct UInterface_Zipline_C_SetNonDediTickEveryFrame_InterfaceCall_Params
	{
	public:
		bool                                                       bNewTickEveryFrame;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Zipline.Interface_Zipline_C.Try Attaching to Zipline_InterfaceCall
	 */
	struct UInterface_Zipline_C_TryAttachingtoZipline_InterfaceCall_Params
	{
	public:
		class APrimalStructure*                                    overrideAnchor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OverrideStartLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      overrideFindLocationDistance;                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             overrideFindLocationDirection;                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontUseLineOfSightCheck;                                // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
