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
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.IsTamedAndPassive
	 */
	struct UService_DKaijuEvalTargets_C_IsTamedAndPassive_Params
	{
	public:
		bool                                                       IsPassive;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.AlertFlocksForRoll
	 */
	struct UService_DKaijuEvalTargets_C_AlertFlocksForRoll_Params
	{	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.Eval Attacks
	 */
	struct UService_DKaijuEvalTargets_C_EvalAttacks_Params
	{	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.DestroyFlocks
	 */
	struct UService_DKaijuEvalTargets_C_DestroyFlocks_Params
	{	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SetFlockTargets
	 */
	struct UService_DKaijuEvalTargets_C_SetFlockTargets_Params
	{	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SummonLightningGroundTargets
	 */
	struct UService_DKaijuEvalTargets_C_SummonLightningGroundTargets_Params
	{	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.EvalFlockHoverAttackModes
	 */
	struct UService_DKaijuEvalTargets_C_EvalFlockHoverAttackModes_Params
	{	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.MaybeSummonFlocks
	 */
	struct UService_DKaijuEvalTargets_C_MaybeSummonFlocks_Params
	{	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveTick
	 */
	struct UService_DKaijuEvalTargets_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveActivation
	 */
	struct UService_DKaijuEvalTargets_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ExecuteUbergraph_Service_DKaijuEvalTargets
	 */
	struct UService_DKaijuEvalTargets_C_ExecuteUbergraph_Service_DKaijuEvalTargets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
