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
	 * BlueprintGeneratedClass PrimalItemConsumable_Mutagel.PrimalItemConsumable_Mutagel_C
	 * Size -> 0x003C (FullSize[0x0B24] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumable_Mutagel_C : public UPrimalItemConsumableGeneric_C
	{
	public:
		float                                                      MinimumMutationCost;                                     // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaximumMutationCost;                                     // 0x0AEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    PreviousStriderClientValue;                              // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    ServerStriderToHack;                                     // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                StriderCustomTag;                                        // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         RequiredMutagenPerLevelCurve;                            // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       usecurveforfindingmutagenamountiffalseusemultiplierandpower; // 0x0B10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_20SL[0x3];                                   // 0x0B11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      requiredmutagenmultiplier;                               // 0x0B14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      requiredmutagenpower;                                    // 0x0B18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    savedcurrentmutagenininv;                                // 0x0B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    savedamountofmutagelneeded;                              // 0x0B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPPreUseItem();
		void BPServerHandleItemNetExecCommand(class AShooterPlayerController* ForPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void findstrider(bool backup, class APrimalDinoCharacter** strider);
		void GetAmountInInventory(int32_t* NewParam);
		int32_t CalculateAmountNeeded();
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void BlueprintUsed();
		bool BPCanUse(bool bIgnoreCooldown);
		void ExecuteUbergraph_PrimalItemConsumable_Mutagel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
