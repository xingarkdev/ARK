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
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.OnRep_IsParticleActive
	 */
	struct ABuff_TekArmor_Boots_C_OnRep_IsParticleActive_Params
	{	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.IsOnSteepSlope
	 */
	struct ABuff_TekArmor_Boots_C_IsOnSteepSlope_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DNRY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SurfaceNormal;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.OnRep_NewWalkableZIsActive
	 */
	struct ABuff_TekArmor_Boots_C_OnRep_NewWalkableZIsActive_Params
	{	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BuffTickServer
	 */
	struct ABuff_TekArmor_Boots_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BPDeactivated
	 */
	struct ABuff_TekArmor_Boots_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BuffAdjustDamage
	 */
	struct ABuff_TekArmor_Boots_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UVGF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.AdjustFallDamageAndElement
	 */
	struct ABuff_TekArmor_Boots_C_AdjustFallDamageAndElement_Params
	{
	public:
		float                                                      fallDamage_In;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      fallDamage_Out;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.CanUseTekAbility
	 */
	struct ABuff_TekArmor_Boots_C_CanUseTekAbility_Params
	{
	public:
		bool                                                       bNotifyIfOutOfElement;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.SetCastedArmorPieceRef
	 */
	struct ABuff_TekArmor_Boots_C_SetCastedArmorPieceRef_Params
	{	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.UserConstructionScript
	 */
	struct ABuff_TekArmor_Boots_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.PlayDamageAbsorbFX
	 */
	struct ABuff_TekArmor_Boots_C_PlayDamageAbsorbFX_Params
	{	};

	/**
	 * Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.ExecuteUbergraph_Buff_TekArmor_Boots
	 */
	struct ABuff_TekArmor_Boots_C_ExecuteUbergraph_Buff_TekArmor_Boots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
