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
	 * Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_DifficultyIndex
	 */
	struct UKingKaiju_Character_Interface_C_GetVar_DifficultyIndex_Params
	{
	public:
		int32_t                                                    Return;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_InHordeMode
	 */
	struct UKingKaiju_Character_Interface_C_GetVar_InHordeMode_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKingKaijuCharStatusComponent
	 */
	struct UKingKaiju_Character_Interface_C_GetKingKaijuCharStatusComponent_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     Component;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_PlayersLostHordeMode
	 */
	struct UKingKaiju_Character_Interface_C_SetVar_PlayersLostHordeMode_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_FinishCurrentHordeMode
	 */
	struct UKingKaiju_Character_Interface_C_SetVar_FinishCurrentHordeMode_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_KKArenaManager
	 */
	struct UKingKaiju_Character_Interface_C_SetVar_KKArenaManager_Params
	{
	public:
		class AActor*                                              ArenaManager;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKaijuEnemyList
	 */
	struct UKingKaiju_Character_Interface_C_GetKaijuEnemyList_Params
	{
	public:
		TArray<class APrimalCharacter*>                            EnemyList;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetClosestEnemy
	 */
	struct UKingKaiju_Character_Interface_C_GetClosestEnemy_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
