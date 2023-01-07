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
	 * BlueprintGeneratedClass Buff_RemoteCameraVision.Buff_RemoteCameraVision_C
	 * Size -> 0x0030 (FullSize[0x09B0] - InheritedSize[0x0980])
	 */
	class ABuff_RemoteCameraVision_C : public ABuff_Base_C
	{
	public:
		float                                                      Interference;                                            // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9PI0[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARemoteCamera_Character_BP_C*                        CameraReplicated;                                        // 0x0988(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     PossessionPendingTime;                                   // 0x0990(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentFade;                                             // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TargetFade;                                              // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FadeSpeed;                                               // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YHRP[0x4];                                   // 0x09A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            helmetOverlayPostprocess;                                // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void ResetInterference();
		void StartFade(bool FadeIn);
		void BPDeactivated(class AActor* ForInstigator);
		ECameraStyle BPForceCameraStyle(class APrimalCharacter* ForViewTarget);
		class APrimalCharacter* BPOverrideTalkerCharacter();
		void IsLocalCamera(bool* retVal);
		void PossessionChangePending(class ARemoteCamera_Character_BP_C* NewCamera);
		bool BPOverrideIsNetRelevantFor(class APlayerController* RealViewer, class AActor* Viewer, struct FVector* SrcLocation);
		void BuffTickClient(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_RemoteCameraVision(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
