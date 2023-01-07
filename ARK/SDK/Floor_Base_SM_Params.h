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
	 * Function Floor_Base_SM.Floor_Base_SM_C.BPAllowSnapRotationForStructure
	 */
	struct AFloor_Base_SM_C_BPAllowSnapRotationForStructure_Params
	{
	public:
		int32_t                                                    ThisSnapPointIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ThisSnapPointName;                                       // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENZS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructure*                                    OtherStructure;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherStructureSnapPointIndex;                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                OtherStructureSnapPointName;                             // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Floor_Base_SM.Floor_Base_SM_C.UserConstructionScript
	 */
	struct AFloor_Base_SM_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Floor_Base_SM.Floor_Base_SM_C.ExecuteUbergraph_Floor_Base_SM
	 */
	struct AFloor_Base_SM_C_ExecuteUbergraph_Floor_Base_SM_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
