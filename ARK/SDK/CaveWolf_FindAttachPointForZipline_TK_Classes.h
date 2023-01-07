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
	 * BlueprintGeneratedClass CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C
	 * Size -> 0x0090 (FullSize[0x0108] - InheritedSize[0x0078])
	 */
	class UCaveWolf_FindAttachPointForZipline_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetAnchor;                                            // 0x0078(0x0028) Edit, BlueprintVisible
		float                                                      FindGroundLocationStepDistance;                          // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AttachDistance;                                          // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              NavigationPointKey;                                      // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AttachTargetPointKey;                                    // 0x00D0(0x0028) Edit, BlueprintVisible
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x00F8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
