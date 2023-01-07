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
	 * Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPPreUseItem
	 */
	struct UPrimalItemConsumable_Mutagel_C_BPPreUseItem_Params
	{	};

	/**
	 * Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPServerHandleItemNetExecCommand
	 */
	struct UPrimalItemConsumable_Mutagel_C_BPServerHandleItemNetExecCommand_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.find strider
	 */
	struct UPrimalItemConsumable_Mutagel_C_findstrider_Params
	{
	public:
		bool                                                       backup;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RW0R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                strider;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.GetAmountInInventory
	 */
	struct UPrimalItemConsumable_Mutagel_C_GetAmountInInventory_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.CalculateAmountNeeded
	 */
	struct UPrimalItemConsumable_Mutagel_C_CalculateAmountNeeded_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPGetItemDescription
	 */
	struct UPrimalItemConsumable_Mutagel_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6D8E[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BlueprintUsed
	 */
	struct UPrimalItemConsumable_Mutagel_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.BPCanUse
	 */
	struct UPrimalItemConsumable_Mutagel_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H1PS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C.ExecuteUbergraph_PrimalItemConsumable_Mutagel
	 */
	struct UPrimalItemConsumable_Mutagel_C_ExecuteUbergraph_PrimalItemConsumable_Mutagel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
