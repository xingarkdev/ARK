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
	 * Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.IsWeaponFiring
	 */
	struct ABuff_ChargeEmitterWeapon_ChargeLantern_C_IsWeaponFiring_Params
	{
	public:
		bool                                                       IsFiring;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IS6L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.InitializeEmitter
	 */
	struct ABuff_ChargeEmitterWeapon_ChargeLantern_C_InitializeEmitter_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.UserConstructionScript
	 */
	struct ABuff_ChargeEmitterWeapon_ChargeLantern_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern
	 */
	struct ABuff_ChargeEmitterWeapon_ChargeLantern_C_ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
