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
	 * BlueprintGeneratedClass CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C
	 * Size -> 0x00A8 (FullSize[0x0120] - InheritedSize[0x0078])
	 */
	class UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              NavTargetKey;                                            // 0x0078(0x0028) Edit, BlueprintVisible
		float                                                      AttachDistance;                                          // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1P72[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               Pawn;                                                    // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         TargetBuff;                                              // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FindGroundLocationStepDistance;                          // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N77P[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              AttachTargetPointKey;                                    // 0x00C0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x00E8(0x0028) Edit, BlueprintVisible
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x0110(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void FindAttachLocation(struct FVector* GroundLocation, struct FVector* AttachLocation);
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
