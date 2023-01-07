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
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemName
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BPGetItemName_Params
	{
	public:
		class FString                                              ItemNameIn;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BlueprintEquipped
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9E67[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPSetupHUDIconMaterial
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BPSetupHUDIconMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            theMID;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.Get XPRequired for PreviousLevel
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_GetXPRequiredforPreviousLevel_Params
	{
	public:
		float                                                      XPOut;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.GetXPRequiredForNextLevel
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_GetXPRequiredForNextLevel_Params
	{
	public:
		float                                                      XPOut;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDurabilityPercentage
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BPGetItemDurabilityPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPClientHandleItemNetExecCommand
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BPClientHandleItemNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.RefreshLevelData
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_RefreshLevelData_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.AddXP
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_AddXP_Params
	{
	public:
		float                                                      XPAmount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y21T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    forChar;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPEquippedItemOnXPEarning
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BPEquippedItemOnXPEarning_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      howMuchXP;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EXPType                                                    TheXPType;                                               // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPInitFromItemNetInfo
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BPInitFromItemNetInfo_Params
	{	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDescription
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PEDG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPAddedAttachments
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_BPAddedAttachments_Params
	{	};

	/**
	 * Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base
	 */
	struct UPrimalItemSkin_ChibiDino_Base_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
