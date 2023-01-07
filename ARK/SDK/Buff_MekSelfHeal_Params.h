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
	 * Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.GetMekFuelLevel
	 */
	struct ABuff_MekSelfHeal_C_GetMekFuelLevel_Params
	{
	public:
		float                                                      FuelLevel;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BPActivated
	 */
	struct ABuff_MekSelfHeal_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BuffPostAdjustDamage
	 */
	struct ABuff_MekSelfHeal_C_BuffPostAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GUM6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BuffTickServer
	 */
	struct ABuff_MekSelfHeal_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.UserConstructionScript
	 */
	struct ABuff_MekSelfHeal_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.ExecuteUbergraph_Buff_MekSelfHeal
	 */
	struct ABuff_MekSelfHeal_C_ExecuteUbergraph_Buff_MekSelfHeal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
