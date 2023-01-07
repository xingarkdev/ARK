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
	 * BlueprintGeneratedClass Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C
	 * Size -> 0x0060 (FullSize[0x0C00] - InheritedSize[0x0BA0])
	 */
	class ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C : public ABuff_ChargeEmitterStructure_C
	{
	public:
		class UPointLightComponent*                                ChargeLight;                                             // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LightFadeOut_fadeOutAlpha_58016462417C8C1F9E73388F30C9DAA8; // 0x0BA8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         LightFadeOut__Direction_58016462417C8C1F9E73388F30C9DAA8; // 0x0BAC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OT8O[0x3];                                   // 0x0BAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  LightFadeOut;                                            // 0x0BB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LightFadeIn_lightAlpha_E5CC472246391ECED2F299A7D0FA5D21; // 0x0BB8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         LightFadeIn__Direction_E5CC472246391ECED2F299A7D0FA5D21; // 0x0BBC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GY7N[0x3];                                   // 0x0BBD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  LightFadeIn;                                             // 0x0BC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isLightFadingIn;                                         // 0x0BC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BBXL[0x3];                                   // 0x0BC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      lightMinExposure;                                        // 0x0BCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      lightMaxExposure;                                        // 0x0BD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      lightMinIntensity;                                       // 0x0BD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      lightMaxIntensity;                                       // 0x0BD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ChargeColor;                                             // 0x0BDC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isLightFadingOut;                                        // 0x0BEC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0BED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0BEE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IX6O[0x1];                                   // 0x0BEF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetLightTargetIntensity_targetIntensity;        // 0x0BF0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Lerp_ReturnValue;                               // 0x0BF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x0BF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0BF9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N6W2[0x2];                                   // 0x0BFA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Lerp_ReturnValue2;                              // 0x0BFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void AttachBuffToPlant();
		void InitializeEmitter();
		void UpdateLightIntensity();
		void BuffTickClient(float DeltaTime);
		void ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue);
		void GetLightTargetIntensity(float* targetIntensity);
		void GetEmitterLineTraceOrigin(class AActor* emitterActor, struct FVector* lineTraceOrigin);
		void UserConstructionScript();
		void LightFadeIn__FinishedFunc();
		void LightFadeIn__UpdateFunc();
		void LightFadeOut__FinishedFunc();
		void LightFadeOut__UpdateFunc();
		void FadeInLight();
		void FadeOutLight();
		void ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
