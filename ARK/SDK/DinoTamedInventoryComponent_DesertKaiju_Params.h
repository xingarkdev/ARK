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
	 * Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.BPNotifyItemAdded
	 */
	struct UDinoTamedInventoryComponent_DesertKaiju_C_BPNotifyItemAdded_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SBT1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.EquipSaddle
	 */
	struct UDinoTamedInventoryComponent_DesertKaiju_C_EquipSaddle_Params
	{	};

	/**
	 * Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju
	 */
	struct UDinoTamedInventoryComponent_DesertKaiju_C_ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
