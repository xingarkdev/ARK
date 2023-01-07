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
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPDoAttack
	 */
	struct Acamelsaurus_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.GetCanDrink
	 */
	struct Acamelsaurus_Character_BP_C_GetCanDrink_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3JN6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPCharacterUnsleeped
	 */
	struct Acamelsaurus_Character_BP_C_BPCharacterUnsleeped_Params
	{	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPCharacterSleeped
	 */
	struct Acamelsaurus_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.PlayDrinkAnim
	 */
	struct Acamelsaurus_Character_BP_C_PlayDrinkAnim_Params
	{	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPTimerServer
	 */
	struct Acamelsaurus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.HasMaxWater
	 */
	struct Acamelsaurus_Character_BP_C_HasMaxWater_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.IsAWaterItem
	 */
	struct Acamelsaurus_Character_BP_C_IsAWaterItem_Params
	{
	public:
		class UObject*                                             PrimalItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPInventoryItemUsed
	 */
	struct Acamelsaurus_Character_BP_C_BPInventoryItemUsed_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPForceAllowsInventoryUse
	 */
	struct Acamelsaurus_Character_BP_C_BPForceAllowsInventoryUse_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.RefreshWater
	 */
	struct Acamelsaurus_Character_BP_C_RefreshWater_Params
	{	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct Acamelsaurus_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.RefreshOpenToSky
	 */
	struct Acamelsaurus_Character_BP_C_RefreshOpenToSky_Params
	{	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.AddWater
	 */
	struct Acamelsaurus_Character_BP_C_AddWater_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewWaterAmount;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPTryMultiUse
	 */
	struct Acamelsaurus_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPGetMultiUseEntries
	 */
	struct Acamelsaurus_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.UserConstructionScript
	 */
	struct Acamelsaurus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.ReceiveBeginPlay
	 */
	struct Acamelsaurus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.ExecuteUbergraph_camelsaurus_Character_BP
	 */
	struct Acamelsaurus_Character_BP_C_ExecuteUbergraph_camelsaurus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
