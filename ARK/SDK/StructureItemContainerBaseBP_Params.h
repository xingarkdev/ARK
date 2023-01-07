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
	 * Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.BPOnTransferAll
	 */
	struct AStructureItemContainerBaseBP_C_BPOnTransferAll_Params
	{
	public:
		class UPrimalInventoryComponent*                           toInventory;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.UserConstructionScript
	 */
	struct AStructureItemContainerBaseBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.ExecuteUbergraph_StructureItemContainerBaseBP
	 */
	struct AStructureItemContainerBaseBP_C_ExecuteUbergraph_StructureItemContainerBaseBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
