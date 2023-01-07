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
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPCopyCustomSettingsFromTurret
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BPCopyCustomSettingsFromTurret_Params
	{
	public:
		class APrimalStructureTurret*                              FromTurret;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NJP9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPTurretPreventsTargeting
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BPTurretPreventsTargeting_Params
	{
	public:
		class APrimalCharacter*                                    PotentialTarget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I4I2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPServerHandleNetExecCommand
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPTryMultiUse
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPClientDoMultiUse
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPGetMultiUseEntries
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPCanBeActivated
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BPCanBeActivated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPPostLoadedFromSaveGame
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.TurretCheckHardLimit
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_TurretCheckHardLimit_Params
	{	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BlueprintDrawHUD
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPIsAllowedToBuild
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.UserConstructionScript
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy
	 */
	struct AStructureTurretBaseBP_BaseHeavy_C_ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
