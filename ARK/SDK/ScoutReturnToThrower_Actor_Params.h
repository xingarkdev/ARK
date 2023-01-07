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
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_Colors
	 */
	struct AScoutReturnToThrower_Actor_C_OnRep_Colors_Params
	{	};

	/**
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_ScoutItemClient
	 */
	struct AScoutReturnToThrower_Actor_C_OnRep_ScoutItemClient_Params
	{	};

	/**
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Set Colors
	 */
	struct AScoutReturnToThrower_Actor_C_SetColors_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Tick
	 */
	struct AScoutReturnToThrower_Actor_C_Tick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0LGE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.UserConstructionScript
	 */
	struct AScoutReturnToThrower_Actor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveTick
	 */
	struct AScoutReturnToThrower_Actor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveBeginPlay
	 */
	struct AScoutReturnToThrower_Actor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.DelayedDestroy
	 */
	struct AScoutReturnToThrower_Actor_C_DelayedDestroy_Params
	{	};

	/**
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReplicateScoutItem
	 */
	struct AScoutReturnToThrower_Actor_C_ReplicateScoutItem_Params
	{	};

	/**
	 * Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ExecuteUbergraph_ScoutReturnToThrower_Actor
	 */
	struct AScoutReturnToThrower_Actor_C_ExecuteUbergraph_ScoutReturnToThrower_Actor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
