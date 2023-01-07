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
	 * BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C
	 * Size -> 0x0038 (FullSize[0x0EA0] - InheritedSize[0x0E68])
	 */
	class UPrimalItem_Spawner_HoverSail_Main_C : public UPrimalItem_Spawner_HoverSail_Parent_C
	{
	public:
		bool                                                       showfuelpercentagenotworkingondedi;                      // 0x0E68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4O1Z[0x7];                                   // 0x0E69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              failedtospawncauseondinostring;                          // 0x0E70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              failedtospawncauseseatedstring;                          // 0x0E80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              failedtotransferinventorycausereferenceinvalidstring;    // 0x0E90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void BPInitIconMaterial();
		void BlueprintUsed();
		void OnDinoSpawned(class APrimalDinoCharacter* NewDino);
		class FString BPGetCustomInventoryWidgetText();
		void ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Main(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
