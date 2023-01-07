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
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetNumBatteries
	 */
	struct AWeaponRadioactiveLanternCharge_C_GetNumBatteries_Params
	{
	public:
		int32_t                                                    numBatteries;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Get Charge Variable Interface
	 */
	struct AWeaponRadioactiveLanternCharge_C_GetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1DIS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9K58[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveAllBeamsServer
	 */
	struct AWeaponRadioactiveLanternCharge_C_RemoveAllBeamsServer_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.IsFreeBeamForActor
	 */
	struct AWeaponRadioactiveLanternCharge_C_IsFreeBeamForActor_Params
	{
	public:
		class AActor*                                              forActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFreeBeam;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JKAT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPPrefireAction
	 */
	struct AWeaponRadioactiveLanternCharge_C_BPPrefireAction_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RechargeFromMaxBattery
	 */
	struct AWeaponRadioactiveLanternCharge_C_RechargeFromMaxBattery_Params
	{
	public:
		bool                                                       couldRecharge;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HPHK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWeaponCanFire
	 */
	struct AWeaponRadioactiveLanternCharge_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KE0P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateMaterial
	 */
	struct AWeaponRadioactiveLanternCharge_C_UpdateMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            dynamicMaterial;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyChargeBuff
	 */
	struct AWeaponRadioactiveLanternCharge_C_DestroyChargeBuff_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAdjustAmmoPerShot
	 */
	struct AWeaponRadioactiveLanternCharge_C_BPAdjustAmmoPerShot_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetBeamIntensity
	 */
	struct AWeaponRadioactiveLanternCharge_C_SetBeamIntensity_Params
	{
	public:
		class UParticleSystemComponent*                            BeamComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPSecondaryAction
	 */
	struct AWeaponRadioactiveLanternCharge_C_BPSecondaryAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetLightMultiplier
	 */
	struct AWeaponRadioactiveLanternCharge_C_GetLightMultiplier_Params
	{
	public:
		float                                                      lightMultiplier;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWaitingForPlacement
	 */
	struct AWeaponRadioactiveLanternCharge_C_BPWaitingForPlacement_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CheckIfFireStopped
	 */
	struct AWeaponRadioactiveLanternCharge_C_CheckIfFireStopped_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateLightEffects
	 */
	struct AWeaponRadioactiveLanternCharge_C_UpdateLightEffects_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update MaterialsAndParticles
	 */
	struct AWeaponRadioactiveLanternCharge_C_UpdateMaterialsAndParticles_Params
	{
	public:
		bool                                                       couldUpdateMaterial;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DisableFiringEffects
	 */
	struct AWeaponRadioactiveLanternCharge_C_DisableFiringEffects_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitializeFiringEffects
	 */
	struct AWeaponRadioactiveLanternCharge_C_InitializeFiringEffects_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DetectChupasAndTriggerBeams
	 */
	struct AWeaponRadioactiveLanternCharge_C_DetectChupasAndTriggerBeams_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring
	 */
	struct AWeaponRadioactiveLanternCharge_C_OnStopFiring_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget
	 */
	struct AWeaponRadioactiveLanternCharge_C_DestroyBeamForTarget_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamVisuals
	 */
	struct AWeaponRadioactiveLanternCharge_C_DestroyBeamVisuals_Params
	{
	public:
		struct FSTR_ChargeBeamInfo                                 beamInfo;                                                // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ServerTick
	 */
	struct AWeaponRadioactiveLanternCharge_C_ServerTick_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ClientTick
	 */
	struct AWeaponRadioactiveLanternCharge_C_ClientTick_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Remove All BeamsClient
	 */
	struct AWeaponRadioactiveLanternCharge_C_RemoveAllBeamsClient_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveDestroyed
	 */
	struct AWeaponRadioactiveLanternCharge_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TryAddNewBeam
	 */
	struct AWeaponRadioactiveLanternCharge_C_TryAddNewBeam_Params
	{
	public:
		class AActor*                                              forActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartUnequipEvent
	 */
	struct AWeaponRadioactiveLanternCharge_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Should Remove Beam
	 */
	struct AWeaponRadioactiveLanternCharge_C_ShouldRemoveBeam_Params
	{
	public:
		struct FSTR_ChargeBeamInfo                                 beamInfo;                                                // 0x0000(0x0018)  (Parm)
		bool                                                       shouldRemove;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update Impact Particles
	 */
	struct AWeaponRadioactiveLanternCharge_C_UpdateImpactParticles_Params
	{
	public:
		struct FSTR_ChargeBeamInfo                                 beamInfo;                                                // 0x0000(0x0018)  (Parm)
		int32_t                                                    index;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetEndPoints
	 */
	struct AWeaponRadioactiveLanternCharge_C_SetEndPoints_Params
	{
	public:
		class UParticleSystemComponent*                            beam;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndPoint1;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             endPoint2;                                               // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             endPoint3;                                               // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ConnectBeamToTarget
	 */
	struct AWeaponRadioactiveLanternCharge_C_ConnectBeamToTarget_Params
	{
	public:
		struct FSTR_ChargeBeamInfo                                 beamInfo;                                                // 0x0000(0x0018)  (Parm)
		int32_t                                                    index;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateNewBeam
	 */
	struct AWeaponRadioactiveLanternCharge_C_CreateNewBeam_Params
	{
	public:
		class AActor*                                              ToActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ShouldRemoveBeamForTarget
	 */
	struct AWeaponRadioactiveLanternCharge_C_ShouldRemoveBeamForTarget_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       shouldRemove;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveBeamTarget_Server
	 */
	struct AWeaponRadioactiveLanternCharge_C_RemoveBeamTarget_Server_Params
	{
	public:
		class AActor*                                              BeamTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateCharge
	 */
	struct AWeaponRadioactiveLanternCharge_C_UpdateCharge_Params
	{
	public:
		bool                                                       ShouldActivate;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.EffectsDisableCheck
	 */
	struct AWeaponRadioactiveLanternCharge_C_EffectsDisableCheck_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPFiredWeapon
	 */
	struct AWeaponRadioactiveLanternCharge_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartSecondaryActionEvent
	 */
	struct AWeaponRadioactiveLanternCharge_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UserConstructionScript
	 */
	struct AWeaponRadioactiveLanternCharge_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__FinishedFunc
	 */
	struct AWeaponRadioactiveLanternCharge_C_LightFlickerTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__UpdateFunc
	 */
	struct AWeaponRadioactiveLanternCharge_C_LightFlickerTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__FinishedFunc
	 */
	struct AWeaponRadioactiveLanternCharge_C_LightTurnOffTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__UpdateFunc
	 */
	struct AWeaponRadioactiveLanternCharge_C_LightTurnOffTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Interface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BNRN[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Trigger Multicast Interface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventTriggerMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P1OK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    iVariable;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Interface Check for Batteries and Update Multicast
	 */
	struct AWeaponRadioactiveLanternCharge_C_InterfaceCheckforBatteriesandUpdateMulticast_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Double MulticastInterface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventDoubleMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XLXP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventDoubleInterface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventDoubleInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E27W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntInterface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventIntInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W8E2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntMulticastInterface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventIntMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3E9E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveBeginPlay
	 */
	struct AWeaponRadioactiveLanternCharge_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnNewActorAffected_Multicast
	 */
	struct AWeaponRadioactiveLanternCharge_C_OnNewActorAffected_Multicast_Params
	{
	public:
		class AActor*                                              actorAffected;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget_Multicast
	 */
	struct AWeaponRadioactiveLanternCharge_C_DestroyBeamForTarget_Multicast_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.PlayLanternCameraShake
	 */
	struct AWeaponRadioactiveLanternCharge_C_PlayLanternCameraShake_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateChargeManager
	 */
	struct AWeaponRadioactiveLanternCharge_C_CreateChargeManager_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Set Charge Variable Interface
	 */
	struct AWeaponRadioactiveLanternCharge_C_SetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_74YP[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SP70[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.FiringBeamLogic
	 */
	struct AWeaponRadioactiveLanternCharge_C_FiringBeamLogic_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring
	 */
	struct AWeaponRadioactiveLanternCharge_C_OnStartFiring_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Boolean_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Float_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1NTA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float_Multicast
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Float_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KCT7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean Interface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventBooleanInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventFloatInterface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventFloatInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BUYE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean_Multicast
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Boolean_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean MulticastInterface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventBooleanMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Float Multicast Interface
	 */
	struct AWeaponRadioactiveLanternCharge_C_ChargeVariableEventFloatMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RDPV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DoLightFlicker
	 */
	struct AWeaponRadioactiveLanternCharge_C_DoLightFlicker_Params
	{
	public:
		float                                                      PlayRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMaterialUpdate
	 */
	struct AWeaponRadioactiveLanternCharge_C_InitialMaterialUpdate_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TurnOffLight
	 */
	struct AWeaponRadioactiveLanternCharge_C_TurnOffLight_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring_Multicast
	 */
	struct AWeaponRadioactiveLanternCharge_C_OnStopFiring_Multicast_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CancelPlacement
	 */
	struct AWeaponRadioactiveLanternCharge_C_CancelPlacement_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAnimNotifyCustomEvent
	 */
	struct AWeaponRadioactiveLanternCharge_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMeterAnim
	 */
	struct AWeaponRadioactiveLanternCharge_C_InitialMeterAnim_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring_Multicast
	 */
	struct AWeaponRadioactiveLanternCharge_C_OnStartFiring_Multicast_Params
	{	};

	/**
	 * Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ExecuteUbergraph_WeaponRadioactiveLanternCharge
	 */
	struct AWeaponRadioactiveLanternCharge_C_ExecuteUbergraph_WeaponRadioactiveLanternCharge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
