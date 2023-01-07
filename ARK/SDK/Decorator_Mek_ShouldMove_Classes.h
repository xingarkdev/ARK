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
	 * BlueprintGeneratedClass Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UDecorator_Mek_ShouldMove_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetLocationKey;                                       // 0x0090(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetActorKey;                                          // 0x00B8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecutionStart(class AActor* OwnerActor);
		void ExecuteUbergraph_Decorator_Mek_ShouldMove(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
