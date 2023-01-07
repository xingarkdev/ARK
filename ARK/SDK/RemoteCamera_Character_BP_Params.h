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
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleData
	 */
	struct ARemoteCamera_Character_BP_C_GetConsoleData_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6SWO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       CanAddCamera;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CanAddCamera
	 */
	struct ARemoteCamera_Character_BP_C_CanAddCamera_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleID
	 */
	struct ARemoteCamera_Character_BP_C_GetConsoleID_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraData
	 */
	struct ARemoteCamera_Character_BP_C_GetCameraData_Params
	{
	public:
		TArray<class APrimalStructure*>                            Cameras;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraLocation
	 */
	struct ARemoteCamera_Character_BP_C_GetCameraLocation_Params
	{
	public:
		struct FVector                                             CameraViewPoint;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            CameraRotation;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerUnlinkCamera
	 */
	struct ARemoteCamera_Character_BP_C_ServerUnlinkCamera_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CJ7K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SwitchToCameraAtIndex
	 */
	struct ARemoteCamera_Character_BP_C_SwitchToCameraAtIndex_Params
	{
	public:
		int32_t                                                    CameraIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ARemoteCamera_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SUBE[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RXC1[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P4Z7[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomOut
	 */
	struct ARemoteCamera_Character_BP_C_BP_OnZoomOut_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomIn
	 */
	struct ARemoteCamera_Character_BP_C_BP_OnZoomIn_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CycleVisionMode
	 */
	struct ARemoteCamera_Character_BP_C_CycleVisionMode_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Concede Input Handling to UI
	 */
	struct ARemoteCamera_Character_BP_C_ConcedeInputHandlingtoUI_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ResumeInputHandling
	 */
	struct ARemoteCamera_Character_BP_C_ResumeInputHandling_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetFPVViewLocation
	 */
	struct ARemoteCamera_Character_BP_C_BPGetFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideFPVViewLocation
	 */
	struct ARemoteCamera_Character_BP_C_BPOverrideFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CameraTick
	 */
	struct ARemoteCamera_Character_BP_C_CameraTick_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCameraData
	 */
	struct ARemoteCamera_Character_BP_C_RemoveCameraData_Params
	{
	public:
		class APrimalStructure*                                    CamToRemove;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddCamera
	 */
	struct ARemoteCamera_Character_BP_C_AddCamera_Params
	{
	public:
		class APrimalStructure*                                    NewCam;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetOtherActorToIgnore
	 */
	struct ARemoteCamera_Character_BP_C_BPGetOtherActorToIgnore_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleaseCamera
	 */
	struct ARemoteCamera_Character_BP_C_ReleaseCamera_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveDestroyed
	 */
	struct ARemoteCamera_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPTriggerStasisEvent
	 */
	struct ARemoteCamera_Character_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPUnstasis
	 */
	struct ARemoteCamera_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCameraData
	 */
	struct ARemoteCamera_Character_BP_C_SetCameraData_Params
	{
	public:
		int32_t                                                    currentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5T07[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class APrimalStructure*>                            LinkedCameras_Server;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetHUDElements
	 */
	struct ARemoteCamera_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPForceCameraStyle
	 */
	struct ARemoteCamera_Character_BP_C_BPForceCameraStyle_Params
	{
	public:
		class APrimalCharacter*                                    ForViewTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECameraStyle                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct ARemoteCamera_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceivePossessed
	 */
	struct ARemoteCamera_Character_BP_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPCanCryo
	 */
	struct ARemoteCamera_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_PreventMovementMode
	 */
	struct ARemoteCamera_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetupScoutDisconnect
	 */
	struct ARemoteCamera_Character_BP_C_SetupScoutDisconnect_Params
	{
	public:
		float                                                      DelayTimeSeconds;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyScout
	 */
	struct ARemoteCamera_Character_BP_C_DestroyScout_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPModifyAimOffsetTargetLocation
	 */
	struct ARemoteCamera_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
	{
	public:
		struct FVector                                             AimTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClearExpiredDinoAIData
	 */
	struct ARemoteCamera_Character_BP_C_ClearExpiredDinoAIData_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideStencilAllianceForTarget
	 */
	struct ARemoteCamera_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
	{
	public:
		class APrimalCharacter*                                    TargetDino;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Component;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EStencilAlliance                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPShouldCancelDoAttack
	 */
	struct ARemoteCamera_Character_BP_C_BPShouldCancelDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnRep_LowStamina
	 */
	struct ARemoteCamera_Character_BP_C_OnRep_LowStamina_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveTick
	 */
	struct ARemoteCamera_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A76P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ScoutIsFirstPerson
	 */
	struct ARemoteCamera_Character_BP_C_ScoutIsFirstPerson_Params
	{
	public:
		bool                                                       retVal;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleOnStopFire
	 */
	struct ARemoteCamera_Character_BP_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetTargetImpactMaterial
	 */
	struct ARemoteCamera_Character_BP_C_SetTargetImpactMaterial_Params
	{
	public:
		float                                                      ImpactDistance;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPPreventStasis
	 */
	struct ARemoteCamera_Character_BP_C_BPPreventStasis_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsScoutFirst Person
	 */
	struct ARemoteCamera_Character_BP_C_IsScoutFirstPerson_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5F8V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetFirstPersonMaterial
	 */
	struct ARemoteCamera_Character_BP_C_SetFirstPersonMaterial_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WF6H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsServerOrSinglePlayer
	 */
	struct ARemoteCamera_Character_BP_C_IsServerOrSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsClientOrSinglePlayer
	 */
	struct ARemoteCamera_Character_BP_C_IsClientOrSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct ARemoteCamera_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ARemoteCamera_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BlueprintCanAttack
	 */
	struct ARemoteCamera_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MEPQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPAdjustDamage
	 */
	struct ARemoteCamera_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZMQQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z5KO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QT84[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnSetDeath
	 */
	struct ARemoteCamera_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ARemoteCamera_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Release Possessing Survivor
	 */
	struct ARemoteCamera_Character_BP_C_ReleasePossessingSurvivor_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetPossessedByPlayer
	 */
	struct ARemoteCamera_Character_BP_C_GetPossessedByPlayer_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Spawned from Structure
	 */
	struct ARemoteCamera_Character_BP_C_SpawnedfromStructure_Params
	{
	public:
		class AShooterPlayerController*                            ShooterPlayerController;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PossessDelay;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MSHQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructure*                                    LinkedStructure;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPIsValidUnStasisCaster
	 */
	struct ARemoteCamera_Character_BP_C_BPIsValidUnStasisCaster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1WCR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UserConstructionScript
	 */
	struct ARemoteCamera_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_146
	 */
	struct ARemoteCamera_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_146_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_145
	 */
	struct ARemoteCamera_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_145_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_144
	 */
	struct ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_144_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_143
	 */
	struct ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_143_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_142
	 */
	struct ARemoteCamera_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_142_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_141
	 */
	struct ARemoteCamera_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_141_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_140
	 */
	struct ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_140_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54
	 */
	struct ARemoteCamera_Character_BP_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateCameraRotation
	 */
	struct ARemoteCamera_Character_BP_C_UpdateCameraRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateConsoleName
	 */
	struct ARemoteCamera_Character_BP_C_UpdateConsoleName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ActivateCamera
	 */
	struct ARemoteCamera_Character_BP_C_ActivateCamera_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_AddPostProcessBuffToPlayer
	 */
	struct ARemoteCamera_Character_BP_C_Server_AddPostProcessBuffToPlayer_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemovePostProcessBuffFromPlayer
	 */
	struct ARemoteCamera_Character_BP_C_Server_RemovePostProcessBuffFromPlayer_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemoveAllPostProcessBuffs
	 */
	struct ARemoteCamera_Character_BP_C_Server_RemoveAllPostProcessBuffs_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemovePostProcessBuff
	 */
	struct ARemoteCamera_Character_BP_C_RemovePostProcessBuff_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleasePossessingSurvivorAndDestroy
	 */
	struct ARemoteCamera_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveBeginPlay
	 */
	struct ARemoteCamera_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnEnd
	 */
	struct ARemoteCamera_Character_BP_C_SpawnEnd_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.TriggerDisconnectFX
	 */
	struct ARemoteCamera_Character_BP_C_TriggerDisconnectFX_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.PossessedByPlayer
	 */
	struct ARemoteCamera_Character_BP_C_PossessedByPlayer_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.MULTI_ReleasePossessingSurvivor
	 */
	struct ARemoteCamera_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedDestroyActor
	 */
	struct ARemoteCamera_Character_BP_C_DelayedDestroyActor_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerHandleOnStopFire
	 */
	struct ARemoteCamera_Character_BP_C_ServerHandleOnStopFire_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientCheckClearExpiredDinoData
	 */
	struct ARemoteCamera_Character_BP_C_ClientCheckClearExpiredDinoData_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DisableAI
	 */
	struct ARemoteCamera_Character_BP_C_DisableAI_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientHitTerrain
	 */
	struct ARemoteCamera_Character_BP_C_ClientHitTerrain_Params
	{
	public:
		struct FVector                                             ImpactNormal;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddNewCamera
	 */
	struct ARemoteCamera_Character_BP_C_AddNewCamera_Params
	{
	public:
		class APrimalStructure*                                    NewStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCurrentCamera
	 */
	struct ARemoteCamera_Character_BP_C_SetCurrentCamera_Params
	{
	public:
		int32_t                                                    CameraIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerNextCamera
	 */
	struct ARemoteCamera_Character_BP_C_ServerNextCamera_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ConsoleDeactivated
	 */
	struct ARemoteCamera_Character_BP_C_ConsoleDeactivated_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateScoutVisionBuff
	 */
	struct ARemoteCamera_Character_BP_C_UpdateScoutVisionBuff_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCamera
	 */
	struct ARemoteCamera_Character_BP_C_RemoveCamera_Params
	{
	public:
		class APrimalStructure*                                    CameraToRemove;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnNotifyDamage_Event
	 */
	struct ARemoteCamera_Character_BP_C_OnNotifyDamage_Event_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D3A6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ListenForPlayerDamage
	 */
	struct ARemoteCamera_Character_BP_C_ListenForPlayerDamage_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientNotifyHit
	 */
	struct ARemoteCamera_Character_BP_C_ClientNotifyHit_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V9HR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        Event;                                                   // 0x0008(0x0020)  (Parm)
		class APawn*                                               Instigator;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnSleepStateChanged_Event
	 */
	struct ARemoteCamera_Character_BP_C_OnSleepStateChanged_Event_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsSleeping;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientActivateCamera
	 */
	struct ARemoteCamera_Character_BP_C_ClientActivateCamera_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientReleaseCamera
	 */
	struct ARemoteCamera_Character_BP_C_ClientReleaseCamera_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedActivateCamera
	 */
	struct ARemoteCamera_Character_BP_C_DelayedActivateCamera_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedReleaseCamera
	 */
	struct ARemoteCamera_Character_BP_C_DelayedReleaseCamera_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossession
	 */
	struct ARemoteCamera_Character_BP_C_VerifyPossession_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossessingSurvivor
	 */
	struct ARemoteCamera_Character_BP_C_VerifyPossessingSurvivor_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerUpdateCameraInfo
	 */
	struct ARemoteCamera_Character_BP_C_ServerUpdateCameraInfo_Params
	{
	public:
		int32_t                                                    CameraIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateCameraInfo
	 */
	struct ARemoteCamera_Character_BP_C_ClientUpdateCameraInfo_Params
	{
	public:
		int32_t                                                    CameraIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_INJ5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructure*                                    UpdatedCamera;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnCameraHUD
	 */
	struct ARemoteCamera_Character_BP_C_SpawnCameraHUD_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyCameraHUD
	 */
	struct ARemoteCamera_Character_BP_C_DestroyCameraHUD_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerPreviousCamera
	 */
	struct ARemoteCamera_Character_BP_C_ServerPreviousCamera_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerSwitchToCameraAtIndex
	 */
	struct ARemoteCamera_Character_BP_C_ServerSwitchToCameraAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateHUDInfo
	 */
	struct ARemoteCamera_Character_BP_C_ClientUpdateHUDInfo_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.StopPossessingPlayerMovement
	 */
	struct ARemoteCamera_Character_BP_C_StopPossessingPlayerMovement_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerConfirmActivation
	 */
	struct ARemoteCamera_Character_BP_C_ServerConfirmActivation_Params
	{	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UnlinkCamera
	 */
	struct ARemoteCamera_Character_BP_C_UnlinkCamera_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ExecuteUbergraph_RemoteCamera_Character_BP
	 */
	struct ARemoteCamera_Character_BP_C_ExecuteUbergraph_RemoteCamera_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
