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
	 * Function ProjScoutTracker.ProjScoutTracker_C.SpawnImpactVFX
	 */
	struct AProjScoutTracker_C_SpawnImpactVFX_Params
	{	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.ScheduleNextTrackerImpactVFXSpawn
	 */
	struct AProjScoutTracker_C_ScheduleNextTrackerImpactVFXSpawn_Params
	{	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.Is Clientor Single Player
	 */
	struct AProjScoutTracker_C_IsClientorSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.IsServerOrSinglePlayer
	 */
	struct AProjScoutTracker_C_IsServerOrSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.ReceiveBeginPlay
	 */
	struct AProjScoutTracker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.ReceiveEndPlay
	 */
	struct AProjScoutTracker_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KEW1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.ReceiveActorBeginOverlap
	 */
	struct AProjScoutTracker_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.UserConstructionScript
	 */
	struct AProjScoutTracker_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.TraceForTrackerHits
	 */
	struct AProjScoutTracker_C_TraceForTrackerHits_Params
	{	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.SpawnImactVFXAndScheduleNextImpact
	 */
	struct AProjScoutTracker_C_SpawnImactVFXAndScheduleNextImpact_Params
	{	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.ClientSpawnImpactVFX
	 */
	struct AProjScoutTracker_C_ClientSpawnImpactVFX_Params
	{	};

	/**
	 * Function ProjScoutTracker.ProjScoutTracker_C.ExecuteUbergraph_ProjScoutTracker
	 */
	struct AProjScoutTracker_C_ExecuteUbergraph_ProjScoutTracker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
