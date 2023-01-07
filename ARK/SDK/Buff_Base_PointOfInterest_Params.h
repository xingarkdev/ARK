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
	 * Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.CanBeViewed
	 */
	struct ABuff_Base_PointOfInterest_C_CanBeViewed_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointCustomData
	 */
	struct ABuff_Base_PointOfInterest_C_GetPointCustomData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointOfInterestData
	 */
	struct ABuff_Base_PointOfInterest_C_GetPointOfInterestData_Params
	{
	public:
		struct FPointOfInterestData                                ReturnValue;                                             // 0x0000(0x0140)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.InititalizePointOfInterest
	 */
	struct ABuff_Base_PointOfInterest_C_InititalizePointOfInterest_Params
	{	};

	/**
	 * Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UserConstructionScript
	 */
	struct ABuff_Base_PointOfInterest_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.SetPointTagUniqueState
	 */
	struct ABuff_Base_PointOfInterest_C_SetPointTagUniqueState_Params
	{
	public:
		bool                                                       bNewUniqueState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UnviewPoint
	 */
	struct ABuff_Base_PointOfInterest_C_UnviewPoint_Params
	{
	public:
		class AActor*                                              UnviewedByActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ViewPoint
	 */
	struct ABuff_Base_PointOfInterest_C_ViewPoint_Params
	{
	public:
		class AActor*                                              ViewedByActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ExecuteUbergraph_Buff_Base_PointOfInterest
	 */
	struct ABuff_Base_PointOfInterest_C_ExecuteUbergraph_Buff_Base_PointOfInterest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
