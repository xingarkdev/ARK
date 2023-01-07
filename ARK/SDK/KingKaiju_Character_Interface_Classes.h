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
	 * BlueprintGeneratedClass KingKaiju_Character_Interface.KingKaiju_Character_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKingKaiju_Character_Interface_C : public UInterface
	{
	public:
		void GetVar_DifficultyIndex(int32_t* Return);
		void GetVar_InHordeMode(bool* Return);
		void GetKingKaijuCharStatusComponent(class UPrimalCharacterStatusComponent** Component);
		void SetVar_PlayersLostHordeMode(bool Value);
		void SetVar_FinishCurrentHordeMode(bool Value);
		void SetVar_KKArenaManager(class AActor* ArenaManager);
		void GetKaijuEnemyList(TArray<class APrimalCharacter*>* EnemyList);
		void GetClosestEnemy(class AActor** Enemy);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
