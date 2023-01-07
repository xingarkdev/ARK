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
	 * BlueprintGeneratedClass ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UForestKaiju_Character_BP_Interface_C : public UInterface
	{
	public:
		void SetVar_FKArenaManager(class AActor* ArenaManager);
		void CallFunc_StunKaiju();
		void GetVar_IsProtecting(bool* Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
