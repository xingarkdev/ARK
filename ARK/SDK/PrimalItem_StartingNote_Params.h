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
	 * Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon
	 */
	struct UPrimalItem_StartingNote_C_BPDrawItemIcon_Params
	{
	public:
		class UCanvas*                                             ItemCanvas;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ItemCanvasSize;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ItemCanvasScale;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bItemEnabled;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2W7T[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        TheTintColor;                                            // 0x001C(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemIcon
	 */
	struct UPrimalItem_StartingNote_C_BPGetItemIcon_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant
	 */
	struct UPrimalItem_StartingNote_C_IsLocalImplant_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLocal;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName
	 */
	struct UPrimalItem_StartingNote_C_BPGetItemName_Params
	{
	public:
		class FString                                              ItemNameIn;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String
	 */
	struct UPrimalItem_StartingNote_C_GetSurvivalQuotientString_Params
	{
	public:
		TArray<float>                                              SurvData;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FString                                              OutString;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription
	 */
	struct UPrimalItem_StartingNote_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K4ZW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem
	 */
	struct UPrimalItem_StartingNote_C_BPPreInitializeItem_Params
	{
	public:
		class UWorld*                                              OptionalInitWorld;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.ExecuteUbergraph_PrimalItem_StartingNote
	 */
	struct UPrimalItem_StartingNote_C_ExecuteUbergraph_PrimalItem_StartingNote_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
