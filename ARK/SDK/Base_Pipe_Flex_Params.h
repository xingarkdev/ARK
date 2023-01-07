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
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.ResetRefreshConnectionsCooldown
	 */
	struct ABase_Pipe_Flex_C_ResetRefreshConnectionsCooldown_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.IsAllowedToRefreshConnections
	 */
	struct ABase_Pipe_Flex_C_IsAllowedToRefreshConnections_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allowed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HFB5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPGetMultiUseEntries
	 */
	struct ABase_Pipe_Flex_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPTryMultiUse
	 */
	struct ABase_Pipe_Flex_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateWaterStatus
	 */
	struct ABase_Pipe_Flex_C_UpdateWaterStatus_Params
	{	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.LinkPipes
	 */
	struct ABase_Pipe_Flex_C_LinkPipes_Params
	{
	public:
		TArray<class APrimalStructure*>                            ConnectedPipes;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOverrideCantBuildReasonString
	 */
	struct ABase_Pipe_Flex_C_BPOverrideCantBuildReasonString_Params
	{
	public:
		int32_t                                                    CantBuildReason;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4CQ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.AddSplineMeshComponents
	 */
	struct ABase_Pipe_Flex_C_AddSplineMeshComponents_Params
	{
	public:
		bool                                                       UsePreviewMaterial;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2VVD[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPIsAllowedToBuild
	 */
	struct ABase_Pipe_Flex_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.UserConstructionScript
	 */
	struct ABase_Pipe_Flex_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateSplineMeshesEvent
	 */
	struct ABase_Pipe_Flex_C_UpdateSplineMeshesEvent_Params
	{	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.ReceiveBeginPlay
	 */
	struct ABase_Pipe_Flex_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnLinkedStructureDestroyed
	 */
	struct ABase_Pipe_Flex_C_BPOnLinkedStructureDestroyed_Params
	{
	public:
		class APrimalStructure*                                    DestroyedStructure;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.RefreshConnections
	 */
	struct ABase_Pipe_Flex_C_RefreshConnections_Params
	{	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnWaterStateChange
	 */
	struct ABase_Pipe_Flex_C_BPOnWaterStateChange_Params
	{
	public:
		bool                                                       bPipeHasWaterOrPower;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Pipe_Flex.Base_Pipe_Flex_C.ExecuteUbergraph_Base_Pipe_Flex
	 */
	struct ABase_Pipe_Flex_C_ExecuteUbergraph_Base_Pipe_Flex_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
