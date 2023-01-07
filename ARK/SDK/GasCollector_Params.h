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
	 * Function GasCollector.GasCollector_C.BPUnstasis
	 */
	struct AGasCollector_C_BPUnstasis_Params
	{	};

	/**
	 * Function GasCollector.GasCollector_C.Update Gas FX
	 */
	struct AGasCollector_C_UpdateGasFX_Params
	{
	public:
		float                                                      InputPin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasCollector.GasCollector_C.OnRep_CurrentGasFXHeight
	 */
	struct AGasCollector_C_OnRep_CurrentGasFXHeight_Params
	{	};

	/**
	 * Function GasCollector.GasCollector_C.RecalculateGasFXHeight
	 */
	struct AGasCollector_C_RecalculateGasFXHeight_Params
	{	};

	/**
	 * Function GasCollector.GasCollector_C.UserConstructionScript
	 */
	struct AGasCollector_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GasCollector.GasCollector_C.ReceiveBeginPlay
	 */
	struct AGasCollector_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GasCollector.GasCollector_C.RefreshInv
	 */
	struct AGasCollector_C_RefreshInv_Params
	{	};

	/**
	 * Function GasCollector.GasCollector_C.BPNotifyInventoryItemChange
	 */
	struct AGasCollector_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8LK6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasCollector.GasCollector_C.ExecuteUbergraph_GasCollector
	 */
	struct AGasCollector_C_ExecuteUbergraph_GasCollector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
