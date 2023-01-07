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
	 * Function GasVein_Base_BP.GasVein_Base_BP_C.BPUnstasis
	 */
	struct AGasVein_Base_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function GasVein_Base_BP.GasVein_Base_BP_C.BPHandleStructureEnabled
	 */
	struct AGasVein_Base_BP_C_BPHandleStructureEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasVein_Base_BP.GasVein_Base_BP_C.UserConstructionScript
	 */
	struct AGasVein_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GasVein_Base_BP.GasVein_Base_BP_C.ReceiveBeginPlay
	 */
	struct AGasVein_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GasVein_Base_BP.GasVein_Base_BP_C.DoBurst
	 */
	struct AGasVein_Base_BP_C_DoBurst_Params
	{	};

	/**
	 * Function GasVein_Base_BP.GasVein_Base_BP_C.NetBurst
	 */
	struct AGasVein_Base_BP_C_NetBurst_Params
	{	};

	/**
	 * Function GasVein_Base_BP.GasVein_Base_BP_C.CheckBurst
	 */
	struct AGasVein_Base_BP_C_CheckBurst_Params
	{	};

	/**
	 * Function GasVein_Base_BP.GasVein_Base_BP_C.ExecuteUbergraph_GasVein_Base_BP
	 */
	struct AGasVein_Base_BP_C_ExecuteUbergraph_GasVein_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
