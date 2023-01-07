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
	 * Function ChalicoProj_Base.ChalicoProj_Base_C.ReceiveBeginPlay
	 */
	struct AChalicoProj_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ChalicoProj_Base.ChalicoProj_Base_C.OnExplode
	 */
	struct AChalicoProj_Base_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ChalicoProj_Base.ChalicoProj_Base_C.UserConstructionScript
	 */
	struct AChalicoProj_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ChalicoProj_Base.ChalicoProj_Base_C.ExecuteUbergraph_ChalicoProj_Base
	 */
	struct AChalicoProj_Base_C_ExecuteUbergraph_ChalicoProj_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
