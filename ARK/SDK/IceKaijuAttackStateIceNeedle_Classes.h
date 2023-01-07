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
	 * BlueprintGeneratedClass IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C
	 * Size -> 0x0001 (FullSize[0x00A1] - InheritedSize[0x00A0])
	 */
	class UIceKaijuAttackStateIceNeedle_C : public UPrimalAIStateBPBase
	{
	public:
		bool                                                       LaunchedSpear;                                           // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPOnAttackStart(int32_t AttackIndex);
		void StartAnimationStateEvent(const class FName& CustomEventName, ENetRole Role);
		void BPOnAttackTick(float DeltaTime);
		void TickAnimationStateEvent(float DeltaTime, const class FName& CustomEventName, ENetRole Role);
		void ExecuteUbergraph_IceKaijuAttackStateIceNeedle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
