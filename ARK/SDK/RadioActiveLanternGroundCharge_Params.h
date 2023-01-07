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
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetNumBatteries
	 */
	struct ARadioActiveLanternGroundCharge_C_GetNumBatteries_Params
	{
	public:
		int32_t                                                    numBatteries;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Charge Variable Interface
	 */
	struct ARadioActiveLanternGroundCharge_C_GetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RX6A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_939L[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UpdateItemStats
	 */
	struct ARadioActiveLanternGroundCharge_C_UpdateItemStats_Params
	{
	public:
		class UPrimalItem*                                         NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPRefreshedStructureColors
	 */
	struct ARadioActiveLanternGroundCharge_C_BPRefreshedStructureColors_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementInitialization
	 */
	struct ARadioActiveLanternGroundCharge_C_PlacementInitialization_Params
	{
	public:
		class AShooterWeapon*                                      constructorWeapon;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Placement TickActions
	 */
	struct ARadioActiveLanternGroundCharge_C_PlacementTickActions_Params
	{
	public:
		bool                                                       ReachedDestination;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TAM7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPSetPlayerConstructor
	 */
	struct ARadioActiveLanternGroundCharge_C_BPSetPlayerConstructor_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TickUpdateLightEffects
	 */
	struct ARadioActiveLanternGroundCharge_C_TickUpdateLightEffects_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ShouldLanternDeactivate
	 */
	struct ARadioActiveLanternGroundCharge_C_ShouldLanternDeactivate_Params
	{
	public:
		bool                                                       retShouldDeactivate;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZB06[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UpdateMaterial
	 */
	struct ARadioActiveLanternGroundCharge_C_UpdateMaterial_Params
	{
	public:
		bool                                                       StaticMesh;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       couldUpdateMaterials;                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D4JI[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff
	 */
	struct ARadioActiveLanternGroundCharge_C_DestroyChargeBuff_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTriggerStasisEvent
	 */
	struct ARadioActiveLanternGroundCharge_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ConsumeChargeAfterStasis
	 */
	struct ARadioActiveLanternGroundCharge_C_ConsumeChargeAfterStasis_Params
	{
	public:
		float                                                      consumedCharge;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLightModeForRange
	 */
	struct ARadioActiveLanternGroundCharge_C_GetLightModeForRange_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    lightMode;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update Light Effects
	 */
	struct ARadioActiveLanternGroundCharge_C_UpdateLightEffects_Params
	{
	public:
		bool                                                       enableLight;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FPHC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    newLightMode;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeTakenFromBattery
	 */
	struct ARadioActiveLanternGroundCharge_C_OnChargeTakenFromBattery_Params
	{
	public:
		float                                                      amountTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Get Available Charge
	 */
	struct ARadioActiveLanternGroundCharge_C_GetAvailableCharge_Params
	{
	public:
		float                                                      available;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetInfoFromConsumedItemForPlacedStructure
	 */
	struct ARadioActiveLanternGroundCharge_C_BPGetInfoFromConsumedItemForPlacedStructure_Params
	{
	public:
		class UPrimalItem*                                         ItemToConsumed;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Update ChargeVariableFromBatteries
	 */
	struct ARadioActiveLanternGroundCharge_C_UpdateChargeVariableFromBatteries_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Light Mode
	 */
	struct ARadioActiveLanternGroundCharge_C_SetLightMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       nextMode;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastChange;                                         // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeManager
	 */
	struct ARadioActiveLanternGroundCharge_C_CreateChargeManager_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveDestroyed
	 */
	struct ARadioActiveLanternGroundCharge_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPNotifyInventoryItemChange
	 */
	struct ARadioActiveLanternGroundCharge_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CHYV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.GetLight ModeValues
	 */
	struct ARadioActiveLanternGroundCharge_C_GetLightModeValues_Params
	{
	public:
		int32_t                                                    lightMode;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Intensity;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Emissiveness;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Range;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      chargeEmittedPerSecond;                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      chargeConsumedPerSecond;                                 // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BlueprintDrawHUD
	 */
	struct ARadioActiveLanternGroundCharge_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPTryMultiUse
	 */
	struct ARadioActiveLanternGroundCharge_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPGetMultiUseEntries
	 */
	struct ARadioActiveLanternGroundCharge_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.UserConstructionScript
	 */
	struct ARadioActiveLanternGroundCharge_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__FinishedFunc
	 */
	struct ARadioActiveLanternGroundCharge_C_FadeInLightTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.FadeInLightTimeline__UpdateFunc
	 */
	struct ARadioActiveLanternGroundCharge_C_FadeInLightTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Interface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ORZ1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Trigger Multicast Interface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventTriggerMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D7S8[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    iVariable;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPUnstasis
	 */
	struct ARadioActiveLanternGroundCharge_C_BPUnstasis_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ReceiveBeginPlay
	 */
	struct ARadioActiveLanternGroundCharge_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Set Charge Variable Interface
	 */
	struct ARadioActiveLanternGroundCharge_C_SetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_84O7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2UGU[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CheckForBatteriesAndUpdate_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_CheckForBatteriesAndUpdate_Multicast_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Interface Check for Batteries and Update Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_InterfaceCheckforBatteriesandUpdateMulticast_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.BPApplyCustomDurabilityOnPickup
	 */
	struct ARadioActiveLanternGroundCharge_C_BPApplyCustomDurabilityOnPickup_Params
	{
	public:
		class UPrimalItem*                                         PickedUp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_ActivateLantern_Multicast_Params
	{
	public:
		bool                                                       fastActivate;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ActivateLantern
	 */
	struct ARadioActiveLanternGroundCharge_C_ActivateLantern_Params
	{
	public:
		bool                                                       fastActivate;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.TransitionLight
	 */
	struct ARadioActiveLanternGroundCharge_C_TransitionLight_Params
	{
	public:
		float                                                      targetIntensity;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       disableVisibility;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A3Y4[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      startingIntensity;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DestroyChargeBuff_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_DestroyChargeBuff_Multicast_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_CreateChargeBuff_Multicast_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_OnLightModeChanged_Multicast_Params
	{
	public:
		int32_t                                                    lightMode;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnLightModeChanged
	 */
	struct ARadioActiveLanternGroundCharge_C_OnLightModeChanged_Params
	{
	public:
		int32_t                                                    lightMode;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Boolean_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Float_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MY2T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Float_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Float_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8AZ2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean Interface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventBooleanInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventFloatInterface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventFloatInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LVKY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Boolean_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Boolean_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Boolean MulticastInterface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventBooleanMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Float Multicast Interface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventFloatMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YHMJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Double_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IPL0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Double_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Double_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UBET[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventDoubleInterface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventDoubleInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XW8W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.Charge Variable Event Double MulticastInterface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventDoubleMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JU8A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.CreateChargeBuff
	 */
	struct ARadioActiveLanternGroundCharge_C_CreateChargeBuff_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern
	 */
	struct ARadioActiveLanternGroundCharge_C_DeactivateLantern_Params
	{
	public:
		bool                                                       Fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DeactivateLantern_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_DeactivateLantern_Multicast_Params
	{
	public:
		bool                                                       Fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntInterface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventIntInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9RLG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEventIntMulticastInterface
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEventIntMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2JNX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Int_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F80N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ChargeVariableEvent_Int_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_ChargeVariableEvent_Int_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MRDJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.InitialUpdateMaterial
	 */
	struct ARadioActiveLanternGroundCharge_C_InitialUpdateMaterial_Params
	{
	public:
		bool                                                       StaticMesh;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.OnChargeFromBatteriesChanged_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_OnChargeFromBatteriesChanged_Multicast_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.StartPlacement_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_StartPlacement_Multicast_Params
	{
	public:
		class AShooterCharacter*                                   constructor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.PlacementAnimationTickEvent
	 */
	struct ARadioActiveLanternGroundCharge_C_PlacementAnimationTickEvent_Params
	{	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.DebugCylinders_Multicast
	 */
	struct ARadioActiveLanternGroundCharge_C_DebugCylinders_Multicast_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             cylinder1Direction;                                      // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioActiveLanternGroundCharge.RadioActiveLanternGroundCharge_C.ExecuteUbergraph_RadioActiveLanternGroundCharge
	 */
	struct ARadioActiveLanternGroundCharge_C_ExecuteUbergraph_RadioActiveLanternGroundCharge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
