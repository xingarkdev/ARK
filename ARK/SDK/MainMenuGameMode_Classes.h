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
	 * BlueprintGeneratedClass MainMenuGameMode.MainMenuGameMode_C
	 * Size -> 0x0008 (FullSize[0x05B8] - InheritedSize[0x05B0])
	 */
	class AMainMenuGameMode_C : public AShooterGame_Menu
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_MainMenuGameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
