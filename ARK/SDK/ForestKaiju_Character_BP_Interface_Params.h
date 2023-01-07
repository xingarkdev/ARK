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
	 * Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.SetVar_FKArenaManager
	 */
	struct UForestKaiju_Character_BP_Interface_C_SetVar_FKArenaManager_Params
	{
	public:
		class AActor*                                              ArenaManager;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.CallFunc_StunKaiju
	 */
	struct UForestKaiju_Character_BP_Interface_C_CallFunc_StunKaiju_Params
	{	};

	/**
	 * Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.GetVar_IsProtecting
	 */
	struct UForestKaiju_Character_BP_Interface_C_GetVar_IsProtecting_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
