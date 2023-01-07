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
	 * Function WindTrubine.WindTrubine_C.BPOverrideCantBuildReasonString
	 */
	struct AWindTrubine_C_BPOverrideCantBuildReasonString_Params
	{
	public:
		int32_t                                                    CantBuildReason;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EX0V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function WindTrubine.WindTrubine_C.BPIsAllowedToBuild
	 */
	struct AWindTrubine_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WindTrubine.WindTrubine_C.BPUnstasis
	 */
	struct AWindTrubine_C_BPUnstasis_Params
	{	};

	/**
	 * Function WindTrubine.WindTrubine_C.UpdateWind
	 */
	struct AWindTrubine_C_UpdateWind_Params
	{	};

	/**
	 * Function WindTrubine.WindTrubine_C.BPIsValidWaterSourceForPipe
	 */
	struct AWindTrubine_C_BPIsValidWaterSourceForPipe_Params
	{
	public:
		class APrimalStructureWaterPipe*                           ForWaterPipe;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A49I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WindTrubine.WindTrubine_C.BPCanBeActivatedByPlayer
	 */
	struct AWindTrubine_C_BPCanBeActivatedByPlayer_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WindTrubine.WindTrubine_C.BPCanBeActivated
	 */
	struct AWindTrubine_C_BPCanBeActivated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WindTrubine.WindTrubine_C.BPContainerActivated
	 */
	struct AWindTrubine_C_BPContainerActivated_Params
	{	};

	/**
	 * Function WindTrubine.WindTrubine_C.BPContainerDeactivated
	 */
	struct AWindTrubine_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function WindTrubine.WindTrubine_C.UserConstructionScript
	 */
	struct AWindTrubine_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WindTrubine.WindTrubine_C.ReceiveBeginPlay
	 */
	struct AWindTrubine_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WindTrubine.WindTrubine_C.ForceUpdateWind
	 */
	struct AWindTrubine_C_ForceUpdateWind_Params
	{	};

	/**
	 * Function WindTrubine.WindTrubine_C.ExecuteUbergraph_WindTrubine
	 */
	struct AWindTrubine_C_ExecuteUbergraph_WindTrubine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
