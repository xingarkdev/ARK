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
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerUsingJetpack
	 */
	struct ABuff_TekArmor_Pants_C_IsPlayerUsingJetpack_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers
	 */
	struct ABuff_TekArmor_Pants_C_SetPlayerIgnoreSpeedModifiers_Params
	{
	public:
		bool                                                       newIgnore;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped
	 */
	struct ABuff_TekArmor_Pants_C_PlayerHasFistsEquipped_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P2FZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled
	 */
	struct ABuff_TekArmor_Pants_C_IsPlayerGrappled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPCheckPreventInput
	 */
	struct ABuff_TekArmor_Pants_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerMoveSpeedModifier_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R1DY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_bCanRunOnWater
	 */
	struct ABuff_TekArmor_Pants_C_OnRep_bCanRunOnWater_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater
	 */
	struct ABuff_TekArmor_Pants_C_SetRunningOnWater_Params
	{
	public:
		bool                                                       IsRunning;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HLNG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_CurrentTekRunState
	 */
	struct ABuff_TekArmor_Pants_C_OnRep_CurrentTekRunState_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.AreGlovesEquippedAndActive
	 */
	struct ABuff_TekArmor_Pants_C_AreGlovesEquippedAndActive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IZL6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABuff_TekArmor_Gloves_C*                             glovesRef;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player Max Tek Run Velocity
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Params
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2UGF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_TekArmor_Pants_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanStartTekRun
	 */
	struct ABuff_TekArmor_Pants_C_CanStartTekRun_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier
	 */
	struct ABuff_TekArmor_Pants_C_NetSetRunningSpeedModifier_Params
	{
	public:
		float                                                      newModifier;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RunDamageActor
	 */
	struct ABuff_TekArmor_Pants_C_RunDamageActor_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DidRebound;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WX7U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetTekRunningState
	 */
	struct ABuff_TekArmor_Pants_C_NetSetTekRunningState_Params
	{
	public:
		E_TekRunningState                                          NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetDustParticlesActive
	 */
	struct ABuff_TekArmor_Pants_C_SetDustParticlesActive_Params
	{
	public:
		bool                                                       newActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdateLocalVarsByState
	 */
	struct ABuff_TekArmor_Pants_C_UpdateLocalVarsByState_Params
	{
	public:
		E_TekRunningState                                          NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.LocalSetTekRunningState
	 */
	struct ABuff_TekArmor_Pants_C_LocalSetTekRunningState_Params
	{
	public:
		E_TekRunningState                                          NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickServer
	 */
	struct ABuff_TekArmor_Pants_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InitGloves
	 */
	struct ABuff_TekArmor_Pants_C_InitGloves_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ForceWalkForward
	 */
	struct ABuff_TekArmor_Pants_C_ForceWalkForward_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdatePlayerControlRotation
	 */
	struct ABuff_TekArmor_Pants_C_UpdatePlayerControlRotation_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPDeactivated
	 */
	struct ABuff_TekArmor_Pants_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerTekRunVelocityRatio
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerTekRunVelocityRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player MaxRunVelocity
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerMaxRunVelocity_Params
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.MaintainFullSpeed
	 */
	struct ABuff_TekArmor_Pants_C_MaintainFullSpeed_Params
	{
	public:
		bool                                                       bUsePlayerForward;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G9B4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OverrideDirection;                                       // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       wasMaintained;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMaxTekRunVelocity_Pure
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Pure_Params
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.StoreCurrentVelocityLength
	 */
	struct ABuff_TekArmor_Pants_C_StoreCurrentVelocityLength_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetChargeStartVariables
	 */
	struct ABuff_TekArmor_Pants_C_SetChargeStartVariables_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Default Player Run Speed Mult
	 */
	struct ABuff_TekArmor_Pants_C_GetDefaultPlayerRunSpeedMult_Params
	{
	public:
		float                                                      SpeedMult;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VO3O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Tick Update Tek Run
	 */
	struct ABuff_TekArmor_Pants_C_TickUpdateTekRun_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity
	 */
	struct ABuff_TekArmor_Pants_C_RedirectPlayerVelocity_Params
	{
	public:
		struct FVector                                             newForward;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QSNL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickClient
	 */
	struct ABuff_TekArmor_Pants_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons
	 */
	struct ABuff_TekArmor_Pants_C_SetPreventEquipWeapons_Params
	{
	public:
		bool                                                       Prevent;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateDeflectingImpulse
	 */
	struct ABuff_TekArmor_Pants_C_CalculateDeflectingImpulse_Params
	{
	public:
		class AActor*                                              TargetCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Impulse;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed
	 */
	struct ABuff_TekArmor_Pants_C_SetPlayerRunSpeed_Params
	{
	public:
		float                                                      NewSpeed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ClearHitActors
	 */
	struct ABuff_TekArmor_Pants_C_ClearHitActors_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace and Damage ForwardPawns
	 */
	struct ABuff_TekArmor_Pants_C_TraceandDamageForwardPawns_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward
	 */
	struct ABuff_TekArmor_Pants_C_GetModifiedForward_Params
	{
	public:
		float                                                      forwardScale;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AdditionalOffset;                                        // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             newForward;                                              // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace And Damage Forward StationaryActors
	 */
	struct ABuff_TekArmor_Pants_C_TraceAndDamageForwardStationaryActors_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateForwardRelativeToSpeed
	 */
	struct ABuff_TekArmor_Pants_C_CalculateForwardRelativeToSpeed_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanUseTekAbility
	 */
	struct ABuff_TekArmor_Pants_C_CanUseTekAbility_Params
	{
	public:
		bool                                                       bNotifyIfOutOfElement;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetCastedArmorPieceRef
	 */
	struct ABuff_TekArmor_Pants_C_SetCastedArmorPieceRef_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UserConstructionScript
	 */
	struct ABuff_TekArmor_Pants_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_89
	 */
	struct ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_89_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_88
	 */
	struct ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_88_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState
	 */
	struct ABuff_TekArmor_Pants_C_Server_SetTekRunningState_Params
	{
	public:
		E_TekRunningState                                          newRunState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Client_SyncRunModifier
	 */
	struct ABuff_TekArmor_Pants_C_Client_SyncRunModifier_Params
	{
	public:
		float                                                      newModifier;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFirePressed
	 */
	struct ABuff_TekArmor_Pants_C_Pants_AltFirePressed_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFireReleased
	 */
	struct ABuff_TekArmor_Pants_C_Pants_AltFireReleased_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ExecuteUbergraph_Buff_TekArmor_Pants
	 */
	struct ABuff_TekArmor_Pants_C_ExecuteUbergraph_Buff_TekArmor_Pants_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
