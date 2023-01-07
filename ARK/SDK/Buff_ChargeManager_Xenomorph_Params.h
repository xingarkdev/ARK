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
	 * Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.AddChargeSource
	 */
	struct ABuff_ChargeManager_Xenomorph_C_AddChargeSource_Params
	{
	public:
		class ABuff_ChargeEmitter_C*                               Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.OnChargeEvent
	 */
	struct ABuff_ChargeManager_Xenomorph_C_OnChargeEvent_Params
	{	};

	/**
	 * Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.CanReceive Charge
	 */
	struct ABuff_ChargeManager_Xenomorph_C_CanReceiveCharge_Params
	{
	public:
		bool                                                       canReceive;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A1AO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.UserConstructionScript
	 */
	struct ABuff_ChargeManager_Xenomorph_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.ExecuteUbergraph_Buff_ChargeManager_Xenomorph
	 */
	struct ABuff_ChargeManager_Xenomorph_C_ExecuteUbergraph_Buff_ChargeManager_Xenomorph_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
