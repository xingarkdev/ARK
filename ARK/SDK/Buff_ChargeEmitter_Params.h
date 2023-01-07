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
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterIsBuffOfType
	 */
	struct ABuff_ChargeEmitter_C_EmitterIsBuffOfType_Params
	{
	public:
		E_ChargeManagerType                                        typeToCheck;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isOfType;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Get Extra Charge Consumed Multiplier for Receiver
	 */
	struct ABuff_ChargeEmitter_C_GetExtraChargeConsumedMultiplierforReceiver_Params
	{
	public:
		class ABuff_ChargeManager_C*                               Receiver;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      retMultiplier;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetDistanceAndAngleCheckOrigin
	 */
	struct ABuff_ChargeEmitter_C_GetDistanceAndAngleCheckOrigin_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             distanceAngleOrigin;                                     // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.TakeChargeConsumedByReceivers
	 */
	struct ABuff_ChargeEmitter_C_TakeChargeConsumedByReceivers_Params
	{
	public:
		float                                                      chargeToTake;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetChargeVariableExternalEmitter
	 */
	struct ABuff_ChargeEmitter_C_GetChargeVariableExternalEmitter_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_85US[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8KUN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldProcessChargeConsumedByReceivers
	 */
	struct ABuff_ChargeEmitter_C_ShouldProcessChargeConsumedByReceivers_Params
	{
	public:
		bool                                                       shouldProcess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeConsumedByReceiversChanged
	 */
	struct ABuff_ChargeEmitter_C_OnChargeConsumedByReceiversChanged_Params
	{
	public:
		float                                                      newCharge;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.WillReceiverAffectChargeConsumption
	 */
	struct ABuff_ChargeEmitter_C_WillReceiverAffectChargeConsumption_Params
	{
	public:
		class ABuff_ChargeManager_C*                               Receiver;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canProcess;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TE70[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Valid Receiver for Charge Consumption
	 */
	struct ABuff_ChargeEmitter_C_IsValidReceiverforChargeConsumption_Params
	{
	public:
		class ABuff_ChargeManager_C*                               Receiver;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Process Charge Consumed by Receivers
	 */
	struct ABuff_ChargeEmitter_C_ProcessChargeConsumedbyReceivers_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Can Process New Receiver For Charge Consumption
	 */
	struct ABuff_ChargeEmitter_C_CanProcessNewReceiverForChargeConsumption_Params
	{
	public:
		bool                                                       canProcess;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetRadiusForDistanceCheck
	 */
	struct ABuff_ChargeEmitter_C_GetRadiusForDistanceCheck_Params
	{
	public:
		float                                                      radiusForCheck;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnActorEnteredEmitterArea
	 */
	struct ABuff_ChargeEmitter_C_OnActorEnteredEmitterArea_Params
	{
	public:
		class AActor*                                              enteringActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterLineTraceOrigin
	 */
	struct ABuff_ChargeEmitter_C_GetEmitterLineTraceOrigin_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             lineTraceOrigin;                                         // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.On EnteredEmitterRadius
	 */
	struct ABuff_ChargeEmitter_C_OnEnteredEmitterRadius_Params
	{
	public:
		class ABuff_ChargeManager_C*                               chargeReceiver;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetActorsToIgnoreOnRaycast
	 */
	struct ABuff_ChargeEmitter_C_GetActorsToIgnoreOnRaycast_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterActor
	 */
	struct ABuff_ChargeEmitter_C_GetEmitterActor_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is Point Affected By Emitter
	 */
	struct ABuff_ChargeEmitter_C_IsPointAffectedByEmitter_Params
	{
	public:
		struct FVector                                             affectedPoint;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OGF5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              requestingActor;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAffected;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KGPA[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Take Harvesting Charge From Character
	 */
	struct ABuff_ChargeEmitter_C_TakeHarvestingChargeFromCharacter_Params
	{
	public:
		float                                                      chargeHarvested;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      chargeTaken;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnChargeHarvested
	 */
	struct ABuff_ChargeEmitter_C_OnChargeHarvested_Params
	{
	public:
		float                                                      amountHarvested;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeManager
	 */
	struct ABuff_ChargeEmitter_C_InitializeManager_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterIsActiveChanged
	 */
	struct ABuff_ChargeEmitter_C_OnEmitterIsActiveChanged_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ChargeVariableEvent
	 */
	struct ABuff_ChargeEmitter_C_ChargeVariableEvent_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R1KH[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SUJR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.OnEmitterRangeChanged
	 */
	struct ABuff_ChargeEmitter_C_OnEmitterRangeChanged_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is EmitterAvailableForHarvesting
	 */
	struct ABuff_ChargeEmitter_C_IsEmitterAvailableForHarvesting_Params
	{
	public:
		bool                                                       available;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DCGS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.GetEmitterForwardVector
	 */
	struct ABuff_ChargeEmitter_C_GetEmitterForwardVector_Params
	{
	public:
		struct FVector                                             ForwardVector;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanPlayerHarvest
	 */
	struct ABuff_ChargeEmitter_C_CanPlayerHarvest_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       toBattery;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canHarvest;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4K69[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.HarvestCharge
	 */
	struct ABuff_ChargeEmitter_C_HarvestCharge_Params
	{
	public:
		bool                                                       MountedDino;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VBBC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   Controller;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPGetMultiUseEntries
	 */
	struct ABuff_ChargeEmitter_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPTryMultiUse
	 */
	struct ABuff_ChargeEmitter_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BPDeactivated
	 */
	struct ABuff_ChargeEmitter_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ShouldEnableTimers
	 */
	struct ABuff_ChargeEmitter_C_ShouldEnableTimers_Params
	{
	public:
		bool                                                       tickServer;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TickClient;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QS3O[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterShouldUpdateChargeOnTimer
	 */
	struct ABuff_ChargeEmitter_C_EmitterShouldUpdateChargeOnTimer_Params
	{
	public:
		bool                                                       shouldUpdateOnTimer;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1F09[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickClient
	 */
	struct ABuff_ChargeEmitter_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.EmitterUpdateChargeOnTimer
	 */
	struct ABuff_ChargeEmitter_C_EmitterUpdateChargeOnTimer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M9WU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.BuffTickServer
	 */
	struct ABuff_ChargeEmitter_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.CanEmitCharge
	 */
	struct ABuff_ChargeEmitter_C_CanEmitCharge_Params
	{
	public:
		bool                                                       canEmit;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z78M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.Is ActorAffected by Emitter
	 */
	struct ABuff_ChargeEmitter_C_IsActorAffectedbyEmitter_Params
	{
	public:
		class AActor*                                              affectedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       skipLineTrace;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAffected;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UserConstructionScript
	 */
	struct ABuff_ChargeEmitter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__FinishedFunc
	 */
	struct ABuff_ChargeEmitter_C_FadeInTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInTimeline__UpdateFunc
	 */
	struct ABuff_ChargeEmitter_C_FadeInTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__FinishedFunc
	 */
	struct ABuff_ChargeEmitter_C_FadeOutTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutTimeline__UpdateFunc
	 */
	struct ABuff_ChargeEmitter_C_FadeOutTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse
	 */
	struct ABuff_ChargeEmitter_C_FadeInPulse_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeInPulse_Multicast
	 */
	struct ABuff_ChargeEmitter_C_FadeInPulse_Multicast_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse
	 */
	struct ABuff_ChargeEmitter_C_FadeOutPulse_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.FadeOutPulse_Multicast
	 */
	struct ABuff_ChargeEmitter_C_FadeOutPulse_Multicast_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius
	 */
	struct ABuff_ChargeEmitter_C_UpdateEmitterEffectsRadius_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.UpdateEmitterEffectsRadius_Multicast
	 */
	struct ABuff_ChargeEmitter_C_UpdateEmitterEffectsRadius_Multicast_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.InitializeEmitter
	 */
	struct ABuff_ChargeEmitter_C_InitializeEmitter_Params
	{	};

	/**
	 * Function Buff_ChargeEmitter.Buff_ChargeEmitter_C.ExecuteUbergraph_Buff_ChargeEmitter
	 */
	struct ABuff_ChargeEmitter_C_ExecuteUbergraph_Buff_ChargeEmitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
