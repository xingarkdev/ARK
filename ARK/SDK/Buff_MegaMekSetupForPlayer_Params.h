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
	 * Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.BuffTickServer
	 */
	struct ABuff_MegaMekSetupForPlayer_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GI19[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.BPActivated
	 */
	struct ABuff_MegaMekSetupForPlayer_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.UserConstructionScript
	 */
	struct ABuff_MegaMekSetupForPlayer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.MultiPlayTransformVFX
	 */
	struct ABuff_MegaMekSetupForPlayer_C_MultiPlayTransformVFX_Params
	{	};

	/**
	 * Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.ReceiveBeginPlay
	 */
	struct ABuff_MegaMekSetupForPlayer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.ExecuteUbergraph_Buff_MegaMekSetupForPlayer
	 */
	struct ABuff_MegaMekSetupForPlayer_C_ExecuteUbergraph_Buff_MegaMekSetupForPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
