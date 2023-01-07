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
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.Check Team and Set Visual Visibility
	 */
	struct AFeedingTroughBaseBP_C_CheckTeamandSetVisualVisibility_Params
	{	};

	/**
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPServerHandleNetExecCommand
	 */
	struct AFeedingTroughBaseBP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.OnRep_ShowArea
	 */
	struct AFeedingTroughBaseBP_C_OnRep_ShowArea_Params
	{	};

	/**
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPClientDoMultiUse
	 */
	struct AFeedingTroughBaseBP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MEG6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPGetMultiUseEntries
	 */
	struct AFeedingTroughBaseBP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ReceiveBeginPlay
	 */
	struct AFeedingTroughBaseBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ThrottledTick
	 */
	struct AFeedingTroughBaseBP_C_ThrottledTick_Params
	{	};

	/**
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.UserConstructionScript
	 */
	struct AFeedingTroughBaseBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ServerRequest_ToggleShowarea
	 */
	struct AFeedingTroughBaseBP_C_ServerRequest_ToggleShowarea_Params
	{	};

	/**
	 * Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ExecuteUbergraph_FeedingTroughBaseBP
	 */
	struct AFeedingTroughBaseBP_C_ExecuteUbergraph_FeedingTroughBaseBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
