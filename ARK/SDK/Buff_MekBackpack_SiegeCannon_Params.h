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
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPAdjustImpulseFromDamage
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_BPAdjustImpulseFromDamage_Params
	{
	public:
		struct FVector                                             DesiredImpulse;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DamageTaken;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0010(0x0020)  (Parm)
		class APawn*                                               PawnInstigator;                                          // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6OXS[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0048(0x0088)  (Parm)
		struct FVector                                             ReturnValue;                                             // 0x00D0(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickServer
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventInstigatorMovementMode
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_BPPreventInstigatorMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffAdjustDamage
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T57T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9SN5[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifySetRider
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_NotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetFireAnim
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_GetFireAnim_Params
	{
	public:
		struct FVector                                             FireDirection;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             MekForwardDirection;                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimMontage*                                        ResultAnim;                                              // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPInstigatorPossessed
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_BPInstigatorPossessed_Params
	{
	public:
		class AController*                                         ByController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetBackpackSaveData
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_GetBackpackSaveData_Params
	{
	public:
		struct FMekBackpackData                                    Data;                                                    // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.RestoreBackpackSaveData
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_RestoreBackpackSaveData_Params
	{
	public:
		struct FMekBackpackData                                    SaveData;                                                // 0x0000(0x0058)  (Parm)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_PreventSword
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_OnRep_PreventSword_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyInventoryChange
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_NotifyInventoryChange_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ItemAdded;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ItemEquipped;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J00G[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPActivated
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_SiegeCannonMalfunctioned
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_OnRep_SiegeCannonMalfunctioned_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SubtractAmmo
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_SubtractAmmo_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetCurrentAmmo
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_GetCurrentAmmo_Params
	{
	public:
		int32_t                                                    AmmoAmount;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPGetHUDElements
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OverrideTurnInPlaceSpeed
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_OverrideTurnInPlaceSpeed_Params
	{
	public:
		float                                                      DefaultSpeed;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewSpeed;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowHurtAnim
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_AllowHurtAnim_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.PreventJump
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_PreventJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowTargeting
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_AllowTargeting_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventFirstPerson
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekHover
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_AllowMekHover_Params
	{
	public:
		bool                                                       CanHover;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekSword
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_AllowMekSword_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekPistol
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_AllowMekPistol_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetLaunchParams
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_GetLaunchParams_Params
	{
	public:
		class AMek_Character_BP_C*                                 Mek;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Speed;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickClient
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_InSiegeMode
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_OnRep_InSiegeMode_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanDeactivateBackpack
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_CanDeactivateBackpack_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanActivateBackpack
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_CanActivateBackpack_Params
	{
	public:
		bool                                                       CanActivate;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B5E6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FailureMessage;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.IsBackpackActive
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_IsBackpackActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.UserConstructionScript
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackActivated
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_OnBackpackActivated_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackDeactivated
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_OnBackpackDeactivated_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiSiegeModeStateChanged
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_MultiSiegeModeStateChanged_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnAnimNotifyEvent
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_OnAnimNotifyEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerUpdateFireOrientation
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_ServerUpdateFireOrientation_Params
	{
	public:
		struct FVector                                             FireLoc;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             FireDir;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStopAttack
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_NotifyStopAttack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStartChargingAttack
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_ServerRequestStartChargingAttack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.DoAttack
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_DoAttack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStopChargingAttack
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_ServerRequestStopChargingAttack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiAttackComplete
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_MultiAttackComplete_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStartChargingAttack
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_MultiStartChargingAttack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStopChargingAttack
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_MultiStopChargingAttack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStartAttack
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_NotifyStartAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SetBackpackMalfunctioned
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_SetBackpackMalfunctioned_Params
	{
	public:
		bool                                                       IsBackpackDisabled;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiUpdateAmmoQuantity
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_MultiUpdateAmmoQuantity_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SyncClientAmmo
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_SyncClientAmmo_Params
	{	};

	/**
	 * Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ExecuteUbergraph_Buff_MekBackpack_SiegeCannon
	 */
	struct ABuff_MekBackpack_SiegeCannon_C_ExecuteUbergraph_Buff_MekBackpack_SiegeCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
