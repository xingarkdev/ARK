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
	 * Function ProjMekSwarm.ProjMekSwarm_C.SetupMissileSpawnParticles
	 */
	struct AProjMekSwarm_C_SetupMissileSpawnParticles_Params
	{
	public:
		class USkeletalMeshComponent*                              MekMesh;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjMekSwarm.ProjMekSwarm_C.PointOnGrid
	 */
	struct AProjMekSwarm_C_PointOnGrid_Params
	{
	public:
		int32_t                                                    ThisIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Width;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Height;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HorizScale;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VertScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ReturnValue;                                             // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjMekSwarm.ProjMekSwarm_C.ReceiveTick
	 */
	struct AProjMekSwarm_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjMekSwarm.ProjMekSwarm_C.BPGetBoidSpawnLocationAndVelocity
	 */
	struct AProjMekSwarm_C_BPGetBoidSpawnLocationAndVelocity_Params
	{
	public:
		int32_t                                                    BoidIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBoid                                               BoidData;                                                // 0x0004(0x0054)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             SpawnLocation;                                           // 0x0058(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SpawnVelocity;                                           // 0x0064(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjMekSwarm.ProjMekSwarm_C.UserConstructionScript
	 */
	struct AProjMekSwarm_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjMekSwarm.ProjMekSwarm_C.BPOnBoidExplode
	 */
	struct AProjMekSwarm_C_BPOnBoidExplode_Params
	{
	public:
		int32_t                                                    BoidIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E4BW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystemComponent*                            BoidParticles;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0010(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjMekSwarm.ProjMekSwarm_C.OnExplode
	 */
	struct AProjMekSwarm_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjMekSwarm.ProjMekSwarm_C.DisableMissleParticles
	 */
	struct AProjMekSwarm_C_DisableMissleParticles_Params
	{
	public:
		class UParticleSystemComponent*                            Comp;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjMekSwarm.ProjMekSwarm_C.ExecuteUbergraph_ProjMekSwarm
	 */
	struct AProjMekSwarm_C_ExecuteUbergraph_ProjMekSwarm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
