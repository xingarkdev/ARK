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
	 * BlueprintGeneratedClass Buff_TekSniper_XRay.Buff_TekSniper_XRay_C
	 * Size -> 0x0040 (FullSize[0x09F8] - InheritedSize[0x09B8])
	 */
	class ABuff_TekSniper_XRay_C : public ABuff_XRay_Base_C
	{
	public:
		float                                                      XRayActivation;                                          // 0x09B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DVC7[0x4];                                   // 0x09BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            OverlayMaterial;                                         // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      XRayActivationInterpSpeed;                               // 0x09C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_02LW[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapTekSniper_C*                                    MySniper;                                                // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                XRayParamName;                                           // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                MaxDistanceParamName;                                    // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      XRayInterferenceActorTypes;                              // 0x09E8(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void GetFriendOrFoe(class AActor* Actor, float* Value);
		void BPDeactivated(class AActor* ForInstigator);
		void BuffTickClient(float DeltaTime);
		float GetBuffPostprocessIntensity();
		float SmoothOverheatingAmount(float amount, float DeltaTime);
		void SetOverheatingAmount(float Value);
		void BPActivated(class AActor* ForInstigator);
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_TekSniper_XRay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
