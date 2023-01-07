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
	 * Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ReceiveActivation
	 */
	struct UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ReceiveTick
	 */
	struct UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XIZ6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C.ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV
	 */
	struct UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C_ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
