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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.IsDinoRunning
	 */
	struct UEnforcer_AnimBlueprint_C_IsDinoRunning_Params
	{
	public:
		class ADino_Character_BP_Climber_C*                        Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Running;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.GetStrafeBlendspacePlayRate
	 */
	struct UEnforcer_AnimBlueprint_C_GetStrafeBlendspacePlayRate_Params
	{
	public:
		float                                                      ForwardVelocity;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RightVelocity;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           BlendspaceInputs;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendspacePlayRate;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ShouldPlayClimbRunAnim
	 */
	struct UEnforcer_AnimBlueprint_C_ShouldPlayClimbRunAnim_Params
	{
	public:
		bool                                                       PlayClimbRun;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MDLX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct UEnforcer_AnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintInitializeAnimation
	 */
	struct UEnforcer_AnimBlueprint_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ExecuteUbergraph_Enforcer_AnimBlueprint
	 */
	struct UEnforcer_AnimBlueprint_C_ExecuteUbergraph_Enforcer_AnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
