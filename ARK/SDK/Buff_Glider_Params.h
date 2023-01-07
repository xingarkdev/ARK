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
	 * Function Buff_Glider.Buff_Glider_C.GetGliderInactiveMeshTargetRotVals
	 */
	struct ABuff_Glider_C_GetGliderInactiveMeshTargetRotVals_Params
	{
	public:
		struct FRotator                                            Rot;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InterpSpeed;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateHighestZ
	 */
	struct ABuff_Glider_C_ServerTick_UpdateHighestZ_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ServerTick_ReduceDurability
	 */
	struct ABuff_Glider_C_ServerTick_ReduceDurability_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.Tick_UpdatePlayerMesh
	 */
	struct ABuff_Glider_C_Tick_UpdatePlayerMesh_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.UpdateIsPullingUp
	 */
	struct ABuff_Glider_C_UpdateIsPullingUp_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.GetCurrentGliderRotationRate
	 */
	struct ABuff_Glider_C_GetCurrentGliderRotationRate_Params
	{
	public:
		struct FRotator                                            Result;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.UpdateSavedCameraView
	 */
	struct ABuff_Glider_C_UpdateSavedCameraView_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.BPInitializedCharacterAnimScriptInstance
	 */
	struct ABuff_Glider_C_BPInitializedCharacterAnimScriptInstance_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.BPCharacterDetach
	 */
	struct ABuff_Glider_C_BPCharacterDetach_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.UpdateGliderSFX
	 */
	struct ABuff_Glider_C_UpdateGliderSFX_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ReceiveDestroyed
	 */
	struct ABuff_Glider_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.BPOverrideWeaponBob
	 */
	struct ABuff_Glider_C_BPOverrideWeaponBob_Params
	{
	public:
		struct FVector                                             InWeaponBob;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.CheckForGliderStuckOnWall
	 */
	struct ABuff_Glider_C_CheckForGliderStuckOnWall_Params
	{
	public:
		bool                                                       CanKeepGliding;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4WN9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.GetGlideSpeedRatio
	 */
	struct ABuff_Glider_C_GetGlideSpeedRatio_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.BP_ModifyCharacterFOV
	 */
	struct ABuff_Glider_C_BP_ModifyCharacterFOV_Params
	{
	public:
		float                                                      inFOV;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ServerTick_GlideFalling
	 */
	struct ABuff_Glider_C_ServerTick_GlideFalling_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.GetGliderMesh
	 */
	struct ABuff_Glider_C_GetGliderMesh_Params
	{
	public:
		bool                                                       foundMesh;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6A2H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              meshRef;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.AttachWingVFX
	 */
	struct ABuff_Glider_C_AttachWingVFX_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.UpdateVelocityForVFX
	 */
	struct ABuff_Glider_C_UpdateVelocityForVFX_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.StopUsingGlider
	 */
	struct ABuff_Glider_C_StopUsingGlider_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.GetAngleDeltaBetweenVectors
	 */
	struct ABuff_Glider_C_GetAngleDeltaBetweenVectors_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             B;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AroundAxis;                                              // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      angleFromA_ToB;                                          // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.AllowPostProcessEffect
	 */
	struct ABuff_Glider_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_Glider_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.BuffAdjustDamage
	 */
	struct ABuff_Glider_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KOT6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.AreRotatorsNearlyEqual
	 */
	struct ABuff_Glider_C_AreRotatorsNearlyEqual_Params
	{
	public:
		struct FRotator                                            RotA;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            rotB;                                                    // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Error;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KHST[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateGlideVelocity
	 */
	struct ABuff_Glider_C_ServerTick_UpdateGlideVelocity_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_NonDedicated
	 */
	struct ABuff_Glider_C_UpdateGliderByState_NonDedicated_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_ServerAndClient
	 */
	struct ABuff_Glider_C_UpdateGliderByState_ServerAndClient_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_Server
	 */
	struct ABuff_Glider_C_UpdateGliderByState_Server_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.OnRep_GliderState_Current
	 */
	struct ABuff_Glider_C_OnRep_GliderState_Current_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.IsGliderActive
	 */
	struct ABuff_Glider_C_IsGliderActive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.GetGlideSpeedRatio_Pure
	 */
	struct ABuff_Glider_C_GetGlideSpeedRatio_Pure_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.GetDefaultOwningPlayer
	 */
	struct ABuff_Glider_C_GetDefaultOwningPlayer_Params
	{
	public:
		class AShooterCharacter*                                   ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.IsPlayerGrounded
	 */
	struct ABuff_Glider_C_IsPlayerGrounded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.Can Use Glider
	 */
	struct ABuff_Glider_C_CanUseGlider_Params
	{
	public:
		bool                                                       isToStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ABuff_Glider_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.Clamp LocationZ
	 */
	struct ABuff_Glider_C_ClampLocationZ_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.UpdateGliderFX
	 */
	struct ABuff_Glider_C_UpdateGliderFX_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.BPDeactivated
	 */
	struct ABuff_Glider_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.Reset Owning PlayerVariables
	 */
	struct ABuff_Glider_C_ResetOwningPlayerVariables_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ClampPlayerVelocity
	 */
	struct ABuff_Glider_C_ClampPlayerVelocity_Params
	{
	public:
		float                                                      maxVelocity;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.NetSetCurrentGliderState
	 */
	struct ABuff_Glider_C_NetSetCurrentGliderState_Params
	{
	public:
		E_GliderStates                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJ10[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.BuffTickServer
	 */
	struct ABuff_Glider_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateGlidingRotation
	 */
	struct ABuff_Glider_C_ServerTick_UpdateGlidingRotation_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.BuffTickClient
	 */
	struct ABuff_Glider_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ClientSetGlidingState
	 */
	struct ABuff_Glider_C_ClientSetGlidingState_Params
	{
	public:
		E_GliderStates                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.UserConstructionScript
	 */
	struct ABuff_Glider_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.InpActEvt_Jump_K2Node_InputActionEvent_104
	 */
	struct ABuff_Glider_C_InpActEvt_Jump_K2Node_InputActionEvent_104_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.InpActEvt_Run_K2Node_InputActionEvent_103
	 */
	struct ABuff_Glider_C_InpActEvt_Run_K2Node_InputActionEvent_103_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.InpActEvt_Run_K2Node_InputActionEvent_102
	 */
	struct ABuff_Glider_C_InpActEvt_Run_K2Node_InputActionEvent_102_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.InpActEvt_RunToggle_K2Node_InputActionEvent_101
	 */
	struct ABuff_Glider_C_InpActEvt_RunToggle_K2Node_InputActionEvent_101_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_45
	 */
	struct ABuff_Glider_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_45_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.Server_RequestSetThrusterState
	 */
	struct ABuff_Glider_C_Server_RequestSetThrusterState_Params
	{
	public:
		E_GliderStates                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ReceiveBeginPlay
	 */
	struct ABuff_Glider_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.Multi_GlideStart
	 */
	struct ABuff_Glider_C_Multi_GlideStart_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      newGlideMult;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.Client_SyncGlidingVars
	 */
	struct ABuff_Glider_C_Client_SyncGlidingVars_Params
	{
	public:
		struct FVector                                             NewVelocity;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            NewRotation;                                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.OnPlayerCapsuleHit
	 */
	struct ABuff_Glider_C_OnPlayerCapsuleHit_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZOFD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.InitGlider
	 */
	struct ABuff_Glider_C_InitGlider_Params
	{	};

	/**
	 * Function Buff_Glider.Buff_Glider_C.ExecuteUbergraph_Buff_Glider
	 */
	struct ABuff_Glider_C_ExecuteUbergraph_Buff_Glider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
