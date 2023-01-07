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
	 * Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed
	 */
	struct UEggIncubatorInterface_C_IsEggItemAllowed_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAllowed;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
	 */
	struct UEggIncubatorInterface_C_GetItemDisplaySlot_Params
	{
	public:
		class UPrimalItem*                                         ForItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    InSlot;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SlotFound;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
