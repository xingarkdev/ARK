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
	 * Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.BPInitializeInventory
	 */
	struct UDinoTamedInventoryComponent_Camelsaurus_C_BPInitializeInventory_Params
	{	};

	/**
	 * Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.TakeWaterFromContainers
	 */
	struct UDinoTamedInventoryComponent_Camelsaurus_C_TakeWaterFromContainers_Params
	{
	public:
		float                                                      amountToTake;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TakenAmount;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.FillWaterContainers
	 */
	struct UDinoTamedInventoryComponent_Camelsaurus_C_FillWaterContainers_Params
	{
	public:
		float                                                      WaterAmount;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      WaterAmountLeft;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus
	 */
	struct UDinoTamedInventoryComponent_Camelsaurus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
