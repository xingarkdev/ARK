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
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Assign Platform Materials
	 */
	struct APrimalStructure_TekBridge_C_AssignPlatformMaterials_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPRefreshedStructureColors
	 */
	struct APrimalStructure_TekBridge_C_BPRefreshedStructureColors_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.SetupSnaps
	 */
	struct APrimalStructure_TekBridge_C_SetupSnaps_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlayDying
	 */
	struct APrimalStructure_TekBridge_C_BPPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LXUW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideTargetLocation
	 */
	struct APrimalStructure_TekBridge_C_BPOverrideTargetLocation_Params
	{
	public:
		struct FVector                                             attackPos;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.CalculatePlacementRotation
	 */
	struct APrimalStructure_TekBridge_C_CalculatePlacementRotation_Params
	{
	public:
		class AController*                                         PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FPlacementData                                      PlacementData;                                           // 0x0008(0x0060)  (Parm, OutParm, ReferenceParm)
		struct FRotator                                            ReturnValue;                                             // 0x0068(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverridePlacementRotation
	 */
	struct APrimalStructure_TekBridge_C_BPOverridePlacementRotation_Params
	{
	public:
		struct FVector                                             ViewPos;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ViewRot;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPIsAllowedToBuildEx
	 */
	struct APrimalStructure_TekBridge_C_BPIsAllowedToBuildEx_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C5UR[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   PC;                                                      // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFinalPlacement;                                         // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bChoosingRotation;                                       // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4COU[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestForEnemyStructures
	 */
	struct APrimalStructure_TekBridge_C_TestForEnemyStructures_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KI9L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   Placer;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TooClose;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G5CF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPreventUsingAsFloorForStructure
	 */
	struct APrimalStructure_TekBridge_C_BPPreventUsingAsFloorForStructure_Params
	{
	public:
		struct FPlacementData                                      theOutPlacementData;                                     // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		class APrimalStructure*                                    StructureToPlaceOnMe;                                    // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MSFT[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPConsumeUsePinCode
	 */
	struct APrimalStructure_TekBridge_C_BPConsumeUsePinCode_Params
	{
	public:
		class AActor*                                              FromKeypadActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   ForPC;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    appledPinCode;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsActivating;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPCanBeActivated
	 */
	struct APrimalStructure_TekBridge_C_BPCanBeActivated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerDeactivated
	 */
	struct APrimalStructure_TekBridge_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerActivated
	 */
	struct APrimalStructure_TekBridge_C_BPContainerActivated_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.DeactivationComplete
	 */
	struct APrimalStructure_TekBridge_C_DeactivationComplete_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientMaterialUpdate
	 */
	struct APrimalStructure_TekBridge_C_ClientMaterialUpdate_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientCompleteActivation
	 */
	struct APrimalStructure_TekBridge_C_ClientCompleteActivation_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ReceiveBeginPlay
	 */
	struct APrimalStructure_TekBridge_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UpdateVisibility
	 */
	struct APrimalStructure_TekBridge_C_UpdateVisibility_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideUILocation
	 */
	struct APrimalStructure_TekBridge_C_BPOverrideUILocation_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D0F8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideSnappedFromTransform
	 */
	struct APrimalStructure_TekBridge_C_BPOverrideSnappedFromTransform_Params
	{
	public:
		class APrimalStructure*                                    ParentStructure;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ParentSnapFromIndex;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ParentSnapFromName;                                      // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             UnsnappedPlacementPos;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            UnsnappedPlacementRot;                                   // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SnappedPlacementPos;                                     // 0x002C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            SnappedPlacementRot;                                     // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SnapToIndex;                                             // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SnapToName;                                              // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutLocation;                                             // 0x0050(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutRotation;                                             // 0x005C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    bForceInvalidateSnap;                                    // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NV53[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushBlockers
	 */
	struct APrimalStructure_TekBridge_C_PushBlockers_Params
	{
	public:
		class APrimalCharacter*                                    BlockingCharacter;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             StartPos;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activating
	 */
	struct APrimalStructure_TekBridge_C_OnRep_Activating_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TryActivate
	 */
	struct APrimalStructure_TekBridge_C_TryActivate_Params
	{
	public:
		bool                                                       ActivateBridge;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Activate
	 */
	struct APrimalStructure_TekBridge_C_Activate_Params
	{
	public:
		bool                                                       ActivateBridge;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPGetMultiUseEntries
	 */
	struct APrimalStructure_TekBridge_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPTryMultiUse
	 */
	struct APrimalStructure_TekBridge_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.IsBlocked
	 */
	struct APrimalStructure_TekBridge_C_IsBlocked_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CheckLanding;                                            // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLocked;                                                 // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YPMH[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activated
	 */
	struct APrimalStructure_TekBridge_C_OnRep_Activated_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_LandingPosition
	 */
	struct APrimalStructure_TekBridge_C_OnRep_LandingPosition_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PreviewLanding
	 */
	struct APrimalStructure_TekBridge_C_PreviewLanding_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestExtension
	 */
	struct APrimalStructure_TekBridge_C_TestExtension_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Extension;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZDXZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructure*                                    SnapTarget;                                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ChoosingRotation;                                        // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Good;                                                    // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MRZK[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Placement;                                               // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlacedStructure
	 */
	struct APrimalStructure_TekBridge_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPBeginPreview
	 */
	struct APrimalStructure_TekBridge_C_BPBeginPreview_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExtendBridge
	 */
	struct APrimalStructure_TekBridge_C_ExtendBridge_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UserConstructionScript
	 */
	struct APrimalStructure_TekBridge_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationTick
	 */
	struct APrimalStructure_TekBridge_C_ActivationTick_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushImpact
	 */
	struct APrimalStructure_TekBridge_C_PushImpact_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationFailed
	 */
	struct APrimalStructure_TekBridge_C_ActivationFailed_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientIsPlaced
	 */
	struct APrimalStructure_TekBridge_C_ClientIsPlaced_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.MaterialUpdate
	 */
	struct APrimalStructure_TekBridge_C_MaterialUpdate_Params
	{	};

	/**
	 * Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExecuteUbergraph_PrimalStructure_TekBridge
	 */
	struct APrimalStructure_TekBridge_C_ExecuteUbergraph_PrimalStructure_TekBridge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
