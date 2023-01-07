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
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes
	 */
	struct AMegalania_Character_BP_C_ClimbingIK_SetNewBlendspaceAxes_Params
	{	};

	/**
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front
	 */
	struct AMegalania_Character_BP_C_GetClimbingIK_BlendspaceAxes_Front_Params
	{
	public:
		struct FVector2D                                           axes;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.GetCustomSurfaceTraceDistance
	 */
	struct AMegalania_Character_BP_C_GetCustomSurfaceTraceDistance_Params
	{
	public:
		int32_t                                                    TraceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      customDistance;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.IsNormalClimbable
	 */
	struct AMegalania_Character_BP_C_IsNormalClimbable_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAverageNormal;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RC73[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.Check For Prevent Stop Climbing
	 */
	struct AMegalania_Character_BP_C_CheckForPreventStopClimbing_Params
	{
	public:
		TArray<bool>                                               traceHitsArray;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    numValidHits;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    numTraces;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       allowClimbing;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.BlueprintCanAttack
	 */
	struct AMegalania_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_63WZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AMegalania_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.UserConstructionScript
	 */
	struct AMegalania_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.ReceiveBeginPlay
	 */
	struct AMegalania_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Megalania_Character_BP.Megalania_Character_BP_C.ExecuteUbergraph_Megalania_Character_BP
	 */
	struct AMegalania_Character_BP_C_ExecuteUbergraph_Megalania_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
