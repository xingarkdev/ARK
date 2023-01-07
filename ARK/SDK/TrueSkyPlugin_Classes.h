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
	 * Class TrueSkyPlugin.TrueSkyComponent
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UTrueSkyComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrueSkyPlugin.TrueSkySequenceActor
	 * Size -> 0x0070 (FullSize[0x04E0] - InheritedSize[0x0470])
	 */
	class ATrueSkySequenceActor : public ATrueSkyActorParent
	{
	public:
		TArray<class UTrueSkySequenceAsset*>                       ActiveSequences;                                         // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              BlendWeights;                                            // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UTexture2D*                                          MoonTexture;                                             // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          CosmicBackgroundTexture;                                 // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextureRenderTarget2D*                              External_ScatterRT;                                      // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextureRenderTarget2D*                              External_LossRT;                                         // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Brightness;                                              // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      MetresPerUnit;                                           // 0x04B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinSimpleCloudShadowing;                                 // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      MaxSimpleCloudShadowing;                                 // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      MinSimpleCloudShadowingDistance;                         // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxSimpleCloudShadowingDistance;                         // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SimpleCloudShadowSharpness;                              // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SNXE[0x4];                                   // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Visible;                                                 // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NFLV[0xF];                                   // 0x04D1(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetTime(float Value);
		void SetPointLightSource(int32_t ID, const struct FLinearColor& lightColour, float Intensity, const struct FVector& pos, float MinRadius, float MaxRadius);
		void SetPointLight(class APointLight* Source);
		void SetKeyframeInt(int32_t keyframeUid, const class FString& Name, int32_t Value);
		void SetKeyframeFloat(int32_t keyframeUid, const class FString& Name, float Value);
		void SetInt(const class FString& Name, int32_t Value);
		void SetFloat(const class FString& Name, float Value);
		struct FRotator GetSunRotation();
		struct FLinearColor GetSunColor();
		int32_t GetNextModifiableSkyKeyframe();
		int32_t GetNextModifiableCloudKeyframe(int32_t Layer);
		int32_t GetKeyframeInt(int32_t keyframeUid, const class FString& Name);
		float GetKeyframeFloat(int32_t keyframeUid, const class FString& Name);
		int32_t GetInt(const class FString& Name);
		float GetFloat(const class FString& Name);
		void ForceUpdate();
		float CloudPointTest(int32_t queryId, const struct FVector& pos);
		float CloudLineTest(int32_t queryId, const struct FVector& StartPos, const struct FVector& EndPos);
		static UClass* StaticClass();
	};

	/**
	 * Class TrueSkyPlugin.TrueSkySequenceAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTrueSkySequenceAsset : public UObject
	{
	public:
		TArray<unsigned char>                                      SequenceText;                                            // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
