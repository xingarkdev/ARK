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
	 * Function INetMaterialInterface.INetMaterialInterface_C.GetMaterialIndicesToSupportNet
	 */
	struct UINetMaterialInterface_C_GetMaterialIndicesToSupportNet_Params
	{
	public:
		TArray<int32_t>                                            MaterialIndices;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
