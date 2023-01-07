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
	 * Function Base_FenceSupport.Base_FenceSupport_C.BPPlacedStructure
	 */
	struct ABase_FenceSupport_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_FenceSupport.Base_FenceSupport_C.BPTreatAsFoundationForSnappedStructure
	 */
	struct ABase_FenceSupport_C_BPTreatAsFoundationForSnappedStructure_Params
	{
	public:
		class APrimalStructure*                                    OtherStructure;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FPlacementData                                      WithPlacementData;                                       // 0x0008(0x0060)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JI1B[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_FenceSupport.Base_FenceSupport_C.UserConstructionScript
	 */
	struct ABase_FenceSupport_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_FenceSupport.Base_FenceSupport_C.ExecuteUbergraph_Base_FenceSupport
	 */
	struct ABase_FenceSupport_C_ExecuteUbergraph_Base_FenceSupport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
