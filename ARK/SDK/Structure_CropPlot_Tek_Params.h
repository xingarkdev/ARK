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
	 * Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.ResetRefreshInterval
	 */
	struct AStructure_CropPlot_Tek_C_ResetRefreshInterval_Params
	{	};

	/**
	 * Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPInventoryItemUsed
	 */
	struct AStructure_CropPlot_Tek_C_BPInventoryItemUsed_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.CheckInstantGrow
	 */
	struct AStructure_CropPlot_Tek_C_CheckInstantGrow_Params
	{	};

	/**
	 * Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPNotifyInventoryItemChange
	 */
	struct AStructure_CropPlot_Tek_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4AI2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPGetAdditionalGrowthMultiplier
	 */
	struct AStructure_CropPlot_Tek_C_BPGetAdditionalGrowthMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.UserConstructionScript
	 */
	struct AStructure_CropPlot_Tek_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.ExecuteUbergraph_Structure_CropPlot_Tek
	 */
	struct AStructure_CropPlot_Tek_C_ExecuteUbergraph_Structure_CropPlot_Tek_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
