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
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.BPTryMultiUse
	 */
	struct AStructureBP_Toilet_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.BPGetMultiUseEntries
	 */
	struct AStructureBP_Toilet_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.BPHandleSitterPoop
	 */
	struct AStructureBP_Toilet_C_BPHandleSitterPoop_Params
	{
	public:
		class AShooterCharacter*                                   ForSitter;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PO1A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.BPUnstasis
	 */
	struct AStructureBP_Toilet_C_BPUnstasis_Params
	{	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.ReceiveBeginPlay
	 */
	struct AStructureBP_Toilet_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.OnRep_bHasPoop
	 */
	struct AStructureBP_Toilet_C_OnRep_bHasPoop_Params
	{	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.BPNotifyInventoryItemChange
	 */
	struct AStructureBP_Toilet_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7RLT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.BPContainerActivated
	 */
	struct AStructureBP_Toilet_C_BPContainerActivated_Params
	{	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.BPContainerDeactivated
	 */
	struct AStructureBP_Toilet_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.UserConstructionScript
	 */
	struct AStructureBP_Toilet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.NetFlushedToilet
	 */
	struct AStructureBP_Toilet_C_NetFlushedToilet_Params
	{	};

	/**
	 * Function StructureBP_Toilet.StructureBP_Toilet_C.ExecuteUbergraph_StructureBP_Toilet
	 */
	struct AStructureBP_Toilet_C_ExecuteUbergraph_StructureBP_Toilet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
