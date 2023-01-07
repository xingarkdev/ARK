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
	 * Function WeapSpyglass.WeapSpyglass_C.BPCanToggleAccessory
	 */
	struct AWeapSpyglass_C_BPCanToggleAccessory_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapSpyglass.WeapSpyglass_C.UserConstructionScript
	 */
	struct AWeapSpyglass_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapSpyglass.WeapSpyglass_C.ExecuteUbergraph_WeapSpyglass
	 */
	struct AWeapSpyglass_C_ExecuteUbergraph_WeapSpyglass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
