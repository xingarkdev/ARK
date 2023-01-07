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
	 * Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.BPClientHandleNetExecCommand
	 */
	struct AStorageBox_TekReplicator_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.NotifyCraftingFinished
	 */
	struct AStorageBox_TekReplicator_C_NotifyCraftingFinished_Params
	{	};

	/**
	 * Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.UserConstructionScript
	 */
	struct AStorageBox_TekReplicator_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.ExecuteUbergraph_StorageBox_TekReplicator
	 */
	struct AStorageBox_TekReplicator_C_ExecuteUbergraph_StorageBox_TekReplicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
