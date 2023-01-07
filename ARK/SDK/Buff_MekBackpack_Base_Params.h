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
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnSyncColorization
	 */
	struct ABuff_MekBackpack_Base_C_OnSyncColorization_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifySetRider
	 */
	struct ABuff_MekBackpack_Base_C_NotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.RestoreBackpackSaveData
	 */
	struct ABuff_MekBackpack_Base_C_RestoreBackpackSaveData_Params
	{
	public:
		struct FMekBackpackData                                    SaveData;                                                // 0x0000(0x0058)  (Parm)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetBackpackSaveData
	 */
	struct ABuff_MekBackpack_Base_C_GetBackpackSaveData_Params
	{
	public:
		struct FMekBackpackData                                    Data;                                                    // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyInventoryChange
	 */
	struct ABuff_MekBackpack_Base_C_NotifyInventoryChange_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ItemAdded;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ItemEquipped;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPActivated
	 */
	struct ABuff_MekBackpack_Base_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.SetBackpackMalfunctioned
	 */
	struct ABuff_MekBackpack_Base_C_SetBackpackMalfunctioned_Params
	{
	public:
		bool                                                       IsBackpackDisabled;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyActivateBackpack
	 */
	struct ABuff_MekBackpack_Base_C_NotifyActivateBackpack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OverrideTurnInPlaceSpeed
	 */
	struct ABuff_MekBackpack_Base_C_OverrideTurnInPlaceSpeed_Params
	{
	public:
		float                                                      DefaultSpeed;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewSpeed;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopAttack
	 */
	struct ABuff_MekBackpack_Base_C_NotifyStopAttack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartAttack
	 */
	struct ABuff_MekBackpack_Base_C_NotifyStartAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowHurtAnim
	 */
	struct ABuff_MekBackpack_Base_C_AllowHurtAnim_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowTargeting
	 */
	struct ABuff_MekBackpack_Base_C_AllowTargeting_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopHover
	 */
	struct ABuff_MekBackpack_Base_C_NotifyStopHover_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartHover
	 */
	struct ABuff_MekBackpack_Base_C_NotifyStartHover_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekHover
	 */
	struct ABuff_MekBackpack_Base_C_AllowMekHover_Params
	{
	public:
		bool                                                       CanHover;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopTargeting
	 */
	struct ABuff_MekBackpack_Base_C_NotifyStopTargeting_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartTargeting
	 */
	struct ABuff_MekBackpack_Base_C_NotifyStartTargeting_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnAnimNotifyEvent
	 */
	struct ABuff_MekBackpack_Base_C_OnAnimNotifyEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekPistol
	 */
	struct ABuff_MekBackpack_Base_C_AllowMekPistol_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekSword
	 */
	struct ABuff_MekBackpack_Base_C_AllowMekSword_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackAttack
	 */
	struct ABuff_MekBackpack_Base_C_OnBackpackAttack_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPDeactivated
	 */
	struct ABuff_MekBackpack_Base_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetMek
	 */
	struct ABuff_MekBackpack_Base_C_GetMek_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XFOJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMek_Character_BP_C*                                 MekChar;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.IsBackpackActive
	 */
	struct ABuff_MekBackpack_Base_C_IsBackpackActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanDeactivateBackpack
	 */
	struct ABuff_MekBackpack_Base_C_CanDeactivateBackpack_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanActivateBackpack
	 */
	struct ABuff_MekBackpack_Base_C_CanActivateBackpack_Params
	{
	public:
		bool                                                       CanActivate;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P2ZE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FailureMessage;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackDeactivated
	 */
	struct ABuff_MekBackpack_Base_C_OnBackpackDeactivated_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackActivated
	 */
	struct ABuff_MekBackpack_Base_C_OnBackpackActivated_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.UserConstructionScript
	 */
	struct ABuff_MekBackpack_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.ExecuteUbergraph_Buff_MekBackpack_Base
	 */
	struct ABuff_MekBackpack_Base_C_ExecuteUbergraph_Buff_MekBackpack_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
