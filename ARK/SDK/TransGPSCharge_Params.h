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
	 * Function TransGPSCharge.TransGPSCharge_C.BPPostLoadedFromSaveGame
	 */
	struct ATransGPSCharge_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function TransGPSCharge.TransGPSCharge_C.BPPlacedStructure
	 */
	struct ATransGPSCharge_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TransGPSCharge.TransGPSCharge_C.UserConstructionScript
	 */
	struct ATransGPSCharge_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TransGPSCharge.TransGPSCharge_C.ExecuteUbergraph_TransGPSCharge
	 */
	struct ATransGPSCharge_C_ExecuteUbergraph_TransGPSCharge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
