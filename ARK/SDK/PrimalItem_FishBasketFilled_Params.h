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
	 * Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.try feed shadowmane
	 */
	struct UPrimalItem_FishBasketFilled_C_tryfeedshadowmane_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.Find Shadowmane
	 */
	struct UPrimalItem_FishBasketFilled_C_FindShadowmane_Params
	{
	public:
		bool                                                       backup;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KY7Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                Shadowmane;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPDrawItemIcon
	 */
	struct UPrimalItem_FishBasketFilled_C_BPDrawItemIcon_Params
	{
	public:
		class UCanvas*                                             ItemCanvas;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ItemCanvasSize;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ItemCanvasScale;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bItemEnabled;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PD3V[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        TheTintColor;                                            // 0x001C(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DJ1H[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.SlottedTick
	 */
	struct UPrimalItem_FishBasketFilled_C_SlottedTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BlueprintUsed
	 */
	struct UPrimalItem_FishBasketFilled_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPGetItemDescription
	 */
	struct UPrimalItem_FishBasketFilled_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DO2Y[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPCanUse
	 */
	struct UPrimalItem_FishBasketFilled_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0OQ8[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.ExecuteUbergraph_PrimalItem_FishBasketFilled
	 */
	struct UPrimalItem_FishBasketFilled_C_ExecuteUbergraph_PrimalItem_FishBasketFilled_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
