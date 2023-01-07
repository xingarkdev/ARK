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
	 * BlueprintGeneratedClass IsCooledDown.IsCooledDown_C
	 * Size -> 0x002C (FullSize[0x00BC] - InheritedSize[0x0090])
	 */
	class UIsCooledDown_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              CoolDownTimeKey;                                         // 0x0090(0x0028) Edit, BlueprintVisible
		float                                                      CoolDownDurationKey;                                     // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_IsCooledDown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
