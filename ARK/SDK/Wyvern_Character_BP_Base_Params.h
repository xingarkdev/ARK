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
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct AWyvern_Character_BP_Base_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.SetTurretMode
	 */
	struct AWyvern_Character_BP_Base_C_SetTurretMode_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.BPSetupTamed
	 */
	struct AWyvern_Character_BP_Base_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.SpawnNestEgg
	 */
	struct AWyvern_Character_BP_Base_C_SpawnNestEgg_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.BPCharacterUnsleeped
	 */
	struct AWyvern_Character_BP_Base_C_BPCharacterUnsleeped_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.BSetupDinoTameable
	 */
	struct AWyvern_Character_BP_Base_C_BSetupDinoTameable_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.BPBecomeAdult
	 */
	struct AWyvern_Character_BP_Base_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.BPBecomeBaby
	 */
	struct AWyvern_Character_BP_Base_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.UserConstructionScript
	 */
	struct AWyvern_Character_BP_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.BPUnstasis
	 */
	struct AWyvern_Character_BP_Base_C_BPUnstasis_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.AnimNotify_FXTakeOff
	 */
	struct AWyvern_Character_BP_Base_C_AnimNotify_FXTakeOff_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Base.Wyvern_Character_BP_Base_C.ExecuteUbergraph_Wyvern_Character_BP_Base
	 */
	struct AWyvern_Character_BP_Base_C_ExecuteUbergraph_Wyvern_Character_BP_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
