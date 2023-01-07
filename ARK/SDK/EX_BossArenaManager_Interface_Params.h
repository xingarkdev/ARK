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
	 * Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.CallEvent_PlayKaijuSecondPhaseMusic
	 */
	struct UEX_BossArenaManager_Interface_C_CallEvent_PlayKaijuSecondPhaseMusic_Params
	{
	public:
		class APrimalDinoCharacter*                                Kaiju;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.Call Event Kaiju Despawned
	 */
	struct UEX_BossArenaManager_Interface_C_CallEventKaijuDespawned_Params
	{
	public:
		class APrimalDinoCharacter*                                Kaiju;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
