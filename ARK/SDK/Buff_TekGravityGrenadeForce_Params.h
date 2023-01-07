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
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BuffTickServer
	 */
	struct ABuff_TekGravityGrenadeForce_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPDeactivated
	 */
	struct ABuff_TekGravityGrenadeForce_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPActivated
	 */
	struct ABuff_TekGravityGrenadeForce_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPPreventInstigatorMovementMode
	 */
	struct ABuff_TekGravityGrenadeForce_C_BPPreventInstigatorMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ABuff_TekGravityGrenadeForce_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.SetupGravityForce
	 */
	struct ABuff_TekGravityGrenadeForce_C_SetupGravityForce_Params
	{
	public:
		struct FVector                                             GravityCenter;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      StrengthMultiplier;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      EffectRadius;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.UserConstructionScript
	 */
	struct ABuff_TekGravityGrenadeForce_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.MultiOnSetupGravityForce
	 */
	struct ABuff_TekGravityGrenadeForce_C_MultiOnSetupGravityForce_Params
	{
	public:
		struct FVector                                             GravityCenter;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForceMult;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      EffectRadius;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InitialLaunchDuration;                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     ExplodeNetworkTime;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientUpdateVelocity
	 */
	struct ABuff_TekGravityGrenadeForce_C_ClientUpdateVelocity_Params
	{
	public:
		struct FVector                                             NewVelocity;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.StopGravityEffect
	 */
	struct ABuff_TekGravityGrenadeForce_C_StopGravityEffect_Params
	{	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ForceInstigatorNetUpdate
	 */
	struct ABuff_TekGravityGrenadeForce_C_ForceInstigatorNetUpdate_Params
	{	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientSyncDesiredFallVelocity
	 */
	struct ABuff_TekGravityGrenadeForce_C_ClientSyncDesiredFallVelocity_Params
	{
	public:
		struct FVector                                             vel;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ExecuteUbergraph_Buff_TekGravityGrenadeForce
	 */
	struct ABuff_TekGravityGrenadeForce_C_ExecuteUbergraph_Buff_TekGravityGrenadeForce_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
