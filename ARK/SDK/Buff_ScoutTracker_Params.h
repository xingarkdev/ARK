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
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.BPGetDebugInfoString
	 */
	struct ABuff_ScoutTracker_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.BuffTickClient
	 */
	struct ABuff_ScoutTracker_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.UpdateTrackerState
	 */
	struct ABuff_ScoutTracker_C_UpdateTrackerState_Params
	{	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.OnRep_TrackerStateReplicated
	 */
	struct ABuff_ScoutTracker_C_OnRep_TrackerStateReplicated_Params
	{	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.DisableAllEmitters
	 */
	struct ABuff_ScoutTracker_C_DisableAllEmitters_Params
	{
	public:
		EScoutTrackerStates                                        ButEnableThis;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.UpdateFX
	 */
	struct ABuff_ScoutTracker_C_UpdateFX_Params
	{
	public:
		class UParticleSystemComponent*                            ParticleSystemComp;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.ReceiveBeginPlay
	 */
	struct ABuff_ScoutTracker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.BuffTickServer
	 */
	struct ABuff_ScoutTracker_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BQVB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.UserConstructionScript
	 */
	struct ABuff_ScoutTracker_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.SetIsPreviewTracker
	 */
	struct ABuff_ScoutTracker_C_SetIsPreviewTracker_Params
	{
	public:
		bool                                                       IsPreviewTracker;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_87I3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutTracker.Buff_ScoutTracker_C.ExecuteUbergraph_Buff_ScoutTracker
	 */
	struct ABuff_ScoutTracker_C_ExecuteUbergraph_Buff_ScoutTracker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
