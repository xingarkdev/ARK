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
	 * BlueprintGeneratedClass CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C
	 * Size -> 0x00D0 (FullSize[0x0150] - InheritedSize[0x0080])
	 */
	class UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C : public UBTService_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetLastZiplineLocationKey;                            // 0x0080(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetLastZiplineUsedKey;                                // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              CurrentZipline;                                          // 0x00D0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetCurrentZipline;                                    // 0x00F8(0x0028) Edit, BlueprintVisible
		class APrimalBuff*                                         TargetBuff;                                              // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              OrderedMoveToLocationKey;                                // 0x0128(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveActivation(class AActor* OwnerActor);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
