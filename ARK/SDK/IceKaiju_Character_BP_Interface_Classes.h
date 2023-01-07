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
	 * BlueprintGeneratedClass IceKaiju_Character_BP_Interface.IceKaiju_Character_BP_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIceKaiju_Character_BP_Interface_C : public UInterface
	{
	public:
		void SetVar_IKArenaManager(class AActor* ArenaManager);
		void CallFunc_StunKaiju();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
