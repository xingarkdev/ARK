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
	 * Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveTick
	 */
	struct AProjRocketHomingMissile_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.IsTargetAlive
	 */
	struct AProjRocketHomingMissile_C_IsTargetAlive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QG1G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.UserConstructionScript
	 */
	struct AProjRocketHomingMissile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__FinishedFunc
	 */
	struct AProjRocketHomingMissile_C_HomingBeep_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__UpdateFunc
	 */
	struct AProjRocketHomingMissile_C_HomingBeep_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__Beep__EventFunc
	 */
	struct AProjRocketHomingMissile_C_HomingBeep_Timeline__Beep__EventFunc_Params
	{	};

	/**
	 * Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveBeginPlay
	 */
	struct AProjRocketHomingMissile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.CheckDistToTarget
	 */
	struct AProjRocketHomingMissile_C_CheckDistToTarget_Params
	{	};

	/**
	 * Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ExecuteUbergraph_ProjRocketHomingMissile
	 */
	struct AProjRocketHomingMissile_C_ExecuteUbergraph_ProjRocketHomingMissile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
