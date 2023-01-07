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
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.RepauseAnims
	 */
	struct ABuff_Frozen_IceKaiju_C_RepauseAnims_Params
	{	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.RefreshMeshes
	 */
	struct ABuff_Frozen_IceKaiju_C_RefreshMeshes_Params
	{	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPCheckPreventInput
	 */
	struct ABuff_Frozen_IceKaiju_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPCustomAllowAddBuff
	 */
	struct ABuff_Frozen_IceKaiju_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPSetupForInstigator
	 */
	struct ABuff_Frozen_IceKaiju_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventflight
	 */
	struct ABuff_Frozen_IceKaiju_C_BPPreventflight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPHandleOnStartFire
	 */
	struct ABuff_Frozen_IceKaiju_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffAdjustDamage
	 */
	struct ABuff_Frozen_IceKaiju_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A3CN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.NotifyDamage
	 */
	struct ABuff_Frozen_IceKaiju_C_NotifyDamage_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_60JZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         EventInstigator;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              TheDamageCauser;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffPostAdjustDamage
	 */
	struct ABuff_Frozen_IceKaiju_C_BuffPostAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0OAE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceivePointDamage
	 */
	struct ABuff_Frozen_IceKaiju_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XC26[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3KEP[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffTickClient
	 */
	struct ABuff_Frozen_IceKaiju_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YM4H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffTickServer
	 */
	struct ABuff_Frozen_IceKaiju_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.FreezeCharacter
	 */
	struct ABuff_Frozen_IceKaiju_C_FreezeCharacter_Params
	{
	public:
		class APrimalCharacter*                                    InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Freeze;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventCharacterStatusValueModifiers
	 */
	struct ABuff_Frozen_IceKaiju_C_BPPreventCharacterStatusValueModifiers_Params
	{
	public:
		class APrimalCharacter*                                    ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceiveAnyDamage
	 */
	struct ABuff_Frozen_IceKaiju_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EOWX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_Frozen_IceKaiju_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPDeactivated
	 */
	struct ABuff_Frozen_IceKaiju_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPActivated
	 */
	struct ABuff_Frozen_IceKaiju_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.AddFrozenTime
	 */
	struct ABuff_Frozen_IceKaiju_C_AddFrozenTime_Params
	{	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.UserConstructionScript
	 */
	struct ABuff_Frozen_IceKaiju_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.UpdateFrozenMIC
	 */
	struct ABuff_Frozen_IceKaiju_C_UpdateFrozenMIC_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.FreezeChar
	 */
	struct ABuff_Frozen_IceKaiju_C_FreezeChar_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Freeze;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceiveBeginPlay
	 */
	struct ABuff_Frozen_IceKaiju_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.Server_HandleOnStartFire
	 */
	struct ABuff_Frozen_IceKaiju_C_Server_HandleOnStartFire_Params
	{	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.Multi_PlayIceBreakVFX
	 */
	struct ABuff_Frozen_IceKaiju_C_Multi_PlayIceBreakVFX_Params
	{	};

	/**
	 * Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ExecuteUbergraph_Buff_Frozen_IceKaiju
	 */
	struct ABuff_Frozen_IceKaiju_C_ExecuteUbergraph_Buff_Frozen_IceKaiju_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
