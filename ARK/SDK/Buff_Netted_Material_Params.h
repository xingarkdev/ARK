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
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPCustomAllowAddBuff
	 */
	struct ABuff_Netted_Material_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZOQ8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.DrawBuffFloatingHUD
	 */
	struct ABuff_Netted_Material_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2QHL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FHNP[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.CanCutNet
	 */
	struct ABuff_Netted_Material_C_CanCutNet_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanCut;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPOverrideTargetingDesire
	 */
	struct ABuff_Netted_Material_C_BPOverrideTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreventInstigatorMovementMode
	 */
	struct ABuff_Netted_Material_C_BPPreventInstigatorMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAJ0[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreSetupForInstigator
	 */
	struct ABuff_Netted_Material_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreventTekArmorBuffs
	 */
	struct ABuff_Netted_Material_C_BPPreventTekArmorBuffs_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.PlayPinnedAnim
	 */
	struct ABuff_Netted_Material_C_PlayPinnedAnim_Params
	{	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStopAltFire
	 */
	struct ABuff_Netted_Material_C_BPHandleOnStopAltFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStartAltFire
	 */
	struct ABuff_Netted_Material_C_BPHandleOnStartAltFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BuffTickServer
	 */
	struct ABuff_Netted_Material_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPAdjustDamage_Ex
	 */
	struct ABuff_Netted_Material_C_BPAdjustDamage_Ex_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R38K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ImpulseDir;                                              // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1DRA[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         EventInstigator;                                         // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              InDamageCauser;                                          // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPGetHUDElements
	 */
	struct ABuff_Netted_Material_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BuffTickClient
	 */
	struct ABuff_Netted_Material_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.TryCuttingRope
	 */
	struct ABuff_Netted_Material_C_TryCuttingRope_Params
	{	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStopFire
	 */
	struct ABuff_Netted_Material_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStartFire
	 */
	struct ABuff_Netted_Material_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_Netted_Material_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.ReduceNetHealth
	 */
	struct ABuff_Netted_Material_C_ReduceNetHealth_Params
	{	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.ReceiveDestroyed
	 */
	struct ABuff_Netted_Material_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.FadeOutNet
	 */
	struct ABuff_Netted_Material_C_FadeOutNet_Params
	{	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPSetupForInstigator
	 */
	struct ABuff_Netted_Material_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.OnRep_bSleepingEnabled
	 */
	struct ABuff_Netted_Material_C_OnRep_bSleepingEnabled_Params
	{	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.BPDeactivated
	 */
	struct ABuff_Netted_Material_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.UserConstructionScript
	 */
	struct ABuff_Netted_Material_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Netted_Material.Buff_Netted_Material_C.ExecuteUbergraph_Buff_Netted_Material
	 */
	struct ABuff_Netted_Material_C_ExecuteUbergraph_Buff_Netted_Material_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
