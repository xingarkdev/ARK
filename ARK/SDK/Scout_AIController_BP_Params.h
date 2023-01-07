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
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.IsTargetIsAimedAtScout
	 */
	struct AScout_AIController_BP_C_IsTargetIsAimedAtScout_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4JMB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.ComputeStatModifierFromTargetDistance
	 */
	struct AScout_AIController_BP_C_ComputeStatModifierFromTargetDistance_Params
	{
	public:
		float                                                      Out;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LZAL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.GetDistanceToTarget
	 */
	struct AScout_AIController_BP_C_GetDistanceToTarget_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G9HV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.GetCustomModifierRotationRate
	 */
	struct AScout_AIController_BP_C_GetCustomModifierRotationRate_Params
	{
	public:
		float                                                      Out;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ANG5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.GetCustomModifierMaxSpeed
	 */
	struct AScout_AIController_BP_C_GetCustomModifierMaxSpeed_Params
	{
	public:
		float                                                      Out;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.ScoutDamaged
	 */
	struct AScout_AIController_BP_C_ScoutDamaged_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.ScoutSetTarget
	 */
	struct AScout_AIController_BP_C_ScoutSetTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    InitialAggressionWeight;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENSP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.CanLaunchTrackerAtTarget
	 */
	struct AScout_AIController_BP_C_CanLaunchTrackerAtTarget_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.DropTarget
	 */
	struct AScout_AIController_BP_C_DropTarget_Params
	{	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.GetScout
	 */
	struct AScout_AIController_BP_C_GetScout_Params
	{
	public:
		class AScout_Character_BP_C*                               Scout;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.Get Last Aggression Time
	 */
	struct AScout_AIController_BP_C_GetLastAggressionTime_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LastAttackTime;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V78M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.BPSetupFindTarget
	 */
	struct AScout_AIController_BP_C_BPSetupFindTarget_Params
	{	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.BPGetTargetingDesire
	 */
	struct AScout_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.UserConstructionScript
	 */
	struct AScout_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.ReceiveTick
	 */
	struct AScout_AIController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.FindAggressors
	 */
	struct AScout_AIController_BP_C_FindAggressors_Params
	{	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.ReceiveBeginPlay
	 */
	struct AScout_AIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.ResumeFollowTarget
	 */
	struct AScout_AIController_BP_C_ResumeFollowTarget_Params
	{	};

	/**
	 * Function Scout_AIController_BP.Scout_AIController_BP_C.ExecuteUbergraph_Scout_AIController_BP
	 */
	struct AScout_AIController_BP_C_ExecuteUbergraph_Scout_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
