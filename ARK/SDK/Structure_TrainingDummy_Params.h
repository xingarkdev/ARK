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
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.TimedReportDPS
	 */
	struct AStructure_TrainingDummy_C_TimedReportDPS_Params
	{	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPPlacedStructure
	 */
	struct AStructure_TrainingDummy_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.RemoveSnapshot
	 */
	struct AStructure_TrainingDummy_C_RemoveSnapshot_Params
	{	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.ApplySnapshot
	 */
	struct AStructure_TrainingDummy_C_ApplySnapshot_Params
	{
	public:
		class UPrimalItem*                                         Snapshot;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPGetMultiUseCenterText
	 */
	struct AStructure_TrainingDummy_C_BPGetMultiUseCenterText_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KU8P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutCenterText;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FLinearColor                                        OutCenterTextColor;                                      // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4KUA[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPTryMultiUse
	 */
	struct AStructure_TrainingDummy_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPGetMultiUseEntries
	 */
	struct AStructure_TrainingDummy_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.ReportDPS
	 */
	struct AStructure_TrainingDummy_C_ReportDPS_Params
	{
	public:
		float                                                      ReportTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HW4T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPAdjustDamage
	 */
	struct AStructure_TrainingDummy_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZOJM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RIXO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.UserConstructionScript
	 */
	struct AStructure_TrainingDummy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_TrainingDummy.Structure_TrainingDummy_C.ExecuteUbergraph_Structure_TrainingDummy
	 */
	struct AStructure_TrainingDummy_C_ExecuteUbergraph_Structure_TrainingDummy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
