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
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AllowTekPunch
	 */
	struct ABuff_TekArmor_Sword_C_AllowTekPunch_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventBlockingWithShield
	 */
	struct ABuff_TekArmor_Sword_C_PreventBlockingWithShield_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ShieldActive
	 */
	struct ABuff_TekArmor_Sword_C_ShieldActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6H9Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.HasShield
	 */
	struct ABuff_TekArmor_Sword_C_HasShield_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelatedTekArmorRef
	 */
	struct ABuff_TekArmor_Sword_C_GetRelatedTekArmorRef_Params
	{
	public:
		class UPrimalItemArmor_Base_Tek_C*                         tekArmorRef;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Can Decrease Element Ammo
	 */
	struct ABuff_TekArmor_Sword_C_CanDecreaseElementAmmo_Params
	{
	public:
		int32_t                                                    AmountToDecrease;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsForChargedState;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanDecrease;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.TryDecreaseElementAmmo
	 */
	struct ABuff_TekArmor_Sword_C_TryDecreaseElementAmmo_Params
	{
	public:
		int32_t                                                    AmountToDecrease;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsForChargedState;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPCheckPreventInput
	 */
	struct ABuff_TekArmor_Sword_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanPhysicallyTekPunch
	 */
	struct ABuff_TekArmor_Sword_C_CanPhysicallyTekPunch_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8X48[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Should Damage Actor
	 */
	struct ABuff_TekArmor_Sword_C_ShouldDamageActor_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Has Line Of SightToActor
	 */
	struct ABuff_TekArmor_Sword_C_HasLineOfSightToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TPB3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ArePunchChargeAnimsPlaying
	 */
	struct ABuff_TekArmor_Sword_C_ArePunchChargeAnimsPlaying_Params
	{
	public:
		bool                                                       cleanUpAnims;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZPN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PlayPunchAnimsByState
	 */
	struct ABuff_TekArmor_Sword_C_PlayPunchAnimsByState_Params
	{
	public:
		E_TekGlovePunchState                                       State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.IsPlayerAboveGround
	 */
	struct ABuff_TekArmor_Sword_C_IsPlayerAboveGround_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6MOP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AreTekPantsEquipped
	 */
	struct ABuff_TekArmor_Sword_C_AreTekPantsEquipped_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3WHK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABuff_TekArmor_Pants_C*                              tekPantsRef;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_TekArmor_Sword_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPDeactivated
	 */
	struct ABuff_TekArmor_Sword_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Update Local Vars by State
	 */
	struct ABuff_TekArmor_Sword_C_UpdateLocalVarsbyState_Params
	{
	public:
		E_TekGlovePunchState                                       NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetPlayerCameraLocation
	 */
	struct ABuff_TekArmor_Sword_C_GetPlayerCameraLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPSetupForInstigator
	 */
	struct ABuff_TekArmor_Sword_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchEnd
	 */
	struct ABuff_TekArmor_Sword_C_RocketPunchEnd_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetOwningPlayerVariables
	 */
	struct ABuff_TekArmor_Sword_C_ResetOwningPlayerVariables_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventJump
	 */
	struct ABuff_TekArmor_Sword_C_PreventJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.NetSetTekPunchState
	 */
	struct ABuff_TekArmor_Sword_C_NetSetTekPunchState_Params
	{
	public:
		E_TekGlovePunchState                                       newPunchState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DGOV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickServer
	 */
	struct ABuff_TekArmor_Sword_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XR0T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Client_SetTekPunchState
	 */
	struct ABuff_TekArmor_Sword_C_Client_SetTekPunchState_Params
	{
	public:
		E_TekGlovePunchState                                       NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetTimeToRocketPunchTarget
	 */
	struct ABuff_TekArmor_Sword_C_GetTimeToRocketPunchTarget_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CheckForTargetsWhileRocketPunching
	 */
	struct ABuff_TekArmor_Sword_C_CheckForTargetsWhileRocketPunching_Params
	{
	public:
		bool                                                       punchNow;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Set AudioParams and Play
	 */
	struct ABuff_TekArmor_Sword_C_SetAudioParamsandPlay_Params
	{
	public:
		class UAudioComponent*                                     Audio;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Volume;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Pitch;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlaySound;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnRep_CurrentPunchState
	 */
	struct ABuff_TekArmor_Sword_C_OnRep_CurrentPunchState_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelativeCenterOfMass
	 */
	struct ABuff_TekArmor_Sword_C_GetRelativeCenterOfMass_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.DrawBuffFloatingHUD
	 */
	struct ABuff_TekArmor_Sword_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P2CY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ScanForRocketFistTargets
	 */
	struct ABuff_TekArmor_Sword_C_ScanForRocketFistTargets_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       anyHit;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_96S6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KSL8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AccurateSphereCheck
	 */
	struct ABuff_TekArmor_Sword_C_AccurateSphereCheck_Params
	{
	public:
		struct FVector                                             EndLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      SphereRadius;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IgnoreFriendlies;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitPawnOrStructure;                                      // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Spawn Sound at Fist Location
	 */
	struct ABuff_TekArmor_Sword_C_SpawnSoundatFistLocation_Params
	{
	public:
		class USoundBase*                                          SoundToSpawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VolumeMultiplier;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PitchMultiplier;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickClient
	 */
	struct ABuff_TekArmor_Sword_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Get Punch Location
	 */
	struct ABuff_TekArmor_Sword_C_GetPunchLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchStart
	 */
	struct ABuff_TekArmor_Sword_C_RocketPunchStart_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Punch
	 */
	struct ABuff_TekArmor_Sword_C_Punch_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanUseTekAbility
	 */
	struct ABuff_TekArmor_Sword_C_CanUseTekAbility_Params
	{
	public:
		bool                                                       bNotifyIfOutOfElement;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ULAV[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.SetCastedArmorPieceRef
	 */
	struct ABuff_TekArmor_Sword_C_SetCastedArmorPieceRef_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UserConstructionScript
	 */
	struct ABuff_TekArmor_Sword_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_100
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_AltFire_K2Node_InputActionEvent_100_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_99
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_AltFire_K2Node_InputActionEvent_99_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_98
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_Fire_K2Node_InputActionEvent_98_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_97
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_Fire_K2Node_InputActionEvent_97_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_44
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_44_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_43
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_43_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_96
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_Targeting_K2Node_InputActionEvent_96_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_95
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_Targeting_K2Node_InputActionEvent_95_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_42
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_42_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_41
	 */
	struct ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_41_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Left_Trigger_Hold
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_Gamepad_Left_Trigger_Hold_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Targeting_Hold
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_InputAction_Targeting_Hold_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Fire_Hold
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_InputAction_Fire_Hold_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Right_Trigger_Hold
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_Gamepad_Right_Trigger_Hold_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_AltFire_Hold
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_InputAction_AltFire_Hold_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Fire_HoldTimer
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_Fire_HoldTimer_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Targeting_HoldTimer
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_Targeting_HoldTimer_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_AltFire_HoldTimer
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_AltFire_HoldTimer_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_LeftTrigger_HoldTimer
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_LeftTrigger_HoldTimer_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_RightTrigger_HoldTimer
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_RightTrigger_HoldTimer_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Pressed
	 */
	struct ABuff_TekArmor_Sword_C_OnSuperPunch_Pressed_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Released
	 */
	struct ABuff_TekArmor_Sword_C_OnSuperPunch_Released_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Server_SetPunchChargeState
	 */
	struct ABuff_TekArmor_Sword_C_Server_SetPunchChargeState_Params
	{
	public:
		E_TekGlovePunchState                                       newPunchState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetCanLandAfterDelay
	 */
	struct ABuff_TekArmor_Sword_C_ResetCanLandAfterDelay_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UpdateClientHasValidRocketPunchTarget
	 */
	struct ABuff_TekArmor_Sword_C_UpdateClientHasValidRocketPunchTarget_Params
	{
	public:
		bool                                                       newHasTarget;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OQUS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    newTargetPawn;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetPunchStateAfterDelay
	 */
	struct ABuff_TekArmor_Sword_C_ResetPunchStateAfterDelay_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFirePressed
	 */
	struct ABuff_TekArmor_Sword_C_Sword_AltFirePressed_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFireReleased
	 */
	struct ABuff_TekArmor_Sword_C_Sword_AltFireReleased_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Fire
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_InputAction_Fire_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Right_Trigger
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_Gamepad_Right_Trigger_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_AltFire
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_InputAction_AltFire_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Targeting
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_InputAction_Targeting_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Left_Trigger
	 */
	struct ABuff_TekArmor_Sword_C_Proxy_Gamepad_Left_Trigger_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Pressed
	 */
	struct ABuff_TekArmor_Sword_C_Skill_SuperPunch_Pressed_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Released
	 */
	struct ABuff_TekArmor_Sword_C_Skill_SuperPunch_Released_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Mod_Released
	 */
	struct ABuff_TekArmor_Sword_C_Skill_SuperPunch_Mod_Released_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Mod_Pressed
	 */
	struct ABuff_TekArmor_Sword_C_Skill_SuperPunch_Mod_Pressed_Params
	{	};

	/**
	 * Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ExecuteUbergraph_Buff_TekArmor_Sword
	 */
	struct ABuff_TekArmor_Sword_C_ExecuteUbergraph_Buff_TekArmor_Sword_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
