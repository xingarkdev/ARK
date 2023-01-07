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
	 * BlueprintGeneratedClass Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C
	 * Size -> 0x0090 (FullSize[0x0108] - InheritedSize[0x0078])
	 */
	class UTask_DKaijuFindMovePointWithinArena_C : public UBTTask_BlueprintBase
	{
	public:
		class ADesertKaiju_Character_BP_C*                         MyDK;                                                    // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              CenterArenaLoc;                                          // 0x0080(0x0028) Edit, BlueprintVisible
		float                                                      MinHoverRange;                                           // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxHoverRange;                                           // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              MoveLoc;                                                 // 0x00B0(0x0028) Edit, BlueprintVisible
		float                                                      MoveRadius;                                              // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UseMinDist;                                              // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             TraceStartLoc;                                           // 0x00E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TLN0[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADesertKaiju_AIController_BP_C*                      MYAIC;                                                   // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x00F8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void GetRandomPointNoMin(const struct FVector& Origin, struct FVector* Return);
		void GetRandomPointMin(const struct FVector& Origin, struct FVector* Return, bool* DidNotFindLoc);
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
