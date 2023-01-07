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
	 * BlueprintGeneratedClass Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UIguanodon_UpdateStance_DK_C : public UBTService_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              IsFleeingKey;                                            // 0x0080(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              shouldFleeKey;                                           // 0x00A8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ExecuteUbergraph_Iguanodon_UpdateStance_DK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
