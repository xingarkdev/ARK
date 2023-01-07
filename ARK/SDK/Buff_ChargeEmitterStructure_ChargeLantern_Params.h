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
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetDistanceAndAngleCheckOrigin
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_GetDistanceAndAngleCheckOrigin_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             distanceAngleOrigin;                                     // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_27IO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.BuffTickClient
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VPFE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.TakeChargeConsumedByReceivers
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_TakeChargeConsumedByReceivers_Params
	{
	public:
		float                                                      chargeToTake;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.WillReceiverAffectChargeConsumption
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_WillReceiverAffectChargeConsumption_Params
	{
	public:
		class ABuff_ChargeManager_C*                               Receiver;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canProcess;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Is Valid Receiver for Charge Consumption
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_IsValidReceiverforChargeConsumption_Params
	{
	public:
		class ABuff_ChargeManager_C*                               Receiver;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.OnChargeConsumedByReceiversChanged
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_OnChargeConsumedByReceiversChanged_Params
	{
	public:
		float                                                      newCharge;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldProcessChargeConsumedByReceivers
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_ShouldProcessChargeConsumedByReceivers_Params
	{
	public:
		bool                                                       shouldProcess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZCMZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Can Process New Receiver For Charge Consumption
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_CanProcessNewReceiverForChargeConsumption_Params
	{
	public:
		bool                                                       canProcess;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XI39[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterForwardVector
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_GetEmitterForwardVector_Params
	{
	public:
		struct FVector                                             ForwardVector;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P4OE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.GetEmitterLineTraceOrigin
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_GetEmitterLineTraceOrigin_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             lineTraceOrigin;                                         // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.Modify Charge
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_ModifyCharge_Params
	{
	public:
		bool                                                       SetValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5BZ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q59C[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      chargeAdded;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.EmitterUpdateChargeOnTimer
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_EmitterUpdateChargeOnTimer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ShouldEnableTimers
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_ShouldEnableTimers_Params
	{
	public:
		bool                                                       tickServer;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TickClient;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5UX8[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ChargeVariableEvent
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_ChargeVariableEvent_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6GBU[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.InitializeEmitter
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_InitializeEmitter_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.UserConstructionScript
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern
	 */
	struct ABuff_ChargeEmitterStructure_ChargeLantern_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
