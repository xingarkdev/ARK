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
	 * Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.GetEmitterActor
	 */
	struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_GetEmitterActor_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.ShouldEnableTimers
	 */
	struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_ShouldEnableTimers_Params
	{
	public:
		bool                                                       tickServer;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TickClient;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.GetActorsToIgnoreOnRaycast
	 */
	struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_GetActorsToIgnoreOnRaycast_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.CanEmitCharge
	 */
	struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_CanEmitCharge_Params
	{
	public:
		bool                                                       canEmit;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.UserConstructionScript
	 */
	struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.ExecuteUbergraph_Buff_ChargeEmitter_ElementPoisonousPlant
	 */
	struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_ExecuteUbergraph_Buff_ChargeEmitter_ElementPoisonousPlant_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
