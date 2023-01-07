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
	 * BlueprintGeneratedClass WaterVein_Base_BP.WaterVein_Base_BP_C
	 * Size -> 0x0010 (FullSize[0x0F10] - InheritedSize[0x0F00])
	 */
	class AWaterVein_Base_BP_C : public APrimalStructureItemContainer_CropPlot
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0F00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSetInitialWater;                                        // 0x0F08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FH8V[0x3];                                   // 0x0F09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x0F0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintDrawHUD(class AShooterHUD* HUD, float CenterX, float CenterY);
		void UpdateWaterVisuals();
		void ReceiveBeginPlay();
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void UserConstructionScript();
		void PostInitUpdateWaterVisuals();
		void ExecuteUbergraph_WaterVein_Base_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
