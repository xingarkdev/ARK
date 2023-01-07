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
	 * BlueprintGeneratedClass DungBeetle_Character_BP.DungBeetle_Character_BP_C
	 * Size -> 0x0031 (FullSize[0x22C9] - InheritedSize[0x2298])
	 */
	class ADungBeetle_Character_BP_C : public ADino_Character_BP_RepelType_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Beetle_C*           DinoCharacterStatus_BP_Beetle_C1;                        // 0x2298(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x22A0(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class APrimalCharacter*                                    K2Node_CustomEvent_DiedCharacter;                        // 0x22B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x22B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S76J[0x7];                                   // 0x22B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDinoTamedInventoryComponent_Beetle_C*               K2Node_DynamicCast_AsDinoTamedInventoryComponent_Beetle_C; // 0x22C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x22C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPCharacterSleeped();
		void BPCharacterUnsleeped();
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnDied_Event(class APrimalCharacter* DiedCharacter);
		void ExecuteUbergraph_DungBeetle_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
