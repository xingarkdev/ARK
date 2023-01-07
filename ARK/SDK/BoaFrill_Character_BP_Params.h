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
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Get Scaled Affinity Based on Dino
	 */
	struct ABoaFrill_Character_BP_C_GetScaledAffinityBasedonDino_Params
	{
	public:
		float                                                      InputAffinity;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPAdjustDamage
	 */
	struct ABoaFrill_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B5R4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TGLO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.TameIfAllowed
	 */
	struct ABoaFrill_Character_BP_C_TameIfAllowed_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ResetEggSeeking
	 */
	struct ABoaFrill_Character_BP_C_ResetEggSeeking_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.IncreaseTamingAffinity
	 */
	struct ABoaFrill_Character_BP_C_IncreaseTamingAffinity_Params
	{
	public:
		class AShooterCharacter*                                   TamingPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ValueForTaming;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Update Taming
	 */
	struct ABoaFrill_Character_BP_C_UpdateTaming_Params
	{
	public:
		float                                                      ValueForTaming;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2Y0D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    DroppedByShooterChar;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPSetupTamed
	 */
	struct ABoaFrill_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UserConstructionScript
	 */
	struct ABoaFrill_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__FinishedFunc
	 */
	struct ABoaFrill_Character_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__UpdateFunc
	 */
	struct ABoaFrill_Character_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPTimerServer
	 */
	struct ABoaFrill_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.DissolveEggItem
	 */
	struct ABoaFrill_Character_BP_C_DissolveEggItem_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.EatEgg
	 */
	struct ABoaFrill_Character_BP_C_EatEgg_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UpdateSeekEgg
	 */
	struct ABoaFrill_Character_BP_C_UpdateSeekEgg_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.RestartBrain
	 */
	struct ABoaFrill_Character_BP_C_RestartBrain_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartEggMoving
	 */
	struct ABoaFrill_Character_BP_C_StartEggMoving_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartUpdateEggSeekTimer
	 */
	struct ABoaFrill_Character_BP_C_StartUpdateEggSeekTimer_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.MoveToEgg
	 */
	struct ABoaFrill_Character_BP_C_MoveToEgg_Params
	{	};

	/**
	 * Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ExecuteUbergraph_BoaFrill_Character_BP
	 */
	struct ABoaFrill_Character_BP_C_ExecuteUbergraph_BoaFrill_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
