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
	 * Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.BPCanBeActivatedByPlayer
	 */
	struct AStorageBox_TekTransmitter_C_BPCanBeActivatedByPlayer_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GX7A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.UserConstructionScript
	 */
	struct AStorageBox_TekTransmitter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.ExecuteUbergraph_StorageBox_TekTransmitter
	 */
	struct AStorageBox_TekTransmitter_C_ExecuteUbergraph_StorageBox_TekTransmitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
