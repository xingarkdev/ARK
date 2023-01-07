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
	 * Function Buff_HealAura.Buff_HealAura_C.IsAlly
	 */
	struct ABuff_HealAura_C_IsAlly_Params
	{
	public:
		int32_t                                                    otherTargetingTeam;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAllyOrSomeTeam;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VN6S[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.BPClientHandleNetExecCommand
	 */
	struct ABuff_HealAura_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.HasReachedMaxHealedCharacters
	 */
	struct ABuff_HealAura_C_HasReachedMaxHealedCharacters_Params
	{
	public:
		bool                                                       hasReachedMax;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z78S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.TryHealCharacterAndSpawnParticles
	 */
	struct ABuff_HealAura_C_TryHealCharacterAndSpawnParticles_Params
	{
	public:
		class APrimalCharacter*                                    characterToHeal;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dontHealIfAlreadyHealing;                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XZUX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isInstigator;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.CheckStopHealingCondition
	 */
	struct ABuff_HealAura_C_CheckStopHealingCondition_Params
	{
	public:
		bool                                                       shouldStopHealing;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotification
	 */
	struct ABuff_HealAura_C_ShowHUDNotification_Params
	{
	public:
		struct FStatusValueModifierDescription                     notificationDescription;                                 // 0x0000(0x0050)  (Parm)
		class APlayerController*                                   PlayerController;                                        // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.CalculateFoodConsumptionForHealingAmount
	 */
	struct ABuff_HealAura_C_CalculateFoodConsumptionForHealingAmount_Params
	{
	public:
		float                                                      healAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L1WV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    Character;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      foodAmount;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.StopHealing
	 */
	struct ABuff_HealAura_C_StopHealing_Params
	{
	public:
		bool                                                       doMulticast;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_REAP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.Get Current Status Amount
	 */
	struct ABuff_HealAura_C_GetCurrentStatusAmount_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalCharacterStatusValue                                statusField;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4RUJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      food;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.ConsumeFood
	 */
	struct ABuff_HealAura_C_ConsumeFood_Params
	{
	public:
		float                                                      foodAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.DisableHealingForCharacter
	 */
	struct ABuff_HealAura_C_DisableHealingForCharacter_Params
	{
	public:
		class APrimalCharacter*                                    characterIndex;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       disableParticles;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.RestoreBitFlag
	 */
	struct ABuff_HealAura_C_RestoreBitFlag_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.CanHealCharacter
	 */
	struct ABuff_HealAura_C_CanHealCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PrimalCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canHeal;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1X37[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.CleanHealArray
	 */
	struct ABuff_HealAura_C_CleanHealArray_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.BuffTickServer
	 */
	struct ABuff_HealAura_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.Activate Healing
	 */
	struct ABuff_HealAura_C_ActivateHealing_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.TryHeal Character and Consume Food
	 */
	struct ABuff_HealAura_C_TryHealCharacterandConsumeFood_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSelf;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SASG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       couldHeal;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7WWD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.CheckFoodCondition
	 */
	struct ABuff_HealAura_C_CheckFoodCondition_Params
	{
	public:
		bool                                                       hasEnoughFood;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_11JB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.HealCharacter
	 */
	struct ABuff_HealAura_C_HealCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      amount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.Restore All Bit Flags
	 */
	struct ABuff_HealAura_C_RestoreAllBitFlags_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.BPDeactivated
	 */
	struct ABuff_HealAura_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.ReceiveDestroyed
	 */
	struct ABuff_HealAura_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.Calculate Healing Amount For Character
	 */
	struct ABuff_HealAura_C_CalculateHealingAmountForCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSelf;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PEW6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      healingAmount;                                           // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.UserConstructionScript
	 */
	struct ABuff_HealAura_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.FadeOut__FinishedFunc
	 */
	struct ABuff_HealAura_C_FadeOut__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.FadeOut__UpdateFunc
	 */
	struct ABuff_HealAura_C_FadeOut__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.FadeIn__FinishedFunc
	 */
	struct ABuff_HealAura_C_FadeIn__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.FadeIn__UpdateFunc
	 */
	struct ABuff_HealAura_C_FadeIn__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.SpawnHealParticleOnCharacter
	 */
	struct ABuff_HealAura_C_SpawnHealParticleOnCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.FadeInPulse
	 */
	struct ABuff_HealAura_C_FadeInPulse_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.ReceiveBeginPlay
	 */
	struct ABuff_HealAura_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse
	 */
	struct ABuff_HealAura_C_FadeOutPulse_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.DestroyHealingParticleForCharacter_Multicast
	 */
	struct ABuff_HealAura_C_DestroyHealingParticleForCharacter_Multicast_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles_Multicast
	 */
	struct ABuff_HealAura_C_DeactivateAndDestroyAllParticles_Multicast_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.DeactivateAllParticles
	 */
	struct ABuff_HealAura_C_DeactivateAllParticles_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.DestroyAllHealingParticles
	 */
	struct ABuff_HealAura_C_DestroyAllHealingParticles_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles
	 */
	struct ABuff_HealAura_C_DeactivateAndDestroyAllParticles_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse_Multicast
	 */
	struct ABuff_HealAura_C_FadeOutPulse_Multicast_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.FadeInPulse_Multicast
	 */
	struct ABuff_HealAura_C_FadeInPulse_Multicast_Params
	{	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotificationForPlayer_FromServer
	 */
	struct ABuff_HealAura_C_ShowHUDNotificationForPlayer_FromServer_Params
	{
	public:
		class AShooterCharacter*                                   PlayerCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.DeactivateAfterDelay
	 */
	struct ABuff_HealAura_C_DeactivateAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HealAura.Buff_HealAura_C.ExecuteUbergraph_Buff_HealAura
	 */
	struct ABuff_HealAura_C_ExecuteUbergraph_Buff_HealAura_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
