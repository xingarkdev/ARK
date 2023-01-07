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
	 * Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.SetDisplay
	 */
	struct AViewableIncubatorEgg_C_SetDisplay_Params
	{	};

	/**
	 * Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UpdateDisplay
	 */
	struct AViewableIncubatorEgg_C_UpdateDisplay_Params
	{
	public:
		bool                                                       FromAdd;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ETDT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItemConsumable_Egg_C*                         EggClass;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.DrawBasicFloatingHUD
	 */
	struct AViewableIncubatorEgg_C_DrawBasicFloatingHUD_Params
	{
	public:
		class AHUD*                                                ForHUD;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UserConstructionScript
	 */
	struct AViewableIncubatorEgg_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ReceiveBeginPlay
	 */
	struct AViewableIncubatorEgg_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ExecuteUbergraph_ViewableIncubatorEgg
	 */
	struct AViewableIncubatorEgg_C_ExecuteUbergraph_ViewableIncubatorEgg_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
