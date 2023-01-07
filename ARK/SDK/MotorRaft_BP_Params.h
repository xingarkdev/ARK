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
	 * Function MotorRaft_BP.MotorRaft_BP_C.BPCanCryo
	 */
	struct AMotorRaft_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.BPPlayDying
	 */
	struct AMotorRaft_BP_C_BPPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OVII[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.BPAllowMovementSound
	 */
	struct AMotorRaft_BP_C_BPAllowMovementSound_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.BPUnstasis
	 */
	struct AMotorRaft_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.BPTryMultiUse
	 */
	struct AMotorRaft_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.BPGetMultiUseEntries
	 */
	struct AMotorRaft_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.ReceiveBeginPlay
	 */
	struct AMotorRaft_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.LoadFuel
	 */
	struct AMotorRaft_BP_C_LoadFuel_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.TurnOff
	 */
	struct AMotorRaft_BP_C_TurnOff_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.TurnOn
	 */
	struct AMotorRaft_BP_C_TurnOn_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.BPTimerNonDedicated
	 */
	struct AMotorRaft_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.ConsumeFuel
	 */
	struct AMotorRaft_BP_C_ConsumeFuel_Params
	{
	public:
		float                                                      AmountPercent;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.CheckForIdleFuelConsumption
	 */
	struct AMotorRaft_BP_C_CheckForIdleFuelConsumption_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.BPTimerServer
	 */
	struct AMotorRaft_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.BPNotifyInventoryItemChange
	 */
	struct AMotorRaft_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5N3O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4CMA[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AMotorRaft_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.ReceiveAnyDamage
	 */
	struct AMotorRaft_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OI05[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.UserConstructionScript
	 */
	struct AMotorRaft_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.DoPlayKnockAnimation
	 */
	struct AMotorRaft_BP_C_DoPlayKnockAnimation_Params
	{
	public:
		int32_t                                                    KnockDirectionIndex;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.NetDoTurnOn
	 */
	struct AMotorRaft_BP_C_NetDoTurnOn_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.NetDoTurnOff
	 */
	struct AMotorRaft_BP_C_NetDoTurnOff_Params
	{	};

	/**
	 * Function MotorRaft_BP.MotorRaft_BP_C.ExecuteUbergraph_MotorRaft_BP
	 */
	struct AMotorRaft_BP_C_ExecuteUbergraph_MotorRaft_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
