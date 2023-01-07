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
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetBackpackSaveData
	 */
	struct ABuff_MekBackpack_MissilePod_C_GetBackpackSaveData_Params
	{
	public:
		struct FMekBackpackData                                    Data;                                                    // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.RestoreBackpackSaveData
	 */
	struct ABuff_MekBackpack_MissilePod_C_RestoreBackpackSaveData_Params
	{
	public:
		struct FMekBackpackData                                    SaveData;                                                // 0x0000(0x0058)  (Parm)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyInventoryChange
	 */
	struct ABuff_MekBackpack_MissilePod_C_NotifyInventoryChange_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ItemAdded;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ItemEquipped;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetHUDProgressBarPercent
	 */
	struct ABuff_MekBackpack_MissilePod_C_GetHUDProgressBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U9JX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPActivated
	 */
	struct ABuff_MekBackpack_MissilePod_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnRep_MissilePodMalfunctioned
	 */
	struct ABuff_MekBackpack_MissilePod_C_OnRep_MissilePodMalfunctioned_Params
	{	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_MekBackpack_MissilePod_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.TryUseAmmo
	 */
	struct ABuff_MekBackpack_MissilePod_C_TryUseAmmo_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CNXL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetCurrentAmmo
	 */
	struct ABuff_MekBackpack_MissilePod_C_GetCurrentAmmo_Params
	{
	public:
		int32_t                                                    AmmoQuantity;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetFireDirection
	 */
	struct ABuff_MekBackpack_MissilePod_C_GetFireDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.AllowMekHover
	 */
	struct ABuff_MekBackpack_MissilePod_C_AllowMekHover_Params
	{
	public:
		bool                                                       CanHover;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BuffTickClient
	 */
	struct ABuff_MekBackpack_MissilePod_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.IsBackpackActive
	 */
	struct ABuff_MekBackpack_MissilePod_C_IsBackpackActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.UserConstructionScript
	 */
	struct ABuff_MekBackpack_MissilePod_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStartTargeting
	 */
	struct ABuff_MekBackpack_MissilePod_C_NotifyStartTargeting_Params
	{	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStopTargeting
	 */
	struct ABuff_MekBackpack_MissilePod_C_NotifyStopTargeting_Params
	{	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ServerRequestAttack
	 */
	struct ABuff_MekBackpack_MissilePod_C_ServerRequestAttack_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyActivateBackpack
	 */
	struct ABuff_MekBackpack_MissilePod_C_NotifyActivateBackpack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnAnimNotifyEvent
	 */
	struct ABuff_MekBackpack_MissilePod_C_OnAnimNotifyEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SetBackpackMalfunctioned
	 */
	struct ABuff_MekBackpack_MissilePod_C_SetBackpackMalfunctioned_Params
	{
	public:
		bool                                                       IsBackpackDisabled;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.MultiUpdateAmmoQuantity
	 */
	struct ABuff_MekBackpack_MissilePod_C_MultiUpdateAmmoQuantity_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SyncClientAmmo
	 */
	struct ABuff_MekBackpack_MissilePod_C_SyncClientAmmo_Params
	{	};

	/**
	 * Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ExecuteUbergraph_Buff_MekBackpack_MissilePod
	 */
	struct ABuff_MekBackpack_MissilePod_C_ExecuteUbergraph_Buff_MekBackpack_MissilePod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
