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
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.BPOnAnimPlayedNotify
	 */
	struct AChalico_Character_BP_C_BPOnAnimPlayedNotify_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InPlayRate;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicate;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicateToOwner;                                       // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseAndServerUpdateMesh;                       // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseOnServer;                                  // 0x0017(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.BlueprintCanAttack
	 */
	struct AChalico_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7XCE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.CheckForNewBiome
	 */
	struct AChalico_Character_BP_C_CheckForNewBiome_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.SelectMudMesh
	 */
	struct AChalico_Character_BP_C_SelectMudMesh_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.HasConflictWithAI
	 */
	struct AChalico_Character_BP_C_HasConflictWithAI_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.CanLookForChalicos
	 */
	struct AChalico_Character_BP_C_CanLookForChalicos_Params
	{
	public:
		bool                                                       canLook;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.DeactivateThrowMode
	 */
	struct AChalico_Character_BP_C_DeactivateThrowMode_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.ReactToMudHit
	 */
	struct AChalico_Character_BP_C_ReactToMudHit_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.Is FriendlyTarget in Range
	 */
	struct AChalico_Character_BP_C_IsFriendlyTargetinRange_Params
	{
	public:
		class AActor*                                              mudTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canUseMud;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.CanThrowMud
	 */
	struct AChalico_Character_BP_C_CanThrowMud_Params
	{
	public:
		class AActor*                                              mudTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canThrow;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S1L3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.CanStandUp
	 */
	struct AChalico_Character_BP_C_CanStandUp_Params
	{
	public:
		bool                                                       canStand;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.BPPreventRiding
	 */
	struct AChalico_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AChalico_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.BPTryMultiUse
	 */
	struct AChalico_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.ShouldStandUp
	 */
	struct AChalico_Character_BP_C_ShouldStandUp_Params
	{
	public:
		bool                                                       StandUp;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.BPTimerServer
	 */
	struct AChalico_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.CanSitDown
	 */
	struct AChalico_Character_BP_C_CanSitDown_Params
	{
	public:
		bool                                                       canSit;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.Look for Chalicos
	 */
	struct AChalico_Character_BP_C_LookforChalicos_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.UserConstructionScript
	 */
	struct AChalico_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AChalico_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.StandUp
	 */
	struct AChalico_Character_BP_C_StandUp_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.TrySittingDown
	 */
	struct AChalico_Character_BP_C_TrySittingDown_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.TryStandingUp
	 */
	struct AChalico_Character_BP_C_TryStandingUp_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.SetChalicoFocus
	 */
	struct AChalico_Character_BP_C_SetChalicoFocus_Params
	{
	public:
		class AActor*                                              NewFocus;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.ClearChalicoFocus
	 */
	struct AChalico_Character_BP_C_ClearChalicoFocus_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.StartMudThrow
	 */
	struct AChalico_Character_BP_C_StartMudThrow_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.CloseRetaliation
	 */
	struct AChalico_Character_BP_C_CloseRetaliation_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.TryThrowMud
	 */
	struct AChalico_Character_BP_C_TryThrowMud_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.OnSittingEvent
	 */
	struct AChalico_Character_BP_C_OnSittingEvent_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.OnThrowMudEvent
	 */
	struct AChalico_Character_BP_C_OnThrowMudEvent_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.ReceiveBeginPlay
	 */
	struct AChalico_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.BPUnstasis
	 */
	struct AChalico_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.SitDown
	 */
	struct AChalico_Character_BP_C_SitDown_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.QuickLoadSitState
	 */
	struct AChalico_Character_BP_C_QuickLoadSitState_Params
	{	};

	/**
	 * Function Chalico_Character_BP.Chalico_Character_BP_C.ExecuteUbergraph_Chalico_Character_BP
	 */
	struct AChalico_Character_BP_C_ExecuteUbergraph_Chalico_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
