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
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_Flashbang_PlayerPawn_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPSetupForInstigator
	 */
	struct ABuff_Flashbang_PlayerPawn_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPPreSetupForInstigator
	 */
	struct ABuff_Flashbang_PlayerPawn_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ShouldStartFading
	 */
	struct ABuff_Flashbang_PlayerPawn_C_ShouldStartFading_Params
	{
	public:
		bool                                                       ShouldFade;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KRX1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.IsNearbyStructure
	 */
	struct ABuff_Flashbang_PlayerPawn_C_IsNearbyStructure_Params
	{
	public:
		int32_t                                                    CheckIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      IndexOffset;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StructureInBetween;                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateIntensityAverage
	 */
	struct ABuff_Flashbang_PlayerPawn_C_CalculateIntensityAverage_Params
	{
	public:
		float                                                      Exposure;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ViewingAngle;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Average;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateWeightedIntensityAverage
	 */
	struct ABuff_Flashbang_PlayerPawn_C_CalculateWeightedIntensityAverage_Params
	{
	public:
		float                                                      Exposure;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ViewingAngle;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Average;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get Normalized Distance
	 */
	struct ABuff_Flashbang_PlayerPawn_C_GetNormalizedDistance_Params
	{
	public:
		class AActor*                                              Actor1;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Actor2;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      retVal;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get NormalizedViewing Angle
	 */
	struct ABuff_Flashbang_PlayerPawn_C_GetNormalizedViewingAngle_Params
	{
	public:
		struct FVector                                             v1;                                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             v2;                                                      // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RetValue;                                                // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetNormalizedExposure
	 */
	struct ABuff_Flashbang_PlayerPawn_C_GetNormalizedExposure_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.UserConstructionScript
	 */
	struct ABuff_Flashbang_PlayerPawn_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BuffTickClient
	 */
	struct ABuff_Flashbang_PlayerPawn_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ROS_CancelBuff
	 */
	struct ABuff_Flashbang_PlayerPawn_C_ROS_CancelBuff_Params
	{	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.FlashbangSetup
	 */
	struct ABuff_Flashbang_PlayerPawn_C_FlashbangSetup_Params
	{	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Flashbang_PreInit
	 */
	struct ABuff_Flashbang_PlayerPawn_C_Flashbang_PreInit_Params
	{	};

	/**
	 * Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ExecuteUbergraph_Buff_Flashbang_PlayerPawn
	 */
	struct ABuff_Flashbang_PlayerPawn_C_ExecuteUbergraph_Buff_Flashbang_PlayerPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
