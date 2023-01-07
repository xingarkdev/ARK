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
	 * BlueprintGeneratedClass ProjLasso.ProjLasso_C
	 * Size -> 0x0034 (FullSize[0x06DC] - InheritedSize[0x06A8])
	 */
	class AProjLasso_C : public APrimalProjectileGrapplingHook
	{
	public:
		struct FVector                                             ExtraVelocity;                                           // 0x06A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAttached;                                               // 0x06B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSetVelocityRot;                                         // 0x06B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QXBT[0x2];                                   // 0x06B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            PreviousWorldRotation;                                   // 0x06B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             AttachmentOffset;                                        // 0x06C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             GrapHookAttachmentOffset;                                // 0x06D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void BPInitializedVelocity(struct FVector* InVelocity, float CustomSpeed);
		void UserConstructionScript();
		void ExecuteUbergraph_ProjLasso(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
