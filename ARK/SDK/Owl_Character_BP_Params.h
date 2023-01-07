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
	 * Function Owl_Character_BP.Owl_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AOwl_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z0CC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.BPOnStartJump
	 */
	struct AOwl_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.RidingTick
	 */
	struct AOwl_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AOwl_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.IsOnOrNearGround
	 */
	struct AOwl_Character_BP_C_IsOnOrNearGround_Params
	{
	public:
		bool                                                       returnvalue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M6C2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.SetupIceCrashState
	 */
	struct AOwl_Character_BP_C_SetupIceCrashState_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ApplyOneShotEncapsulate;                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6T6C[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CalculatedImpactRadius;                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.GetPredatorVisionStaminaDrainPerSecond
	 */
	struct AOwl_Character_BP_C_GetPredatorVisionStaminaDrainPerSecond_Params
	{
	public:
		float                                                      returnvalue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XHEX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.StopEncapsulateAnims
	 */
	struct AOwl_Character_BP_C_StopEncapsulateAnims_Params
	{
	public:
		bool                                                       StoppedAnim;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.DiveBomb
	 */
	struct AOwl_Character_BP_C_DiveBomb_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.DoIceBombAttack
	 */
	struct AOwl_Character_BP_C_DoIceBombAttack_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.OnDiveCrash
	 */
	struct AOwl_Character_BP_C_OnDiveCrash_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     HitComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          HitResult;                                               // 0x0010(0x0088)  (Parm)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingTrailParticles
	 */
	struct AOwl_Character_BP_C_UpdateDivingTrailParticles_Params
	{
	public:
		class UParticleSystemComponent*                            Particles;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Enabled;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingFX
	 */
	struct AOwl_Character_BP_C_UpdateDivingFX_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.GetEncapsulateStaminaDrainPerSecond
	 */
	struct AOwl_Character_BP_C_GetEncapsulateStaminaDrainPerSecond_Params
	{
	public:
		float                                                      returnvalue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2RFT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.BPOnStaminaDrained
	 */
	struct AOwl_Character_BP_C_BPOnStaminaDrained_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AOwl_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AOwl_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.SetupEncapsulateState
	 */
	struct AOwl_Character_BP_C_SetupEncapsulateState_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1XK1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.BP_PreventMovementMode
	 */
	struct AOwl_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.IsPredatorVisionEnabled
	 */
	struct AOwl_Character_BP_C_IsPredatorVisionEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.RemovePredatorVisionBuff
	 */
	struct AOwl_Character_BP_C_RemovePredatorVisionBuff_Params
	{
	public:
		class AShooterCharacter*                                   Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.SetupPredatorVisionBuff
	 */
	struct AOwl_Character_BP_C_SetupPredatorVisionBuff_Params
	{
	public:
		class AShooterCharacter*                                   Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AOwl_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.BPNotifyClearRider
	 */
	struct AOwl_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.UserConstructionScript
	 */
	struct AOwl_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestPredatorVision
	 */
	struct AOwl_Character_BP_C_ServerRequestPredatorVision_Params
	{
	public:
		bool                                                       SetEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.ClientDoPredatorVision
	 */
	struct AOwl_Character_BP_C_ClientDoPredatorVision_Params
	{
	public:
		bool                                                       SetEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStartEncapsulate
	 */
	struct AOwl_Character_BP_C_ServerRequestStartEncapsulate_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.MulticastStartEncapsulate
	 */
	struct AOwl_Character_BP_C_MulticastStartEncapsulate_Params
	{
	public:
		bool                                                       FromIceCrash;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.MulticastStopEncapsulate
	 */
	struct AOwl_Character_BP_C_MulticastStopEncapsulate_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStopEncapsulate
	 */
	struct AOwl_Character_BP_C_ServerRequestStopEncapsulate_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.Start Encapsulate
	 */
	struct AOwl_Character_BP_C_StartEncapsulate_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.Stop Encapsulate
	 */
	struct AOwl_Character_BP_C_StopEncapsulate_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_EncapsulateStart
	 */
	struct AOwl_Character_BP_C_OnAnimCustomEvent_EncapsulateStart_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.MulticastOnIceBombImpact
	 */
	struct AOwl_Character_BP_C_MulticastOnIceBombImpact_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.OnIceCrashHit
	 */
	struct AOwl_Character_BP_C_OnIceCrashHit_Params
	{
	public:
		bool                                                       HitValidTarget;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitWater;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.StartIceCrash
	 */
	struct AOwl_Character_BP_C_StartIceCrash_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_IceCrashStart
	 */
	struct AOwl_Character_BP_C_OnAnimCustomEvent_IceCrashStart_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestCancelIceCrash
	 */
	struct AOwl_Character_BP_C_ServerRequestCancelIceCrash_Params
	{	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.MulticastIceCrashHit
	 */
	struct AOwl_Character_BP_C_MulticastIceCrashHit_Params
	{
	public:
		float                                                      EffectRadius;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.ServerSetTargeting
	 */
	struct AOwl_Character_BP_C_ServerSetTargeting_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Owl_Character_BP.Owl_Character_BP_C.ExecuteUbergraph_Owl_Character_BP
	 */
	struct AOwl_Character_BP_C_ExecuteUbergraph_Owl_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
