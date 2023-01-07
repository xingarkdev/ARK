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
	 * Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.IsWeaponFiring
	 */
	struct ABuff_ChargeEmitterWeapon_C_IsWeaponFiring_Params
	{
	public:
		bool                                                       IsFiring;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_549H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.InitializeEmitter
	 */
	struct ABuff_ChargeEmitterWeapon_C_InitializeEmitter_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.GetEmitterForwardVector
	 */
	struct ABuff_ChargeEmitterWeapon_C_GetEmitterForwardVector_Params
	{
	public:
		struct FVector                                             ForwardVector;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XOC9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.CanEmitCharge
	 */
	struct ABuff_ChargeEmitterWeapon_C_CanEmitCharge_Params
	{
	public:
		bool                                                       canEmit;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.UserConstructionScript
	 */
	struct ABuff_ChargeEmitterWeapon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.DebugVector
	 */
	struct ABuff_ChargeEmitterWeapon_C_DebugVector_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewParam1;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.DebugSphere
	 */
	struct ABuff_ChargeEmitterWeapon_C_DebugSphere_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        NewParam1;                                               // 0x000C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.ExecuteUbergraph_Buff_ChargeEmitterWeapon
	 */
	struct ABuff_ChargeEmitterWeapon_C_ExecuteUbergraph_Buff_ChargeEmitterWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
