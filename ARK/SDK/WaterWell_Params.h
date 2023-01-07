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
	 * Function WaterWell.WaterWell_C.UpdateWaterSpawn
	 */
	struct AWaterWell_C_UpdateWaterSpawn_Params
	{	};

	/**
	 * Function WaterWell.WaterWell_C.BPInventoryItemUsed
	 */
	struct AWaterWell_C_BPInventoryItemUsed_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WaterWell.WaterWell_C.IsAWaterItem
	 */
	struct AWaterWell_C_IsAWaterItem_Params
	{
	public:
		class UObject*                                             PrimalItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WaterWell.WaterWell_C.BPForceAllowsInventoryUse
	 */
	struct AWaterWell_C_BPForceAllowsInventoryUse_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WaterWell.WaterWell_C.BPTryMultiUse
	 */
	struct AWaterWell_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WaterWell.WaterWell_C.BPGetMultiUseEntries
	 */
	struct AWaterWell_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function WaterWell.WaterWell_C.UserConstructionScript
	 */
	struct AWaterWell_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WaterWell.WaterWell_C.ReceiveBeginPlay
	 */
	struct AWaterWell_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WaterWell.WaterWell_C.PlayWaterParticles
	 */
	struct AWaterWell_C_PlayWaterParticles_Params
	{	};

	/**
	 * Function WaterWell.WaterWell_C.ExecuteUbergraph_WaterWell
	 */
	struct AWaterWell_C_ExecuteUbergraph_WaterWell_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
