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
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.Public Calculate Damage Multiplier
	 */
	struct ABuff_TekPistol_Kill_C_PublicCalculateDamageMultiplier_Params
	{
	public:
		float                                                      mult;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CalculateImpactScale
	 */
	struct ABuff_TekPistol_Kill_C_CalculateImpactScale_Params
	{
	public:
		float                                                      ImpactScale;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CalculateDamageMultiplier
	 */
	struct ABuff_TekPistol_Kill_C_CalculateDamageMultiplier_Params
	{
	public:
		float                                                      mult;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPAdjustDamage_Ex
	 */
	struct ABuff_TekPistol_Kill_C_BPAdjustDamage_Ex_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AJCN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ImpulseDir;                                              // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6FT7[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         EventInstigator;                                         // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              InDamageCauser;                                          // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CanApplyToTarget
	 */
	struct ABuff_TekPistol_Kill_C_CanApplyToTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allowed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPSetupForInstigator
	 */
	struct ABuff_TekPistol_Kill_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CanBeViewed
	 */
	struct ABuff_TekPistol_Kill_C_CanBeViewed_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.GetPointCustomData
	 */
	struct ABuff_TekPistol_Kill_C_GetPointCustomData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.GetPointOfInterestData
	 */
	struct ABuff_TekPistol_Kill_C_GetPointOfInterestData_Params
	{
	public:
		struct FPointOfInterestData                                ReturnValue;                                             // 0x0000(0x0140)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BuffTickServer
	 */
	struct ABuff_TekPistol_Kill_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RVOR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.ApplyChargeWeight
	 */
	struct ABuff_TekPistol_Kill_C_ApplyChargeWeight_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPCustomAllowAddBuff
	 */
	struct ABuff_TekPistol_Kill_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPReactivateWithDamageCauser
	 */
	struct ABuff_TekPistol_Kill_C_BPReactivateWithDamageCauser_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              ForDamageCauser;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BuffTickClient
	 */
	struct ABuff_TekPistol_Kill_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPActivated
	 */
	struct ABuff_TekPistol_Kill_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.UserConstructionScript
	 */
	struct ABuff_TekPistol_Kill_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.ExecuteUbergraph_Buff_TekPistol_Kill
	 */
	struct ABuff_TekPistol_Kill_C_ExecuteUbergraph_Buff_TekPistol_Kill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
