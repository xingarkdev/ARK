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
	 * Function StructureMinigunBP.StructureMinigunBP_C.GetHudData
	 */
	struct AStructureMinigunBP_C_GetHudData_Params
	{
	public:
		class UPrimalInventoryComponent*                           InventoryComponent;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              CurrentAmmoItemTemplate;                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UClass*>                                      AmmoItemTemplates;                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    LowAmmoWarningAmount;                                    // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ADD7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPGetDamageMultiplier
	 */
	struct AStructureMinigunBP_C_BPGetDamageMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.UpdateItemStats
	 */
	struct AStructureMinigunBP_C_UpdateItemStats_Params
	{
	public:
		class UPrimalItem*                                         newItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPOverrideCantBuildReasonString
	 */
	struct AStructureMinigunBP_C_BPOverrideCantBuildReasonString_Params
	{
	public:
		int32_t                                                    CantBuildReason;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JD7K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPIsAllowedToBuild
	 */
	struct AStructureMinigunBP_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.Update Spin Sounds
	 */
	struct AStructureMinigunBP_C_UpdateSpinSounds_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPPlacedStructure
	 */
	struct AStructureMinigunBP_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPSetPlayerConstructor
	 */
	struct AStructureMinigunBP_C_BPSetPlayerConstructor_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.PlacementInitialization
	 */
	struct AStructureMinigunBP_C_PlacementInitialization_Params
	{
	public:
		class AShooterWeapon*                                      constructorWeapon;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3WU4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.PlacementTickActions
	 */
	struct AStructureMinigunBP_C_PlacementTickActions_Params
	{
	public:
		bool                                                       ReachedDestination;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T8H9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.UpdateCustomItemData
	 */
	struct AStructureMinigunBP_C_UpdateCustomItemData_Params
	{
	public:
		class UPrimalItem*                                         self2;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.UpdateMaterials
	 */
	struct AStructureMinigunBP_C_UpdateMaterials_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPFiredWeapon
	 */
	struct AStructureMinigunBP_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPSeatedPlayer
	 */
	struct AStructureMinigunBP_C_BPSeatedPlayer_Params
	{
	public:
		class AShooterCharacter*                                   SeatedChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AtSeatNumber;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QLY8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.SwitchMinigunTPVCameraView
	 */
	struct AStructureMinigunBP_C_SwitchMinigunTPVCameraView_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.Is First Person View
	 */
	struct AStructureMinigunBP_C_IsFirstPersonView_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RZTJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.Is Client or SinglePlayer
	 */
	struct AStructureMinigunBP_C_IsClientorSinglePlayer_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPGetInfoFromConsumedItemForPlacedStructure
	 */
	struct AStructureMinigunBP_C_BPGetInfoFromConsumedItemForPlacedStructure_Params
	{
	public:
		class UPrimalItem*                                         ItemToConsumed;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPReleasedPlayer
	 */
	struct AStructureMinigunBP_C_BPReleasedPlayer_Params
	{
	public:
		class AShooterCharacter*                                   ReleasedChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AtSeatNumber;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPCanFire
	 */
	struct AStructureMinigunBP_C_BPCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPGetMultiUseEntries
	 */
	struct AStructureMinigunBP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPTryMultiUse
	 */
	struct AStructureMinigunBP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BSP8[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.UserConstructionScript
	 */
	struct AStructureMinigunBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.ReceiveTick
	 */
	struct AStructureMinigunBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.TickSpinSpeed
	 */
	struct AStructureMinigunBP_C_TickSpinSpeed_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.BPApplyCustomDurabilityOnPickup
	 */
	struct AStructureMinigunBP_C_BPApplyCustomDurabilityOnPickup_Params
	{
	public:
		class UPrimalItem*                                         PickedUp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.TickTPV
	 */
	struct AStructureMinigunBP_C_TickTPV_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.ReceiveBeginPlay
	 */
	struct AStructureMinigunBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.TickOverheat
	 */
	struct AStructureMinigunBP_C_TickOverheat_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.Multi_AttachSocket
	 */
	struct AStructureMinigunBP_C_Multi_AttachSocket_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.Multi_DetachCable
	 */
	struct AStructureMinigunBP_C_Multi_DetachCable_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.CableMat
	 */
	struct AStructureMinigunBP_C_CableMat_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.StartPlacement_Multicast
	 */
	struct AStructureMinigunBP_C_StartPlacement_Multicast_Params
	{
	public:
		class AShooterCharacter*                                   constructor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.PlacementAnimationTickEvent
	 */
	struct AStructureMinigunBP_C_PlacementAnimationTickEvent_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.NetOnOverheated
	 */
	struct AStructureMinigunBP_C_NetOnOverheated_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.StartShellLoop
	 */
	struct AStructureMinigunBP_C_StartShellLoop_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.StopShellLoop
	 */
	struct AStructureMinigunBP_C_StopShellLoop_Params
	{	};

	/**
	 * Function StructureMinigunBP.StructureMinigunBP_C.ExecuteUbergraph_StructureMinigunBP
	 */
	struct AStructureMinigunBP_C_ExecuteUbergraph_StructureMinigunBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
