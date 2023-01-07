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
	 * BlueprintGeneratedClass Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C
	 * Size -> 0x0061 (FullSize[0x0A01] - InheritedSize[0x09A0])
	 */
	class ABuff_HazardSuitHelmet_C : public ABuff_HazardSuit_Base_C
	{
	public:
		TArray<class UClass*>                                      HazardSuitItems;                                         // 0x09A0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UMaterialInstanceDynamic*                            PostProcessMat;                                          // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      MonitorBuffClasses;                                      // 0x09B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AActor*                                              K2Node_Event_ForInstigator2;                             // 0x09C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_Event_ForInstigator;                              // 0x09D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAuthority_ReturnValue;                       // 0x09D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PCT5[0x7];                                   // 0x09D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_GetInstigator_ReturnValue;                      // 0x09E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x09E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x09F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_392C[0x7];                                   // 0x09F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_GetBuff_ReturnValue;                            // 0x09F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0A00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool AllowPostProcessEffect();
		void BPNotifyOtherBuffActivated(class APrimalBuff* OtherBuff);
		void BPNotifyOtherBuffDeactivated(class APrimalBuff* OtherBuff);
		void RefreshFullHazardSuitBuff();
		void UserConstructionScript();
		void BPActivated(class AActor* ForInstigator);
		void BPDeactivated(class AActor* ForInstigator);
		void ExecuteUbergraph_Buff_HazardSuitHelmet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
