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
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_JetPackVFXOffset
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_OnRep_JetPackVFXOffset_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetJetpackOffset
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_SetJetpackOffset_Params
	{
	public:
		struct FTransform                                          AddTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnInputsPrevented
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_OnInputsPrevented_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Clamp LocationZ
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_ClampLocationZ_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInWater
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerInWater_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SAYQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsTekChargeThrusting
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_IsTekChargeThrusting_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.AreChargeThrustingAnimsPlaying
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_AreChargeThrustingAnimsPlaying_Params
	{
	public:
		bool                                                       cleanUpAnims;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInjured
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerInjured_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XDDF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerWaterRunning
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerWaterRunning_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_38OM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPSetupForInstigator
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateBoostIconVisibility
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_UpdateBoostIconVisibility_Params
	{
	public:
		bool                                                       setVisible;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DPRM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetIsChargeThrusting
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_SetIsChargeThrusting_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_00Q5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.CanUseTekAbility
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_CanUseTekAbility_Params
	{
	public:
		bool                                                       bNotifyIfOutOfElement;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateThrusterFX
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_UpdateThrusterFX_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPDeactivated
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Reset Owning PlayerVariables
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_ResetOwningPlayerVariables_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateIsSwimming
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_UpdateIsSwimming_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ClampPlayerVelocity
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_ClampPlayerVelocity_Params
	{
	public:
		float                                                      maxVelocity;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateTekShirtByState
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_UpdateTekShirtByState_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_bIsUnderwater
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_OnRep_bIsUnderwater_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.RestoreThrusterStateFromCurrentInputs
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_RestoreThrusterStateFromCurrentInputs_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ResetBoostWhenGrounded
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_ResetBoostWhenGrounded_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerUnderWater
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerUnderWater_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.NetSetCurrentThrusterState
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_NetSetCurrentThrusterState_Params
	{
	public:
		E_TekThrusterState                                         NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickServer
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoostClient
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_JetpackBoostClient_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Server
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Server_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Update Thruster Impulse
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_UpdateThrusterImpulse_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsThrusterActive
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_IsThrusterActive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_CurrentThrusterState
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_OnRep_CurrentThrusterState_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetCastedArmorPieceRef
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_SetCastedArmorPieceRef_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickClient
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O9CL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Client_SetThrusterState
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_Client_SetThrusterState_Params
	{
	public:
		E_TekThrusterState                                         NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Start
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Start_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UserConstructionScript
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_94
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_94_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_93
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_93_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_92
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_92_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_91
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_91_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_RunToggle_K2Node_InputActionEvent_90
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_RunToggle_K2Node_InputActionEvent_90_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_40
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_40_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_39
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_39_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Pressed
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_OnPlayerJump_Pressed_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Released
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_OnPlayerJump_Released_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_SetThrusterState
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_Server_SetThrusterState_Params
	{
	public:
		E_TekThrusterState                                         NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateCanBoostAfterCooldown
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_UpdateCanBoostAfterCooldown_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.PlayBoostCooldownSound
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_PlayBoostCooldownSound_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.FlashThrusterDuringBoost
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_FlashThrusterDuringBoost_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BoostCleanupAfterDuration
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_BoostCleanupAfterDuration_Params
	{	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_UpdateJetpackVFXOffset
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_Server_UpdateJetpackVFXOffset_Params
	{
	public:
		struct FTransform                                          NewOffset;                                               // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ExecuteUbergraph_Buff_TekArmor_Shirt_Rework
	 */
	struct ABuff_TekArmor_Shirt_Rework_C_ExecuteUbergraph_Buff_TekArmor_Shirt_Rework_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
