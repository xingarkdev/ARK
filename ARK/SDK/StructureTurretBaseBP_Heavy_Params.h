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
	 * Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.ReceiveBeginPlay
	 */
	struct AStructureTurretBaseBP_Heavy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.BPIsAllowedToBuildEx
	 */
	struct AStructureTurretBaseBP_Heavy_C_BPIsAllowedToBuildEx_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9IZQ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   PC;                                                      // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFinalPlacement;                                         // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bChoosingRotation;                                       // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P2N9[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.UserConstructionScript
	 */
	struct AStructureTurretBaseBP_Heavy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.ExecuteUbergraph_StructureTurretBaseBP_Heavy
	 */
	struct AStructureTurretBaseBP_Heavy_C_ExecuteUbergraph_StructureTurretBaseBP_Heavy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
