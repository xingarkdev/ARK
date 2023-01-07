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
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.Get ImmunityTime
	 */
	struct ABuff_ChargeStun_C_GetImmunityTime_Params
	{
	public:
		float                                                      immunityTime;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.Get Max StunTime
	 */
	struct ABuff_ChargeStun_C_GetMaxStunTime_Params
	{
	public:
		float                                                      maxStunTime;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.BuffTickClient
	 */
	struct ABuff_ChargeStun_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.Get Armor Rating
	 */
	struct ABuff_ChargeStun_C_GetArmorRating_Params
	{
	public:
		float                                                      rating;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.IsUsingShield
	 */
	struct ABuff_ChargeStun_C_IsUsingShield_Params
	{
	public:
		bool                                                       usingShield;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XLBM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.Get Instigator Player
	 */
	struct ABuff_ChargeStun_C_GetInstigatorPlayer_Params
	{
	public:
		class AShooterCharacter*                                   instigatorPlayer;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.ApplyDamage
	 */
	struct ABuff_ChargeStun_C_ApplyDamage_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.BPCheckPreventInput
	 */
	struct ABuff_ChargeStun_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.BPDeactivated
	 */
	struct ABuff_ChargeStun_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.DoStun
	 */
	struct ABuff_ChargeStun_C_DoStun_Params
	{	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.Should Be Stunned
	 */
	struct ABuff_ChargeStun_C_ShouldBeStunned_Params
	{
	public:
		bool                                                       canBeStunned;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.Calculate Multipliers
	 */
	struct ABuff_ChargeStun_C_CalculateMultipliers_Params
	{	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.BPPostInitializeComponents
	 */
	struct ABuff_ChargeStun_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.AddStunAmount
	 */
	struct ABuff_ChargeStun_C_AddStunAmount_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.BPResetBuffStart
	 */
	struct ABuff_ChargeStun_C_BPResetBuffStart_Params
	{	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.UserConstructionScript
	 */
	struct ABuff_ChargeStun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeStun.Buff_ChargeStun_C.ExecuteUbergraph_Buff_ChargeStun
	 */
	struct ABuff_ChargeStun_C_ExecuteUbergraph_Buff_ChargeStun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
