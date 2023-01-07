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
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyAmmoBoxReloadedStructure
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPNotifyAmmoBoxReloadedStructure_Params
	{
	public:
		class APrimalStructure*                                    ReloadedStructure;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.OnRep_bVisualRadiusIsActive
	 */
	struct AStructure_AmmoContainerBaseBP_C_OnRep_bVisualRadiusIsActive_Params
	{	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseEntries
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPClientDoMultiUse
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FWRH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseCenterText
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPGetMultiUseCenterText_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CDL6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutCenterText;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FLinearColor                                        OutCenterTextColor;                                      // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_04GC[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPTryMultiUse
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetAmmoBoxReloadPercent
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPGetAmmoBoxReloadPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyInventoryItemChange
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G61S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoTypeVisuals
	 */
	struct AStructure_AmmoContainerBaseBP_C_UpdateAmmoTypeVisuals_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.CheckNearbyPlayers
	 */
	struct AStructure_AmmoContainerBaseBP_C_CheckNearbyPlayers_Params
	{	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPOverrideCantBuildReasonString
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPOverrideCantBuildReasonString_Params
	{
	public:
		int32_t                                                    CantBuildReason;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9RNI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPIsAllowedToBuild
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoChanges
	 */
	struct AStructure_AmmoContainerBaseBP_C_UpdateAmmoChanges_Params
	{	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ChangeInAmmo
	 */
	struct AStructure_AmmoContainerBaseBP_C_ChangeInAmmo_Params
	{
	public:
		int32_t                                                    NumChange;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetQuantityOfItemWithoutCheckingInventory
	 */
	struct AStructure_AmmoContainerBaseBP_C_BPGetQuantityOfItemWithoutCheckingInventory_Params
	{
	public:
		class UClass*                                              ItemToCheckFor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UserConstructionScript
	 */
	struct AStructure_AmmoContainerBaseBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ReceiveBeginPlay
	 */
	struct AStructure_AmmoContainerBaseBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multicast_UpdateAmmoVisuals
	 */
	struct AStructure_AmmoContainerBaseBP_C_Multicast_UpdateAmmoVisuals_Params
	{	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.FullRecheckInventory
	 */
	struct AStructure_AmmoContainerBaseBP_C_FullRecheckInventory_Params
	{	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multi_PlayReloadParticle
	 */
	struct AStructure_AmmoContainerBaseBP_C_Multi_PlayReloadParticle_Params
	{
	public:
		class APrimalStructure*                                    ReloadedStructure;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.PlayReloadParticle
	 */
	struct AStructure_AmmoContainerBaseBP_C_PlayReloadParticle_Params
	{
	public:
		class APrimalStructure*                                    ReloadedStructure;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ExecuteUbergraph_Structure_AmmoContainerBaseBP
	 */
	struct AStructure_AmmoContainerBaseBP_C_ExecuteUbergraph_Structure_AmmoContainerBaseBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
