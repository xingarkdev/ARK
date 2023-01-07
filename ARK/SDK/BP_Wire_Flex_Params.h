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
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.IsAllowedToRefreshConnections
	 */
	struct ABP_Wire_Flex_C_IsAllowedToRefreshConnections_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allowed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q82P[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.BPTryMultiUse
	 */
	struct ABP_Wire_Flex_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.BPGetMultiUseEntries
	 */
	struct ABP_Wire_Flex_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.LinkWires
	 */
	struct ABP_Wire_Flex_C_LinkWires_Params
	{
	public:
		TArray<class APrimalStructure*>                            Connections;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.AddSplineMeshComponents
	 */
	struct ABP_Wire_Flex_C_AddSplineMeshComponents_Params
	{
	public:
		bool                                                       UsePreviewMaterial;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6VBY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.BPOverrideCantBuildReasonString
	 */
	struct ABP_Wire_Flex_C_BPOverrideCantBuildReasonString_Params
	{
	public:
		int32_t                                                    CantBuildReason;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MWVI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.BPIsAllowedToBuild
	 */
	struct ABP_Wire_Flex_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.UserConstructionScript
	 */
	struct ABP_Wire_Flex_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.UpdateSplineMeshesEvent
	 */
	struct ABP_Wire_Flex_C_UpdateSplineMeshesEvent_Params
	{	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.ReceiveBeginPlay
	 */
	struct ABP_Wire_Flex_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnLinkedStructureDestroyed
	 */
	struct ABP_Wire_Flex_C_BPOnLinkedStructureDestroyed_Params
	{
	public:
		class APrimalStructure*                                    DestroyedStructure;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.RefreshConnections
	 */
	struct ABP_Wire_Flex_C_RefreshConnections_Params
	{	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.MultiUpdatePipeMaterials
	 */
	struct ABP_Wire_Flex_C_MultiUpdatePipeMaterials_Params
	{	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnWaterStateChange
	 */
	struct ABP_Wire_Flex_C_BPOnWaterStateChange_Params
	{
	public:
		bool                                                       bPipeHasWaterOrPower;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnDemolish
	 */
	struct ABP_Wire_Flex_C_BPOnDemolish_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Wire_Flex.BP_Wire_Flex_C.ExecuteUbergraph_BP_Wire_Flex
	 */
	struct ABP_Wire_Flex_C_ExecuteUbergraph_BP_Wire_Flex_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
