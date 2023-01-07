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
	 * Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.AllowPostProcessEffect
	 */
	struct ABuff_HazardSuitHelmet_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75Z5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPNotifyOtherBuffActivated
	 */
	struct ABuff_HazardSuitHelmet_C_BPNotifyOtherBuffActivated_Params
	{
	public:
		class APrimalBuff*                                         OtherBuff;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPNotifyOtherBuffDeactivated
	 */
	struct ABuff_HazardSuitHelmet_C_BPNotifyOtherBuffDeactivated_Params
	{
	public:
		class APrimalBuff*                                         OtherBuff;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.RefreshFullHazardSuitBuff
	 */
	struct ABuff_HazardSuitHelmet_C_RefreshFullHazardSuitBuff_Params
	{	};

	/**
	 * Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.UserConstructionScript
	 */
	struct ABuff_HazardSuitHelmet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPActivated
	 */
	struct ABuff_HazardSuitHelmet_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPDeactivated
	 */
	struct ABuff_HazardSuitHelmet_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.ExecuteUbergraph_Buff_HazardSuitHelmet
	 */
	struct ABuff_HazardSuitHelmet_C_ExecuteUbergraph_Buff_HazardSuitHelmet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
