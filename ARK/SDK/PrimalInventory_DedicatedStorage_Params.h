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
	 * Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPOnTransferAll
	 */
	struct UPrimalInventory_DedicatedStorage_C_BPOnTransferAll_Params
	{
	public:
		class UPrimalInventoryComponent*                           toInventory;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPGetExtraItemDisplay
	 */
	struct UPrimalInventory_DedicatedStorage_C_BPGetExtraItemDisplay_Params
	{
	public:
		bool                                                       bShowExtraItem;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_97N9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Description;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		class FString                                              CustomString;                                            // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
		class UTexture2D*                                          EntryIcon;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UMaterialInterface*                                  EntryMaterial;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPAllowAddInventoryItem
	 */
	struct UPrimalInventory_DedicatedStorage_C_BPAllowAddInventoryItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    RequestedQuantity;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOnlyAddAll;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4K60[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPRemoteInventoryGetMaxVisibleSlots
	 */
	struct UPrimalInventory_DedicatedStorage_C_BPRemoteInventoryGetMaxVisibleSlots_Params
	{
	public:
		int32_t                                                    NumItems;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R1DZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            PC;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocal;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T18B[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.ExecuteUbergraph_PrimalInventory_DedicatedStorage
	 */
	struct UPrimalInventory_DedicatedStorage_C_ExecuteUbergraph_PrimalInventory_DedicatedStorage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
