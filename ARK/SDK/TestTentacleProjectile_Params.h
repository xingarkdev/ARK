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
	 * Function TestTentacleProjectile.TestTentacleProjectile_C.UserConstructionScript
	 */
	struct ATestTentacleProjectile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TestTentacleProjectile.TestTentacleProjectile_C.ReceiveBeginPlay
	 */
	struct ATestTentacleProjectile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TestTentacleProjectile.TestTentacleProjectile_C.ReceiveTick
	 */
	struct ATestTentacleProjectile_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TestTentacleProjectile.TestTentacleProjectile_C.ExecuteUbergraph_TestTentacleProjectile
	 */
	struct ATestTentacleProjectile_C_ExecuteUbergraph_TestTentacleProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
