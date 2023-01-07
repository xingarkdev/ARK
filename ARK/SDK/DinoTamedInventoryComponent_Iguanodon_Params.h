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
	 * Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.BPNotifyItemAdded
	 */
	struct UDinoTamedInventoryComponent_Iguanodon_C_BPNotifyItemAdded_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6IYS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.BPNotifyItemRemoved
	 */
	struct UDinoTamedInventoryComponent_Iguanodon_C_BPNotifyItemRemoved_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.ExecuteUbergraph_DinoTamedInventoryComponent_Iguanodon
	 */
	struct UDinoTamedInventoryComponent_Iguanodon_C_ExecuteUbergraph_DinoTamedInventoryComponent_Iguanodon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
