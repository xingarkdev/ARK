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
	 * BlueprintGeneratedClass CaveWolf_TryAttachToZipline_TK.CaveWolf_TryAttachToZipline_TK_C
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class UCaveWolf_TryAttachToZipline_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetAnchor;                                            // 0x0078(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x00A0(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_CaveWolf_TryAttachToZipline_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
