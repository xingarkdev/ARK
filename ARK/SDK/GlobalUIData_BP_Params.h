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
	 * Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo_ExtraBar
	 */
	struct UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_ExtraBar_Params
	{
	public:
		int32_t                                                    SlotOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SlotSpan;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Progress;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ExtendedInfoText;                                        // 0x0010(0x0010)  (Parm, ZeroConstructor)
		struct FHUDElement                                         OutHUDElement;                                           // 0x0020(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo
	 */
	struct UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    StateIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Progress;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KF4O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MainText;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor)
		class FString                                              ExtendedInfoText;                                        // 0x0020(0x0010)  (Parm, ZeroConstructor)
		class UTexture2D*                                          Icon;                                                    // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHUDElement                                         OutHUDElement;                                           // 0x0038(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_Struggle
	 */
	struct UGlobalUIData_BP_C_BPGetHUDElements_Module_Struggle_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      StruggleProgressPercent;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QSW2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              RichTextOverride;                                        // 0x0010(0x0010)  (Parm, ZeroConstructor)
		class AActor*                                              Instigator;                                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 Elements;                                                // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FHUDRichTextOverlayData                             OutHUDRichTextOverlay;                                   // 0x0038(0x0060)  (Parm, OutParm)
	};

	/**
	 * Function GlobalUIData_BP.GlobalUIData_BP_C.ExecuteUbergraph_GlobalUIData_BP
	 */
	struct UGlobalUIData_BP_C_ExecuteUbergraph_GlobalUIData_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
