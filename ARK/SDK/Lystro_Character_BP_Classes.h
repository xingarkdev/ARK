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
	 * BlueprintGeneratedClass Lystro_Character_BP.Lystro_Character_BP_C
	 * Size -> 0x0018 (FullSize[0x22B0] - InheritedSize[0x2298])
	 */
	class ALystro_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Lystro_C*           DinoCharacterStatus_BP_Lystro_C1;                        // 0x2298(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UAnimMontage*>                                PetAnims;                                                // 0x22A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void HasXPBuff(bool* Result);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void UserConstructionScript();
		void ExecuteUbergraph_Lystro_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
