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
	 * BlueprintGeneratedClass PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C
	 * Size -> 0x0070 (FullSize[0x0B58] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_FishBasketFilled_C : public UPrimalItem_Base_C
	{
	public:
		class APrimalCharacter*                                    ServerShadowmaneToHack;                                  // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    PreviousShadowmaneClientValue;                           // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ShadowmaneCustomTag;                                     // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      minimumsizerequirementforfeedingshadowmane;              // 0x0B00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A6L3[0x4];                                   // 0x0B04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Localizefishistoosmallstring;                            // 0x0B08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              Localizeshadomaneisalreadyeatingstring;                  // 0x0B18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              Localizecannoteatanimalstring;                           // 0x0B28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class APrimalDinoCharacter*                                fishtofeedshadowmane;                                    // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    allowedretryattempts;                                    // 0x0B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    currenttryattempts;                                      // 0x0B44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              Localizetamecapstring;                                   // 0x0B48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void tryfeedshadowmane(class APrimalDinoCharacter* fish);
		void FindShadowmane(bool backup, class APrimalDinoCharacter** Shadowmane);
		void BPDrawItemIcon(class UCanvas* ItemCanvas, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, bool bItemEnabled, struct FLinearColor* TheTintColor);
		void SlottedTick(float DeltaSeconds);
		void BlueprintUsed();
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		bool BPCanUse(bool bIgnoreCooldown);
		void ExecuteUbergraph_PrimalItem_FishBasketFilled(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
