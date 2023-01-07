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
	 * Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.UserConstructionScript
	 */
	struct AProjClusterGrenadeFragment_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.BPSpawnedFragments
	 */
	struct AProjClusterGrenadeFragment_C_BPSpawnedFragments_Params
	{
	public:
		TArray<class AShooterProjectile*>                          FragmentArray;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ReceiveAnyDamage
	 */
	struct AProjClusterGrenadeFragment_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9KRP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ExecuteUbergraph_ProjClusterGrenadeFragment
	 */
	struct AProjClusterGrenadeFragment_C_ExecuteUbergraph_ProjClusterGrenadeFragment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
