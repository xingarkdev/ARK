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
	 * Function Ceiling_Base.Ceiling_Base_C.BPAllowSnapRotationForStructure
	 */
	struct ACeiling_Base_C_BPAllowSnapRotationForStructure_Params
	{
	public:
		int32_t                                                    ThisSnapPointIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ThisSnapPointName;                                       // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z0ON[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructure*                                    OtherStructure;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherStructureSnapPointIndex;                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                OtherStructureSnapPointName;                             // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ceiling_Base.Ceiling_Base_C.UserConstructionScript
	 */
	struct ACeiling_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ceiling_Base.Ceiling_Base_C.ExecuteUbergraph_Ceiling_Base
	 */
	struct ACeiling_Base_C_ExecuteUbergraph_Ceiling_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
