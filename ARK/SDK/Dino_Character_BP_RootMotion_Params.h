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
	 * Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.WantsLocomotionTransition
	 */
	struct ADino_Character_BP_RootMotion_C_WantsLocomotionTransition_Params
	{
	public:
		bool                                                       WantsTransition;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.GetMovementMontage
	 */
	struct ADino_Character_BP_RootMotion_C_GetMovementMontage_Params
	{
	public:
		ERootMotionMovementMode                                    Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OYVH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.IsLocomotionBlocked
	 */
	struct ADino_Character_BP_RootMotion_C_IsLocomotionBlocked_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.TickLocomotion
	 */
	struct ADino_Character_BP_RootMotion_C_TickLocomotion_Params
	{	};

	/**
	 * Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.UserConstructionScript
	 */
	struct ADino_Character_BP_RootMotion_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.ReceiveTick
	 */
	struct ADino_Character_BP_RootMotion_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.DeltaBlockTransition
	 */
	struct ADino_Character_BP_RootMotion_C_DeltaBlockTransition_Params
	{
	public:
		int32_t                                                    Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.AnimNotify_LocomotionDone
	 */
	struct ADino_Character_BP_RootMotion_C_AnimNotify_LocomotionDone_Params
	{	};

	/**
	 * Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.ExecuteUbergraph_Dino_Character_BP_RootMotion
	 */
	struct ADino_Character_BP_RootMotion_C_ExecuteUbergraph_Dino_Character_BP_RootMotion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
