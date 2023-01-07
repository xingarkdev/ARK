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
	 * BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C
	 * Size -> 0x0020 (FullSize[0x0B08] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemResource_Element_C : public UPrimalItemResourceGeneric_C
	{
	public:
		class FName                                                ShapeshifterSmallsCustomTag;                             // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    PreviousShapeshifterClientValue;                         // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    ServerShapeshifterToFeed;                                // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ShapeshifterBiglyCustomTag;                              // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPServerHandleItemNetExecCommand(class AShooterPlayerController* ForPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void FindShapeshifter(class APrimalDinoCharacter** Shapeshifter, bool* RetMounted);
		void BPPreUseItem();
		bool BPCanUse(bool bIgnoreCooldown);
		bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem);
		void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData);
		void ExecuteUbergraph_PrimalItemResource_Element(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
