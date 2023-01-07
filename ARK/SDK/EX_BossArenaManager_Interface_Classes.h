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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEX_BossArenaManager_Interface_C : public UInterface
	{
	public:
		void CallEvent_PlayKaijuSecondPhaseMusic(class APrimalDinoCharacter* Kaiju);
		void CallEventKaijuDespawned(class APrimalDinoCharacter* Kaiju);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
