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
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestDamage
	 */
	struct ADaeodon_Character_BP_C_BPModifyHarvestDamage_Params
	{
	public:
		class UPrimalHarvestingComponent*                          harvestComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inDamage;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.IsAlly
	 */
	struct ADaeodon_Character_BP_C_IsAlly_Params
	{
	public:
		int32_t                                                    otherTargetingTeam;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSameTeamOrAlly;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G6RN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.TryTrigger Attack
	 */
	struct ADaeodon_Character_BP_C_TryTriggerAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.ReceiveAnyDamage
	 */
	struct ADaeodon_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V2A3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.SendNetExecCommandToCharacter
	 */
	struct ADaeodon_Character_BP_C_SendNetExecCommandToCharacter_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.ShowHUDNotification
	 */
	struct ADaeodon_Character_BP_C_ShowHUDNotification_Params
	{
	public:
		struct FStatusValueModifierDescription                     notificationDescription;                                 // 0x0000(0x0050)  (Parm)
		class APlayerController*                                   PlayerController;                                        // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPClientHandleNetExecCommand
	 */
	struct ADaeodon_Character_BP_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPNotifySetRider
	 */
	struct ADaeodon_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.EnablePassiveHealing
	 */
	struct ADaeodon_Character_BP_C_EnablePassiveHealing_Params
	{	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.DisablePassiveHealing
	 */
	struct ADaeodon_Character_BP_C_DisablePassiveHealing_Params
	{	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPNotifyClearRider
	 */
	struct ADaeodon_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.Trigger Healing
	 */
	struct ADaeodon_Character_BP_C_TriggerHealing_Params
	{
	public:
		int32_t                                                    BuffClass;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isShortHealing;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.DisableActiveHealing
	 */
	struct ADaeodon_Character_BP_C_DisableActiveHealing_Params
	{	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.ToggleActiveHealing
	 */
	struct ADaeodon_Character_BP_C_ToggleActiveHealing_Params
	{	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintCanAttack
	 */
	struct ADaeodon_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_57BE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPTimerServer
	 */
	struct ADaeodon_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ADaeodon_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.Toggle Passive Healing
	 */
	struct ADaeodon_Character_BP_C_TogglePassiveHealing_Params
	{	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ADaeodon_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPTryMultiUse
	 */
	struct ADaeodon_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.OnJumped
	 */
	struct ADaeodon_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ADaeodon_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ADaeodon_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPDoAttack
	 */
	struct ADaeodon_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct ADaeodon_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2BSA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z6AD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestingWeightsArray
	 */
	struct ADaeodon_Character_BP_C_BPModifyHarvestingWeightsArray_Params
	{
	public:
		TArray<float>                                              resourceWeightsIn;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UPrimalItem*>                                 resourceItems;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              resourceWeightsOut;                                      // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.UserConstructionScript
	 */
	struct ADaeodon_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.MovementChangedEvent
	 */
	struct ADaeodon_Character_BP_C_MovementChangedEvent_Params
	{	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ADaeodon_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Daeodon_Character_BP.Daeodon_Character_BP_C.ExecuteUbergraph_Daeodon_Character_BP
	 */
	struct ADaeodon_Character_BP_C_ExecuteUbergraph_Daeodon_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
