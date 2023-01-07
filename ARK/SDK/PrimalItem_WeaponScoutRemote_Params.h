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
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.GetScoutStats
	 */
	struct UPrimalItem_WeaponScoutRemote_C_GetScoutStats_Params
	{
	public:
		TArray<float>                                              Stats;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemIcon
	 */
	struct UPrimalItem_WeaponScoutRemote_C_BPGetItemIcon_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemName
	 */
	struct UPrimalItem_WeaponScoutRemote_C_BPGetItemName_Params
	{
	public:
		class FString                                              ItemNameIn;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.SetScoutCharacterStatusValues
	 */
	struct UPrimalItem_WeaponScoutRemote_C_SetScoutCharacterStatusValues_Params
	{
	public:
		TArray<float>                                              Stats;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.OnRep_ScoutStats
	 */
	struct UPrimalItem_WeaponScoutRemote_C_OnRep_ScoutStats_Params
	{	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemDescription
	 */
	struct UPrimalItem_WeaponScoutRemote_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8EEA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutPossessedBySurvivor
	 */
	struct UPrimalItem_WeaponScoutRemote_C_ScoutPossessedBySurvivor_Params
	{	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutReleasedPossessingSurvivor
	 */
	struct UPrimalItem_WeaponScoutRemote_C_ScoutReleasedPossessingSurvivor_Params
	{	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintUnequipped
	 */
	struct UPrimalItem_WeaponScoutRemote_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.Can FireWeapon
	 */
	struct UPrimalItem_WeaponScoutRemote_C_CanFireWeapon_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EScoutRemoteReturnCode                                     FailReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X5JS[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintEquipped
	 */
	struct UPrimalItem_WeaponScoutRemote_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ExecuteUbergraph_PrimalItem_WeaponScoutRemote
	 */
	struct UPrimalItem_WeaponScoutRemote_C_ExecuteUbergraph_PrimalItem_WeaponScoutRemote_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
