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
	 * Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.StartSelfDestruct
	 */
	struct UMegaMek_Character_BP_Interface_C_StartSelfDestruct_Params
	{	};

	/**
	 * Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetForceKill
	 */
	struct UMegaMek_Character_BP_Interface_C_SetForceKill_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetStunned
	 */
	struct UMegaMek_Character_BP_Interface_C_SetStunned_Params
	{
	public:
		float                                                      StunDuration;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
