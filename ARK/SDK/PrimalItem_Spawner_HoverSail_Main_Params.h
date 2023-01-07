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
	 * Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPInitIconMaterial
	 */
	struct UPrimalItem_Spawner_HoverSail_Main_C_BPInitIconMaterial_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BlueprintUsed
	 */
	struct UPrimalItem_Spawner_HoverSail_Main_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.OnDinoSpawned
	 */
	struct UPrimalItem_Spawner_HoverSail_Main_C_OnDinoSpawned_Params
	{
	public:
		class APrimalDinoCharacter*                                NewDino;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItem_Spawner_HoverSail_Main_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Main
	 */
	struct UPrimalItem_Spawner_HoverSail_Main_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Main_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
