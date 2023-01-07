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
	 * Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.InitializeAoE
	 */
	struct ABuff_ChargeStun_AoE_C_InitializeAoE_Params
	{
	public:
		class ABuff_ChargeEmitter_C*                               chargeManagerBuff;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Can Stun Character
	 */
	struct ABuff_ChargeStun_AoE_C_CanStunCharacter_Params
	{
	public:
		class APrimalCharacter*                                    characterToStun;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canStun;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E5EU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Get WeaponCharge Buff
	 */
	struct ABuff_ChargeStun_AoE_C_GetWeaponChargeBuff_Params
	{
	public:
		class ABuff_ChargeEmitter_C*                               chargeBuff;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.BPExcludeAoEActor
	 */
	struct ABuff_ChargeStun_AoE_C_BPExcludeAoEActor_Params
	{
	public:
		class AActor*                                              ActorToConsider;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SRF7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.UserConstructionScript
	 */
	struct ABuff_ChargeStun_AoE_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.ExecuteUbergraph_Buff_ChargeStun_AoE
	 */
	struct ABuff_ChargeStun_AoE_C_ExecuteUbergraph_Buff_ChargeStun_AoE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
