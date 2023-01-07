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
	 * AnimBlueprintGeneratedClass Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C
	 * Size -> 0x0004 (FullSize[0x3AFC] - InheritedSize[0x3AF8])
	 */
	class UEnforcer_AnimBlueprint_C : public UDinoBlueprintBase_Climber_C
	{
	public:
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x3AF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void IsDinoRunning(class ADino_Character_BP_Climber_C* Dino, bool* Running);
		void GetStrafeBlendspacePlayRate(float ForwardVelocity, float RightVelocity, const struct FVector2D& BlendspaceInputs, float* BlendspacePlayRate);
		void ShouldPlayClimbRunAnim(bool* PlayClimbRun);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_Enforcer_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
