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
	 * Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.StartHealing
	 */
	struct ABuff_HealAura_Passive_C_StartHealing_Params
	{	};

	/**
	 * Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.Activate Healing
	 */
	struct ABuff_HealAura_Passive_C_ActivateHealing_Params
	{	};

	/**
	 * Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.HealCharacter
	 */
	struct ABuff_HealAura_Passive_C_HealCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      amount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.UserConstructionScript
	 */
	struct ABuff_HealAura_Passive_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.ReceiveBeginPlay
	 */
	struct ABuff_HealAura_Passive_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.TriggerDelayedHealing
	 */
	struct ABuff_HealAura_Passive_C_TriggerDelayedHealing_Params
	{	};

	/**
	 * Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.ExecuteUbergraph_Buff_HealAura_Passive
	 */
	struct ABuff_HealAura_Passive_C_ExecuteUbergraph_Buff_HealAura_Passive_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
