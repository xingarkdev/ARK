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
	 * Function WaterVein_Base_BP.WaterVein_Base_BP_C.BlueprintDrawHUD
	 */
	struct AWaterVein_Base_BP_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WaterVein_Base_BP.WaterVein_Base_BP_C.UpdateWaterVisuals
	 */
	struct AWaterVein_Base_BP_C_UpdateWaterVisuals_Params
	{	};

	/**
	 * Function WaterVein_Base_BP.WaterVein_Base_BP_C.ReceiveBeginPlay
	 */
	struct AWaterVein_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WaterVein_Base_BP.WaterVein_Base_BP_C.BPGetMultiUseEntries
	 */
	struct AWaterVein_Base_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function WaterVein_Base_BP.WaterVein_Base_BP_C.BPTryMultiUse
	 */
	struct AWaterVein_Base_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WaterVein_Base_BP.WaterVein_Base_BP_C.UserConstructionScript
	 */
	struct AWaterVein_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WaterVein_Base_BP.WaterVein_Base_BP_C.PostInitUpdateWaterVisuals
	 */
	struct AWaterVein_Base_BP_C_PostInitUpdateWaterVisuals_Params
	{	};

	/**
	 * Function WaterVein_Base_BP.WaterVein_Base_BP_C.ExecuteUbergraph_WaterVein_Base_BP
	 */
	struct AWaterVein_Base_BP_C_ExecuteUbergraph_WaterVein_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
