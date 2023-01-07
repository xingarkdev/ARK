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
	 * Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetActorsToIgnoreOnRaycast
	 */
	struct ABuff_ChargeEmitter_Foliage_C_GetActorsToIgnoreOnRaycast_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetEmitterActor
	 */
	struct ABuff_ChargeEmitter_Foliage_C_GetEmitterActor_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.Get Charge Variable
	 */
	struct ABuff_ChargeEmitter_Foliage_C_GetChargeVariable_Params
	{
	public:
		E_ChargeVariableNames                                      VariableName;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JTH1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6X1X[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.CanEmitCharge
	 */
	struct ABuff_ChargeEmitter_Foliage_C_CanEmitCharge_Params
	{
	public:
		bool                                                       canEmit;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BDHU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.UserConstructionScript
	 */
	struct ABuff_ChargeEmitter_Foliage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ReceiveBeginPlay
	 */
	struct ABuff_ChargeEmitter_Foliage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage
	 */
	struct ABuff_ChargeEmitter_Foliage_C_ExecuteUbergraph_Buff_ChargeEmitter_Foliage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
