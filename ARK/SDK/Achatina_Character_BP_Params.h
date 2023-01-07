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
	 * Function Achatina_Character_BP.Achatina_Character_BP_C.BPDinoARKDownloadedBegin
	 */
	struct AAchatina_Character_BP_C_BPDinoARKDownloadedBegin_Params
	{	};

	/**
	 * Function Achatina_Character_BP.Achatina_Character_BP_C.BPCharacterUnsleeped
	 */
	struct AAchatina_Character_BP_C_BPCharacterUnsleeped_Params
	{	};

	/**
	 * Function Achatina_Character_BP.Achatina_Character_BP_C.BPCharacterSleeped
	 */
	struct AAchatina_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Achatina_Character_BP.Achatina_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AAchatina_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Achatina_Character_BP.Achatina_Character_BP_C.BPTimerNonDedicated
	 */
	struct AAchatina_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Achatina_Character_BP.Achatina_Character_BP_C.UserConstructionScript
	 */
	struct AAchatina_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Achatina_Character_BP.Achatina_Character_BP_C.ReceiveBeginPlay
	 */
	struct AAchatina_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Achatina_Character_BP.Achatina_Character_BP_C.OnDied_Event
	 */
	struct AAchatina_Character_BP_C_OnDied_Event_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Achatina_Character_BP.Achatina_Character_BP_C.ExecuteUbergraph_Achatina_Character_BP
	 */
	struct AAchatina_Character_BP_C_ExecuteUbergraph_Achatina_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
