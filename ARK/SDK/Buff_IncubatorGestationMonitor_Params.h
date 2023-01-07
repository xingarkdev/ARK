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
	 * Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.BuffTickServer
	 */
	struct ABuff_IncubatorGestationMonitor_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.GetEnabledGestationMonitoringTargets
	 */
	struct ABuff_IncubatorGestationMonitor_C_GetEnabledGestationMonitoringTargets_Params
	{
	public:
		TArray<class APrimalDinoCharacter*>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.SetGestationMonitoringTarget
	 */
	struct ABuff_IncubatorGestationMonitor_C_SetGestationMonitoringTarget_Params
	{
	public:
		class APrimalDinoCharacter*                                forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ReplicateGestationData
	 */
	struct ABuff_IncubatorGestationMonitor_C_ReplicateGestationData_Params
	{
	public:
		struct FUnreplicatedEggData                                GestationData;                                           // 0x0000(0x0058)  (Parm)
		class APrimalDinoCharacter*                                forTarget;                                               // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.UserConstructionScript
	 */
	struct ABuff_IncubatorGestationMonitor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ExecuteUbergraph_Buff_IncubatorGestationMonitor
	 */
	struct ABuff_IncubatorGestationMonitor_C_ExecuteUbergraph_Buff_IncubatorGestationMonitor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
