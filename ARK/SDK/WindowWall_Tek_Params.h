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
	 * Function WindowWall_Tek.WindowWall_Tek_C.BPAllowSnappingWith
	 */
	struct AWindowWall_Tek_C_BPAllowSnappingWith_Params
	{
	public:
		class APrimalStructure*                                    OtherStructure;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   ForPC;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WindowWall_Tek.WindowWall_Tek_C.UserConstructionScript
	 */
	struct AWindowWall_Tek_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WindowWall_Tek.WindowWall_Tek_C.ExecuteUbergraph_WindowWall_Tek
	 */
	struct AWindowWall_Tek_C_ExecuteUbergraph_WindowWall_Tek_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
