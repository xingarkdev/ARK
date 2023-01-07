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
	 * Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.GetScout
	 */
	struct UDinoAttackStateRanged_Scout_C_GetScout_Params
	{
	public:
		class AScout_Character_BP_C*                               Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnTickEvent
	 */
	struct UDinoAttackStateRanged_Scout_C_OnTickEvent_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LL5I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnEndEvent
	 */
	struct UDinoAttackStateRanged_Scout_C_OnEndEvent_Params
	{	};

	/**
	 * Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.BPRangedAttackOnBegin
	 */
	struct UDinoAttackStateRanged_Scout_C_BPRangedAttackOnBegin_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetVelocity;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.Tracker Impact Pawn or Terrain
	 */
	struct UDinoAttackStateRanged_Scout_C_TrackerImpactPawnorTerrain_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ImpactLocation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValidTarget;                                           // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q2J2[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.CalculateProjectileImpacts
	 */
	struct UDinoAttackStateRanged_Scout_C_CalculateProjectileImpacts_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnBeginEvent
	 */
	struct UDinoAttackStateRanged_Scout_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.ExecuteUbergraph_DinoAttackStateRanged_Scout
	 */
	struct UDinoAttackStateRanged_Scout_C_ExecuteUbergraph_DinoAttackStateRanged_Scout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
