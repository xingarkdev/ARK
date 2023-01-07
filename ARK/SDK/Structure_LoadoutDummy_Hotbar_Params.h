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
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPClientDoMultiUse
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPGetMultiUseEntries
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPRefreshedStructureColors
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_BPRefreshedStructureColors_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPAdjustDamage
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K00X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ONBZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RefreshNullSlots
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_RefreshNullSlots_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RemoveAllItems
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_RemoveAllItems_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPNotifyInventoryItemChange
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4PEC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D60I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RefreshItemIcons
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_RefreshItemIcons_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.UserConstructionScript
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.Multi_SetSlotImages
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_Multi_SetSlotImages_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.ReceiveBeginPlay
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.ExecuteUbergraph_Structure_LoadoutDummy_Hotbar
	 */
	struct AStructure_LoadoutDummy_Hotbar_C_ExecuteUbergraph_Structure_LoadoutDummy_Hotbar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
