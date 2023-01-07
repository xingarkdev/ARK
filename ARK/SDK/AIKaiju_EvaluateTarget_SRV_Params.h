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
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeLiqBombTowardsDK
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_MaybeLiqBombTowardsDK_Params
	{	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsTamedAndPassive
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_IsTamedAndPassive_Params
	{
	public:
		bool                                                       IsPassive;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseLeapTarget
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_ChooseLeapTarget_Params
	{	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.GetHighestPriorityActor
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_GetHighestPriorityActor_Params
	{
	public:
		TArray<class AActor*>                                      EnemyList;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class AActor*                                              HighestPriTarget;                                        // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AllowedToTarget
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_AllowedToTarget_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0OK0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseQuadWithMostEnemies
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_ChooseQuadWithMostEnemies_Params
	{	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeAcquireClusterTarget
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_MaybeAcquireClusterTarget_Params
	{	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeShakePlayersOff
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_MaybeShakePlayersOff_Params
	{	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseCloseQuadrantWithMostEnemy
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_ChooseCloseQuadrantWithMostEnemy_Params
	{	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AddToCloseQuadrantArray
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_AddToCloseQuadrantArray_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsAttackerUsingRangedWeapon
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_IsAttackerUsingRangedWeapon_Params
	{
	public:
		class UObject*                                             Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UsingRanged;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ClearTargeting
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_ClearTargeting_Params
	{	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.TargetAcquire
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_TargetAcquire_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveActivation
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveTick
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV
	 */
	struct UAIKaiju_EvaluateTarget_SRV_C_ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
