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
	 * WidgetBlueprintGeneratedClass ReelingGame.ReelingGame_C
	 * Size -> 0x00A0 (FullSize[0x05B8] - InheritedSize[0x0518])
	 */
	class UReelingGame_C : public UPrimalUI
	{
	public:
		class UTextBlock*                                          EndGameTextBlock;                                        // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              GamePadBtnIcon;                                          // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          KeyTextBlock;                                            // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          RemainingTimeTextBlock;                                  // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FKey                                                CurrKey;                                                 // 0x0538(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKey>                                        GameKeys;                                                // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrKeyIndex;                                            // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GameDuration;                                            // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Initialized;                                             // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OXFW[0x7];                                   // 0x0569(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                LastPassedKey;                                           // 0x0570(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class AWeapFishingRod_C*                                   FishingRod;                                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           KeySuccess;                                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           PassedGame;                                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bGameEnded;                                              // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ClosingGame;                                             // 0x05A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZOHF[0x2];                                   // 0x05A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GameStartTime;                                           // 0x05A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FGamePadKeyName>                             GamepadKeysMappings;                                     // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void HandleKeyPress(const struct FKey& Key, bool* retReply);
		struct FEventReply OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
		void CycleToNextKey();
		void UpdateRemainingTime();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyboardEvent& InKeyboardEvent);
		void CycleKeys(bool* FinishedGame);
		void EndGame(bool succeeded);
		void Init(float KeyDisplayDuration, TArray<struct FKey>* GameKeys, class AWeapFishingRod_C* rod);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_ReelingGame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
