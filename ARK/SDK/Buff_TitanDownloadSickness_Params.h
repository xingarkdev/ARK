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
	 * Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.BPActivated
	 */
	struct ABuff_TitanDownloadSickness_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.BPDeactivated
	 */
	struct ABuff_TitanDownloadSickness_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.UserConstructionScript
	 */
	struct ABuff_TitanDownloadSickness_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.ExecuteUbergraph_Buff_TitanDownloadSickness
	 */
	struct ABuff_TitanDownloadSickness_C_ExecuteUbergraph_Buff_TitanDownloadSickness_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
