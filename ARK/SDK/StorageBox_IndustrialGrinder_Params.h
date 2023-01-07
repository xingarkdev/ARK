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
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GrindAllItems
	 */
	struct AStorageBox_IndustrialGrinder_C_GrindAllItems_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.IsValidForGrindingAll
	 */
	struct AStorageBox_IndustrialGrinder_C_IsValidForGrindingAll_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPPreGetMultiUseEntries
	 */
	struct AStorageBox_IndustrialGrinder_C_BPPreGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.HasCraftingRequirementsGreaterThanOne
	 */
	struct AStorageBox_IndustrialGrinder_C_HasCraftingRequirementsGreaterThanOne_Params
	{
	public:
		class UPrimalItem*                                         InItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       _TRUE__;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GetReplacementItem
	 */
	struct AStorageBox_IndustrialGrinder_C_GetReplacementItem_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutItemClass;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.IsValidGrindingItem
	 */
	struct AStorageBox_IndustrialGrinder_C_IsValidGrindingItem_Params
	{
	public:
		class UPrimalItem*                                         ItemToCheck;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.GrindItem
	 */
	struct AStorageBox_IndustrialGrinder_C_GrindItem_Params
	{
	public:
		class UPrimalItem*                                         ItemToGrind;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       grindStack;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MuteSound;                                               // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9T9X[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPServerHandleNetExecCommand
	 */
	struct AStorageBox_IndustrialGrinder_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPClientDoMultiUse
	 */
	struct AStorageBox_IndustrialGrinder_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SDE4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.BPGetMultiUseEntries
	 */
	struct AStorageBox_IndustrialGrinder_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.UserConstructionScript
	 */
	struct AStorageBox_IndustrialGrinder_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C.ExecuteUbergraph_StorageBox_IndustrialGrinder
	 */
	struct AStorageBox_IndustrialGrinder_C_ExecuteUbergraph_StorageBox_IndustrialGrinder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
