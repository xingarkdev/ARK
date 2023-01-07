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
	 * Function Eel_Character_BP.Eel_Character_BP_C.BPUnstasis
	 */
	struct AEel_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.BPSetupTamed
	 */
	struct AEel_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.UpdateEmissive
	 */
	struct AEel_Character_BP_C_UpdateEmissive_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.OnRep_CanLightningAttack
	 */
	struct AEel_Character_BP_C_OnRep_CanLightningAttack_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.BlueprintCanAttack
	 */
	struct AEel_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_37CT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5U3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.CheckNearbyAndUpdateBeams
	 */
	struct AEel_Character_BP_C_CheckNearbyAndUpdateBeams_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.UpdateChainBeamEnds
	 */
	struct AEel_Character_BP_C_UpdateChainBeamEnds_Params
	{
	public:
		TArray<class AActor*>                                      NearbyTeamEels;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.BPTimerNonDedicated
	 */
	struct AEel_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.BPDoAttack
	 */
	struct AEel_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.UserConstructionScript
	 */
	struct AEel_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.ClearParticles
	 */
	struct AEel_Character_BP_C_ClearParticles_Params
	{
	public:
		float                                                      DelayTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.StartParticles
	 */
	struct AEel_Character_BP_C_StartParticles_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.SetCanLightningAttackAfterDelay
	 */
	struct AEel_Character_BP_C_SetCanLightningAttackAfterDelay_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.AnimNotify_ShockAOEParticle
	 */
	struct AEel_Character_BP_C_AnimNotify_ShockAOEParticle_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.ReceiveBeginPlay
	 */
	struct AEel_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.UnsetFX
	 */
	struct AEel_Character_BP_C_UnsetFX_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Eel_Character_BP.Eel_Character_BP_C.ExecuteUbergraph_Eel_Character_BP
	 */
	struct AEel_Character_BP_C_ExecuteUbergraph_Eel_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
