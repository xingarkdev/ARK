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
	 * Function Diplodocus_Character_BP.Diplodocus_Character_BP_C.AllowWakingTame
	 */
	struct ADiplodocus_Character_BP_C_AllowWakingTame_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Diplodocus_Character_BP.Diplodocus_Character_BP_C.UserConstructionScript
	 */
	struct ADiplodocus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Diplodocus_Character_BP.Diplodocus_Character_BP_C.ExecuteUbergraph_Diplodocus_Character_BP
	 */
	struct ADiplodocus_Character_BP_C_ExecuteUbergraph_Diplodocus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
