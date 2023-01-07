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
	 * Function Zipline_Anchor.Zipline_Anchor_C.BPAdjustDamage
	 */
	struct AZipline_Anchor_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_47X7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QGNR[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.Get Closest Point on Line Non Pure
	 */
	struct AZipline_Anchor_C_GetClosestPointonLineNonPure_Params
	{
	public:
		struct FVector                                             LineStart;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LineEnd;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Point;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             closestPoint;                                            // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info NonPure
	 */
	struct AZipline_Anchor_C_GetZiplineInfoNonPure_Params
	{
	public:
		struct FVector                                             DownDirection;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5YC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AZipline_Anchor_C*                                   UpperAnchor;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AZipline_Anchor_C*                                   LowerAnchor;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             UpperCableAttachLoc;                                     // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LowerCableAttachLoc;                                     // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Buff
	 */
	struct AZipline_Anchor_C_GetZiplineBuff_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              Buff;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchorClient
	 */
	struct AZipline_Anchor_C_InitLinkedAnchorClient_Params
	{	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchor
	 */
	struct AZipline_Anchor_C_InitLinkedAnchor_Params
	{	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.CreateCable
	 */
	struct AZipline_Anchor_C_CreateCable_Params
	{	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.AllowManualMultiUseActivation
	 */
	struct AZipline_Anchor_C_AllowManualMultiUseActivation_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QY14[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.IsUpperAnchorPoint
	 */
	struct AZipline_Anchor_C_IsUpperAnchorPoint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NK23[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.HasLineOfSight
	 */
	struct AZipline_Anchor_C_HasLineOfSight_Params
	{
	public:
		class APrimalCharacter*                                    PrimalCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             StartPoint;                                              // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasLineOfSight;                                          // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.CheckForHarness
	 */
	struct AZipline_Anchor_C_CheckForHarness_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NV4V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.SpawnBreakEmitter
	 */
	struct AZipline_Anchor_C_SpawnBreakEmitter_Params
	{	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.GetBuffInfo
	 */
	struct AZipline_Anchor_C_GetBuffInfo_Params
	{
	public:
		class UClass*                                              ZiplineBuff;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AttachOffset;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1D7X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWeaponAnim                                         AttachAnims;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     HandleMeshComp;                                          // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Motorized;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O3KX[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartEndOffset;                                          // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HideWeaponEnabled;                                       // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K60M[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MaxActivationDistance;                                   // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info
	 */
	struct AZipline_Anchor_C_GetZiplineInfo_Params
	{
	public:
		struct FVector                                             DownDirection;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ANAJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AZipline_Anchor_C*                                   UpperAnchor;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AZipline_Anchor_C*                                   LowerAnchor;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             UpperCableAttachLoc;                                     // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LowerCableAttachLoc;                                     // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.IsZiplineBlocked
	 */
	struct AZipline_Anchor_C_IsZiplineBlocked_Params
	{
	public:
		class APrimalCharacter*                                    primalChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      StartEndOffset;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AttachOffset;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OverrideStartLocation;                                   // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      overrideFindLocationDistance;                            // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             overrideFindLocationDirection;                           // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DontUseLineOfSightCheck;                                 // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y1UK[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0030(0x0088)  (Parm, OutParm)
		bool                                                       HitReturn;                                               // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KYWV[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             StartLocation;                                           // 0x00BC(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.ReceiveDestroyed
	 */
	struct AZipline_Anchor_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.GetClosestPointOnLine
	 */
	struct AZipline_Anchor_C_GetClosestPointOnLine_Params
	{
	public:
		struct FVector                                             LineStart;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LineEnd;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Point;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             closestPoint;                                            // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.RideZipline
	 */
	struct AZipline_Anchor_C_RideZipline_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              ZiplineBuff;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.BPTryMultiUse
	 */
	struct AZipline_Anchor_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.BPGetMultiUseEntries
	 */
	struct AZipline_Anchor_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.UserConstructionScript
	 */
	struct AZipline_Anchor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.ReceiveBeginPlay
	 */
	struct AZipline_Anchor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Zipline_Anchor.Zipline_Anchor_C.ExecuteUbergraph_Zipline_Anchor
	 */
	struct AZipline_Anchor_C_ExecuteUbergraph_Zipline_Anchor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
