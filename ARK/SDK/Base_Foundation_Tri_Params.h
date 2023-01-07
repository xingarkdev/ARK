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
	 * Function Base_Foundation_Tri.Base_Foundation_Tri_C.IsValidSnapPointTo
	 */
	struct ABase_Foundation_Tri_C_IsValidSnapPointTo_Params
	{
	public:
		class APrimalStructure*                                    childStructure;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MySnapPointToIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_50C9[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_Foundation_Tri.Base_Foundation_Tri_C.UserConstructionScript
	 */
	struct ABase_Foundation_Tri_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_Foundation_Tri.Base_Foundation_Tri_C.ExecuteUbergraph_Base_Foundation_Tri
	 */
	struct ABase_Foundation_Tri_C_ExecuteUbergraph_Base_Foundation_Tri_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
