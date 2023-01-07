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
	 * Function TekCloningChamber.TekCloningChamber_C.BPChangedActorTeam
	 */
	struct ATekCloningChamber_C_BPChangedActorTeam_Params
	{	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.BPNotifyInventoryItemChange
	 */
	struct ATekCloningChamber_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RE2S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2PZI[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.BPContainerDeactivated
	 */
	struct ATekCloningChamber_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.IsValidToClone
	 */
	struct ATekCloningChamber_C_IsValidToClone_Params
	{
	public:
		class APrimalDinoCharacter*                                InDino;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bValid;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.BPOverrideAllowStructureAccess
	 */
	struct ATekCloningChamber_C_BPOverrideAllowStructureAccess_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsAccessAllowed;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForInventoryOnly;                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6C5S[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.BlueprintDrawHUD
	 */
	struct ATekCloningChamber_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.ReceiveBeginPlay
	 */
	struct ATekCloningChamber_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.BPPostLoadedFromSaveGame
	 */
	struct ATekCloningChamber_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.BPPreventStasis
	 */
	struct ATekCloningChamber_C_BPPreventStasis_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.StartCloneDino
	 */
	struct ATekCloningChamber_C_StartCloneDino_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoToClone;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.BPServerHandleNetExecCommand
	 */
	struct ATekCloningChamber_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.BPClientDoMultiUse
	 */
	struct ATekCloningChamber_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.BPGetMultiUseEntries
	 */
	struct ATekCloningChamber_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.UserConstructionScript
	 */
	struct ATekCloningChamber_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.DoNetStartCloning
	 */
	struct ATekCloningChamber_C_DoNetStartCloning_Params
	{
	public:
		class FString                                              TheCloningDescriptiveName;                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
		double                                                     TheCloningCompletionTime;                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.NetFinishCloning
	 */
	struct ATekCloningChamber_C_NetFinishCloning_Params
	{	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.DoNetHaltCloning
	 */
	struct ATekCloningChamber_C_DoNetHaltCloning_Params
	{	};

	/**
	 * Function TekCloningChamber.TekCloningChamber_C.ExecuteUbergraph_TekCloningChamber
	 */
	struct ATekCloningChamber_C_ExecuteUbergraph_TekCloningChamber_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
