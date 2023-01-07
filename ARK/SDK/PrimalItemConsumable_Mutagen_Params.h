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
	 * Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPPreUseItem
	 */
	struct UPrimalItemConsumable_Mutagen_C_BPPreUseItem_Params
	{	};

	/**
	 * Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPServerHandleItemNetExecCommand
	 */
	struct UPrimalItemConsumable_Mutagen_C_BPServerHandleItemNetExecCommand_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.find strider
	 */
	struct UPrimalItemConsumable_Mutagen_C_findstrider_Params
	{
	public:
		bool                                                       backup;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VVUU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                strider;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.GetAmountInInventory
	 */
	struct UPrimalItemConsumable_Mutagen_C_GetAmountInInventory_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.CalculateAmountNeeded
	 */
	struct UPrimalItemConsumable_Mutagen_C_CalculateAmountNeeded_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_28SO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPGetItemDescription
	 */
	struct UPrimalItemConsumable_Mutagen_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8LPB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BlueprintUsed
	 */
	struct UPrimalItemConsumable_Mutagen_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.BPCanUse
	 */
	struct UPrimalItemConsumable_Mutagen_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4TD8[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C.ExecuteUbergraph_PrimalItemConsumable_Mutagen
	 */
	struct UPrimalItemConsumable_Mutagen_C_ExecuteUbergraph_PrimalItemConsumable_Mutagen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
