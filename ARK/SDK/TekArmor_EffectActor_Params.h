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
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_ParticleScale
	 */
	struct ATekArmor_EffectActor_C_OnRep_ParticleScale_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bParticlesOn
	 */
	struct ATekArmor_EffectActor_C_OnRep_bParticlesOn_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bSoundOn
	 */
	struct ATekArmor_EffectActor_C_OnRep_bSoundOn_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekSoundRef
	 */
	struct ATekArmor_EffectActor_C_OnRep_TekSoundRef_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekParticleTemplate
	 */
	struct ATekArmor_EffectActor_C_OnRep_TekParticleTemplate_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetSoundActive
	 */
	struct ATekArmor_EffectActor_C_SetSoundActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SN90[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartTime;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive
	 */
	struct ATekArmor_EffectActor_C_SetParticleActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.UserConstructionScript
	 */
	struct ATekArmor_EffectActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect
	 */
	struct ATekArmor_EffectActor_C_InitTekEffect_Params
	{
	public:
		class UParticleSystem*                                     particle;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             particleScale;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RBPL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Sound;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    Player;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied
	 */
	struct ATekArmor_EffectActor_C_PlayerDied_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX
	 */
	struct ATekArmor_EffectActor_C_SetTekFX_Params
	{
	public:
		class UParticleSystem*                                     particle;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             particleScale;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UBAG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Sound;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState
	 */
	struct ATekArmor_EffectActor_C_Replicate_SetSoundState_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState
	 */
	struct ATekArmor_EffectActor_C_Replicate_SetParticleState_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor
	 */
	struct ATekArmor_EffectActor_C_ExecuteUbergraph_TekArmor_EffectActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
