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
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnJumped
	 */
	struct AIguanodon_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.CanJumpInternal
	 */
	struct AIguanodon_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetAddForwardVelocityOnJump
	 */
	struct AIguanodon_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnRep_bIsBiped
	 */
	struct AIguanodon_Character_BP_C_OnRep_bIsBiped_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ToggleStance
	 */
	struct AIguanodon_Character_BP_C_ToggleStance_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTimerServer
	 */
	struct AIguanodon_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AIguanodon_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.StartChangingStance
	 */
	struct AIguanodon_Character_BP_C_StartChangingStance_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Get Correct Stance Switch Anim
	 */
	struct AIguanodon_Character_BP_C_GetCorrectStanceSwitchAnim_Params
	{
	public:
		class UAnimMontage*                                        animRef;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPUnstasis
	 */
	struct AIguanodon_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.InitIguanodon
	 */
	struct AIguanodon_Character_BP_C_InitIguanodon_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.NetSetHasFruitInInventory
	 */
	struct AIguanodon_Character_BP_C_NetSetHasFruitInInventory_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Update Move SpeedByStance
	 */
	struct AIguanodon_Character_BP_C_UpdateMoveSpeedByStance_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateStance
	 */
	struct AIguanodon_Character_BP_C_UpdateStance_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateHasFruitInInventory
	 */
	struct AIguanodon_Character_BP_C_UpdateHasFruitInInventory_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTryMultiUse
	 */
	struct AIguanodon_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AIguanodon_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ConvertFruitToSeeds
	 */
	struct AIguanodon_Character_BP_C_ConvertFruitToSeeds_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPNotifySetRider
	 */
	struct AIguanodon_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Net SetCurrentStance
	 */
	struct AIguanodon_Character_BP_C_NetSetCurrentStance_Params
	{
	public:
		bool                                                       isBiped;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPDoAttack
	 */
	struct AIguanodon_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SetUseStamina
	 */
	struct AIguanodon_Character_BP_C_SetUseStamina_Params
	{
	public:
		bool                                                       newUse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZKSK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveAnyDamage
	 */
	struct AIguanodon_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L4IP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AIguanodon_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ClientSetBipedState
	 */
	struct AIguanodon_Character_BP_C_ClientSetBipedState_Params
	{
	public:
		bool                                                       isBiped;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.GetDefaultDino
	 */
	struct AIguanodon_Character_BP_C_GetDefaultDino_Params
	{
	public:
		class AIguanodon_Character_BP_C*                           ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UserConstructionScript
	 */
	struct AIguanodon_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Server_SetWantsToSwitchStance
	 */
	struct AIguanodon_Character_BP_C_Server_SetWantsToSwitchStance_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SwitchStanceAfterDelay
	 */
	struct AIguanodon_Character_BP_C_SwitchStanceAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveBeginPlay
	 */
	struct AIguanodon_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ExecuteUbergraph_Iguanodon_Character_BP
	 */
	struct AIguanodon_Character_BP_C_ExecuteUbergraph_Iguanodon_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
