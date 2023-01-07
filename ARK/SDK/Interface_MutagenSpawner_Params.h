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
	 * Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.AdjustableSpawnDelayChanged
	 */
	struct UInterface_MutagenSpawner_C_AdjustableSpawnDelayChanged_Params
	{	};

	/**
	 * Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.itemPickedUp
	 */
	struct UInterface_MutagenSpawner_C_itemPickedUp_Params
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   ByPC;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.SpawnItem
	 */
	struct UInterface_MutagenSpawner_C_SpawnItem_Params
	{
	public:
		class AActor*                                              Manager;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              SpawnedItem;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
