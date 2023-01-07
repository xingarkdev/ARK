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
	 * Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxExperiencePoints
	 */
	struct UPlayerCharacterStatusComponent_BP_C_BPModifyMaxExperiencePoints_Params
	{
	public:
		float                                                      InMaxExperiencePoints;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxLevel
	 */
	struct UPlayerCharacterStatusComponent_BP_C_BPModifyMaxLevel_Params
	{
	public:
		int32_t                                                    InMaxLevel;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.ExecuteUbergraph_PlayerCharacterStatusComponent_BP
	 */
	struct UPlayerCharacterStatusComponent_BP_C_ExecuteUbergraph_PlayerCharacterStatusComponent_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
